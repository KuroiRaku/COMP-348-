#include <stdio.h>
#include <stdlib.h>

void Well(int* a);


/*
int main() {
	int a = 3;
	Well(&a);
	printf("%d\n", a);
	
	return 0;
}
*/
void Well(int* a)
{
	*a = 17;
	return;
}