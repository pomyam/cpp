#include <iostream>

int main(int ac, char **av)
{
	int i = -0;
	int j;
	if (ac > 1)
	{
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
			{
				if (av[i][j] > 96 && av[i][j] < 123)
					std::cout << (char)(av[i][j] - 32);
				else
					std::cout << (char)av[i][j];
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	else std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
