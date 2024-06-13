/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;

int main() {
    int num;
    char ch;
    cout << "please enter a number:";
    cin >> num;
    cout << "please enter a character:";
    cin >> ch;
    for(int i = 0; i < num; i++)
        cout << ch;
    cout << endl;
    return 0;
}
