#include <stdio.h>
#include <time.h>

struct tm;
 
int main(void)
{
//    struct time_t start = {.tm_year=2025-1900, .tm_mday=1};
    //mktime(&start);

//	printf("%p", &tm);
	
	const struct time_t ** *payload;
	//mktime(&payload);
	const struct tm *session;
	long int wait;
	
	wait = sizeof(session);
	printf("Session: %s\n", &session);	
	printf("Current: %s\n", wait);	
//	printf("%s \n", mktime(&start);
//	printf("%s\n", &payload);	
//	printf("%d", time(&payload));	
//	printf("%s", time_t(wait));	
return 1;
}
