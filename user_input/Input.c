#include <stdio.h>
#include <string.h>

int main() {

  int age;
  char name[25];

  printf("== Enter your name ==\n");
  // scanf("%s", name);
  fgets(name, 25, stdin);
  name[strlen(name) - 1] = '\0';

  printf("== Enter your age ==\n");
  scanf("%d", &age);

  printf("Hello %s, how are you?\n", name);
  printf("You are %d years old! \n", age);
  return 0;
}
