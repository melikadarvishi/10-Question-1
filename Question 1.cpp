/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main() 
{
    int n;
    std::cout << "enter a number: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cout << "*";
    }

    return 0;
}