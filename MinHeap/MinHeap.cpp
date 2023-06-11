
#include"MinHeap.h"
#include<iostream>
using namespace std;
template<typename T>
void MinHeap<T>::swap(T & a, T &b)
{
	T temp = b;
	b = a;
	a = temp;
}
template<typename T>
MinHeap<T>::MinHeap(int max)
{
	maxNodes = max;
	nodesCount = 0;
	data = new T[maxNodes];
}
template<typename T>
T MinHeap<T>::getMin() 
{
	if (nodesCount == 0)
		return -1;
	cout << data[0];
	return data[0];
}
template<typename T>
void MinHeap<T>::minHeapify(int i)
{
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int smallest = i;
	if (l < nodesCount && data[l] < data[i])
		smallest = l;
		if (r < nodesCount && data[r] < data[smallest])
			smallest = r;
		if (smallest != i)
		{
			swap(data[i], data[smallest]);
			minHeapify(smallest);
		}
}

template<typename T>
void MinHeap<T>::insert(T val)//heapUp
{
	if (maxNodes == nodesCount)
	{
		cout << "\nYou can't insert the nodes\n";
		return;
	}
	
	data[nodesCount++] = val;
	int current = nodesCount - 1;
	while (current != 0 && data[current] < data[(current - 1) / 2])
	{
		swap(data[current], data[(current - 1) / 2]);
		current=(current-1)/2;
	}
}

template<typename T>
T MinHeap<T>::removeMin()//heapDown
{
	if (nodesCount == 0)
		return -1;
	if (nodesCount == 1)
	{
		nodesCount--;
		return data[0];
	}
	T minimum = data[0];
	data[0] = data[nodesCount - 1];
	nodesCount--;
	minHeapify(0);

	return minimum;
}


template<typename T>
void MinHeap<T>::print()
{
	int i = 0;
	while (i<nodesCount)
	{

		cout << data[i] << " ";
		i++;
	}
}