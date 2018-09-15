/*stringstream is a stream class to operate on strings. It basically implements 
input/output operations on memory (string) based streams. stringstream can be 
helpful in different type of parsing. The following operators/functions are commonly used here
Operator >> Extracts formatted data.
Operator << Inserts formatted data.
Method str() Gets the contents of underlying string device object.
Method str(string) Sets the contents of underlying string device object.
One common use of this class is to parse comma-separated integers from a string (e.g., "23,4,56").
*/

#include <iostream> 
#include <sstream>  // for stringstream
using namespace std; 
  
vector<int> parseInts(string str) {
    vector<int> vec;
    int i;
    stringstream ss(str);
    while(ss >> i){
        vec.push_back(i);
        if(ss.peek() == ','){
            ss.ignore();
        }
    }
    return vec;
    
}








// sample below is from GeeksforGeeks
/*Converting Strings to Numbers in C/C++
There are two common methods to convert strings to numbers:
Using stringstream class or sscanf()
stringstream() : This is an easy way to convert strings of digits 
into ints, floats or doubles. Following is a sample program using a stringstream to convert string to int.
// A program to demonstrate the use of stringstream 

*/

// CONVERT STRING OF DIGITS TO INTEGERS 
int main() 
{ 
    string s = "12345"; 
    // object from the class stringstream 
    stringstream geek(s); 
    // The object has the value 12345 and stream 
    // it to the integer x 
    int x = 0; 
    geek >> x; 
    // Now the variable x holds the value 12345 
    cout << "Value of x : " << x;  
    return 0; 
}