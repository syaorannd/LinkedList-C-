/*
 * List.h
 *
 *  Created on: Dec 17, 2017
 *      Author: susu
 */
#include <iostream>
using namespace std;

#ifndef LIST_H_
#define LIST_H_
struct node {
	int data;
	node* next;
};

class List {
public:
	List();
	virtual ~List();
	void CreateNode(int value);
	void Display();
	void InsertStart(int value);
	void insertEnd(int value);
	void insertPos(int pos, int value);
	void deletePosition(int pos);
	void findData(int value);
private:
	node* head;
	node* tail;
};

#endif /* LIST_H_ */
