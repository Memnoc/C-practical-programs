#include <stdio.h>

int main() {

  printf("== Circumference Calculator ==\n");

  const double PI = 3.14159;
  double radius;
  double circumference;

  printf("-> Enter radius of a circumference: ");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;

  printf("== The circumference is: %lf\n", circumference);

  return 0;
}
