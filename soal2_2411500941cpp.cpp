#include <stdio.h>

int main() {

    char A[3][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'J'},
        {'K', 'L', 'M', 'N', 'O'}
    };
    
    char B[5][3];

    // Menyalin isi dari A ke B (Transpose)
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 5; kolom++) {
            B[kolom][baris] = A[baris][kolom]; 
        }
    }

    // Menampilkan hasil array B
    printf("Array B setelah disalin:\n");
    for (int baris = 0; baris < 5; baris++) {
        for (int kolom = 0; kolom < 3; kolom++) {
            printf("%c ", B[baris][kolom]); 
        }
        printf("\n");
    }

    return 0;
}
