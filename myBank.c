#include <stdio.h>
float banks[50][2];
int users =0;
int i,anumber,tempvar;
float amount,rate;
void start()
{
for(i =0;i<50;i++)
{
banks[i][0]=0;
banks[i][1]=0;
}
}
void bank(char c)
{

    switch(c)
    {
case 'O':
        if(users<=50)
        {            
            printf("Please enter amount for deposit: \n");
            if(scanf("%f", &amount)==1)
            {
            if(amount>=0){
            for(i =0;i<50;i++)
		{
		 if(banks[i][1]==0)
		 break;	
		}
            users++;
            banks[i][0]=amount;
            banks[i][1]=1; 
            anumber=900+i+1;
            printf("New account number is:  %d \n",anumber);
            }
             else printf("Invalid Amount  \n");
           }

            else  printf("Failed to read the amount  \n");
         }
            else printf("No Place to open account  \n");
break;
case 'B':
        printf("Enter Account number? \n");
        if(scanf("%d", &tempvar)==1){
        if(tempvar>900&&tempvar<951){
         if(banks[tempvar-901][1]==1){
        	printf("Money in Account %.2f \n",banks[tempvar-901][0]);
        }
        else printf("Account Closed  \n");
      }
        else printf("Invalid account number: \n");
        }
        else printf("Failed to read the account number: \n");
        

break;
case 'D':
        printf("Enter Account number? \n");
        scanf("%d", &tempvar);
        if(tempvar>900&&tempvar<951){
        if((banks[tempvar-901][1]==1)){
                    printf("How Much? \n");
            scanf("%f", &amount);
            banks[tempvar-901][0]+=amount;
            printf("Money in Account %.2f \n",banks[tempvar-901][0]);
        }
        else printf("Account Closed  \n");
        }
        else printf("Not A Valid Bank Account  \n");

break;
case 'W':
        printf("Enter Account number? \n");
        scanf("%d", &tempvar);
        if(tempvar>900&&tempvar<951){
        if((banks[tempvar-901][1]==1)){
                    printf("How Much? \n");
            scanf("%f", &amount);
            if(amount<=banks[tempvar-901][0])
            {
            banks[tempvar-901][0]-=amount;
            printf("Money in Account %.2f \n",banks[tempvar-901][0]);
            }
            else printf("WithDraw to much  \n");
        }
        else printf("Account Closed  \n");
        }
        else printf("Not A Valid Bank Account  \n");

break;
case 'C':
        printf("Enter Account number? \n");
        scanf("%d", &tempvar);
        if((banks[tempvar-901][1]==0))
        {
		printf("Account Already Closed  \n");
	}
	else{
	banks[tempvar-901][1]=0;
	users--;
	printf("Account Closed  \n");
	} 
break;
case 'P':
		for(i=0;i<50;i++)
		{
		if(banks[i][1]==1)
		{
		printf("Account # : %d has this much %.2f  \n",i+901,banks[i][0]);
		}
		}
	
break;
case 'I':
		printf("Enter Interest Rate: \n");				
		scanf("%f", &rate);
		if(rate>=0)
		{
			for(i=0;i<users;i++)
		{
		if(banks[i][1]==1)
		{
		banks[i][0]=banks[i][0]+((rate/100.0)*banks[i][0]);
		}
		}
		}
		else {
		printf("Error - Interest must be Possitive: \n");
		}		

	
break;
case 'E':
			
	for(i=0;i<50;i++)
	banks[i][1]=0;
break;
	
        default:
            printf("Invalid trasnaction type \n");
    }

}

