#include<stdio.h>
#include<stdlib.h>
 int main()
 {
 int mynumberArray[6]= {2,4,6,8,10,12};

  int accessArray=mynumberArray[2];

  printf ("value of %d\n",accessArray);

  for(int i=0;i<6;i++)
{
    printf("element[%d]=%d\n",i,mynumberArray[i]);
}

 }
