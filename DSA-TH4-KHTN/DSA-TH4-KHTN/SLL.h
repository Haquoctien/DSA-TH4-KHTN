#pragma once
#include <iostream>
using namespace std;

struct intNode {
	unsigned integer;
	intNode *next;
};

struct intNodeList {
	intNode *head;
	intNode *tail;
};

void intNodeListInit(intNodeList &);
void listInput(intNodeList &);
void listOutput(intNodeList);
void listDestroy(intNodeList &);
void addHead(intNodeList &, intNode *);
void addTail(intNodeList &, intNode *);
intNode *newNode(int);
intNode *popHead(intNodeList &);
intNode *popTail(intNodeList &);
void deleteHead(intNodeList &);
void deleteTail(intNodeList &);
void deleteNodeWithVal(intNodeList &, unsigned);
int numberOfNodes(intNodeList);
intNode *nodeWithVal(intNodeList, unsigned);
void sortList(intNodeList &);
void swap(intNode *, intNode*);