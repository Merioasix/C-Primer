#include <iostream>
#include "Sales_item.h"
using namespace std;

/*读取多条销售记录，并统计每个isbn（每本书）有几条销售记录*/
int main()
{
	Sales_item total;//保存下一条交易记录的变量
	//读入第一条交易记录，并确保有数据可以处理
	if (cin >> total)
	{
		Sales_item trans;//保存和的变量
		//读入并处理剩余交易记录
		while (cin >> trans)
		{
			if (total.isbn() == trans.isbn())
				total += trans;//更新总销售额
			else
			{
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;//打印最后一本书的结果
	}
	else
	{
		//no input
		cerr << "No data !" << endl;
		return -1;
	}

	system("pause");
	return EXIT_SUCCESS;
}