#ifndef AIAGENT_H
#define AIAGENT_H

/**
 * The AIAgent Interface describes
 * the behaviour of any implemented AI agents.
 */

class Board;
class AIAgent
{
public:
    AIAgent() {}
    virtual ~AIAgent() {}
    virtual int play(Board &board) = 0;
    /**
     * reset function that will reset the state of any search algorithm.
     */
    virtual void reset() {}
};

#endif // AIAGENT_H
