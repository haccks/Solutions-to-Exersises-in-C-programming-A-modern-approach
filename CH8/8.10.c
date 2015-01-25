#include <stdio.h>
#include <math.h>

#define SIZE ((int)(sizeof(dep_time)/sizeof(dep_time[0])))
 
int main()
{
	int i,h,m,time,cdt,temp;
	const int dep_time[] = {480,583,679,767,840,945, 1140,1305};
	const int arr_time[] = {616,712,811,900,968,1075,1260,1438};
	
	printf("Enter a 24-hour time(hh:mm): ");
	scanf("%d:%d",&h,&m);
	
	time = h*60 + m;
	cdt = 480;
	int diff = abs(time - 480);
	temp = 0;
	
	for(i = 1; i < SIZE; i++)
	{
		if(abs(time - dep_time[i]) < diff)
		{
			diff = abs(time - dep_time[i]);
			cdt = dep_time[i];
			temp = i;
		}//printf("%d		%d\n",temp,cdt);
			
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
	if(arr_time[temp]/60 < 12)
		printf("%d:%.2d a.m",arr_time[temp]/60,arr_time[temp]%60);
	else if(arr_time[temp]/60 == 12)
		printf("%d:%.2d p.m",arr_time[temp]/60,arr_time[temp]%60);
	else
		printf("%d:%.2d p.m",arr_time[temp]/60-12,arr_time[temp]%60);
			
	return 0;
}
