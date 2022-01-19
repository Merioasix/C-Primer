#include <iostream>
/*function:use recursion to print every bit of integer */
int N(int n);

int main()
{
	int num = 0;
	std::cout << "Please input a number: ";
	std::cin >> num;
	N(num);


	system("pause");
	return EXIT_SUCCESS;
}

int N(int n)
{
	if (n / 10 == 0)
	{
		printf("%d ",n);
		return 0;
	}
	else
	{
		printf("%d ",n%10);
		return N(n / 10);
	}



}