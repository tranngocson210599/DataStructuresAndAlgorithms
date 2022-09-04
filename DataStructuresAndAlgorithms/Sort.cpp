#include<iostream>
using namespace std;
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int partition(int arr[],int low,int high)
{
	int pivot = arr[high];
	int count = low - 1;
	for (int i = low; i < high; i++)
	{
		if (arr[i] <= pivot)
		{
			count++;
			swap(arr[i], arr[count]);
		}
			
	}
	swap(arr[count], arr[high]);
	return count + 1;
}
void quickSort(int arr[],int low,int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);

	}
}
void printArray(int array[], int size) {
	int i;
	for (i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}
int main()
{
	int data[] = { 8, 7, 6, 1, 0, 9, 2 };
	int n = sizeof(data) / sizeof(data[0]);

	cout << "Unsorted Array: \n";
	printArray(data, n);

	
	quickSort(data, 0, n - 1);
	printArray(data, n);
	return 0;
}