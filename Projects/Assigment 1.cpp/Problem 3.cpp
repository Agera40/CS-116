#include <iostream>

using namespace std;

int main(){

    // Assigment 1 Part 3 by Jian 09/06/2022 //

    /* 
    Write a program that allows the user to enter time in seconds and outputs how far an 
    object would drop if it is in freefall for that length of time. Assume that the object starts at 
    rest, there is no friction or resistance from air and there is a constant acceleration of 32 
    feet per second due to gravity. 
    */

    // Variables
    int time, distance;
    const int ACCELERATION = 32;

    // Inputs
    cout << "Enter the amount of time ";
    cin >> time;
    distance = ACCELERATION/2*time*time;
    cout << "The object will fall " << distance << " meters." << endl;

    system("pause");
    return 0;
}