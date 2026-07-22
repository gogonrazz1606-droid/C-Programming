#include <stdio.h>

int main() {
int kodepromo; 
float harga;
    printf("Masukkan kode promo : \n");
    scanf("%d", &kodepromo);
    printf("Masukkan harga barang :\n");
    scanf("%f", &harga);

float diskon = (kodepromo ==1) ? 0.3 : 0.1;
float potongan = harga*diskon;
float harga_setelah_diskon = harga - potongan;

    printf("Harga Diskon :%.2f\n",harga_setelah_diskon);
    return 0;
}