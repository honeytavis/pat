#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <stack>
using std::stack; 

const char NUM[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"}; 

int print_sum(int n) {
    if (n) {
        stack<char> s; 
        int tmp; 
        while (n) {
            tmp = n % 10; 
            s.push(tmp); 
            s.push(' '); 
            n /= 10; 
        }
        if (!s.empty()) {
            s.pop(); 
        }

        while (!s.empty()) {
            if (s.top() == ' ') {
                cout << s.top(); 
            } else {
                cout << NUM[s.top()]; 
            }
            s.pop(); 
        }
    } else {
        cout << NUM[n]; 
    }
    cout << endl; 
}

int main()
{
    const int max_size = 100; 
    char line[max_size] = {0}; 
    if (cin.getline(line, max_size, '\n')) { // 最大读取字符数：max_size-1
        int cnt = cin.gcount(); 
        
        int sum = 0; 
        for (int pos = 0; pos < cnt; ++pos) {
            if ((line[pos] >= '0') && (line[pos] <= '9')) {
                //cout << line[pos] << ' '; 
                sum += (line[pos] - '0');
            }
        }
        //cout << sum << endl; 

        print_sum(sum); 
    }
    return 0; 
}
