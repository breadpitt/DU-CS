#include <iostream>
#include "ProgramCounter.h"

int main() {

    ProgramCounter my_program_counter; // Invokes default constructor
    ProgramCounter my_program_counter2 = ProgramCounter(); // Also invokes default constructor

    my_program_counter.print_status(std::cout);
    my_program_counter.execute();
    my_program_counter.print_status(std::cout);
    my_program_counter.call_function(0x10);

    while (my_program_counter.execute() < 0x15)
    {
        my_program_counter.execute();
        my_program_counter.print_status(std::cout);
    }
    my_program_counter.call_return();
    my_program_counter.print_status(std::cout);
    my_program_counter.call_function(0x20);
    my_program_counter.execute();
    my_program_counter.print_status(std::cout);
    my_program_counter.call_function(0x30);
    my_program_counter.print_status(std::cout);
}