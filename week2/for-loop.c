#include <stdio.h>
int main() {
    int sum = 0;
    for(int i=0; i<100; i++) {
        sum+=i;
    }
    printf("the sum of the first 100 numbers is %d\n", sum);
    return 0;
}