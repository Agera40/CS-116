#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    // Assigment 2 Part 2 by Agera 10/02/2022 //

    /*
    Write a C++ program with a loop that lets the user enter a series of integers. The user 
    should enter -99 to signal the end of the series.  After all the numbers have been 
    entered, the program should display the largest and smallest numbers entered, as well 
    as the average of all the numbers entered.  Assume the initial value of the smallest 
    number and the largest number is -99 and the initial average is 0.0.  Make sure the 
    average prints out to two decimal places.
    */

    int num, large = -9, small = 1, count = 0, sum = 0;
    double avg = 0;
    const int EXIT = -99;

    cout << "Enter a series a numbers to get the max, min and average of those nubmers and to finish the series just enter [-99]: ";
    cin >> num;

    large = small = num;

    while (num != EXIT) {

        sum += num;
        count ++;

        cout << "Enter another number: ";
        cin  >> num;
        
        // Conditions for Largest and Smallest
        if (num > large)
            large = num;
        if (num < small)
            small = num;
    }

    avg = double (sum) / count;

    cout << "The smallest number entered in the series is: " << small << endl;
    cout << "The largest number entered in the series is: " << large << endl;
    cout << "The average number is: " << fixed << setprecision(2) << avg << endl;
    
    system("pause");
    return 0;
}



