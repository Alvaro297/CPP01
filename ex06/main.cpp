# include "Harl.hpp"

int compareString(std::string level)
{
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for (size_t i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return (i + 1);
	}
	return (5);
}

int main(int argc, char **argv) 
{
	int compare;
	std::string level;

	if (argc != 2)
	{
		std::cerr << "Wrong arguments" << std::endl;
		return (1);
	}
	level = argv[1];
	compare = compareString(level);
	Harl harl;
	switch (compare) {
		case 1:
			harl.debug();
			// fall through
		case 2:
			harl.info();
			// fall through
		case 3:
			harl.warning();
			// fall through
		case 4:
			harl.error();
			break;
		default:
			std::cout << "Opción no válida" << std::endl;
	}
	return (0);
}