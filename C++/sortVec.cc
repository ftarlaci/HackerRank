#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
//    You are given  integers.Sort the n integers and print the sorted order.
// Store the  integers in a vector.
    vector<int> v; 
    int n, nums;
    cin >> n;
    
    while (cin >> nums) 
        v.push_back(nums);
 
    sort(v.begin(), v.end());
    
    for(int i= 0; i < n; i++)
        cout << v[i] << " ";   
    return 0;
}
