#include <iostream>
using std::cin; 
using std::cout; 
using std::endl; 

#include <string>
using std::string; 

#include <vector>
using std::vector; 

#include <algorithm>

class Student {
public: 
    string _name; 
    string _id; 
    int _mark; 
}; 

class Fun {
public: 
    bool operator() (const Student& s1, const Student& s2) {
        return s1._mark > s2._mark; 
    }
}; 

int main()
{
    int N; 
    cin >> N; 

    Student tmp; 
    vector<Student> coll; 
    for (int i = 0; i < N; ++i) {
        cin >> tmp._name
            >> tmp._id
            >> tmp._mark; 
        coll.push_back(tmp); 
    }

    sort(coll.begin(), coll.end(), 
         Fun()); 

    vector<Student>::iterator beg = coll.begin(); 
    vector<Student>::iterator end = coll.end(); 
    cout << beg->_name << ' '
         << beg->_id
         << '\n'; 

    --end; 
    cout << end->_name << ' '
         << end->_id
         << '\n'; 

    return 0; 
}
