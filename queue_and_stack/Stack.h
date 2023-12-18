#pragma once
#include <iostream>
#include <string>
using namespace std;


class Stack
{
	//Нижняя и верхняя границы стека
	unsigned int size = 20;//0 - empty; 20 - max;

	//Массив для хранения данных
	char* st;
	char top;
	
public:
	//Конструктор
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
	//Добавление элемента
	void Push(char c);
	//Извлечение элемента
	char Pop();
	//Очистка стека
	void Clear();
	//Проверка существования элементов в стеке
	bool IsEmpty();
	//Проверка на переполнение стека
	bool IsFull();
	//Количество элементов в стеке
	int GetCount();

};
}