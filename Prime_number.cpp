#include <iostream>

/*input a number check if it is a prime number*/
void check_prime();
int main()
{
	
	std::cout << "prime number of 100 to 200 are:";
	check_prime();
	system("pause");
	return EXIT_SUCCESS;
}


void check_prime()
{
	int num = 100;
	int flag = 0;
	while(num<=200)
	{
		flag = 1;
		for (int i = 2;i < num - 1;i += 2)
		{
			if (num % i == 0)
			{
				flag = 0;
			}

		}
		if (flag == 1)
		{
			std::cout << num << " ";
		}
		num++;
	}
	


}