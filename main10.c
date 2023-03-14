#include <stdio.h>
#include<stdlib.h>

      /* 5 Adet Öðrencinin Bilgilerini Depolayan Strcut Yapýsý */

  struct Ogrenci
  {
    char ad[20];
    char soyad[20];
    int no;
    int yas;
    char adres[50];
  };

  void OgrenciBilgileri(struct Ogrenci ogrenciler[], int n) {
  int i = 0;
  while (i < n) 
   {
    printf("\n%d. Ogrencinin Bilgileri:\n", i+1);
    printf("Ad: %s\n", ogrenciler[i].ad);
    printf("Soyad: %s\n", ogrenciler[i].soyad);
    printf("Numara: %d\n", ogrenciler[i].no);
    printf("Yas: %d\n", ogrenciler[i].yas);
    printf("Adres: %s\n", ogrenciler[i].adres);
      i++;
    }
}

  int main() {
    struct Ogrenci ogrenciler[5] = {
        {"Ayse", "Ozcan", 969,19 ,"Adana"},
        {"Zeynep Sude", "Kaya", 456,21, "Erzincan"},
        {"Eylul", "Beyaz", 789,18,"Izmir"},
        {"Yaren", "Burke", 234,23, "Bursa"},
        {"Dila", "Bolad", 567, 25,"Antalya"}
    };
  OgrenciBilgileri(ogrenciler, 5);
  return 0;
}
