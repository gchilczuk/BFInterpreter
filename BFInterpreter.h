#ifndef BRAINFUCK_INTERPRETER_BFINTERPRETER_H
#define BRAINFUCK_INTERPRETER_BFINTERPRETER_H

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;

class BFInterpreter {
private:
    char* arr;
    int index;

    void increment_index();
    void decremeny_index();
    void increment_value();
    void decrement_value();
    void print_cell();
    void set_cell();
    // start_loop
    // end_loop
    void set_zeros();

public:
    BFInterpreter();
    void interprete(string code);





};


#endif //BRAINFUCK_INTERPRETER_BFINTERPRETER_H
