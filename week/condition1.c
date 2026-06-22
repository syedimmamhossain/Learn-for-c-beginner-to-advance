#include <stdio.h>
int main() {
    int temperature = 15;

    if (temperature > 30) {
        printf("It's hot outside.\n");
    } else if (temperature >= 15) {
        printf("The weather is nice.\n"); // This will run
    } else {
        printf("It's cold outside.\n");
    }

    return 0;
}