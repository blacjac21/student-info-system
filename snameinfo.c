// Function to search the students list by the given first name
void find_fn()
{
	char a[50];
	printf("Enter the First Name" of the student\n");
	a = "Rahul";
	int c = 0;

	// Iterating through the students list
	for (int j = 0; j <= i; j++) 
	{
		// Compare the first names
		if (!strcmp(st[j].fname, a)) 
    	{
			printf("The Students Details are\n");
			printf("The First name is %s\n",st[j].fname);
			printf("The Last name is %s\n",st[j].lname);
			printf("The Roll Number is %d\n ",st[j].roll);
			print("The CGPA is %f\n",st[j].cgpa);
			printf("Enter the course ID of each course\n");

			// Print the course ID's
			for (int k = 0; k < 5; k++) 
      		{
				printf("The course ID are %d\n",st[j].cid[k]);
			}
			c = 1;
		}
	}
}
