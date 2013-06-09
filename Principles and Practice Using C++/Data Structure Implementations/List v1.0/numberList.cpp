#include <iostream>
#include "numberList.h"

using namespace std;

void NumberList::appendNode(double num)
{
	ListNode* newNode;
	ListNode* nodePtr;

	newNode = new ListNode;
	newNode->value = num;
	newNode->next = NULL;

	if (!head)
	{
		head = newNode;
	}
	else
	{
		nodePtr = head;

		while (nodePtr->next)
		{
			nodePtr = nodePtr->next;
		}

		nodePtr->next = newNode;
	}
}

void NumberList::displayList() const
{
	ListNode* nodePtr = head;

	while (nodePtr)
	{
		cout << nodePtr->value << endl;

		nodePtr = nodePtr->next;
	}
}

void NumberList::insertNode(double num)
{
	ListNode* newNode;
	ListNode* nodePtr;
	ListNode* previousNode = NULL;

	newNode = new ListNode;
	newNode->value = num;

	if (!head)
	{
		head = newNode;
		newNode->next = NULL;
	}
	else
	{
		nodePtr = head;
		previousNode = NULL;

		while (nodePtr != NULL && nodePtr->value < num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (previousNode == NULL)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

void NumberList::deleteNode(double num)
{
	ListNode* nodePtr;
	ListNode* previousNode;

	if (!head)
	{
		return;
	}

	if (head->value == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;

		while (nodePtr != NULL && nodePtr->value != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

NumberList::~NumberList()
{
	ListNode* nodePtr;
	ListNode* nextNode;

	nodePtr = head;

	while (nodePtr != NULL)
	{
		nextNode = nodePtr->next;

		delete nodePtr;

		nodePtr = nextNode;
	}
}