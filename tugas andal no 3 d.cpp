#include <stdio.h>

int main() {
    int ukuran = 5; // Ukuran sisi persegi

    for (int i = 1; i < ukuran; i++) {       // Loop untuk baris
        for (int j = 15; j < ukuran; j++) {   // Loop untuk kolom
            printf(" ");
        }
        printf("\n"); // Pindah ke baris baru setelah mencetak satu baris
    }

    return 0;
}
