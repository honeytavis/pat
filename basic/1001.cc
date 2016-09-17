#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
    int steps, n; 
    cin >> n; 

    for (steps = 0; n != 1; ++steps) {
        if (n % 2) {
            n = (n*3+1) / 2; 
        } else {
            n /= 2; 
        }
        // cout << n << ' '; 
    }
    // cout << endl; 

    cout << steps << endl; 
    return 0; 
}
