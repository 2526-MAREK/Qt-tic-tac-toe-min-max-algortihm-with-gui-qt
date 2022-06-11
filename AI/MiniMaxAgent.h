#ifndef MINIMAXAGENT_H
#define MINIMAXAGENT_H
#include "TTTCommonTypes.h"
#include "AIAgent.h"

class MiniMaxAgent final : public AIAgent
{
public:
    /**
     * MiniMaxAgent: a constructor function that creates the MiniMax Agent
     */
    MiniMaxAgent(unsigned short depth, BoardMarks AImark, BoardMarks playerMark);
    /**
     *  Start the minimax algorithm to choose a cell to play based on a given board.
     *  a reference to the board model.
     *  the chosen cell index (in a 1D array) that the AI played.
     */
    int play(Board &board) override;

private:
    /**
     *  depth cutoff of the minimax algorithm's search tree.
     */
    const unsigned short depth_;
    /**
     * The mark (X or O) of the AI.
     */
    const BoardMarks AImark_;
    /**
     * The mark (X or O) of the human player.
     */
    const BoardMarks playerMark_;

    /**
     *  AI_WIN_SCORE defines the score of the final board when the AI wins.
     */
    static constexpr short AI_WIN_SCORE = 1;
    /**
     *  PLAYER_WIN_SCORE defines the score of the final board when the human player wins.
     */
    static constexpr short PLAYER_WIN_SCORE = -1;
    /**
     * TIE_SCORE defines the score of the final board when the the game is a tie.
     */
    static constexpr short TIE_SCORE = 0;
    short maxMove(Board &board, unsigned short depth, short alpha, short beta) const;
    short minMove(Board &board, unsigned short depth, short alpha, short beta) const;
    short score(const BoardState state) const;
};

#endif // MINIMAXAGENT_H
