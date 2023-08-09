#include "List.h"

int main()
{
	std::list<int> ListNode;
	std::vector<int> numbers = { 5,7,33,42,76,11,12 };
	for (auto& i : numbers)
	{
		//带&与不带&的区别
		//带&:可改变数值
		//不带&:不可改变数值
		ListNode.push_back(i);
	}

	std::cout << "遍历list的方法:" << std::endl;
	std::cout << "方法1:\t";
	for (std::list<int>::iterator i = ListNode.begin(); i != ListNode.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;
	std::cout << "方法2:\t";

	for (auto i : ListNode)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	std::cout << "方法3(倒过来遍历):\t";
	for (std::list<int>::reverse_iterator i = ListNode.rbegin(); i != ListNode.rend(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;


	std::cout << "排序list的方法:" << std::endl;
	std::cout << "从小到大:\t";
	std::list<int> temp1(ListNode);//拷贝list
	temp1.sort();
	for (auto i : temp1)
	{
		std::cout << std::setw(3) << std::setfill('0') << i << " ";
	}
	std::cout << std::endl;

	std::cout << "从大到小:\t";
	std::list<int> temp2(ListNode);//拷贝list
	temp2.sort(std::greater());
	for (auto i : temp2)
	{
		std::cout << std::setw(3) << std::setfill('0') << i << " ";
	}
	std::cout << std::endl;


	std::cout << "逆序:\t";
	std::list<int> temp3(ListNode);//拷贝list
	temp3.reverse();
	for (auto i : temp3)
	{
		std::cout << std::setw(3) << std::setfill('0') << i << " ";
	}
	std::cout << std::endl;

	//ListNode.push_back(114514);//在尾部插入
	//ListNode.push_front(114514);//在头部插入
	//ListNode.pop_back();//尾部出栈
	//ListNode.pop_front();//头部出栈

	//ListNode.clear();//清空


	auto it = std::next(ListNode.begin());
	it = std::next(it);
	ListNode.emplace(it, 114514);

	std::cout << "在指定位置插入:\t";
	for (std::list<int>::iterator i = ListNode.begin(); i != ListNode.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;


	if (ListNode.empty())
	{
		std::cout << "链表为空" << std::endl;
	}
	else
	{
		std::cout << "链表不为空" << std::endl;
	}





	////安全指针位置
	//auto begin = ListNode.begin();//开始的位置


	//auto temp4 = std::next(begin);//移动到下一个位置
	//temp4 = std::next(temp4);//再次移动


	//auto temp5 = ListNode.begin();
	//std::advance(temp5, 4);//向后移动,从0开始,这里向后移动4个,也就是移动到数学第五个(从1开始),计算机第四个(从0开始)


	//auto temp6_first = ListNode.begin();
	//auto temp6_last = ListNode.begin();
	//std::advance(temp6_first, 1);
	//std::advance(temp6_last, 3);
	//ListNode.erase(temp6_first, temp6_last);//删除first和last之间的元素

	//auto temp7 = ListNode.begin();
	//std::list<int>temp8 = { 520,1314 };
	//std::advance(temp7, 2);
	//ListNode.splice(temp7, temp8);//参数1是写入位置,参数2是一整个list.可以把参数2插入到参数一位置中


	//auto temp9 = ListNode.begin();
	//std::list<int>temp10 = { 520,1314,5555,6666,7777,8888 };
	//auto temp11 = temp10.begin();
	//auto temp12 = temp10.end();
	//std::advance(temp11, 1);//向后移动一位
	//std::advance(temp12, -1);//向前移动一位
	//std::advance(temp9, 2);
	//ListNode.splice(temp9, temp10, temp11, temp12);//参数1是写入位置,参数2是一整个list.参数3/4指定了参数2要被复制的范围,可以把参数2()指定范围插入到参数一位置中

	//ListNode.unique();//去除重复元素


	return 0;
	
}
