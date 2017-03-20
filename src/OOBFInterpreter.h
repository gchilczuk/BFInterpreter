#ifndef BRAINFUCK_INTERPRETER_BFINTERPRETER_H
#define BRAINFUCK_INTERPRETER_BFINTERPRETER_H

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;

class OOBFInterpreter {
private:
    char* arr;
    int index;

    void increment_index();
    void decremeny_index();
    void increment_value();
    void decrement_value();
    void print_cell();
    void set_cell();
    string cut_loop(string &code, int i);
    void set_zeros(); // I think I don't need it
    void interprete(string code);

public:
    OOBFInterpreter();
    void execute(string programme);





};


#endif //BRAINFUCK_INTERPRETER_BFINTERPRETER_H
