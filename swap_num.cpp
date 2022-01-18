#include <iostream>

/*function:swap two int numbers*/
void swap(int *ia, int *ib);
int main()
{
	int a = 0, b = 0;
	std::cout << "Please enter two numbers:";
	std::cin >> a >> b;
	swap(&a, &b);
	std::cout << a << " " << b;
	system("pause");
	return EXIT_SUCCESS;
}


void swap(int *ia, int *ib)
{
	int temp = 0;
	temp = *ia;
	*ia = *ib;
	*ib = temp;
}