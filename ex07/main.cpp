#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc < 4)
		std::cout << "Please input Filename and two string!!!" << std::endl;
	else if (argc == 4)
	{
		std::string str;
		std::ifstream fin(argv[1]);
		char *filename = strdup(argv[1]);

		if (fin.is_open())
		{
			strcat(filename, ".replace");
			std::ofstream out(filename);

			while (std::getline(fin, str))
			{
				size_t len = strlen(argv[2]);
				for (int i = 0; i < (int)str.length(); i++)
				{
					if (str.compare(i, len, argv[2]) == 0)
					{
						str.replace(i, len, argv[3]);
						i += strlen(argv[3]);
					}
				}
				out << str + "\n";
			}
			free(filename);
		}
		else
			std::cout << "Cannot open file!!!" << std::endl;
	}
	else
		std::cout << "Too many arguments!!!" << std::endl;
	return (0);
}