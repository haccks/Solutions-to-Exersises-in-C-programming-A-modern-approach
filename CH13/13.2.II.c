#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */

int read_line(char str[], int n);

int main(void)
{
  char reminders[MAX_REMIND][MSG_LEN+6];
  char month_str[4], day_str[3], msg_str[MSG_LEN+1];
  char sorted_month_str[MAX_REMIND][4];
  char temp[MSG_LEN+6];
  int day, i, j, num_remind = 0;
  int month;

  /* Sorting by day. */
  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter month and day (mm/dd): ");
    scanf("%2d/%2d", &month, &day);
    if (month == 0)
      break;
    sprintf(month_str, "%.2d/", month);
    sprintf(day_str, "%.2d", day);
    read_line(msg_str, MSG_LEN);
//printf("%s", month_str);
	for (i = 0; i < num_remind; i++)
      if (strcmp(day_str, reminders[i]) < 0)
        break;
    for (j = num_remind; j > i; j--){
    	strcpy(reminders[j], reminders[j-1]);
    	strcpy(sorted_month_str[j], sorted_month_str[j-1]);
    }

    strcpy(reminders[i], day_str);
    strcat(reminders[i], msg_str);
	strcpy(sorted_month_str[i], month_str);

    num_remind++;
  }

  /* Concatinating sorted_month_str to reminders string. */
  for (int i = 0; i < num_remind; i++)
  {
		strcpy(temp, reminders[i]);
		strcpy(reminders[i], sorted_month_str[i]);
		strcat(reminders[i], temp);
  }

  /* Sorting by month (Bubble Sort)*/
  for (int i = 0; i < num_remind - 1; i++)
  {
		for(int j = 0; j < num_remind - 1 -i; j++)
		{
			if(strcmp(reminders[j], reminders[j+1]) > 0)
			{
				strcpy(temp, reminders[j]);
				strcpy(reminders[j], reminders[j+1]);
				strcpy(reminders[j+1], temp);
			}
		}
  }

  printf("\nYear Reminder\n");
  for (i = 0; i < num_remind; i++)
  {
  		printf(" %s\n", reminders[i]);
  }

  return 0;
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
