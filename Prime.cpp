#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the value to check whether its prime or not" <<endl;
    cin >> a;

    if(a <= 1)
    {
        cout << "Not a Prime" <<endl;
    }

    bool isPrime = true;

    for (int i = 2; i * i <7; i++)
    {
        if (a % i == 0)
        {
            isPrime = false;
            break;
        }  
    }

    if(isPrime){
        cout << "Is a Prime"<< endl;
    }
    else {
        cout << "Not a Prime" << endl;
    }
    return 0;
}