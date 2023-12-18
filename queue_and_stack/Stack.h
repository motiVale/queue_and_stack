#pragma once
#include <iostream>
#include <string>
using namespace std;


class Stack
{
	//������ � ������� ������� �����
	unsigned int size = 20;//0 - empty; 20 - max;

	//������ ��� �������� ������
	char* st;
	char top;
	
public:
	//�����������
	Stack() : st{ new char[size]}, top{0} {
		st[0] = top;
	}
	Stack(int _size) : size{ _size }, st{ new char[size] }, top{0} {
		st[0] = top;
	}
	~Stack() {
		delete[] st;
	}
	bool IsEmpty();
	//���������� ��������
	void Push(char c);
	//���������� ��������
	char Pop();
	//������� �����
	void Clear();
	//�������� ������������� ��������� � �����
	bool IsEmpty();
	//�������� �� ������������ �����
	bool IsFull();
	//���������� ��������� � �����
	int GetCount();

};
}