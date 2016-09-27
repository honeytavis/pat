//#define DEBUG

#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <deque>
using std::deque; 

#include <algorithm>

#include <iterator>
using std::ostream_iterator; 

long min_coll(deque<long>& coll, long p1); 
long max_coll(deque<long>& coll, long p1); 

int main()
{
    int N; 
    long p, tmp; 
    cin >> N >> p; 

    deque<long> coll; 
    for (int i = 0; i < N; ++i) {
        cin >> tmp; 
        coll.push_back(tmp); 
    }

    if (coll.size()) {
        sort(coll.begin(), coll.end()); 
        
        deque<long> back(coll); 
        long ret1 = min_coll(coll, p);
        long ret2 = max_coll(back, p); 

        cout << ((ret1 >= ret2) ? ret1 : ret2) << endl;
    } else {
        cout << 0 << endl; 
    }

    return 0; 
}

long min_coll(deque<long>& coll, long p1) {
#ifdef DEBUG
    cout << "min_coll(): " << endl; 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<long>(cout, " ")); 
    cout << '\n'; 
#endif
    if (coll.size()) {
        long m = coll.front(); 
        long M = coll.back(); 
        long p = p1; 
        
        if (M <= (m * p)) {
            return coll.size(); 
        } else {
            if (coll.size()) {
                coll.pop_back(); 
                min_coll(coll, p); 
            }
        }
    } else {
        return 0; 
    }
}

long max_coll(deque<long>& coll, long p1) {
#ifdef DEBUG
    cout << "max_coll(): " << endl; 
    copy(coll.begin(), coll.end(), 
         ostream_iterator<long>(cout, " ")); 
    cout << '\n'; 
#endif
    if (coll.size()) {
        long m = coll.front(); 
        long M = coll.back(); 
        long p = p1; 
        
        if (M <= (m * p)) {
            return coll.size(); 
        } else {
            if (coll.size()) {
                coll.pop_front(); 
                max_coll(coll, p); 
            }
        }
    } else {
        return 0; 
    }
}
