#include<stdio.h>
  main()
{
	int no;
	printf("Enter a number: ");
	scanf("%d",&no);
	if(no < 0)
		printf("Invalid no.!!!");
	else{
		printf ("The value is %d",no);
	}
	return 0;
}
