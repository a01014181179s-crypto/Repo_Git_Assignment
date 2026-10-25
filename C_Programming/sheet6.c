/*---HomeWork2---
Name: Ali Ahmed Hassan Sawan
 */
#include "stdio.h"

//------Ex.1---------

//int main(){
//	int* ab;
//	int m = 29;
//	printf("Address of m: %p\n",&m);
//	printf("Value of m: %d\n",m);
//	ab = &m;
//	printf("Now ab is assigned with the address of m:-\n");
//	printf("Address of pointer ab: %p\n",ab);
//	printf("Value of pointer ab: %d\n",*ab);
//	m = 34;
//	printf("The value of m assigned to 34 now:-\n");
//	printf("Address of pointer ab: %p\n",ab);
//	printf("Value of pointer ab: %d\n",*ab);
//	*ab = 7;
//	printf("The pointer variable ab is assigned with the \
//value 7 now:-\n");
//	printf("Address of m: %p\n",&m);
//	printf("Value of m: %d\n",m);
//	return 0;
//}

//------Ex.2---------

//int main(){
//
//	char alph[27];
//	int x;
//	char* ptr;
//	ptr = alph;
//	printf("print all the alphabets using a pointer:-\n");
//	for(x=0;x<26;x++){
//		*ptr = x+'A';
//		ptr++;
//	}
//	ptr = alph;
//	printf("The Alphabets are : \n");
//	for(x=0;x<26;x++){
//		printf("%c\t",*ptr);
//		ptr++;
//	}
//}

//------Ex.3---------

//int main(){
//	int i=0;
//	char str[50];
//	char rev[50];
//	char* strptr = str;
//	char* revptr = rev;
//	printf("Input a String: ");
//	fflush(stdout);scanf("%s",str);
//	while(*strptr != '\0'){
//		strptr++;
//		i++;
//	}
//	while(i>=0){
//		strptr--;
//		*revptr = *strptr;
//		revptr++;
//		i--;
//	}
//	*revptr = '\0';
//	printf("Reverse of the string is : %s",rev);
//	return 0;
//}

//------Ex.4---------

//int main(){
//	int i,n;
//	int arr[100];
//	int *ptr = arr;
//	printf("Enter Number Elements of Array: ");
//	fflush(stdout);scanf("%d",&n);
//	printf("The Array:-\n");
//	for(i=0;i<n;i++){
//		printf("%d.Element of array: ",i+1);
//		fflush(stdout);scanf("%d",ptr);
//		ptr++;
//	}
//	ptr = &arr[n-1];
//	printf("The elements of array in reverse order are:-\n");
//	for(i=n;i>0;i--){
//		printf("%d.Element of array: %d\n",i,*ptr);
//		ptr--;
//	}
//}

//------Ex.5---------

//struct Scontent{
//	char *name;
//	int id;
//};
//
//int main(){
//	struct Scontent emp1 = {"Ali",1001};
//	struct Scontent emp2 = {"Ahmed",1002};
//	struct Scontent emp3 = {"Sawan",1003};
//
//	struct Scontent (*arr[]) = {&emp1,&emp2,&emp3};
//	struct Scontent *(*ptr)[3] = &arr;
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d.Employee:\n",i+1);
//		printf("Name: %s\n",(*ptr)[i]->name);
//		printf("Id: %d\n",(*ptr)[i]->id);
//	}
//
//	return 0;
//}
