#include <cmath>
#include <cstdio>

#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

int main()
{
    double r1, p1, r2, p2; 
    cin >> r1 >> p1 >> r2 >> p2; 
    r1 *= r2; 
    p1 += p2; 

    double A = r1*cos(p1); 
    double B = r1*sin(p1); 

    if ((A - 0.001) < 0.0001 || (0.001 - A) < 0.0001) {
        printf("%.2f", A + 0.005); 
    } else if ((B - 0.001) < 0.0001 || (0.001 - B) < 0.0001) {
        printf("%.2f", B); 
        printf("i\n"); 
    } else {
    }

        //  printf("%.2f%.2f", A, B); 
        //  printf("i\n"); 
    return 0; 
}
