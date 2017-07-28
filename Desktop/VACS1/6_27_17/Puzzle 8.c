#include <stdio.h>
#define L 10
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
void dimBulb( struct Bulb *b)
{
   b->lumens*=0.9;
}
int main(int argc, char *argv[])
{
  /* declare and initialize two Bulbs */
  int i;

  struct Bulb lights[L] = { {100,1710}, {60,1065}, {100,1530}, {40,505}, {75,830} };

for(i=0;i<L;i++)
{
 dimBulb(&lights[i]);
}
  /* print values of both Bulbs */
 for(i=0;i<L;i++)
 {
  printf("Bulb %d: ",i);
  printBulb(lights[i]);
 }

  system("PAUSE");
  return 0;
}
