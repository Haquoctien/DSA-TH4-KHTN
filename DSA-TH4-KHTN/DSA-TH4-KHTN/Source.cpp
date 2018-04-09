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
	system("pause");
	return 0;
}
