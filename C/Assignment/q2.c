#include <stdlib.h>
#include <stdio.h>

void DisplayArray(int* arr, int num);
void SelectionSort(int* arr);

static int n;

int main() {
	int days[2] = { 1,2 };
	int* ptr = days;
	printf("%u\n", sizeof(days));
	printf("%u\n", sizeof(*ptr));


	int arr[5] = { 1, 13, 5, 17, 11 };
	n = 5;
	DisplayArray(arr, 5);
	SelectionSort(arr);
	DisplayArray(arr, 5);

	return 0;
}

void DisplayArray(int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", *(arr + i));

	printf("\n");

	return;
}

void SelectionSort(int* ptr)
{
	int i, j, temp;

	// Sort the numbers using pointers 
	for (i = 0; i < n; i++) {

		for (j = i + 1; j < n; j++) {

			if (*(ptr + j) < *(ptr + i)) {

				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
	}

	
	
}