#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    int X,Y,A;
    scanf("%d %d %d",&X,&Y,&A);
    if (X<=A && A<Y )
        printf("YES");
    else
        printf("NO");

        printf("\n");
    }

    return 0;
}
