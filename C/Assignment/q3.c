#include <stdio.h>
#include<stdlib.h>
#include <string.h>

#pragma warning(disable:4996)
#define n 2


typedef struct {
	char* Title;
	float Price;
}Books;

void Display(Books *Array,int size);

float AverageBookPrice(Books *Array);
Books* Add(Books* Array, int* size);
//int FindMid(int arr[], int size);
//void Reverse(int *arr, int end);
//void power(int* x, int* y);

int main() {

	/*int arr[5] = { 1, 2 ,3 ,4, 5 };
	Reverse(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
	int middle = FindMid(arr, 5);
	printf("%d\n", middle);

	int x = 5;
	int y = 2;
	power(&x, &y);
	printf("%d\n", x);*/

	/*Books test;
	test.Price = 2.2;
	test.Title = "Hello";

	Books* test2 = &test;
	printf("%s", *test2->Title);

	char* test3 = malloc(5 * sizeof(int));
	strcpy_s(test3, 5*sizeof(int),"Fined");
	printf("%s\n", test3);
	free(test3);*/


	
	int number= malloc(sizeof(int));
	printf("\nPlease enter number of books you want to enter");
	scanf("\n%d", &number);
	Books* Array = malloc(sizeof(Books)* number);

	if (Array == NULL) {
		printf("\nmemory with allocation");
		return 0;
	}
	for (int i = 0; i < number; i++) {
		
		printf("\nPlease enter title\n");
		Array[i].Title = malloc(28*sizeof(*(Array[i].Title)));
		scanf("%27s", Array[i].Title);
		printf("%s\n", Array[i].Title);
		printf("\nPlease enter Price");
		scanf("%f", &Array[i].Price);
		printf("%.2f\n", Array[i].Price);
	}
	printf("%.2f books1\n", Array[0].Price);
	printf("%.2f books2\n", Array[1].Price);
	Display(Array, number);
	printf("\nAverage Price: %.3f\n", AverageBookPrice(Array));
	Books *new = Add(Array, number);
	printf("%.2f books1\n", new[0].Price);
	Display(new, number+1);
	free(new);
	printf("Free Array");
	/*Books Book1 = {"C programming", 9.5};
	Books Book2 = {"C++ programming", 11.5};


	Books Book[20];
	Book[0] = Book1;
	Book[1] = Book2;
	Display(Book, 2);
	printf("%.3f\n", AverageBookPrice(&Book));
	Books lmao[3];
	
	lmao[0] = Book[0];
	lmao[1] = Book[1];
	lmao[0].Title = "HEYYY";
	lmao[2].Title="I love game dev";
	lmao[2].Price = 2.5;
	Display(&lmao, 3);
	Books NewBooks[3];
	Add(&NewBooks, &Book);
	printf("FinishCopying\n");
	Display(&NewBooks, n+1);
	printf("Erm?");
	printf("Lmao\n");*/

	return 0;
}

void Display(Books *Array, int size) {
	for (int i = 0; i < size; i++) {
		printf("Book title : %s\n", Array[i].Title);
		printf("Book price : %.2f\n", Array[i].Price);
	}
}

float AverageBookPrice(Books *Array) {
	float result = 0;
	for (int i = 0; i < n; i++) {
		result += Array[i].Price;
	}
	result /= 2;
	return result;
}


 Books* Add(Books *Array, int* size) {
	int number = size + 1;
	int size2 = size;
	printf("%d\n", size);
	Books* NewArray = malloc(number* sizeof(Books));
	
	for (int i = 0; i < size; i++) {
		NewArray[i] = Array[i];
		printf("%s%d\n", NewArray[i].Title, i);
	}


	printf("\nPlease enter title\n");
	NewArray[size2].Title = malloc(28 * sizeof(*(NewArray[size2].Title)));
	scanf("%27s", NewArray[size2].Title);
	printf("%s\n", NewArray[size2].Title);
	printf("\nPlease enter Price");
	scanf("%f", &NewArray[size2].Price);
	printf("%.2f\n", NewArray[size2].Price);

	Array = NewArray;
	size = number;
	printf("\n\n%d\n", size);
	

	printf("Finish Copying\n");
	
	return NewArray;
}

//int FindMid(int arr[], int size)
//{
//	
//	return size%2==0 ? arr[((size/2)+1)]: arr[((size / 2))]+ arr[((size / 2) + 1)];
//}
//
//void Reverse(int *arr, int size)
//{
//	int end = (size - 1);
//	int temp;
//	int start = 0;
//	while (start < end)
//	{
//		temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//}
//
//void power(int* x, int* y)
//{
//	int ok = *x;
//	printf("%d\n", ok);
//	int ok2 = *y;
//	int number = 1;
//
//	for (int i = 0; i < ok2; i++)
//		number *= ok;
//	
//	*x = number;
//	return;
//}