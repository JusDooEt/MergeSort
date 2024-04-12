#include <iostream>
#include <iomanip>
using namespace std;

void merge(int arr[], int const left, int const mid, int const right);
void mergeSort(int arr[], int const begin, int const end);
void printArray(int arr[], int size);

int main()
{
    time_t start, end;
    double execTime;
    int arr[] = {22,55,125,65,98,4564,8465,51654,548465,56451,857945,2187,489632,32658,215414,896326,4874,3210,23150,68974,366598,4123321,21489,32215,698741};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);

    cout << "Starting timer\n";
    time(&start);
    ios_base::sync_with_stdio(false);
    mergeSort(arr, 0, arr_size - 1);
    time(&end);
    execTime = double(end - start) / double(CLOCKS_PER_SEC);

    cout << fixed << setprecision(5);
    cout << "\nSorted array is \n";
   
    printArray(arr, arr_size);
    cout << "\nSorting took " << execTime << " secs to execute\n";
    system("pause");
    return 0;


	
}