#define __STDC_WANT_LIB_EXT1__ 1
#define _XOPEN_SOURCE
#include <time.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

int session[1000];
int current;
double ROUND = 0.01;
double BONUS = 0.25;

int sale(int i)
{
	if (i > 80)
		return 1;
	return 0;
}

int bonus(int x)
{
//	printf("BONUS: %d\n", x);
	//char buffer[26];
	//memset(buffer, 'A', sizeof(buffer));
	return x += 1;
}

int action(int y)
{
	session[y] = 1;
	return session[y];
}
	
int main(int argc, char *argv[])
{
	const int value = atoi(argv[1]);
	const int current = 0;	
	printf("Value: %d\n", value);
	
	for (int i = 1; i < value; i++)
	{
				
		bool price  = sale(i);

		if (!price)
		{
			printf("Listing: ( %d: %s )\n", i, session[i]);
//			printf("SALE: %d -- (%d)\n", i, session[i]);
//			printf("SALE: %d -- (%d)\n", i, (bool*)price);

		}

		if (price)
		{
			session[i] = 1;
			printf("SALE: ( %d: %d )\n", i, session[i]);
		}
		if (current > i)
		{
			session[current] = 1;
			printf("SALE: ( %d: %d )\n", i, session[i]);

		}
	}
	}
/*
		printf("Listing: ( %d: %d )\n", i, session[i]);

		printf("DATA: %s\n", &session);
		printf("argc = %d\n", argc);
		printf("Listing: ( %d: %d )\n", i, session[i]);
//		return session[i];

	struct tm start = {.tm_year=2025-1970};
	struct tm *now = NULL;
	mktime(&start);
	

	//double millie = 1000;	

	for (int ndx = 0; ndx != argc; ++ndx)
	{
		printf("argv[%d] --> %s\n", ndx, argv[ndx]);
		printf("argv[argc] = %p\n", (void*)argv[argc]);
		
		printf("Local: %s", &start);
	
		clock_t start_time, end_time;
		double cpu_time_used;

		start_time = clock(); // Record start time
		double cost_per_click = 1;
	}
	
	for (int i = 1; i < value; i++)
	{	
	//	ROUND = ROUND + 0.01;
		printf("SESSION %d: STATUS%d\n",i, session[i]);	
		if (i % 10 == 0)
		{

			cost_per_click += (ROUND * BONUS);
			printf("$%s: Current: %d\n", cost_per_click, session[i]);
			//cost_per_click += ROUND;
			BONUS++;
	

			//printf("MULTIPLIER: %d \n", BONUS);
			//printf("ROUND: %d\n", ROUND);

			printf("Cost Per Click: %s\n", cost_per_click);

		
			//current--;
		}
	}
	
	
	struct tm start = {.tm_year=2025-1970};
	struct tm *now = NULL;
	mktime(&start);
	time_t epoch = 0;
	printf("%jd seconds since the epoch began\n", (intmax_t)epoch);
	printf("%s", asctime(gmtime(&epoch)));
	
	time_t result = time(NULL);
	if(result != (time_t)(-1))
	{
		printf("The current time is: %s(%jd seconds since the Epoch)\n", asctime(gmtime(&result)), (intmax_t)result);	
	}
	end_time = clock(); // Record end time

	cpu_time_used == ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

	printf("Execution time: %f seconds\n", cpu_time_used);
	
	time_t t = time(NULL);
	printf("UTC: %s", asctime(gmtime(&t)));
	printf("local: %s", asctime(localtime(&t)));

	putenv("TZ=Asia/Singapore");
	printf("USA: %s", asctime(localtime(&t)));
	
	#ifdef __STDC_LIB_EXT1__

	struct tm buf;
	char str[26];
	asctime_r(str, sizeof str, gmtime_r(&t, &buf));
	printf("UTC: %s", str);
	asctime_r(str, sizeof str, localtime_r(&t, &buf));
	printf("local: %s", str);
	#endif
	}
	*/	
//return 1;





