#include <stdio.h>

int main() {
  
    char A[15] = {'A', 'B', 'C', 'D', 'E', 
                  'F', 'G', 'H', 'I', 'J', 
                  'K', 'L', 'M', 'N', 'O'};

    char B[3][5];

    int index = 0; 
    for (int kolom = 0; kolom < 5; kolom++) {  
        for (int baris = 0; baris < 3; baris++) { 
            B[baris][kolom] = A[index]; 
            index++; 
        }
    }

    printf("Array B setelah disalin:\n");
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 5; kolom++) {
            printf("%c ", B[baris][kolom]); 
        }
        printf("\n"); 
    }

    return 0;
}
