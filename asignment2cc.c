#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct emp {
	char name[25];
	int id;
	float salary;
};

int comparator(const void* p, const void* q)
{
	return strcmp(((struct emp*)p)->name,
				((struct emp*)q)->name);
}


int main()

{
	int i = 0, n = 3;

	struct emp arr[n];

	for (int i = 0; i < n; i++)
	{
		printf("Enter Name \n");
		scanf("%s",&arr[i].name);
		printf("Enter Id \n");
		scanf("%d",&arr[i].id);
		printf("Enter Salary \n");
		scanf("%f",&arr[i].salary);
	}

	printf("Unsorted\n");
	for (i = 0; i < n; i++) {
		printf("Id = %d, Name = %s, Salary = %f \n",
			arr[i].id, arr[i].name, arr[i].salary);
	}
	qsort(arr, n, sizeof(struct emp), comparator);


	printf("\nsorted by Name:\n");
	for (i = 0; i < n; i++) {
		printf("Id = %d, Name = %s, Salary = %f \n",
			arr[i].id, arr[i].name, arr[i].salary);
	}

	return 0;
	
}