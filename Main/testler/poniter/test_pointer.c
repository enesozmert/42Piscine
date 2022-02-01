#include <stdio.h>

int main(void)
{
  int *ip, id; // int bir işaretçi ve değişken bildirimi
  id = 21;
  ip = &id;    // id değişken adresini ip işaretçisine atar.

  // İşaretçi kullanarak id değişken değerini ekrana yazar.
  printf("id değişken değeri: %d", *ip);
  printf("id değişken değeri: %d", id);
}
