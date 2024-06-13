/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Please enter the number of digits:";
    cin >> n;

    vector<int> numbers(n);
    cout << "now " << n << "Enter the number:";
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    auto result = std::minmax_element(numbers.begin(), numbers.end());

    cout<<"the smaller number:"<<*result.first<<endl;
    cout<<"the largest number:"<<*result.second<<endl;

    return 0;
}
