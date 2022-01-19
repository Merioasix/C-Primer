#include <iostream>
/*function:use recursion to make strlen*/
int str_recursion(char *arr);

//int main()
//{
//
//	char arr[] = "abcedfg";
//
//	std::cout << "strlen of the arr are: ";
//	std::cout<<str_recursion(arr);
//	system("pause");
//	return EXIT_SUCCESS;
//}
//
//int str_recursion(char *arr)
//{
//	static int count = 0;
//	if (*arr == NULL)
//	{
//		return count;
//	}
//	else
//	{
//		count++;
//		return str_recursion(arr+1);
//	}
//
//}
int str_count(char* arr);
int main()
{
	char arr[] = "abcedfg";
	std::cout << "strlen of the arr are: ";
	std::cout << str_count(arr);
	system("pause");
	return EXIT_SUCCESS;
}

int str_count(char* arr)
{
	int count = 0;
	while (*arr)
	{
		count++;
		arr ++;
	}
	return count;


}