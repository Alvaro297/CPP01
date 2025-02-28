# include <string>
# include <fstream>
# include <iostream>

std::string	findAndReplace(std::string &texto, std::string &s1, std::string &s2)
{
	if (s1.empty() || s1 == s2)
		return texto;
	std::string newline;
	size_t start = 0;
	size_t pos = texto.find(s1);
	while (pos != std::string::npos)
	{
		newline += texto.substr(start, pos - start) + s2;
		start = pos + s1.length();
		pos = texto.find(s1, start);
	}
	newline += texto.substr(start);
	return (newline);
}

void	readFile(char const **argv)
{
	std::ifstream file(argv[1]);
	std::ofstream fileout;
	std::string texto;
	std::string filenameout;
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	filenameout = std::string(argv[1]) + ".replace";
	file.open(argv[1], std::ios::in);
	if (!file)
	{
		std::cerr << "Failed to open the file." << std::endl;
		return ;
	}
	fileout.open(filenameout, std::ios::out);
	if (!fileout)
	{
		std::cerr << "Failed to create the output file." << std::endl;
		return;
	}
	while (getline(file, texto))
	{
		std::string modified_line =  findAndReplace(texto, s1, s2);
		fileout << modified_line << std::endl; 
	}
	file.close();
	fileout.close();
}

int main(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout << "Incorrect arguments" << std::endl;
		return (1);
	}
	readFile(argv);
	return (0);
}
