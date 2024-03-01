#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int prod=1,sum=0,rem,tmp;

int reverse(int x){
	sum=0;
	tmp=x;
	while(tmp>0){
		rem=tmp % 10;
		sum=sum*10+rem;
		tmp=tmp/10;
	}
		return sum;

}

int rev(int x){
	sum=0;
	tmp=x;
	while(tmp>0){
		rem=tmp % 10;
		sum=sum*10+rem;
		tmp=tmp/10;
	}
	if(x==sum){
		return 1;
	}
	else return 0;
	
}


int add(int x){

	while(x>0){
		rem=x % 10;
		sum=sum+rem;
		x=x/10;
	}
	return sum;
}
int product(int x){
	
	while(x>0){
		rem=x % 10;
		prod=prod*rem;
		x=x/10;
	}
	return prod;
	
}
void isPrime(int x){
	int i,flag=0;
	for(i=1;i<=x/2;i++){
		if(x%i==0){
			flag++;
		}
	}
	if(flag==1){
		printf("\n\t\t\t\t\tIs Prime.");
	}
	else{
		printf("\n\t\t\t\t\tIs not a prime.");
	}
}

void isPalindrome(int x){


	if(rev(x)==1){
	printf("\n\t\t\t\t\tIs Palindrome");
	}
	else{
		printf("\n\t\t\t\t\tIs not a Palindrome");
	}

}

void isArmstrong(int x){
	sum=0;
	tmp=x;
	while(x>0){
		rem=x%10;
		sum=sum+pow(rem,3);
		x=x/10;
	}
	if(sum==tmp){
		printf("\n\t\t\t\t\tIs Armstrong");
	}
	else printf("\n\t\t\t\t\tIs not a Armstrong");
}

int countDigit(int x){
	sum=0;
	while(x>0){
		sum++;
		x=x/10;
	}
	return sum;
}

int occurance(int x,int y){
	int flag=0;
	while(x>0){
		rem=x%10;
		if(rem==y){
			flag++;
		}
		x=x/10;
	}
	return flag;
}
void isPerfect(int x){
	int i;
	sum=0;
	for(i=1;i<=x/2;i++){
		if(x%i==0){
			sum=sum+i;
		}
	}
	if(sum==x){
		printf("\n\t\t\t\t\tIs perfect.");
	}
	else{
		printf("\n\t\t\t\t\tNot perfect.");
	}
}

void powerof2(int x){
	int prod=2;
	while(prod<=x){
		prod=prod*2;
		if(prod==x){
			printf("\n\t\t\t\t\tIs power of 2.");
			return;
		}
		
		}
		printf("\n\t\t\t\t\tNot power of 2.");
	}
	
int isPsquare(int x){
	int i=1;
	prod=1;
	while(prod<=x){
		prod=i*i;
		if(prod==x){
			printf("\n\t\t\t\t\tIs perfect square");
			return 0;
		}
		i++;
	}
	printf("\n\t\t\t\t\tIs not a perfect square number");
	
}
int print(){
	int num,dummy;
	printf("\t\t\t\t\tEnter a number:");fflush(stdin);
	scanf("%d%c",&num,&dummy);
	return num;
}
	

int main(){
	
	int num,digit,choose;
	char ch='y';
	while(ch=='y' ||ch=='Y'){
	
	printf("\n\n\n\n\t\t\t\t*---Number Manipulation Programs---*\n");
	printf("\n\t\t\t\t\t1.Reverse a number.");
	printf("\n\t\t\t\t\t2.Sum of all digit.");
	printf("\n\t\t\t\t\t3.Product of all digit.");
	printf("\n\t\t\t\t\t4.Check Prime.");
	printf("\n\t\t\t\t\t5.Check Palindrome");
	printf("\n\t\t\t\t\t6.Check Armstrong.");
	printf("\n\t\t\t\t\t7.Count Digits.");
	printf("\n\t\t\t\t\t8.Check Occurance.");
	printf("\n\t\t\t\t\t9.Check Perfect.");
	printf("\n\t\t\t\t\t10.Check Power of 2.");
	printf("\n\t\t\t\t\t11.Check Perfect Square.");
	printf("\n\n\t\t\t\t\tWhich Operation?[1-11]:");
	scanf("%d",&choose);
	switch(choose){
		case 1:num=print();
				printf("\t\t\t\t\tReverse:%d.",reverse(num));break;
		case 2:num=print();
				printf("\n\t\t\t\t\tSum of all digit of %d is %d.",num,add(num));break;
		case 3:num=print();
				printf("\n\t\t\t\t\tProduct of all digit of %d is %d.",num,product(num));break;
		case 4:num=print();
			   isPrime(num);break;
		case 5:num=print();
				isPalindrome(num);break;
		case 6:num=print();
				isArmstrong(num);break;
		case 7:	num=print();
				printf("\n\t\t\t\t\tTotal digit is %d.",countDigit(num));break;
		case 8:num=print();
				printf("\n\t\t\t\t\tEnter a digit to see its occurance:");
				scanf("\t\t\t\t\t%d",&digit);
				printf("\n\t\t\t\t\t%d occured %d times in %d",digit,occurance(num,digit),num);break;
		case 9:num=print();
				isPerfect(num);break;
		case 10:num=print();
				powerof2(num);break;
		case 11:num=print();
				isPsquare(num);
	}
	
	sleep(1);
	fflush(stdin);
	printf("\n\n\t\t\t\t\tDo you want to continue?[Y-N]:");fflush(stdin);
	scanf("%c",&ch);
	system("cls");
	}
	
	return 0;
}
