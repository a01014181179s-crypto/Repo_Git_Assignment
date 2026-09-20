/*---HomeWork2---
Name: Ali Ahmed Hassan Sawan
 */

#include "stdio.h"
#include <string.h>

//--------------Home Arrays-----------------

//---Ex.1------

//int main(void)
//{
//    float a[2][2];
//    float b[2][2];
//    float sum[2][2];
//    int i, j;
//
//    printf("Enter the elements Of 1st matrix:\n");
//    for(i = 0; i < 2; i++)
//    {
//        for(j = 0; j < 2; j++)
//        {
//            printf("Enter: a%d%d = ",i+1,j+1);
//            fflush(stdin);fflush(stdout);
//            scanf("%f",&a[i][j]);
//        }
//    }
//
//    printf("Enter the elements Of 2nd matrix:\n");
//    for(i = 0; i < 2; i++)
//    {
//        for(j = 0; j < 2; j++)
//        {
//        	printf("Enter: b%d%d = ",i+1,j+1);
//        	fflush(stdin);fflush(stdout);
//        	scanf("%f",&b[i][j]);
//        }
//    }
//
//    for(i = 0; i < 2; i++)
//    {
//        for(j = 0; j < 2; j++)
//        {
//        	sum[i][j] = a[i][j] + b[i][j];
//        }
//    }
//
//    printf("Sum Of Matrix:\n");
//    for(i = 0; i < 2; i++)
//    {
//        for(j = 0; j < 2; j++)
//        {
//			printf("%.2f\t",sum[i][j]);
//			if(j == 1){
//				printf("\n");
//			}
//        }
//    }
//
//
//    return 0;
//}

//---Ex.2------

//int main()
//{
//	int n,i;
//	float sum=0,avr=0;
//	printf("Enter the numbers of data: ");
//	fflush(stdin);fflush(stdout);
//	scanf("%d",&n);
//	float arr[n];
//	for(i=1;i<=n;++i)
//	{
//		printf("%d Enter number: ",i);
//		fflush(stdin);fflush(stdout);
//		scanf("%f",&arr[i]);
//		sum += arr[i];
//	}
//	printf("Average = %.2f",avr = sum/n);
//
//	return 0;
//}

//---Ex.3------

//int main()
//{
//	float a[2][3],b[3][2];
//	int i,j;
//
//	printf("Enter element of matrix:\n");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("Enter element number a%d%d:",i+1,j+1);
//			fflush(stdin);fflush(stdout);
//			scanf("%f",&a[i][j]);
//		}
//	}
//
//	printf("Entered Matrix:\n");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			printf("%.2f\t",a[i][j]);
//			if(j==2)
//			{
//				printf("\n");
//			}
//		}
//	}
//
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			b[j][i] = a[i][j];
//		}
//	}
//
//	printf("Transpose Of Matrix:\n");
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			printf("%.2f\t",b[i][j]);
//			if(j==1)
//			{
//				printf("\n");
//			}
//		}
//	}
//
//	return 0;
//}

//---Ex.4------

//int main()
//{
//	int n,i,x;
//	float insert;
//	printf("Enter no of elements : ");
//	fflush(stdin);fflush(stdout);
//	scanf("%d",&n);
//
//	float arr[n];
//	for(i=0;i<n;i++)
//	{
//	printf("%d. Enter the numbers : ",i+1);
//	fflush(stdin);fflush(stdout);
//	scanf("%f",&arr[i]);
//	}
//
//	printf("Your Array is : \n");
//	for(i=0;i<n;i++)
//	{
//		printf("%.2f\t",arr[i]);
//	}
//
//	printf("\nEnter the element to be inserted : ");
//	fflush(stdin);fflush(stdout);
//	scanf("%f",&insert);
//	printf("Enter the location : ");
//	fflush(stdin);fflush(stdout);
//	scanf("%d",&x);
//	if(n>=x)
//	{
//	/*Here we make copy from the last element in array to before element when i=x
//	make insert to new element and saving the element in array by copy*/
//	for(i=n;i>=x;i--)
//	{
//		arr[i] = arr[i-1];
//	}
//	//Insert the element in location
//	arr[x-1] = insert;
//
//	printf("Your New Array is : \n");
//	for(i=0;i<n;i++)
//	{
//		printf("%.2f\t",arr[i]);
//	}
//	}
//	else
//	{
//		printf("Wrong Location");
//	}
//	return 0;
//}

//---Ex.5------

//int main()
//{
//	int n,i;
//	float search;
//	printf("Enter no of elements : ");
//	fflush(stdin);fflush(stdout);
//	scanf("%d",&n);
//	float arr[n];
//	for(i=0;i<n;i++)
//	{
//		printf("%d. Enter the numbers : ",i+1);
//		fflush(stdin);fflush(stdout);
//		scanf("%f",&arr[i]);
//	}
//
//	printf("Your Array is : \n");
//	for(i=0;i<n;i++)
//	{
//		printf("%.2f\t",arr[i]);
//	}
//	printf("\nEnter the elements to be searched : ");
//	fflush(stdin);fflush(stdout);
//	scanf("%f",&search);
//
//	//loop at array to search about number
//	for(i=0;i<n && search!=arr[i];i++);
//	if(search==arr[i])
//	{
//		printf("Number found at the location : %d",i+1);
//	}
//	else
//	{
//		printf("Number not found");
//	}
//	return 0;
//}

//======================================================
//--------------Home Arrays-----------------

//---Ex.1------

//int main()
//{
//	char text[100],freq;
//	int i,count=0;
//	printf("Enter a string: ");
//	fflush(stdin);fflush(stdout);
//	gets(text);
//	printf("Your a string is: %s\r\n",text);
//
//	printf("Enter a character to find frequency: ");
//	fflush(stdin);fflush(stdout);
//	scanf("%c",&freq);
//
//	for(i=0;i<=sizeof(text);i++){
//		if(freq==text[i])
//		{
//			++count;
//		}
//	}
//	printf("Frequency Of %c = %d ",freq,count);
//
//	return 0;
//}

//---Ex.2------

//int main()
//{
//	char text[100],freq;
//	int i,count=0;
//	printf("Enter a string: ");
//	fflush(stdin);fflush(stdout);
//	gets(text);
//	for(i=0;text[i]!='\0';i++)
//	{
//		++count;
//	}
//	printf("Length of string: %d",count);
//}

//---Ex.3------

//int main()
//{
//	char text[100];
//	int i,length;
//	printf("Enter a string: ");
//	fflush(stdin);fflush(stdout);
//	gets(text);
//	length =strlen(text);
//	printf("Reverse string is : ");
//	for(i=length-1;i>=0;i--)
//	{
//		printf("%c",text[i]);
//	}
//
//	return 0;
//}



