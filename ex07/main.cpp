#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc < 4)
		std::cout << "Please input Filename and two string!!!" << std::endl;
	else if (argc == 4)
	{
		std::string str;
		std::ifstream fin(argv[1]);

		if (fin.is_open())
		{
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
				std::cout << str << std::endl;
			}
		}
		else
			std::cout << "Cannot open file!!!" << std::endl;
	}
	else
		std::cout << "Too many arguments!!!" << std::endl;
	return (0);
}