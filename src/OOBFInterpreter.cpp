//
// Created by widelec on 19.03.17.
//

#include "OOBFInterpreter.h"

OOBFInterpreter::OOBFInterpreter() : arr(new char[30000]()), index(0) {/*set_zeros();*/}

void OOBFInterpreter::set_zeros() {
    for (int i = 0; i < 30000; i++){
        arr[i] = 0;
    }
}

void OOBFInterpreter::increment_index() {
    index ++;
}

void OOBFInterpreter::decremeny_index() {
    if (index > 0) index --;
}

void OOBFInterpreter::increment_value() {
    arr[index]++;
}

void OOBFInterpreter::decrement_value() {
    arr[index]--;
}

void OOBFInterpreter::print_cell() {
    cout << arr[index];
}

void OOBFInterpreter::set_cell() {
    cin >> arr[index];
}

void OOBFInterpreter::interprete(string code) {
    string loop_value;
    char sign;
    for (int i = 0; i < code.size(); i++ ){
        sign = code[i];
        switch (sign){
            case '>' : increment_index();
                break;
            case '<' : decremeny_index();
                break;
            case '+' : increment_value();
                break;
            case '-' : decrement_value();
                break;
            case '.' : print_cell();
                break;
            case ',' : set_cell();
                break;
            case '[' :
                loop_value = cut_loop(code, i);
                while (arr[index]) interprete(loop_value);
                i += loop_value.size();
                break;
            default:
                break;
        }
    }
}

string OOBFInterpreter::cut_loop(string &code, int i) {
    int brackets = 1;
    string loop_value = "";
    char current;
    for (++i; brackets > 0; i++){
        current = code[i];
        if (current == ']') brackets--;
        else if (current == '[') brackets++;
        if (brackets > 0) loop_value += current;
    }
    return loop_value;
}

void OOBFInterpreter::execute(string programme) {
    set_zeros();
    interprete(programme);
}


