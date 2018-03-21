#pragma once

#ifndef operator_H
#define operator_H


class operator
{
	struct Node {

		char data;
		Node* next;
	};

private:
	Node* top; 
	int size;
public:
	operator();
	~operator();
	bool isEmpty();
	void push(char entry);
	char topItem();
	char pop();
};

#endif 
