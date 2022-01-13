#include <iostream>
#include "Sales_item.h"
using namespace std;

/*读取多个具有相同ISBN的销售纪律，输出所用记录的和*/

int main()
{
	Sales_item item1, item2, item3, item4;
	cin >> item1 >> item2 >> item3 >> item4;
	cout << item1 + item2 + item3 + item4;

	system("pause");
	return EXIT_SUCCESS;
}