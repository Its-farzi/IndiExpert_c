#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool isProgrammingFun;
  bool isFishTasty;
  int input_1, input_2;
  printf("Input the value for the Programming Fun (if you like press 1, orther wise 0) : ");
  scanf("%d", &input_1);
  printf("If fish is tasty please say true (if you like press 1, orther wise 0) :");
  scanf("%d", &input_2);
  isProgrammingFun = input_1;
  isFishTasty = input_2;
  if (isProgrammingFun == true)
  {
    printf("True = %d\n", isProgrammingFun);
  }
  else
  {
    printf("False = %d\n", isProgrammingFun);
  }
  if (isFishTasty == true)
  {
    printf("True = %d\n", isFishTasty);
  }
  else
  {
    printf("False = %d\n", isFishTasty);
  }

  return 0;
}