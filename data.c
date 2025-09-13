#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
	
typedef struct Condition {
	char *type[20];
} Condition;

typedef struct Status {
	char *type[20];
} Status;

typedef struct Result {
	int refresh;
} Result;

typedef struct Reaction {
	char *type[20];
} Reaction;

typedef struct Because {
	char *type[20];
} Because;

struct Condition preference;
struct Status current;
struct Result outcome;
struct Reaction opinion;
struct Because cause;

int main(void)
{
	int data[] = {2,5,8};
	preference.type[0] = "natural";// state:"false"};
	preference.type[1] = "normal";//, state:"false"};
	preference.type[2] = "original";//, state:"false"};

	current.type[0] = "false";
	current.type[1] = "unnatural";
	current.type[2] = "worse_than_before";

	outcome.refresh = 1;

	opinion.type[0] = "pain";
	opinion.type[0] = "disgust";
	opinion.type[0] = "dissapproval";

	cause.type[0] = "root_factor";
	cause.type[1] = "enviroment_exposure";
	cause.type[2] = "infection";
	
	for (int i = 0; i < 3; i++)
	{
		printf("%d: %s \n", i, preference.type[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d: %s \n", i, current.type[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%d: %s \n", i, cause.type[i]);
	}
	printf("\n");

	if (outcome.refresh)
	{
		printf("Refreshes! \n", outcome.refresh);
	}
	else
	{
		printf("Does not refresh! \n", outcome.refresh);
	}
	printf("\n");


return 0;
}
