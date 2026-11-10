#include <stdio.h>

int main()
{
	int n;	
	
	printf("Enter no. of students: ");
	scanf("%d", &n);
	
	int marks[n];
	printf("Enter %d marks: ", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &marks[i]);
	}
	
	int max = marks[0];
	int min = marks[0];
	for (int i = 0; i < n; i++)
	{
		if (marks[i] < min)
		{
			min = marks[i];
		}
		if (marks[i] > max)
		{
			max = marks[i];
		}
	}
	
	
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (marks[j] < marks[j + 1])
			{
				int temp = marks[j];
                		marks[j] = marks[j + 1];
                		marks[j + 1] = temp;
			}
		}
	}
	
	printf("Sorted: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", marks[i]);
	}
	printf("\n");
	
	printf("Highest: %d\n", max);
	printf("Lowest: %d\n", min);
	
	int secondmax;
	int found = 0;
	
	for (int i = 1; i < n; i++)
	{
		if (marks[i] != max)
		{
			secondmax = marks[i];
			found = 1;
			break;
		}
	}
	
	if (found)
	{
		printf("Second-highest distinct mark: %d\n", secondmax);
	}
	else
	{
		printf("No second distinct highest mark exists\n");
	}
	
	return 0;
}










