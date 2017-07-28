#define N 10

struct students
{
   char  name[50];
   int   roll;
   float marks;
}s[N];
#include<stdio.h>
int main()
{
    int i;
    printf("Enter information of students :\n");

    for (i=0;i<N;i++)
    {
        printf("\nStudent %d:\n",i+1);
        printf("Name: ");
        scanf("%s",&s[i].name);
        printf("Roll: ");
        scanf("%d",&s[i].roll);
        printf("Marks: ");
        scanf("%f",&s[i].marks);
    }
    for (i=0;i<N;i++)
    {
        printf("\nStudent: %d\n",i+1);
        printf("Name: ");
        printf("%s\n",s[i].name);
        printf("Roll: ");
        printf("%d\n",s[i].roll);
        printf("Marks: ");
        printf("%f\n",s[i].marks);
    }

}
