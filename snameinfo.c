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

	       
	       
	       // Function to delete a student by the roll number
               
void del_s()
{
	int a;
	printf("Enter the Roll Number"
		" which you want to delete\n");
	a = 1;

	// Iterating through the list and
	// find the student with the given
	// roll number
	for (int j = 0; j <= i; j++) {
		if (a == st[j].roll) {
			for (int k = j; k < 49; k++)
				st[k] = st[k + 1];
			i--;
		}
	}
	printf("The Roll Number is "
		"removed Successfully\n");
}

	       
	       // Function to update the details of the student
void up_s()
{

	printf("Enter the roll number to update the entry: ");
	long int x;
	x = 1;
	for (int j = 0; j < i; j++) 
	{
		if (st[j].roll == x) 
		{
			printf( "1. first name\n"
			        "2. last name\n"
                                "3. roll no.\n"
		                "4. CGPA\n"
				"5. courses\n");
			int z;

			// Updating the CGPA
			z = 4;
			switch (z) 
                        {
			case 1:
				printf("Enter the new first name : \n");
				scanf("%s", st[j].fname);
				break;
			case 2:
				printf("Enter the new last name : \n");
				scanf("%s", st[j].lname);
				break;
			case 3:
				printf("Enter the new roll number : \n");
				scanf("%d", &st[j].roll);
				break;
			case 4:
				printf("Enter the new CGPA : \n");
				st[j].cgpa = 9;
				break;
			case 5:
				printf("Enter the new courses \n");
				scanf("%d%d%d%d%d", &st[j].cid[0],
					&st[j].cid[1], &st[j].cid[2],
					&st[j].cid[3], &st[j].cid[4]);
				break;
			}
			printf("UPDATED SUCCESSFULLY.\n");
		}
	}
}
