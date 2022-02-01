#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int index;
		while (argv[1][index] != '\0')
		{
			if (argv[1][index] >= 'A' && argv[1][index] <= 'Z')
			{
				argv[1][index] += 32;
			}
			else if (argv[1][index] >= 'a' && argv[1][index] <= 'z')
			{
				argv[1][index] -=32;
			}
			write(1, &argv[1][index], 1);
			index++;
		}
		write(1, "\n", 1);
	}
}
