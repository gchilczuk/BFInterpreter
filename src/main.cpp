#include <iostream>
#include "OOBFInterpreter.h"
using std::cout;
using std::cin;
using std::endl;

int main() {
    OOBFInterpreter BFi;
    BFi.execute("++++++++++[>>>>> ++++++++++++ <+++++++++++ <++++++++++ <+++++++ <+++ <-]"
    ">++>+. >>++++. >++. <<+. ++. >---.+++. >. <<<<. >----. >+. +. +++. ---------.++++++++ >>. <+++. <. ");
    return 0;
}