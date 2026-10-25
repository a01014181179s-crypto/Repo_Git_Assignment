/*---HomeWork2---
Name: Ali Ahmed Hassan Sawan
 */

#include "stdio.h"

//---Ex.1------

//int checkprime(int num);
//int main()
//{
//	int i,n1,n2,output;
//	printf("Enter two numbers (intervals):");
//	fflush(stdin);fflush(stdout);
//	scanf("%d %d",&n1,&n2);
//	printf("prime numbers between %d and %d are:\n",n1,n2);
//	for(i=n1;i<n2;i++)
//	{
//		output=checkprime(i);
//		if(output==1)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}
//int checkprime(int num)
//{
//	if(num<=1){
//		return 0;
//	}
//	for(int j=2;j*j<=num;j++){
//		if(num % j == 0){
//			return 0;
//		}
//	}
//	return 1;
//}

//---Ex.2------

//int Recursion(int num);
//int main(){
//	int n,final=0;
//	printf("Enter an positive integer: ");
//	fflush(stdin);fflush(stdout);
//	scanf("%d",&n);
//	final = Recursion(n);
//	printf("Factorial of %d = %d\n",n,final);
//	return 0;
//}
//int Recursion(int num){
//	if(num<=1){
//		return 1;
//	}
//	return num*Recursion(num-1);
//}

//---Ex.3------
//
//void reverse(char *arr);
//int main(){
//	char name[100];
//	printf("Enter a Sentence: ");
//	fgets(name,sizeof(name),stdin);
//	printf("Your a sentence");
//	reverse(name);
//	return 0;
//}
//void reverse(char *arr){
//	if(*arr == '\n' || *arr == '\0'){
//		return;
//	}
//	reverse(arr+1);
//	printf("%c",*arr);
//}

//The homework answer about Recursion
//void reverse();
//int main(){
//	printf("Enter a sentence: ");
//	reverse();
//	return 0;
//}
//void reverse(){
//	char c;
//	scanf("%c",&c);
//	if(c != '\n')
//	{
//		reverse();
//		printf("%c",c);
//	}
//}

//---Ex.4------

//int power(int base,int exp);
//int main(){
//	int n,p;
//	printf("Enter base number: ");
//	fflush(stdin);fflush(stdout);
//	scanf("%d",&n);
//	printf("Enter power number(positive integer): ");
//	fflush(stdin);fflush(stdout);
//	scanf("%d",&p);
//	printf("%d^%d = %d",n,p,power(n,p));
//	return 0;
//}
//int power(int base,int exp){
//	if(exp!=0){
//	return (base*power(base,exp-1));
//	}
//	else
//	{
//		return 1;
//	}
//}




