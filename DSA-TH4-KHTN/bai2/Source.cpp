#include <iostream>
#include "../DSA-TH4-KHTN/SLL.h"
using namespace std;
intNodeList decimalToBinary(int);
int main(void) {
	cout << "Nhap mot so thap phan de chuyen so nay ve nhi phan: ";
	int n;
	cin >> n;
	intNodeList ans = decimalToBinary(n);
	listOutput(ans);
	system("pause");
	return 0;
}

intNodeList decimalToBinary(int x)
{
	intNodeList list;
	intNodeListInit(list);
	while (x > 0)
	{
		addHead(list, newNode(x % 2));
		x /= 2;
	}
	return list;
}


