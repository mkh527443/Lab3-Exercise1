#pragma once

#include<iostream>
using namespace std;

class Node
{
private:
	int data;
	Node* next;
public:
	Node();
	void Set_Data(int);
	int Get_Data();
	void Set_Next(Node*);
	Node* Get_Next();
};

