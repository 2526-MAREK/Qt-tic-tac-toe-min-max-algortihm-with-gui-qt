#ifndef BOARD_H
#define BOARD_H
#include "TTTCommonTypes.h"
#include <QtGlobal>
#include <vector>

using std::vector;

/**
 * The Board class is responsible for representing
 * the underlying model of the game, it is a 2D matrix representation
 * of the GUI that is machine readable, and can be used when running
 * any sort of algorithms on the board.
 */

class Board
{

protected: // Data
    /**
     * board is a 2D vector that represents a machine readable
     * format to the GUI application.
     */
    vector<vector<BoardMarks>> board_;
    /**
     * boardSize is the number of rows or columns in the board.
     * a 3x3 board has a boardSize of 3.
     */
    size_t boardSize_;
    size_t row_win_;

public:
    bool check_vertical(const BoardMarks symbol) const;
    bool check_horizontal(const BoardMarks symbol) const;
    bool check_diagonal(const BoardMarks symbol) const;
    Board(size_t size,size_t row_win);
    Board(Board& b);
    Board(Board&& b);
    Board& operator=(Board b);
    virtual ~Board();
    virtual BoardState evaluateBoard() const;
    virtual bool setPlayerInput(size_t row, size_t col, BoardMarks currentPlayer);
    virtual BoardMarks at(size_t row, size_t col) const;
    virtual void reset();
    virtual void resetCell(size_t row, size_t col);
    size_t size() const;
#ifdef QT_DEBUG
    virtual void printBoard () const;
#endif
};

#endif // BOARD_H
