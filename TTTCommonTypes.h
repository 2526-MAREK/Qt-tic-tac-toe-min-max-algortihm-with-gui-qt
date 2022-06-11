#ifndef TTTCOMMONTYPES_H
#define TTTCOMMONTYPES_H
#include <cstddef>

class QPushButton;
/**
 * @brief The BoardMarks enum defiens the type of mark on the board.
 */
enum class BoardMarks { Empty, X, O };

/**
 * @brief The BoardState enum defines the possible states of a board.
 */
enum class BoardState { NoWinner, XWins, OWins, Tie };

namespace defaults
{
constexpr short INVALID_CELL = -1;
constexpr size_t DEFAULT_BOARD_SIZE = 3;
constexpr unsigned short DEFAULT_NUMBER_OF_WINNING_CHAR = 3;
constexpr unsigned short DEFAULT_MINIMAX_DEPTH = 3;
constexpr unsigned short GUI_CELL_ROW_SPAN = 1;
constexpr unsigned short GUI_CELL_COLUMN_SPAN = 1;
constexpr char X_COLOR[] = "#455A64";
constexpr char O_COLOR[] = "#FF5722";
constexpr char DEFAULT_COLOR[] = "#FFF";
}
/**
 * @brief The Cell struct represents a board cell and all the necessary
 * information needed about the cell.
 */
struct Cell
{
    QPushButton *cellBtn = nullptr;
    int row = defaults::INVALID_CELL;
    int col = defaults::INVALID_CELL;
    Cell(QPushButton *cellBtn, int row, int col)
        : cellBtn(cellBtn), row(row), col(col) {}
};

/**
 * @brief The TTTOptions struct defines a tic tac toe game options.
 */
struct TTTOptions
{
    size_t boardSize = defaults::DEFAULT_BOARD_SIZE;
    unsigned short number_of_winning_char = defaults::DEFAULT_NUMBER_OF_WINNING_CHAR;
    BoardMarks who_player = BoardMarks::O;
    unsigned short miniMaxDepth = defaults::DEFAULT_MINIMAX_DEPTH;
    bool AIopponent = true;
    bool AIstarts = false;
};

#endif // TTTCOMMONTYPES_H
