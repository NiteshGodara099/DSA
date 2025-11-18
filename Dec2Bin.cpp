#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cout << "Enter the value: " <<endl;
    cin >> n;
    int ans = 0;
    int place = 1;


    for(int i = 0; n!=0; i++)
    {
        int bit = n&1;
        ans = (bit*place) + ans;
        place *= 10;
        n = n >> 1;
    }
    cout << "Binary is: " << ans << endl;

}