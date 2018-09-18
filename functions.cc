/*ASIDE for the rookie: 
+= : Add and assignment operator. It adds the right operand to 
the left operand and assigns the result to the left operand.
a += b is equivalent to a = a + b;

*/

/* You have to write a function int max_of_four(int a, int b, int c, int d)
 which reads four arguments and returns the greatest of them.
 */

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int max_of_four(int a, int b, int c, int d){
	int max = INT_MIN;
	int m = max(a, b);
	int n = max(c, d);
	return max (m, n); 
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}