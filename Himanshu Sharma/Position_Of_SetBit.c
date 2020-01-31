#include <stdio.h> 
int isPowerOfTwo(unsigned n) 
{ 
    return n && (!(n & (n - 1))); 
}  
int findPosition(unsigned n) 
{ 
    if (!isPowerOfTwo(n)) 
        return -1; 
    unsigned i = 1, pos = 1; 
    while (!(i & n)) {  
        i = i << 1;  
        ++pos; 
    } 
    return pos; 
} 
int main(void) 
{ 
    int n;
    scanf("%d",&n); 
    int pos = findPosition(n); 
    (pos == -1) ? printf("n = %d, Invalid number\n", n) : printf("n = %d, Position %d \n", n, pos);   
    return 0; 
} 
