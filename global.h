#ifndef GLOBAL_H
#define GLOBAL_H

#include <iostream>
#include <iomanip>
#include <cstdlib>


typedef unsigned long long ull;

void getInput(char &);

void endl(int n=1);

void clearScreen();

std::ostream &bold_on();
std::ostream &bold_off();

#endif