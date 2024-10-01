#include "Stack.h"
#include "Node.h"

Stack::Stack()
{
	top == NULL;
}

void Stack::push(int value)
{
	Node* temp = new Node;
	temp->Set_Data(value);
	temp->Set_Next(NULL);

	if (temp != NULL)
	{
		temp->Set_Next(top);
	}
	top = temp;
}

void Stack::pop()
{
	if (top == NULL)
	{
		cout << "Stack Underflow!" << endl;
	}

	Node* temp = top;
	top = temp->Get_Next();
	delete temp;
}

void Stack::display()
{
	Node* current = top;
	cout << "The values in stack are: " << endl;
	while (current != NULL)
	{
		cout << current->Get_Data() << " ";
		current = current->Get_Next();
	}
	cout << endl;
}