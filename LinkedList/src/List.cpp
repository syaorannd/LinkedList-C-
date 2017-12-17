/*
 * List.cpp
 *
 *  Created on: Dec 17, 2017
 *      Author: susu
 */

#include "List.h"

List::List() {
	head = NULL;
	tail = NULL;
}

List::~List() {
	// TODO Auto-generated destructor stub
}

void List::CreateNode(int value)
{
	node* temp = new node;
	temp->data = value;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else {
		tail->next = temp;
		tail = temp;
	}


}
void List::Display(){
	node* temp = new node;
	temp = head;
	if(head == NULL)
	{
		std::cout << "Chua khoi tao list!" << std::endl;
	}
	else
	{
		while(temp != NULL)
		{
			std::cout << temp->data << std::endl;
			temp = temp->next;
		}
	}

}
void List::InsertStart(int value)
{
	node* temp = new node;
	temp->data = value;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		tail->next = NULL;
		temp = NULL;
	}
	else
	{
		temp->next = head;
		head = temp;
	}

}
void List::insertEnd(int value)
{
	node* temp = new node;
	temp->data = value;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
		temp = NULL;
	}
}

void List::insertPos(int pos, int value)
{
	node* cur = new node;
	node* pre = new node;
	node* temp = new node;
	if(head == NULL && pos == 0)
	{

	}
	else
	{
		cur = head;
		for(int i = 1; i < pos; i++)
		{
			pre = cur;
			cur = cur->next;
		}
		temp->data = value;
		pre->next = temp;
	    temp->next=cur;
	}
}
void List::deletePosition(int pos)
{
    node *current=new node;
    node *previous=new node;
    current=head;
    for(int i=1;i<pos;i++)
    {
      previous=current;
      current=current->next;
    }
    previous->next=current->next;
}
void List::findData(int value)
{
	int i = 0;
	node* temp = new node;
	temp = head;
	if(head == NULL)
	{

	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
			if(temp->data == value)
			{
				i = i + 1;
			}
		}
	}
	cout << "Found " << value << ": " << i << " time! " << endl;
}

