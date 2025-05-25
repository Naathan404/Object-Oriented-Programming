#include "Stack.h"
#include <stack>

#include <stdexcept>
template<class T>
Stack<T>::Stack()
{
	head = NULL;
}

template<class T>
Stack<T>::~Stack()
{
	while (head)
	{
		  Node* temp = head;
		  head = head->next;
		  delete temp;
	}
}

template<class T>
void Stack<T>::push(T x)
{
	Node* newNode = makeNode(x);
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	newNode->next = head;
	head = newNode;
}

template<class T>
void Stack<T>::pop()
{
	if (head == NULL) return;
	Node* temp = head;
	head = head->next;
	delete head;
}

template<class T>
T Stack<T>::top() const
{
	if (head == NULL)
	{
		throw std::runtime_error("stack is empty!");
	}
	return head->data;
}

template<class T>
bool Stack<T>::isEmpty() const
{
	return head == NULL;
}
