#include "SLL.h"

int main(int argc, char const *argv[])
{
	intNodeList list;
	listInput(list);
	listOutput(list);
	intNode *head = popHead(list);
	cout << head->integer << " popped" << endl;
	intNode *tail = popTail(list);
	cout << tail->integer << " popped" << endl;
	listOutput(list);
	cout << "Nhap x de tim x trong list: ";
	int x;
	cin >> x;
	intNode* found = nodeWithVal(list, x);
	if (!found)
		cout << "Khong tim thay " << x << " trong list" << endl;
	else
		cout <<"Tim thay " << (found->integer) << endl;
	cout << "List hien co do dai la: " << numberOfNodes(list) << endl;
	sortList(list);
	listOutput(list);
	cout << "Nhap so muon them vao sorted list: ";
	cin >> x;
	cout << "Them node "<< x <<" vao sorted list: ";
	addNodeSorted(list, x);
	listOutput(list);
	cout << "Xoa node vua them vao: ";
	deleteNodeWithVal(list, x);
	listOutput(list);
	system("pause");
	return 0;
}
