#include <iostream>

using namespace std;

int main(){

    // Assigment 2 Part 1 by Agera 10/01/2022 //

    /*
    Write a C++ program that accepts an amount of money on deposit and a number of 
    years it has been on deposit (years can have decimals). It will determine the interest to 
    be paid on the deposit based on the following schedule:

    Time on Deposit                                Interest Rate
    >= 5 years                                          4.5%
    Less than 5 and >=4 years                           4%
    Less than 4 and >=3 years                           3.5%
    Less than 3 and >=2 years                           2.5%
    Less than 2 and >=1 years                           2%
    Less than 1 year                                    1.5%

    Compute the interest with the formula: Interest = Deposit * IntRate * Years.
    Display the original deposit, the interest earned and the new Balance (with interest 
    added to the deposit.  

    */
    
    //Variables
    double years, rate, money, interest;
    double rate5 = 0.045;    
    double rate4 = 0.04;
    double rate3 = 0.035;
    double rate2 = 0.025;
    double rate1 = 0.02;
    double rate0 = 0.015;

    //Inputs + a filter
    cout << "Please type how much money would you like to invest: ";
    cin >> money;
    if (money <= 0){
        cout << "Invalid input please enter a valid amount again." << endl;
        return 38;
    }
    cout << "Please type how many years are you planning to invest: "; 
    cin >> years;
    if ( years <= 0){
        cout << "Invalid input please enter the years again." << endl;
        return 44;
    }
    
    //Calculations
    if (years >= 5){
        rate = rate5;
    }
    else if ( years < 5 && years >= 4){
        rate = rate4;
    }
    else if ( years < 4 && years >= 3){
        rate = rate3;
    }
    else if ( years < 3 && years >= 2){
        rate = rate2;
    }
    else if ( years < 2 && years >= 1){
        rate = rate1;
    }
    else {
        rate = rate0;
    }
    
    interest = rate * money * years;

    //Output
    cout << "The original deposit is of $" << money << endl;
    cout << "Your rate of interest for " << years << " years is " << rate*100 << "%" << endl;
    cout << "The new balance is with interest $" << money + interest << endl;

    system("pause");
    return 0;
}
