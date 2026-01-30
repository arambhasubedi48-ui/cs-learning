#include<iostream>

using namespace std;

int main()
{
    char letter;
    string word;
    string line;

    cout << "Enter a character: ";
    cin >> letter;

    cout << "Enter a word: " ;
    cin >> word;

    cin.ignore(1000, '\n');

    cout <<"Enter a string: ";
    getline(cin, line);

    cout <<"Letter: "<< letter << endl;
    cout << "WOrd: "<< word << endl;
    return 0;
}