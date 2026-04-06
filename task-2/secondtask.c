#include <stdio.h>
int y =10;
void calculateSum() {
  int x = 5;

  int sum = x + y;
  printf("The sum of x + y is: %d", sum);
}
void subs() {
  int x = 50;
  
  int sum = x - y;
  printf("\nThe sum of x + y is: %d", sum);
}


int main() {
  calculateSum();
  printf("\n%d",y);
  subs();  // call the function
  return 0;
}