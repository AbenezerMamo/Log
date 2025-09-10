#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

#define MAX_INPUT 1000
int main(void) {
	int data[] = {2,5,8};
	
	size_t session = sizeof(data);
	printf("size: %lu \n", sizeof(data));
	printf("type: %lu\n", sizeof(data[0]));
	printf("amount: %lu\n", sizeof(data) / sizeof(data[0]));
	for (int i = 0; i < (int)sizeof(data) / (int)sizeof(data[0]); i++)
	{	
		printf("item %d: (%lu) %d\n", i, sizeof(data[i]), abs(data[i]));
//		printf("data: %zu - %lu \n", sizeof(data[], (session / sizeof(data));

	}

	
	return 0;
}
