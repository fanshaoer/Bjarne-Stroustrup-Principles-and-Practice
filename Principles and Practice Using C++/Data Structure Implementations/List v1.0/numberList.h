#pragma once

class NumberList
{
	private:
		struct ListNode
		{
			double value;
			struct ListNode* next; // ListNode* next
		};

		ListNode* head;

	public:
		NumberList()
		{
			head = NULL;
		}
		~NumberList();

		void appendNode(double);
		void insertNode(double);
		void deleteNode(double);
		void displayList() const;
};