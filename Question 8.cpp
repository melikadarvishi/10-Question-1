/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char c;
    cout << "Please enter a character: ";
    cin >> c;

    if(isdigit(c)) {
        cout<<"the entered character is a number"<<endl;
    } else {
        cout<<"the entered character is not a number"<<endl;
    }

    return 0;
}
