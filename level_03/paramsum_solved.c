#include <unistd.h>

int main(int argc, char **argv)
{
    int num_args = argc - 1; // Subtract 1 to exclude the program name
 	char count_str[12];
    int i = 0;
    int temp = num_args;

    if (argc == 1)
		write(1, "0\n", 2);
	else if (argc > 1)
	{
		while (temp > 0 && **argv)
    	{
        	count_str[i] = (temp % 10) + '0';
        	temp /= 10;
       	 	i++;
    	}
    	count_str[i] = '\0';
    	write(1, count_str, i);
		write(1, "\n", 1);
	}
    return 0;
}