#include <stdio.h>


int main()
{
    register int n = 0, i = 0, j = 0;
    
    while(scanf("%d",&n) != EOF)
    {
        if(n == 0)
            break;
        for(i = 1; i <= n; i++)
        {
            j += i * i;
        }
        printf("%d\n",j);
        j = 0;
    }
    
    return 0;
}