#include <stdio.h>

int main() {

  char operator;
  double num1;
  double num2;
  double result;

  printf("Enter an operator: (+), (-), (/), (*)\n");
  scanf("%c", &operator);

  printf("\nEnter the first number: ");
  scanf("%lf", &num1);

  printf("\nEnter the second number: ");
  scanf("%lf", &num2);

  switch (operator) {
  case '/':
    result = num1 / num2;
    printf("%.2lf\n", result);
    break;
  case '+':
    result = num1 + num2;
    printf("%.2lf\n", result);
    break;
  case '-':
    result = num1 - num2;
    printf("%.2lf\n", result);
    break;
  case '*':
    result = num1 * num2;
    printf("%.2lf\n", result);
    break;
  default:
    printf("Enter a valid operator!!");
    break;
  }
  return 0;
}
