#include <iostream>
#include <string>
using namespace std;

//int Abs(int ia);
//void swap(int* p1, int* p2);
//int function(int ia, int* ib);
int Mul_elem(initializer_list<int> ls);
int main(int argc,char **argv)
{
	initializer_list<int> ls{1,2,3,4,5,6,7,8,9};
	/*string str;
	for (auto i = 1;i < argc;++i)
	{
		str += argv[i];
		str += " ";
	}
	cout << str << endl;*/
	cout<< Mul_elem(ls) << endl;

	system("pause");
	return 0;
}

//int Abs(int ia)
//{
//	
//	return abs(ia);
//}
//
//void swap(int *p1, int *p2)
//{
//	int temp = 0;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}


//void print(const int ia[], size_t size)
//{
//	for (size_t i = 0;i != size;++i)
//	{
//		cout << ia[i] << endl;
//	}
//}

//int function(int ia, int* ib)
//{
//	return ia > * ib ? ia : *ib;
//}

int Mul_elem(initializer_list<int> ls)
{
	int sum = 0;
	for (auto beg = ls.begin();beg != ls.end();++beg)
	{
		sum += *beg;
	}
	return sum;
}
