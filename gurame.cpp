#include <iostream>

int main() {
  printf("menghitung nilai rata rata");
  printf("=================================");

  int i, banyak, data[10];
  float average , jumlah;

  printf("\nmasukan banyak data yg akan dihitung :");
  scanf("%d", &banyak);

  for(i=0; i<banyak; i++) {
    printf("data ke %d :", i+1);
    scanf("%d", &data[i]);
    jumlah += data[i];

    
  }

  average = jumlah/banyak;
  printf("===============================\n");
  printf("jumlah seluruh data :%.0f\n", jumlah);
  printf("rata rata : %.2f\n\n", average);
  printf("program selesai.tekan enter untuk keluar.");
  getchar();
  getchar();

  return 0;
}
