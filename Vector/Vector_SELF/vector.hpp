#include<iostream>
#include <stdexcept>

template<typename T>
class MyVector {
private:
	T* Vals;//数组
	int Capacity = 10;//列表容量
	int Size = 0;//元素数量
	int ExtendRatio = 2;//扩容倍数
public:
	MyVector()
	{
		Vals = new T[Capacity];
	}
	~MyVector()
	{
		delete[] Vals;
	}
	int size() { return Size; }
	int capacity() { return Capacity; }
	T at(int index)
	{
		if (index < 0 || index >= size())
			throw std::out_of_range("索引越界");
		else
			return Vals[index];
	}
	void set(int index, T val)
	{
		if (index < 0 || index >= size())
			throw std::out_of_range("索引越界");
		else
			Vals[index] = val;
	}
	void insert(int index, T val)
	{

	}

};