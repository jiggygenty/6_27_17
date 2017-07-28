#include<stdio.h>
#include<time.h>

void main()
{
    int counter;
    time_t start, end;
    //volatile long unsigned counter;
    start=clock();
        for(counter=0;counter<500000000;counter++){

        }
//        end=time(NULL);
        printf("hello");
    end=clock();
        double res=(double)(end-start)/CLOCKS_PER_SEC;
        printf("The loop used %e seconds",res);
}
