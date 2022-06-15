#include<stdio.h>
int main()
{
	int i,hour,extra;
	
	for(i=1;i<=10;i++){
		printf("Enter the working hour:",i);
		scanf("%d",&hour);
		
		
		if(hour>40){
			extra=(hour-40)*12;
			printf("The overtime pay of this employ is Rs.%d\n",extra);
		}
		else{
			printf("This employ has not done overtime");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
