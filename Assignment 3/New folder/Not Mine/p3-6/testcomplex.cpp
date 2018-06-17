/*
    CH08-320142
    a3_p6.cpp
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"
using namespace std;

int main(){

    int real, imag;
    cout << "Please enter a real and an imaginary argument:\n" << endl;
    cin >> real >> imag;

    Complex a(real, imag);
    Complex b;

    cout << "Please enter a real and an imaginary argument:\n" << endl;
    cin >> real >> imag;

    b.setReal(real);
    b.setImaginary(imag);

    Complex conjugate_a = a.getConjugation();
    conjugate_a.print();
    //Conjugate

    Complex sum = a.add(b);
    sum.print();
    //sum

    Complex diff = a.sub(b);
    diff.print();
    //difference

    Complex prod = a.multiplication(b);
    a.print();
    //multiplication

    return 0;
}
