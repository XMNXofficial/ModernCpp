#pragma once

#include <iostream>

struct ListNode {
	int val;//节点值
	ListNode* next;//下一级
	ListNode(int x) :val(x), next(nullptr) {}//构造函数
};