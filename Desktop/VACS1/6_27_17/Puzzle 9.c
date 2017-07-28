#include <stdio.h>

struct Bulb
{
  int watts;
  int lumens;
};

/* function to print a Bulb */
void printBulb( struct Bulb *b )
{
  printf("watts = %d\tlumens = %d\n", b->watts, b->lumens );
}

int main(int argc, char *argv[])
{
  /* declare and initialize a Bulb pointer */
  struct Bulb *bptr;

  /* allocate memory for the Bulb */
  bptr = (struct Bulb*)malloc( sizeof(struct Bulb) );

  /* initialize the Bulb */
  bptr->watts = 100;  bptr->lumens = 1530;

  /* print the Bulb */
  printBulb( bptr );

  /* deallocate memory */
  free( bptr );

  /* make a horrible mistake */
//  bptr->watts = 44; bptr->lumens = 505;
//  printBulb( bptr );

 // system("pause");
  return 0;
}
