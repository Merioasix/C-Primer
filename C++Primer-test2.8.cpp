#include <iostream>


/*请利用转义序列编写一段程序，要求先输出2M，然后转到心一行，
修改程序使其输出2，然后输出制表符，再输出M，最后转到新一行*/

int main()
{
	std::cout << "2\x4d" << std::endl;
	std::cout << "2\t\x4d" << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}