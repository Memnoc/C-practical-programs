#include <stdio.h>

int main() {

  printf("== Area Calculator ==\n");

  const double PI = 3.14159;
  double radius;
  double area;

  printf("-> Enter radius: ");
  scanf("%lf", &radius);

  area = PI * radius * radius;

  printf("== The are is: %lf\n", area);

  return 0;
}
