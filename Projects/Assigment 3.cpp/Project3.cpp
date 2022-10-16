// Assigment 4 by Jian 10/15/2022//

/*
1. implement function named reverse which takes one string parameter and returns

the revers of give string. Example: the string Hello should return olleH.

2. implement function named findX which takes one string parameter and returns

the total character X or x in that string. Example : This is x eXample. shout returns 2.

3. implement function named doTheJob which has no parameter which calls the other functions.

*/
#include<iostream>
#include <cctype>

using namespace std;

void doTheJob();
string reverse(string str);
int findl(string word, char searchX);

int main()
{

    doTheJob();

    system("pause");
    return 0;

}

void doTheJob()
{

    string rvw;
    
    cout << "Enter the word you want to reverse: ";
    getline(cin, rvw);
    cout << "The word reversed would be: "; 
    reverse(rvw);
    cout << endl;

    string word;
    char searchX;

    cout << "Enter your word: ";
    getline(cin, word);
    cout << "Enter the letter you want to count: ";
    cin >> searchX;
    int counter = findl(word, searchX);
    cout << "The letter '" << searchX << "' was counted this many times: " << counter << endl;
    
}


// Reverse function
string reverse(string str)
{
    int len = str.size();
    int n = len;
    while(n--)
        cout << str[n];
    return str;
}


// Find X and x function;
int findl(string word, char searchX)
{
    int count = 0;
    for (int i= 0; i< word.size(); i++)
    {
            if (word[i] == toupper(searchX) || word[i] == tolower(searchX))
        {
            count++;
        }

    }
    return count;
}
