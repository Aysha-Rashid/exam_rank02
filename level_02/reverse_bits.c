unsigned char reverse_bits(unsigned char octet)
{
	int i = 0;
	int ans = 0;
	while (i < 8)
	{
		ans <<= 1;
		ans = ans | (octet &1);
		octet >>=1;
		i++;
	}
	return (ans);
}

/*
#include<stdio.h>
int main()
{
	printf("%d\n", reverse_bits(4));

}*/
