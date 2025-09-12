#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>
#include <time.h>

	time_t payload;
	// = NULL;
	//time_t session;
	struct tm session;

int main(void)
{

//    struct time_t start = {.tm_year=2025-1900, .tm_mday=1};
    //mktime(&start);

//	printf("%p", &tm);
	
	//struct time_t payload;
	//mktime(&session);
//	const struct tm *session;
//	const struct payload *current;
	
//	long int wait;
	
//	wait = sizeof(session);
//	printf("Session: %s\n", localtime(&payload));
//	printf("Value: %d\n", (int)*current);
	printf("time: %s\n", ctime((const long int *)localtime(&payload)));
	printf("mktime: %ld\n", mktime(&session));
	
	//printf("Current: %s\n", wait);	
//	printf("%s \n", mktime(&start);
//	printf("%s\n", &payload);	
//	printf("%d", time(&payload));	
//	printf("%s", time_t(wait));	
return 1;
}
