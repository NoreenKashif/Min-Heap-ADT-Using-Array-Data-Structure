#include<iostream>
#include"MinHeap.h"
using namespace std;
//TASK-02
void HeapSort(MinHeap<int>arr,int N)
{
	int* array = new int[N];
	for (int i = 0; i < N; i++)
	{
		array[i]=arr.removeMin();
	}
	for (int i = 0; i < N; i++)
	{
		cout << array[i] << " ";
	}
}
int main()
{	

	
	MinHeap<int>m(12);
	m.insert(1);
	m.insert(2);
	m.insert(3);
	m.insert(4);
	m.insert(0);
	m.insert(-1);
	m.insert(6);
	m.insert(12);
	m.insert(-10);
	m.insert(10);
	m.insert(265);
	m.insert(233);
	HeapSort(m, 12);
	return 0;
}