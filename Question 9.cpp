/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int num;
    cout << "please enter a number: ";
    cin >> num;
    if(isPrime(num))
        cout << num << "is the first number"<<endl;
    else
        cout << num << " It is not a prime number"<<endl;
    return 0;
}
