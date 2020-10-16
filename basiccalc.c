#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
  int firstNum, secondNum;
  char whatTD[8];
  printf("Enter a number: ");
  scanf("%d", &firstNum);
  printf("\n");
  printf("Enter another number: ");
  scanf("%d", &secondNum);
  printf("\n");
  printf("What do you want to do?\n");
  printf("Commands: \n");
  printf("sum - get the sum of the two numbers\n");
  printf("subtract - subtract the second number from the first\n");
  printf("multiply - multiply the first number with the second\n");
  printf("divide - devide the first number by the second\n");
  printf("power - get the number to the second numbers power\n");
  printf("Your command: ");
  scanf("%s", whatTD);
  printf("\n");
  
  if (strcmp(whatTD, "sum") == 0) {
    int a = firstNum + secondNum;
    printf("Result: ");
    printf("%d", a);
    printf("\n");
  } else if (strcmp(whatTD, "subtract") == 0) {
    int b = firstNum - secondNum;
    printf("Result: ");
    printf("%d", b);
    printf("\n");
  } else if (strcmp(whatTD, "multiply") == 0) {
    int c = firstNum*secondNum;
    printf("Result: ");
    printf("%d", c);
    printf("\n");
  } else if (strcmp(whatTD, "devide") == 0) {
    int d = firstNum/secondNum;
    printf("Result: ");
    printf("%d", d);
    printf("\n");
  } else if (strcmp(whatTD, "power") == 0) {
    int e = pow(firstNum,secondNum);
    printf("Result: ");
    printf("%d", e);
    printf("\n");
  } else {
    printf("Wrong command!\n");
  }

  return 0;
}
