

#pragma once
template<class T>

class Stack
{
private:
	struct Node
	{
		T data;
		Node* next;
	};

	Node* head;
	Node* makeNode(T x)
	{
		Node* newNode = new Node;
		newNode->data = x;
		newNode->next = NULL;
		return newNode;
	}

public:
	Stack();
	~Stack();

	void push(T x);
	void pop();
	T top() const;
	bool isEmpty() const;
	int size() const;

};
