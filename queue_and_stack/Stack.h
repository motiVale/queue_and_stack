#pragma once
#include <iostream>
#include <string>
using namespace std;


class Stack
{
	//������ � ������� ������� �����
	enum { EMPTY = -1, FULL = 20 };
	//������ ��� �������� ������
	char st[FULL + 1];
	//��������� �� ������� �����
	int top;
public:
	//�����������
	Stack();
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