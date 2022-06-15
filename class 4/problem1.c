#include<stdio.h>
int main()
{
	
	int choice,i,fact=1,number,num,count=0;
	
    printf("Choices are as below\n");
    printf("1)Factorial\n");
    printf("2)Prime\n");
    printf("3)Odd/Even\n");
    printf("4)Exit\n");
	printf("\nEnter choice:");
	scanf("%d",&choice);
	printf("\n");
	
	switch(choice)
	{
		
		case 1:
		    
        printf("Enter a number:");    
        scanf("%d",&number);    
        for(i=1;i<=number;i++){    
        fact=fact*i;    
    }    
     printf("Factorial of %d is: %d",number,fact);
		
		break;
		
		case 2:
			
		 

       printf("Enter any positive number:");
scanf("%d",&num);

for(i=2;i<num;i++){
	
	if(num%i==0){
		
		count++;
		break;
	}
	
}

if(count==0){
	
	printf("The number is a prime number");
}
else{
	
	printf("The number is not a prime number");
	
}
		
		
		
	break;
	
	case 3:
	printf("Enter a number:");    
    scanf("%d",&number);    	
    if(number%2==0){
    	
    	printf("It's a even number");
    	
	}		
	else{
		
		printf("It's a odd number");
	}
		
	
	break;
	
	default:
	
	 printf("No case");	

}

return 0;
	
}
