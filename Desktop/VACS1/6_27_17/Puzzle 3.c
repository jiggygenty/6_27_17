#include <stdio.h>

/* declare the type struct Bulb (Notice the tag) */

struct Bulb
{
  int watts;
  int lumens;
};

/* function to print a Bulb */
void printBulb( struct Bulb b )
{
printf("Bulb B watts = %d\n",b.watts);
printf("Bulb B lumens = %d\n",b.lumens);

}

int main(int argc, char *argv[])
{
  /* declare and initialize two Bulbs */
  struct Bulb a ,b ;
  a.watts=100;
  a.lumens=1710;
  b.watts=100;
  b.lumens=1710;
  /* print values of both Bulbs */
  printf("Bulb A watts = %d\n",a.watts);
  printf("Bulb A lumens = %d\n",a.lumens);

  printBulb(b);

  system("PAUSE");
  return 0;
}
