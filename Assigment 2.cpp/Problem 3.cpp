#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    // Assigment 2 Part 3 by Agera 10/03/2022 //

    /*
    For a quadratic equation ax*2+bx+c = 0 (where a, b and c are coefficients), it's roots is 
    given by the formula:- x = (-b +- sqrt(b^2-4ac))/2a 

    The value of the discriminant (b2-4ac) determines the nature of roots.  Write a C++ 
    program that reads the values of a, b and c from the user and performs the following:-

    a) If the value of the discriminant is positive, program should print out that the equation 
    has two real roots and prints the values of the two roots. 
    b) If the discriminant is equal to 0, the roots are real and equal.
    c) if the value of the discriminant is negative, then the equation has two complex roots.
    */
    // Variables
    double xpos, xneg, xsame, a, b, c, discriminant, i;
   
    // Inputs
    cout << "Enter the value a: ";
    cin >> a;
    if (a == 0){
        cout << "Any number divided by zero is Undefined";
        return 0;
    }
    cout << "Enter the value b: ";
    cin >> b;
    cout << "Enter the value c: ";
    cin >> c;
    
    // Formulas
    discriminant = b*b - 4*a*c;
    xpos = (-b + sqrt(discriminant)) / (2*a);
    xneg = (-b - sqrt(discriminant)) / (2*a);
    xsame = -b/(2*a);
    i = sqrt(-discriminant) / (2*a);

    // Discriminant results
    if (discriminant > 0){

        cout << "The equation has two real roots and prints the values of the two roots." << endl;
        cout << "x1 = " << xpos << endl;
        cout << "x2 = " << xneg << endl;
    }
    else if (discriminant = 0){
        cout << "The roots are real and equal." << endl;
        cout << "x1 and x2 = " << xsame << endl;
    }
    else {
        cout << "Then the equation has two complex roots." << endl;
        cout << "x1 = " << xsame << " + " << i << "i" << endl;
        cout << "x2 = " << xsame << " - " << i << "i" << endl;
    }
 
    system("pause");
    return 0;
}



