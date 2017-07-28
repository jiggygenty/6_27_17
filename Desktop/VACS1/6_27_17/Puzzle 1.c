#include <stdio.h>

struct
{
  int watts;
  int lumens;
} bulbA;

int main(int argc, char *argv[])
{
  /* set values for bulbA */
  bulbA.watts=100;
  bulbA.lumens=1710;
  /* print values of bulbA */
  printf("Bulb A gets %d watts\n",bulbA.watts);
  printf("Bulb A gets %d lumens\n",bulbA.lumens);
  system("PAUSE");
  return 0;
}
