#include <iostream>

using namespace std;

int main(){
    
    // Assigment 1 Part 1 by Jian 09/06/2022 //
    
    /*
    Write a C++ Program that reads in 2 integers and then outputs their sum, product, 
    remainder and average. 

        sum = num1+num2;
        product = num1*num2;
        remainder = num1+num2/2;
        average = num1%num2;

    */

    //Variables
    int num1, num2, sum, product, remainder, average;

    //Input for each Variable
    cout << "Enter the first number:- ";
        cin >> num1;
    cout << "Enter the second number:- ";
        cin >> num2;

    //Calculations
    sum = num1+num2;
    product = num1*num2;
    remainder = (num1+num2)/2;
    average = num1%num2;

    //Result
    cout << "The sum is " << sum << endl;
    cout << "The product is " << product << endl;
    cout << "The remainder is " << remainder << endl;
    cout << "The average is " << average << endl;

    system("pause");
    return 0;
}