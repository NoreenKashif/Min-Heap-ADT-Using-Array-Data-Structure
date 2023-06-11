#ifndef MINHEAP_H
#define MIN_HEAP_H
template<typename T>
class MinHeap
{
	int maxNodes;
	int nodesCount;
	T* data;
public:
	MinHeap(int maxNodes);
	T getMin();
	void minHeapify(int i);
	void insert(T val);
	void swap(T& a, T& b);
	T removeMin();
	void print();
};
#endif
