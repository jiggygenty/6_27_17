#include <stdio.h>

struct
{
  int watts;
  int lumens;
}  bulbA, bulbB ;

int main(int argc, char *argv[])
{
  /* set values for bulbA */
  bulbA.watts=100;
  bulbA.lumens=1710;
  /* copy values from bulbA to bulbB */
  bulbB.watts=bulbA.watts;
  bulbB.lumens=bulbA.lumens;
  /* print values of bulbB */
  printf("Bulb B gets %d watts\n",bulbB.watts);
  printf("Bulb B gets %d lumens\n",bulbB.lumens);
  system("PAUSE");
  return 0;
}
