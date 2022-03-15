#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int number, nguess, guess;
	srand(time(0));
	number = rand()%100+1;
//	printf("Your Guessed Number is %d\n", number);

	do{
		printf("Please Guess the number between 1 to 100: \n");
		scanf("%d",&guess);
		if(number<guess){
			printf("Lower number please \n");
		}else if(number>guess){
			printf("Higher Number please \n");
		}else{
			printf("You guessed in %d attemptes", nguess);
		}
	nguess++;	
	}while(guess!=number);
	getch();
	return 0;
}

