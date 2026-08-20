#include <stdio.h>
int main()
{
    long long binary;
    int decimal = 0, base = 1, remainder;
    int octal = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    while (binary > 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
        binary = binary / 10;
    }
    while (decimal > 0)
    {
        remainder = decimal % 8;
        octal = octal + remainder * place;
        place = place * 10;
        decimal = decimal / 8;
    }
    printf("Octal number = %d", octal);
    return 0;
}
