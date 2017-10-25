//
// Created by Nathan Evans on 10/24/17.
//

#include "ProgramCounter.h"


ProgramCounter::ProgramCounter() {
    curr_line = 0;
    return_line = 0;
    curr_state = NORMAL;
}

ProgramCounter::ProgramCounter(int line) {
    curr_line = line;
}

int ProgramCounter::execute() {
    if (curr_state != HALTED)
    {
        curr_line += 1;
    return  curr_line;
    }

}

enum State ProgramCounter::call_return() {
    switch (curr_state){
        case IN_FUNCTION:
            curr_line = return_line;
            curr_state = NORMAL;
            break;

        case NORMAL:
            curr_state = HALTED;
            break;
    }
    return curr_state;
}

int ProgramCounter::call_function(int line) {
    if (curr_state == NORMAL) {
        curr_state = IN_FUNCTION;
        return_line = curr_line + 1;
        curr_line = line;
        return curr_line;
    }
}

void ProgramCounter::reset() {
    curr_line = 0;
}

void ProgramCounter::reset(int line) {
    curr_line = line;
    curr_state = NORMAL;
}

void ProgramCounter::print_status(std::ostream &out) {
    out << "Program counter is: " << curr_line
        << " return line is: " << return_line << " and current state is " << curr_state << "\n";
}