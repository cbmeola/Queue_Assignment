// Creates Queue class, initializes member functions and data:

#pragma once
#include "stdafx.h"
using namespace std;
#include <iostream>


class Queue
{
	int dataArray[5];
	int size;
	
public:
	// Member functions:
	Queue();
	bool empty();
	void enqueue(int);
	int dequeue();
	int front();
	void display();

};