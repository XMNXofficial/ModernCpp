#include<iostream>
#include <stdexcept>

template<typename T>
class MyVector {
private:
	T* Vals;//����
	int Capacity = 10;//�б�����
	int Size = 0;//Ԫ������
	int ExtendRatio = 2;//���ݱ���
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
			throw std::out_of_range("����Խ��");
		else
			return Vals[index];
	}
	void set(int index, T val)
	{
		if (index < 0 || index >= size())
			throw std::out_of_range("����Խ��");
		else
			Vals[index] = val;
	}
	void insert(int index, T val)
	{

	}

};