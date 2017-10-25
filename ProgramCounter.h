//
// Created by Nathan Evans on 10/24/17.
//

#ifndef PROGRAMCOUNTER_PROGRAMCOUNTER_H
#define PROGRAMCOUNTER_PROGRAMCOUNTER_H

#include <iostream>

enum State {
    NORMAL = 0,
    IN_FUNCTION = 1,
    HALTED = 2
};

class ProgramCounter {

public:
    /**
     * Default constructor. Should initialize counter to 0.
     */
    ProgramCounter();

    /**
     * Single argument constructor. Initializes PC to whatever
     * line parameter specifies.
     *
     * @param line program line to set counter to
     */
    ProgramCounter(int line);

    /**
     * "Execute" current line (increment program counter)
     *
     * @return Return the current program counter (after "execution" of line)
     */
    int execute();

    /**
     * Return execution to wherever it was before a jump.
     * This function is valid _only_ if state is IN_FUNCTION.
     * Otherwise set execution status to HALTED
     *
     * @return Return the current state
     */
    enum State call_return();

    /**
     * Call a function (jump to specified line, set up return location)
     *
     * @return Return the current program counter (current line after jump)
     */
    int call_function(int line);

    /**
     * Reset the program counter.
     *
     * @param line (optional) set the new counter variable. Defaults to 0!
     */
    void reset();

    /**
     * Reset the program counter. State should be normal after this call!
     *
     * @param line set the new PC to a given line.
     */
    void reset(int line);

    /**
     * Print the current counter status to out
     *
     * @param out valid ostream to write status to
     */
    void print_status(std::ostream& out);

private:
    int curr_line;
    int return_line;
    enum State curr_state;
};


#endif //PROGRAMCOUNTER_PROGRAMCOUNTER_H
