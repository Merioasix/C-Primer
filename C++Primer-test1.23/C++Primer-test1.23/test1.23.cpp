#include <iostream>
#include "Sales_item.h"
using namespace std;

/*��ȡ�������ۼ�¼����ͳ��ÿ��isbn��ÿ���飩�м������ۼ�¼*/
int main()
{
	Sales_item total;//������һ�����׼�¼�ı���
	//�����һ�����׼�¼����ȷ�������ݿ��Դ���
	if (cin >> total)
	{
		Sales_item trans;//����͵ı���
		//���벢����ʣ�ཻ�׼�¼
		while (cin >> trans)
		{
			if (total.isbn() == trans.isbn())
				total += trans;//���������۶�
			else
			{
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;//��ӡ���һ����Ľ��
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