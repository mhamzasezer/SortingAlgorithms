#include <stdio.h>
#include "headerfile.h"

int main(void)
{
	struct data d[1000];
	int n, c;

	n = read_data("data.csv", d);
	printf("Before\n");
	print_data(d, n);
	printf("Select [1]selection sort [2]bubble sort:");
	scanf("%d", &c);
	switch (c)
	{
	case 1:
		selection_sort(d, n);
		break;
	case 2:
		bubble_sort(d, n);
		break;
	default:
		printf("Error\n");
		break;
	}
	printf("After\n");
	print_data(d, n);
	return 0;
}
