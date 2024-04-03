#include <ctype.h>
#include <stdio.h>

int main() {

  char unit;
  float temperature;

  printf("Select the unit: (C) or (F): ");
  scanf("%c", &unit);

  unit = toupper(unit);

  switch (unit) {
  case 'C':
    printf("== Enter temperature in Celsius == \n");
    scanf("%f", &temperature);
    temperature = ((temperature * 9) / 5) + 32;
    printf("== Temperature in Celisus is %.1f ==\n", temperature);
    break;
  case 'F':
    printf("== Enter temperature in Farenheit == \n");
    scanf("%f", &temperature);
    temperature = ((temperature - 32) * 5) / 9;
    printf("== Temperature in Farenheit is %.1f ==\n", temperature);
    break;
  default:
    printf("Invalid Unit Input\n");
  }
  return 0;
}
