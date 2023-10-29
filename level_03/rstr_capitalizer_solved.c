#include<unistd.h>


int main(int argc, char **argv)
{
    int j = 1;
    while(argc > j)
    {
        int i = 0;
        while((argv[j][i] == ' ' || argv[j][i] == '\t') && argv[j][i])
        {
            write(1, &argv[j][i], 1);
            i++;
        }
        while(argv[j][i])
        {
            // Check bounds first before accessing argv[j][i] and argv[j][i + 1]
            if (argv[j][i] != ' ' && argv[j][i] != '\t')
            {
                if (argv[j][i] >= 'a' && argv[j][i] <= 'z' &&  (argv[j][i + 1] == '\0' || argv[j][i + 1] == ' ' || argv[j][i + 1] == '\t'))
                    argv[j][i] = argv[j][i] - 32;
                else if (argv[j][i] >= 'A' && argv[j][i] <= 'Z' && (argv[j][i + 1] != '\0' && argv[j][i + 1] != ' ' && argv[j][i + 1] != '\t'))
                    argv[j][i] = argv[j][i] + 32;
                write(1, &argv[j][i], 1);
           		i++;
		   	} 
        	while(argv[j][i] == ' ' || argv[j][i] == '\t' && argv[j][i])
        	{
            	write(1, &argv[j][i], 1);
            	i++;
       		 }
		}	
		write(1, "\n", 1);
   	 	j++;
	}
	if (argc == 1)
		write(1, "\n", 1);
	return 0;
}
