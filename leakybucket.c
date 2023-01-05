#include<stdio.h>
#include<stdlib.h>
int main()
{
    int input=0;
    int i=0;int bs;
    printf("enter bucket limit\n");
    scanf("%d",&bs);
    int op=1;
    printf("Bucket limit is 500\n");
    printf("Rate is 50mbps\n");
    while(op)
    {
        printf("enter the input\n");
        scanf("%d",&i);
        if(i<=bs && input<=bs)
        {
            
            input=input+i;
            input=input-50;
            if(input<=bs)
            {
                if(input<0)
                input=0;
                
            printf("qty in bucket %d\n",input);
            }
            else if(input>bs)
            {
             printf("Bucket limit Exceeded\n");
            }
        }
        else
        {
            printf("Bucket limit Exceeded\n");
        }
        

        printf("press 1 to add input again 0 to end\n");
        scanf("%d",&op);
    }
    return 0;
}
