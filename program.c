#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>
#include <time.h>

typedef struct Cadence {
	int seconds;
	int minutes;
	int hours;
	int days;
	int weeks;
	int month;
} Cadence;

struct Cadence cycle;

//time_t payload = time();
int main(void)
{
	cycle.seconds = 6;
	cycle.minutes = 5;
	cycle.hours = 4;
	cycle.days = 3;
	cycle.weeks = 2;
	cycle.month = 1;
	
	printf("Seconds: %d\n", cycle.seconds);
	
int days[31];
time_t time(time_t *timer);
time_t now;


	
	for (int i = 0; i < 3; i++)
	{
		now = time(NULL);
		time_t * session;
		struct tm *localTimeInfo;
		localTimeInfo = localtime(&now);
		char message[10];
		printf("Local: %s", asctime(localTimeInfo));	
		printf("Msg %d: ", i);
		scanf("%s", message);
	
		printf("Next!\n"); 
	
		days[i] = *(message);
	}
	printf("\n");

for (int x = 0; x < 3; x++)
{
	
	printf("Msg %d: %c\n", x, days[x]);
}
	//printf("Seconds since Epoch: %ld \n", session);
	//struct tm start = {.tm_year=2025-1900, .tm_mday=1};
	//mktime(&start);

//	printf("Start: %s\n", &start);
	
	//struct time_t payload;
	//mktime(&session);
//	const struct tm *session;
//	const struct payload *current;
	
	//long int wait;
	
//	wait = sizeof(session);
	//printf("Session: %s\n", ctime(&localTimeInfo));
	//printf("sizeof: %s\n", asctime(&now));
return 0;
}
