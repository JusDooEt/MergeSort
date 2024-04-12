#include <iostream>
using namespace std;

void merge(int arr[], int const left, int const mid, int const right)
{
	int const leftSize = mid - left + 1;
	int const rightSize = right - mid;

	int leftArrIndex	= 0;
	int rightArrIndex	= 0;
	int mergedArrIndex	= left;

	int* leftArr = new int[leftSize];
	int* rightArr = new int[rightSize];

	for (int i = 0; i < leftSize; i++)
		leftArr[i] = arr[left + i];

	for (int j = 0; j < rightSize; j++)
		rightArr[j] = arr[mid + 1 + j];

	while (leftArrIndex < leftSize && rightArrIndex < rightSize)
	{
		if (leftArr[leftArrIndex] <= rightArr[rightArrIndex])
		{
			arr[mergedArrIndex] = leftArr[leftArrIndex];
			leftArrIndex++;
		}
		else
		{
			arr[mergedArrIndex] = rightArr[rightArrIndex];
			rightArrIndex++;
		}
		mergedArrIndex++;
	}

	while (leftArrIndex < leftSize)
	{
		arr[mergedArrIndex] = leftArr[leftArrIndex];
		leftArrIndex++;
		mergedArrIndex++;
	}

	while (rightArrIndex < rightSize)
	{
		arr[mergedArrIndex] = rightArr[rightArrIndex];
		rightArrIndex++;
		mergedArrIndex++;
	}

	delete[] leftArr;
	delete[] rightArr;
}

void mergeSort(int arr[], int const begin, int const end)
{
	if (begin >= end)
		return;

	int mid = begin + (end - begin) / 2;
	mergeSort(arr, begin, mid);
	mergeSort(arr, mid + 1, end);
	merge(arr, begin, mid, end);
}

void printArray(int arr[], int size)
{
	cout << "Array: |";
	for (int i = 0; i < size; i++)
		cout << arr[i] << "|";
	cout << endl;
}