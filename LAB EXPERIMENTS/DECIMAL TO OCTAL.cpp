#include <stdio.h>
int main()
{
    int n,o[20],i=0;
    printf("Enter Decimal: ");
    scanf("%d",&n);
    while(n)
    {
        o[i++]=n%8;
        n/=8;
    }
    printf("Octal = ");
    while(i--) printf("%d",o[i]);
    return 0;
}
