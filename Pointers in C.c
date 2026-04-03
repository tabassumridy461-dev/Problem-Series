#include <stdio.h>
#include <stdlib.h>  
void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b); 
    
    *a = sum;   
    *b = diff;  
}

int main() {
    int a, b;

    //we can take input from user
    scanf("%d %d", &a, &b);
    
    //it is a function for sum
    update(&a, &b);
    
    //we can print our output to console
    printf("%d\n%d\n", a, b);
    
    return 0;
}
