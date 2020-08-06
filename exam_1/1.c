#include<stdio.h>
int CheckingOverflow(int tag);
int main()
{
    int i;
    int array[100];
    int p = 0;
    while(scanf("%d",&array[p]) != EOF)
    {
        p++;
        if(CheckingOverflow(p)==0)
        {
            printf("Overflow\n");
            break;
        }
    }

    for(i = 0; i<p; i++)
        printf("%d ", array[i]);

    return 0;
}

int CheckingOverflow(int tag)
{
    if(tag+1>100)
        return 0;
}
