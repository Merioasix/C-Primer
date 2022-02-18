#include <iostream>
#include <vector>
#include <fstream>
#include <string>

void ReadFileToVec(const std::string& filename, std::vector<std::string>& vec)
{
	std::ifstream ifs(filename);
	if (ifs)
	{
		std::string buf;
		while (std::getline(ifs, buf))
		{
			vec.push_back(buf);
		}
	}

}



int main()
{
	std::vector<std::string> svec;
	ReadFileToVec("81.cpp",svec);
	for (const auto& word : svec)
	{
		std::cout << word << std::endl;
	}
	system("pause");
	return 0;
}