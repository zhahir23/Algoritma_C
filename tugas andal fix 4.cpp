#include <stdio.h>

int main() {
    for (int i = 1, num = 1; i <= 5; i++) {       
        for (int j = 1; j <= i; j++, num++) {      
            printf("%2d ", num);
        }
        printf("\n");
    }
    
	printf("\n\n");
	
    for (int i = 5, num = 1; i >= 1; i--) {       
        for (int j = 1; j <= i; j++, num++) {     
            printf("%2d ", num);
        }
        printf("\n");
    }

	printf("\n\n");

int num = 1;
    for (int i = 1; i <= 5; i++) {
        
        for (int k = 5; k > i; k--) {
            printf("   "); 
        }
        
        for (int j = 1; j <= i; j++, num++) {
            printf("%2d ", num);
        }
        printf("\n");
    }
    
    return 0;
}

