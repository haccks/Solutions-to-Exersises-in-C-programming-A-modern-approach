#include <stdio.h>
#include <math.h>

#define SIZE 8//((int)sizeof(dep_time)/sizeof(dep_time[0]))

void find_closest_flight(int desired_time, int const *departure_time, int const *arrival_time);
void print_flight_time(int dhh, int dmm, int ahh, int amm);

int main(void)
{
	int const dep_time[] = {480,583,679,767,840,945, 1140,1305};
	int const arr_time[] = {616,712,811,900,968,1075,1260,1438};
	int hh, mm, desired_time;
	
	printf("Enter the desired time(hh:mm): ");
	scanf("%d:%d", &hh, &mm);
	while(1)
	{
		
		if(hh > 23 || mm > 59)
		{
			printf("You Entered wrong time format! Re Enter: ");
			scanf("%d:%d", &hh, &mm);
		}
			
		else
			break;
	}
	
	desired_time = hh*60 + mm;
	find_closest_flight(desired_time, dep_time, arr_time);

	return 0;
}

void find_closest_flight(int desired_time, int const *departure_time, int const *arrival_time)
{
	int temp;
	int first_dep_time = departure_time[0];
	int last_dep_time = departure_time[SIZE-1];
	int first_arr_time = arrival_time[0];
	int last_arr_time = arrival_time[SIZE-1];
	
	for(int i = 0; i < SIZE-1; i++)
	{
		if(desired_time < first_dep_time)
		{
			print_flight_time(first_dep_time/60, first_dep_time%60, first_arr_time/60, first_arr_time%60);
			break;
		}

		else if(desired_time >= *(departure_time) && desired_time < *(departure_time + 1))
		{
			//printf("%d\t%d\n", desired_time,*(departure_time));
			temp = abs(desired_time - *(departure_time));

			if(abs(desired_time - *(departure_time + 1)) > temp)
  				print_flight_time(*(departure_time)/60,*(departure_time)%60,*(arrival_time)/60,*(arrival_time)%60);

			else
				print_flight_time(*(departure_time+1)/60,*(departure_time+1)%60,*(arrival_time+1)/60,*(arrival_time+1)%60);
			break;
		}
		
	    else if(desired_time >= last_dep_time)
  		{
  			print_flight_time(last_dep_time/60, last_dep_time%60, last_arr_time/60, last_arr_time%60);
			break;
  		}
  		
  		else
		{
			departure_time++;
			arrival_time++;
  		}
		
	}

}

void print_flight_time(int dhh, int dmm, int ahh, int amm)
{
	printf("Closest departure time is %d:%.2d %s, arriving at %d:%.2d %s"
				, dhh < 12 ? dhh : dhh == 12 ? dhh :(dhh-12), dmm, dhh < 12 ? "a.m" : "p.m",
				ahh < 12 ? ahh : ahh == 12 ? ahh : (ahh-12), amm, ahh < 12 ? "a.m" : "p.m");
}

