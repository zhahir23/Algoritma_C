#include <stdio.h>

int main() {
    int A[3][5] = {
        {19, 11, 81, 25, 79},
        {16,  7,  9, 13, 25},
        {30, 10, 12, 40, 22}
    };

    int jumlahKolom[5] = {0}; 


    for (int j = 0; j < 5; j++) {      
        for (int i = 0; i < 3; i++) {   
            jumlahKolom[j] += A[i][j];  
        }
    }

 
    printf("Jumlah setiap kolom:\n");
    for (int j = 0; j < 5; j++) {
        printf("Kolom %d: %d\n", j + 1, jumlahKolom[j]);
    }

    return 0; 
}

