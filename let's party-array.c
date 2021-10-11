
#include <stdio.h>

int main()
{
    int n1=6,n2=6,sum1=0,max1=0,max2=0,res1,res2;
    int a1[n1];
    float a2[n2],avg1=0,avg2=0,sum2=0;
    printf("MR.INT ENTER THE DAILY WAGES FORM MONDAY TO SATURDAY: ");
    for(int i=0;i<n1;i++)
    {
      scanf("%d",&a1[i]);
    }
    printf("MR.FLOAT ENTER THE DAILY WAGES FORM MONDAY TO SATURDAY: ");
      for(int i=0;i<n2;i++)
    {
      scanf("%f",&a2[i]);
    }
    for(int i=0;i<n1;i++)
    {
       if(a1[i]>max1)
       {
           max1 = a1[i];
           res1 = i;
       }
       
    }
    for(int i=0;i<n2;i++)
    {
       if(a2[i]>max2)
       {
           max2 = a2[i];
           res2 = i;
       }
    }
    switch(res1)
    {
        case 0:  printf("YOU CAN PARTY ON MONDAY\n");
                 break;
        case 1:  printf("YOU CAN PARTY ON TUESDAY\n");
                 break;
        case 2:  printf("YOU CAN PARTY ON WEDNESDAY\n");
                 break;
        case 3:  printf("YOU CAN PARTY ON THURSDAY\n");
                 break;
        case 4:  printf("YOU CAN PARTY ON FRIDAY\n");
                 break;
        case 5:  printf("YOU CAN PARTY ON SATURDAY\n");
                 break;
    }
    switch(res2)
    {
        case 0:  printf("YOU CAN PARTY ON MONDAY\n");
                 break;
        case 1:  printf("YOU CAN PARTY ON TUESDAY\n");
                 break;
        case 2:  printf("YOU CAN PARTY ON WEDNESDAY\n");
                 break;
        case 3:  printf("YOU CAN PARTY ON THURSDAY\n");
                 break;
        case 4:  printf("YOU CAN PARTY ON FRIDAY\n");
                 break;
        case 5:  printf("YOU CAN PARTY ON SATURDAY\n");
                 break;
    }
    return 0;
}