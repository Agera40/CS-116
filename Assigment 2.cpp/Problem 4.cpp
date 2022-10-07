#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    // Assigment 2 Part 4 by Agera 10/04/2022 //

    /*
    Write a program using:- 
    a) a while loop that calculates the sum and product of the numbers 1-100. (5 Points)
    b) rewrite the program from (a) using a for loop (5 Points)
    */

    // Variables
    int sum = 0, count = 1, s = 0, i;
    long double product = 1.0, factorial = 1.0;

    while (count <= 100) {
        sum += count;
        product = product * count;
        ++count;
    }

    for (int i = 1; i<=100; i++){
        s=s+i;
        factorial *= i;
    }

    //Results
    cout << "These are the loops using while: " << endl;
    cout << "The sum from the numbers 1-100 is: " << sum << endl;
    cout << "The product of the numbers 1-100 is: " << product << endl;
    cout << " " << endl;
    cout << "These are the loops using for: " << endl;
    cout << "The sum from the numbers 1-100 is: " << s << endl;
    cout << "The product of the numbers 1-100 is: " << factorial << endl;

    system("pause");
    return 0;
}



