#include"List.h"

int main()
{
	/* 初始化链表 1 -> 3 -> 2 -> 5 -> 4 */
// 初始化各个节点 
	ListNode* n0 = new ListNode(1);
	ListNode* n1 = new ListNode(3);
	ListNode* n2 = new ListNode(2);
	ListNode* n3 = new ListNode(5);
	ListNode* n4 = new ListNode(4);
	// 构建引用指向
	n0->next = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	return 0;
}