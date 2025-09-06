#include <stdio.h>
#include <time.h>
 
int main(void)
{
    struct tm start = {.tm_year=2025-1900, .tm_mday=1};
    mktime(&start);
    printf("%s", asctime(&start));
	
return 1;
}
