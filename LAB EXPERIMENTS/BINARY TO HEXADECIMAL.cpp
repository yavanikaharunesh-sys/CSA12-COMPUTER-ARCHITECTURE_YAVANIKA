#include <stdio.h>
int main()
{
    int n,d=0,b=1,r;
    printf("Enter Binary: ");
    scanf("%d",&n);

    while(n)
    {
        r=n%10; d+=r*b; b*=2; n/=10;
    }
    printf("Hexadecimal = %X",d);
    return 0;
}
