/*
You are appointed as the assistant to a teacher in a school and she is correcting 
the answer sheets of the students.Each student can have multiple answer sheets.So 
the teacher has  queries:

 1 X Y :Add the marks  to the student whose name is .

2 X: Erase the marks of the students whose name is .

3 X : Print the marks of the students whose name is . (If  didn't get any marks print .)

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
    

int main() {
    map<std::string, int> m;
    int Q; 
    cin >> Q;

    while(Q--) {
        string X;
        int mark;
        int query;
        cin >> query >> X;      
        switch(query) {
            case 1: cin >> mark;
                    m[X] += mark;
                    break;
            case 2: m.erase(X);            
                    break;
            case 3: cout << m[X]<< endl;
                    break;
        }
    }
    return 0;
}



