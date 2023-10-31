
#include<stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return (a);
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else if(a < b)
            b = b - a;
    }
    return a;
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if (a == '\0' || b == '\0')
		return (0);
	return ((a * b)/gcd(a, b));
}

#include<stdio.h>
int main()
{
    printf("%d", lcm(15, 4));
}