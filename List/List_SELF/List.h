#pragma once

#include <iostream>

struct ListNode {
	int val;//节点值
	ListNode* next;//下一级
	ListNode(int x) :val(x), next(nullptr) {}//构造函数
};

void insert(ListNode* n0, ListNode* p)
{
	ListNode* n1 = n0->next;
	p->next = n1;
	n0->next = p;
}

//删除n0后的首个节点
void remove(ListNode* n0)
{
	if (n0->next == nullptr)
		return;
	ListNode* n1 = n0->next;
	ListNode* n2 = n1->next;
	n0->next = n2;
	delete n1;
}

//访问节点中第index个节点, 返回节点地址
ListNode* access(ListNode* head, int index)
{
	for (int i = 0; i < index; i++)
	{
		if (head == nullptr)
			return nullptr;
		head = head->next;
	}
	return head;
}

int find(ListNode* head, int target)
{
	int index = 0;
	while (head != nullptr)
	{
		if (head->val == index)
			return index;
		head = head->next;
		index++;
	}
	return -1;
}