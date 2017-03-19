//
// Created by widelec on 19.03.17.
//

#include "BFInterpreter.h"

BFInterpreter::BFInterpreter() : arr(new char[30000]()), index(0) {set_zeros();}

void BFInterpreter::set_zeros() {
    for (int i = 0; i < 30000; i++){
        arr[i] = 0;
    }
}

void BFInterpreter::increment_index() {
    index ++;
}

void BFInterpreter::decremeny_index() {
    if (index > 0) index --;
}

void BFInterpreter::increment_value() {
    arr[index]++;
}

void BFInterpreter::decrement_value() {
    arr[index]--;
}

void BFInterpreter::print_cell() {
    cout << arr[index];
}

void BFInterpreter::set_cell() {
    cin >> arr[index];
}

void BFInterpreter::interprete(string code) {
    for (int i = 0; i < code.size(); i++ ){
        char sign = code[i];
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
            default:
                cout<<sign;break;
        }
    }
}


