#include <iostream>

/*Self input multiplication table*/


int main()
{
	int num = 0;
	std::cout << "Please enter a number:";
	std::cin >> num;
	for (int i = 1;i <= num;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			std::cout << j << "*" << i << "=" << i * j << "\t";
		}
		std::cout << std::endl;

	}






	system("pause");
	return EXIT_SUCCESS;
}