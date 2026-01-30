#include<iostream>
using namespace std;

int main()
{
    int age, num;
    cout <<"Hello World!" << endl; 
    
    // cout to print //endl for new line
    cout << "Enter your age and number: " ;

    cin >> age >> num;
    cout << "You are " << age << " yeard old." <<endl;
    cout << "The number is " << num ;

    if(age < 18)
        cout<<"You can vote!" << endl;
    else
        cout << "You are  old enough to vote." <<endl;
    
    return 0;
}
