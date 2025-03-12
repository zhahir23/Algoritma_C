#include <stdio.h>

int main() {
    for (int i = 1, num = 1; i <= 5; i++) {       
        for (int j = 1; j <= i; j++, num++) {      
            printf("%2d ", num);
        }
        printf("\n");
    }

    return 0;
}
