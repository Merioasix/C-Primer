#include <iostream>
#include "Sales_item.h"
using namespace std;

//编写程序，读取两个ISBN相同的Sales_item对象，输出它们的和
int main()
{
	Sales_item item1,item2;
	cin >> item1 >> item2;

	cout << item1 + item2 << endl;

	system("pause");
	return EXIT_SUCCESS;
}