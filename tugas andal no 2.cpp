#include <stdio.h>

int main() {
    double saldo = 1000000;  
    double bunga = 0.02;     
    int bulan = 10;         

    for
	 (int i = 1; i <= bulan; i++) {
     saldo += saldo * bunga; 
     printf("Saldo setelah bulan ke-%d: Rp. %.2f\n", i, saldo);
    }

    printf("Jumlah uang setelah %d bulan adalah Rp. %.2f\n", bulan, saldo);
    return 0;
}
	

