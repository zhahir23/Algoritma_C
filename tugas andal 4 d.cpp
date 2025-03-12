#include <stdio.h>

int main() {
    int num = 1; // Inisialisasi variabel num

    for (int i = 5; i >= 1; i--) {           // Loop untuk baris, mulai dari 5 angka dan berkurang tiap baris
        for (int k = 5; k > i; k--) {        // Cetak spasi untuk perataan kanan
            printf("   ");                   // Spasi untuk menggeser angka ke kanan
        }
        for (int j = 1; j <= i; j++) {       // Loop untuk mencetak angka pada setiap baris
            printf("%2d ", num++);           // Cetak angka dan tambahkan num
        }
        printf("\n");                        // Pindah ke baris berikutnya
    }

    return 0;
}
