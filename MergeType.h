#pragma once
using namespace std;

class MergeType
{
public:
	MergeType(int max);
	~MergeType();

	void merge(int const left, int const mid, int const right);
	void mergeSort(int const begin, int const end);

	int* elements;
	int  maxElems;

};

