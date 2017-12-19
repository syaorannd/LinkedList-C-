//============================================================================
// Name        : LinkedList.cpp
// Author      : ThinhNN2
// Version     : Ver.1
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "List.h"
using namespace std;

int main() {
	List* pList = new List();
	pList->CreateNode(10);
	pList->CreateNode(100);
	pList->CreateNode(2);
	pList->CreateNode(8);
	pList->CreateNode(6);
	pList->InsertStart(9999);
	pList->insertEnd(2222);
	pList->insertPos(2, 1510);
	pList->deletePosition(2);
	pList->deletePosition(2);
	pList->deletePosition(2);
	pList->Display();
	pList->findData(2222);
	pList->findData(20);
	delete pList;
	pList = NULL;
	return 0;
}
