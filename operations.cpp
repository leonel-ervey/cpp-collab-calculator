//
// Created by Hp on 24/11/2025.
//
#include "operations.h"
#include <iostream>

using namespace std;
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b != 0) return a / b;
    else {
        cout << "Error: División por cero\n";
        return 0;
    }
}
// Created by Abenameth on 20/11/2025.
//
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
