// Calculate the sum of the numbers from 1 - 10 using a loop

#include <stdio.h>

int main() {
    
    int sum = 0, i;
    for(i = 1; i <= 10; i++) {
        sum+=i;
    }
    printf("The sum of numbers from 1 to 10 is %d", sum);
    return 0;
}