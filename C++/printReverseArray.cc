/*
You'll be given an array of  integers and you have 
to print the integers in the reverse order.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    vector<int> arr;
    while(cin >> n){
        arr.push_back(n);
    }
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
