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
printf("watts = %d\tlumens = %d\n",b.watts,b.lumens);
}

int main(int argc, char *argv[])
{
  /* declare and initialize two Bulbs */
  int i;

  struct Bulb lights[10];


  for(i=0;i<10;i++)
  {
   lights[i].watts=0;
   lights[i].lumens=0;
  }
  lights[0].watts=300;
  lights[0].lumens=1810;
  lights[1].watts=500;
  lights[1].lumens=905;
  /* print values of both Bulbs */
 for(i=0;i<10;i++)
 {
  printf("Bulb %d: ",i);
  printBulb(lights[i]);
 }

  system("PAUSE");
  return 0;
}
