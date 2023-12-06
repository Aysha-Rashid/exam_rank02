unsigned char reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char num;
	while(i > 0)
	{
		num = num * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (num);
}

// #include<stdio.h>
// int main()
// {
// 	printf("%d\n", reverse_bits(4));
// }
