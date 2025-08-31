#include <stdio.h>

int main() {
    int n, i, sum = 0, count = 0;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    printf("First %d even numbers are: ", n);
    for (i = 2; count < n; i += 2) {
        printf("%d ", i);
        sum = sum + i;
        count++;
    }
    
    printf("\nSum of first %d even numbers = %d\n", n, sum);
    
    return 0;
}
