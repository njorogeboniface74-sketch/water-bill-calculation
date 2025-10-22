//Simple C program to help with mobile data bundle purchase
/*
NAME: BONIFACE NJOROGE
REG: CT100/G/26205/25
DESCRIPTION: Simple C program to help with mobile data bundle purchase
*/

#include <stdio.h>//preprocessor directive

//declare variables here
int Option;
int cost;
//main program logic
int main(){
	printf("Welcome customer, below are the options you can consider buyng bundles; \nOption Bundle Cost(KES)\n 1.    100MB    50 \n 2.    500MB    200 \n 3.    1GB      350 \n 4.    2GB      600\n ");
	printf("\n\n");
	printf("Kindly enter your desired option below(Either 1, 2, 3 or 4): \n");
	scanf("%d", &Option);
	switch (Option) {
    case 1:
        printf("You have selected option 1, (100MB of data bundle @50shillings)");
        break;
    case 2:
        printf("You have selected option 2, (500MB of data bundle @200shillings)");
   	   break;
    case 3:
        printf("You have selected option 3, (1GB of data bundle @350shillings)");
        break;
    case 4:
        printf("You have selected option 4(2GB of data bundle @600shillings)");
        break;
    default:
        printf("Invalid choice\n");
        break;
}

return 0;	
}

