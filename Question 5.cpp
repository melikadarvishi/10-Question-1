/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string correctPassword = "1234";
    string userPassword;

    while (true) {
        cout << "Please enter the password:";
        cin >> userPassword;

        if (userPassword == correctPassword) {
        cout << "The password is correct. Welcome to the system:"<<endl;
        
            break;
        } else {
            cout << "The password is incorrect, try again:"<<endl;
        }
    }

    return0;

}

