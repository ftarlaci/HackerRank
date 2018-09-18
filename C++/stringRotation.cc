// general notes about string rotation questions. 


#include <algorithm>

// floats the character to the end of the string. 
void rotate(string &s) {
  for (int i = 1; i < s.size(); i++)
    swap(s[i-1], s[i]);
}


/*
Left Rotation and Right Rotation of a String
Given a string of size n, write functions to perform following operations on string.

Left (Or anticlockwise) rotate the given string by d elements (where d <= n)
Right (Or clockwise) rotate the given string by d elements (where d <= n).
Can we do both rotations in-place and O(n) time?
The idea is based on reversal algorithm for rotation.

// Left rotate string s by d (Assuming d <= n)
leftRotate(s, d)
  reverse(s, 0, d-1); // Reverse substring s[0..d-1]
  reverse(s, d, n-1); // Reverse substring s[d..n-1]
  reverse(s, 0, n-1); // Reverse whole string.  

// Right rotate string s by d (Assuming d <= n)
rightRotate(s, d)

  // We can also call above reverse steps
  // with d = n-d.
  leftRotate(s, n-d)  

*/
// Below is the C++ implementation of above steps :
// C program for Left Rotation and Right
// Rotation of a String

 
// In-place rotates s towards left by d
void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+ d, s.end());
    reverse(s.begin(), s.end());
}
 
// In-place rotates s towards right by d
void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}

/*Generate all rotations of a given string
Given a string S. The task is to print all the 
possible rotated strings of the given string.

Examples:

Input : S = "geeks"
Output : geeks
         eeksg
         eksge
         ksgee
         sgeek

Input : S = "abc" 
Output : abc
         bca
         cab

*/
/ A simple C++ program to generate all rotations
// of a given string
#include<bits/stdc++.h>
using namespace std;
 
// Print all the rotated string.
void printRotatedString(char str[])
{
    int len = strlen(str);
    // Generate all rotations one by one and print
    char temp[len];
    for (int i = 0; i < len; i++)
    {
        int j = i;  // Current index in str
        int k = 0;  // Current index in temp
 
        // Copying the second part from the point
        // of rotation.
        while (str[j] != '\0')
        {
            temp[k] = str[j];
            k++;
            j++;
        }
        // Copying the first part from the point
        // of rotation.
        j = 0;
        while (j < i)
        {
            temp[k] = str[j];
            j++;
            k++;
        }
        printf("%s\n", temp);
    }
}
 
// Driven Program
int main()
{
    char str[] = "geeks";
    printRotatedString(str);
    return 0;
}

// citation: https://www.geeksforgeeks.org/generate-rotations-given-string/
///////////////////////////////////////////////////////////////



// STL <algorithm> std:;rotate() 
// citation: https://en.cppreference.com/w/cpp/algorithm/rotate

#include <vector>
#include <iostream>
#include <algorithm>
 
int main()
{
    std::vector<int> v{2, 4, 2, 0, 5, 10, 7, 3, 7, 1}; 
 
    std::cout << "before sort:      ";
    for (int n: v)
        std::cout << n << ' ';
    std::cout << '\n';
 
    // insertion sort
    for (auto i = v.begin(); i != v.end(); ++i) {
        std::rotate(std::upper_bound(v.begin(), i, *i), i, i+1);
    }
 
    std::cout << "after sort:       ";
    for (int n: v)
        std::cout << n << ' ';
    std::cout << '\n';
 
    // simple rotation to the left
    std::rotate(v.begin(), v.begin() + 1, v.end());
 
    std::cout << "simple rotate left  : ";
    for (int n: v)
        std::cout << n << ' ';
    std::cout << '\n';
 
    // simple rotation to the right
    std::rotate(v.rbegin(), v.rbegin() + 1, v.rend());
 
    std::cout << "simple rotate right : ";
    for (int n: v)
        std::cout << n << ' ';
    std::cout << '\n';
 
}