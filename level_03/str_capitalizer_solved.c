#include<unistd.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int j = 1;
    // int flag = 1;
    if (argc == 1)
    {
        write(1, "\n", 1);
        return 0;
    }
    while (j < argc)
    {
        int i = 0;
        while (argv[j][i])
        {
            while (argv[j][i] != '\0' && (argv[j][i] == ' ' || argv[j][i] == '\t'))
		    {
			    write(1, &argv[j][i], 1);
			    i++;
		    }
            if (argv[j][i] != '\0')
            {
                if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
                    argv[j][i] = argv[j][i] - ('a' - 'A');
                write(1, &argv[j][i], 1);
                i++;
            }
            while (argv[j][i] != '\0' && argv[j][i] != ' ' && argv[j][i] != '\t')
            {
                if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
                    argv[j][i] = argv[j][i] + ('a' - 'A');
                write(1, &argv[j][i], 1);
                i++;
            }
        }
        write(1, "\n", 1);
        j++;
    }
    return 0;
}

