#include "Board.h"
#include <QString>
#ifdef QT_DEBUG
#include <QDebug>
#endif
#include <stdexcept>

Board::Board(size_t size, size_t row_win)
    : board_(size, vector<BoardMarks>(size, BoardMarks::Empty)),
      boardSize_(size), row_win_(row_win) {}

Board::Board(Board &b)
    : board_(b.board_),boardSize_(b.boardSize_)
{

}

Board::Board(Board &&b)
    : board_(std::move(b.board_)),
      boardSize_(std::move(b.boardSize_))
{

}

Board &Board::operator=(Board b)
{
    std::swap(board_, b.board_);
    std::swap(boardSize_, b.boardSize_);
    return *this;
}

Board::~Board()
{

}

#ifdef QT_DEBUG
void Board::printBoard() const
{
    QString board;
    for (size_t row = 0; row < boardSize_; ++row) {
        for (size_t col = 0; col < boardSize_; ++col) {
            board += QString::number(static_cast<int>(board_[row][col]));
        }
        board += '\n';
    }
    qDebug().noquote() << board;
}
#endif

bool Board::setPlayerInput(size_t row, size_t col, BoardMarks currentPlayer)
{
    // The game is over, so no input is allowed untill game resets.
    if (BoardState::NoWinner != evaluateBoard())
        return false;

    // Row input is not valid.
    if (row >= boardSize_)
        throw std::out_of_range("Row index is out of range.");

    // Column input is not valid.
    if (col >= boardSize_)
        throw std::out_of_range("Column index is out of range.");

    // Cell is not empty.
    if (BoardMarks::Empty != board_[row][col])
        return false;

    // Update cell with current player's mark.
    board_[row][col] = currentPlayer;

    return true;
}

void Board::resetCell(size_t row, size_t col)
{
    // Row input is not valid.
    if (row >= boardSize_)
        throw std::out_of_range("Row index is out of range.");

    // Column input is not valid.
    if (col >= boardSize_)
        throw std::out_of_range("Column index is out of range.");

    // Reset Cell
    board_[row][col] = BoardMarks::Empty;
}

BoardMarks Board::at(size_t row, size_t col) const
{
    return board_.at(row).at(col);
}

bool  Board::check_vertical(const BoardMarks symbol) const
{
    size_t line;
    for(size_t j = 0;j<boardSize_;++j)
    {
        line = 0;
        for(size_t i =0; i<boardSize_;++i)
        {
            if(board_[i][j] == symbol)
                line +=1;
            else if(board_[i][j] != symbol)
                line = 0;
            else if((line == 0) &&((boardSize_ - i)<row_win_) )
                break;
            if( line >= row_win_)
                return true;
        }
    }
    return false;
}

/*Checks the vertical axis to see if there is a winner*/
bool  Board::check_horizontal(const BoardMarks symbol) const
{
    size_t line;
    for(size_t i = 0;i<boardSize_;++i)
    {
        line = 0;
        for(size_t j =0; j<boardSize_;++j)
        {
            if(board_[i][j] == symbol)
                line +=1;
            else if(board_[i][j] != symbol)
                line = 0;
            else if((line == 0) &&((boardSize_ - j)<row_win_) )
                break;
            if( line >= row_win_)
                return true;
        }
    }
    return false;
}

/*Checks the diagonal axis to see if there is a winner*/
bool  Board::check_diagonal(const BoardMarks symbol) const
{
    std::vector<BoardMarks> win;

    for(size_t i =0;i<row_win_;++i)
        win.push_back(symbol);


    for(size_t i=0; i< boardSize_-row_win_+1 ;++i)
    {
        size_t temp  = 0;
        std::vector<BoardMarks> diagonal;
        size_t x =i;
        size_t y = 0;
        for(size_t j=0;j<(boardSize_-i);++j){
            diagonal.push_back(board_[x][y]);
            x += 1;
            y += 1;
        }
        for(size_t j =0;j<(diagonal.size()-win.size()+1);++j)
        {
            //compare two vectors
            temp = 0;
            for(size_t g=j,d = 0;g<row_win_+j;++g,++d)
            {
                if(win[d] == diagonal[g])
                    ++temp;
            }
            if(temp == row_win_)
                return true;
        }
        temp = 0;
        x =0;
        y = i;
        for(size_t j=0;j<(boardSize_-i);++j){
            diagonal.push_back(board_[x][y]);
            x += 1;
            y += 1;
        }
        for(size_t j =0;j<(diagonal.size()-win.size()+1);++j)
        {
            //compare two vectors

            temp = 0;
            for(size_t g=j,d = 0;g<row_win_+j;++g,++d)
            {
                if(win[d] == diagonal[g])
                    ++temp;
            }
            if(temp== row_win_)
                return true;
        }

        temp = 0;
        x =boardSize_ -1 - i;
        y = 0;
        for(size_t j=0;j<(boardSize_-i);++j){
            diagonal.push_back(board_[x][y]);
            x -= 1;
            y += 1;
        }
        for(size_t j =0;j<(diagonal.size()-win.size()+1);++j)
        {
            //compare two vectors

            temp = 0;
            for(size_t g=j,d = 0;g<row_win_+j;++g,++d)
            {
                if(win[d] == diagonal[g])
                    ++temp;
            }
            if(temp== row_win_)
                return true;
        }
        temp = 0;
        x =boardSize_ -1;
        y = 0 + i;
        for(size_t j=0;j<(boardSize_-i);++j){
            diagonal.push_back(board_[x][y]);
            x -= 1;
            y += 1;
        }
        for(size_t j =0;j<(diagonal.size()-win.size()+1);++j)
        {
            //compare two vectors
            temp = 0;
            for(size_t g=j,d = 0;g<row_win_+j;++g,++d)
            {
                if(win[d] == diagonal[g])
                    ++temp;
            }
            if(temp== row_win_)
                return true;
        }
    }
    return false;
}


BoardState Board::evaluateBoard() const
{
   if(check_diagonal(BoardMarks::X) || check_horizontal(BoardMarks::X) || check_vertical(BoardMarks::X))
        return BoardState::XWins;
    if(check_diagonal(BoardMarks::O) || check_horizontal(BoardMarks::O) || check_vertical(BoardMarks::O))
        return BoardState::OWins;

     // If there is an empty cell and no winner is determined, then the game is
    // still ongoing.
    for (size_t row = 0; row < boardSize_; ++row)
        for (size_t col = 0; col < boardSize_; ++col)
            if (BoardMarks::Empty == board_[row][col])
                return BoardState::NoWinner;

    // If no winner is determined and there are no empty cells, then the game is a
    // tie.
    return BoardState::Tie;     

}

void Board::reset()
{
    // Sets all the cells to empty.
    for (size_t row = 0; row < boardSize_; ++row) {
        for (size_t col = 0; col < boardSize_; ++col) {
            board_[row][col] = BoardMarks::Empty;
        }
    }
}

size_t Board::size() const
{
    return boardSize_;
}
