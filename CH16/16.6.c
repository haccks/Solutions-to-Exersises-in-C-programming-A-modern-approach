#include <stdio.h>

typedef struct{
	int month;
	int day;
	int year;
}Date;

int compare_dates(Date d1, Date d2);

int main()
{
	Date d1, d2;
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);
	
	if(compare_dates(d1, d2) == -1)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", d1.month, d1.day, d1.year, d2.month,
		           d2.day, d2.year);
	else if(compare_dates(d1, d2) == +1)
		printf("%d/%d/%.2d is latter than %d/%d/%.2d\n", d1.month, d1.day, d1.year, d2.month,
		           d2.day, d2.year);
	else
		printf("Dates %d/%d/%.2d and %d/%d/%.2d are same\n", d1.month, d1.day, d1.year, d2.month,
		           d2.day, d2.year);
	return 0;
}

int compare_dates(Date d1, Date d2)
{
	int date1 =  d1.day + d1.month*100 + d1.year*10000;
	int date2 =  d2.day + d2.month*100 + d2.year*10000;
	
	if(date1 < date2)
		return -1;
	else if(date1 > date2)
		return +1;
	else
		return 0;
}
