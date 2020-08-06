#include<stdio.h>
int main ()

{
  
  int array[100]= {1,4,3,4,5,6,4,8,9,10};
    int i, j, X;
    int tag=0;
    int size=10;

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");


    scanf("%d",&X);

    for(i=0; i<size; i++)
    {
        if(X==array[i])
        {
            for(j=i; j<=size; j++)
            {
                array[j] = array[j+1];
            }
            tag++;
            break;
        }
    }

    size--;

    if(tag!=1)
    {
        printf("Not Found");
    }
    else
    {
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }

    return 0;
}
