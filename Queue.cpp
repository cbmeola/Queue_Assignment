// Queue functions created to display the FIFO nature of queues:

#include "stdafx.h"
using namespace std;
#include <iostream>

#include "Queue.h"

// Define capacity of our queue (5 elements):
#define CAPACITY 5


// Constructor:
Queue::Queue()
{
	size = 0;
}


// Check to see if queue is empty:
bool Queue::empty()
{
	if (size == 0)
		return true;
	else
		return false;
}


// Adds an integer x value to the front of the queue:
void Queue::enqueue(int x)
{
	/* Previous code from class:
	// New entry, size of queue = 5:
	dataArray[size%CAPACITY] = x;
	size++;
	*/

	// New code:
	cout << "\nEnqueue function called.";

	if (size == 5)
	{
		cout << endl << "Queue is full! Queue value at size " << size << " = " << dataArray[size] << endl;
	}
	else
	{
		
		dataArray[size % 5] = x;
		cout << endl << "Queue is not full! \nQueue value at size " << size << " = " << dataArray[size] << endl;
		size++;
	}

}


// Remove value at front of queue (if any):
int Queue::dequeue()
{
	/* Previous code from class:
	size--;
	return dataArray[size];
	*/

	// New code:
	cout << "\nDequeue function called.";
	size = 0;
	return front();

}

// Retrieve value at front of queue (if any):
int Queue::front()
{
	if (size == 0)
	{
		return dataArray[size];
	}
	else
	{
		for (int i = size; i >= 0; i--)
		{
			dataArray[size] = dataArray[i];
		}
		return dataArray[size];
	}

}


// Output the values stored in the queue, dataArray[]:
void Queue::display()
{
	cout << endl << endl << "Display of Full Queue:\n------------------" << endl;

	for (int i = 0; i < CAPACITY; i++)
	{
		cout << "Size " << i << " = " << dataArray[i] << endl;
	}

	cout << "------------------" << endl; 
}
