/*
	You have to complete the function void update(int *a,int *b), 
	which reads two integers as argument, and sets  with the sum of 
	them, and  with the absolute difference of them.
*/

#include <stdio.h>
#include <cmath>
#include <algorithm>
 #include <cstdlib>

void update(int *a,int *b) {
    *a = *a + *b;
    *b = 2*(*b) - (*a);        
    *b = *b > 0 ? *b : -1*(*b);     //make positive if b is negative.
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}