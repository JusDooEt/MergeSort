#include "MergeType.h"

MergeType::MergeType(int max)
{
	maxElems = max;
	elements = new int[maxElems] {0};
}

MergeType::~MergeType()
{
	delete[] elements;
}

void MergeType::merge(int const left, int const mid, int const right)
{

}

void MergeType::mergeSort(int const begin, int const end)
{
	if (begin >= end)
		return;

	int mid = begin + (end - begin) / 2
}


