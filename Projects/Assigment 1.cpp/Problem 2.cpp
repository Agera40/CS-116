#include <iostream>

using namespace std;

int main(){
    
    // Assigment 1 Part 2 by Agera 9/06/2022 //

    /*
    Write a program that allows the user to enter number of quarters, dimes and nickels and 
    outputs the monetary value of the coins in cents.
    */

    //Variables
    double quarters, dimes, nickles, cents, dollars;

    //Input for each variable 
    cout << "Please enter the amount of quarters: ";
    cin >> quarters;
    cout << "Please enter the amount of dimes: ";
    cin >> dimes;
    cout << "Please enter the amount of nickles: ";
    cin >> nickles;

    //Calculation for cents and dollars
    cents = quarters*25 + dimes*10 + nickles*5;
    dollars = quarters*.25 + dimes*.10 + nickles*.05;
   
    //Result
    cout << "The total are " << cents << " cents or $" << dollars << " dollars." << endl; 

    system("pause");
    return 0;
}
