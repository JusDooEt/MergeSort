# MergeSort
## Output
```
Given array is
Array: |22|55|125|65|98|4564|8465|51654|548465|56451|857945|2187|489632|32658|215414|896326|4874|3210|23150|68974|366598|4123321|21489|32215|698741|
Starting timer

Sorted array is
Array: |22|55|65|98|125|2187|3210|4564|4874|8465|21489|23150|32215|32658|51654|56451|68974|215414|366598|489632|548465|698741|857945|896326|4123321|

Sorting took 0.00000 secs to execute
Press any key to continue . . .
```

## About
This program will sort an array of integers into ascending order using the merge sort algorithm. The merge sort algorithm will divide the array into equal halves and recursively divide the arrays until they are a single element. The function will then merge the small sub arrays into the main array in a sorted order. The functions are located in the file, [MergeSort.cpp](MergeSort.cpp). The program will output the unsorted list to console and begin a timer to measure the execution time of the merge sort functions. After sorting the sorted array and execution time will be displayed to the console.

## Usage
- The MergeSort.cpp file can be copied into a project requiring a merger sorting algorithm and the function prototypes must be declared either in main or in a header file included in the project.

## Algorithm
The merge sort is one of the most time efficient sorting algorithms with a time complexity of O(n log n) in all cases. In terms of memory allocation, dynamic arrays are created in the algorithm to sort the original array and deleted after assigning the values back. Therefore, if memory usage is a concern and the element amount is very large this sorting algorithm might not be the best for this scenario.

- MergeSort Function
  - This function receives the unsorted array, a left index and a right index, and recursively calls itself dividing the original array into subarrays to be sorted.
  - A mid index is calculated by using the left and right index.
  - The base case of this recursive function is when the left index is greater than or equal to the right index.
  - Once the base case is met the function will call the Merge function on the divided subarrays.
- Merge function
  - This function receives an array, a left, mid and right index.
  - The indexes passed through the function are used to calculate the size of the subarrays.
  - The calculated size is used to create two dynamically allocated arrays representing the left and right subarrays.
  - The subarrays will be looped through and their elements will be compared and put the lesser element into the merged array.
  - The function will delete the dynamically allocated subarrays.
## Example
![MergeSortDiagram](https://github.com/JusDooEt/MergeSort/assets/152052216/3d64b1a0-3d5f-4472-b350-d33dc795a35d)




