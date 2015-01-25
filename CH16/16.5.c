#include <stdio.h>
#include <math.h>

#define SIZE ((int)(sizeof(ftime)/sizeof(ftime[0])))
typedef struct
{
	int departure;
	int arrival;
}Time;

int main()
{
	int i,h,m,time,cdt,temp;
	Time const ftime[] = {
							{480,   616},
							{583,   712},
							{679,   811},
							{767,   900},
							{840,   968},
							{945,  1075},
							{1140, 1260},
							{1305, 1438}
						};
	printf("Enter a 24-hour time(hh:mm): ");
	scanf("%d:%d",&h,&m);

	time = h*60 + m;
	cdt = 480;
	int diff = abs(time - 480);
	temp = 0;

	for(i = 1; i < SIZE; i++)
	{
		if(abs(time - ftime[i].departure) < diff)
		{
			diff = abs(time - ftime[i].departure);
			cdt = ftime[i].departure;
			temp = i;
		}

	}

	//printing departure time
	printf("Closest departure time is ");
	if(cdt/60 < 12)
		printf("%d:%.2d a.m",cdt/60,cdt%60);
	else if(cdt/60 == 12)
		printf("%d:%.2d p.m",cdt/60,cdt%60);
	else
		printf("%d:%.2d p.m",cdt/60-12,cdt%60);

	//printing arrival time
	printf(", arriving at ");
	if(ftime[temp].arrival/60 < 12)
		printf("%d:%.2d a.m",ftime[temp].arrival/60,ftime[temp].arrival%60);
	else if(ftime[temp].arrival/60 == 12)
		printf("%d:%.2d p.m",ftime[temp].arrival/60,ftime[temp].arrival%60);
	else
		printf("%d:%.2d p.m",ftime[temp].arrival/60-12,ftime[temp].arrival%60);

	return 0;
}
