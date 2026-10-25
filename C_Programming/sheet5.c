/*---HomeWork2---
Name: Ali Ahmed Hassan Sawan
 */

#include "stdio.h"

//---Ex.1------

//struct Sstudent{
//	char name[100];
//	int roll;
//	float marks;
//};
//int main(){
//	struct Sstudent x;
//	printf("Enter name: ");
//	fflush(stdout);scanf("%s",x.name);
//	printf("Enter roll number: ");
//	fflush(stdout);scanf("%d",&x.roll);
//	printf("Enter marks: ");
//	fflush(stdout);scanf("%f",&x.marks);
//	printf("Displaying Information\n");
//	printf("Name: %s\n",x.name);
//	printf("Roll:  %d\n",x.roll);
//	printf("Marks: %f\n",x.marks);
//}

//---Ex.2------

//struct SDistances{
//	int feet;
//	float inch;
//}d1,d2,sum;
//int main(){
//	printf("information for 1st distance:-\n");
//	printf("Enter feet: ");
//	fflush(stdout);scanf("%d",&d1.feet);
//	printf("Enter inch: ");
//	fflush(stdout);scanf("%f",&d1.inch);
//	printf("information for 2st distance:-\n");
//	printf("Enter feet: ");
//	fflush(stdout);scanf("%d",&d2.feet);
//	printf("Enter inch: ");
//	fflush(stdout);scanf("%f",&d2.inch);
//	sum.feet = d1.feet + d2.feet;
//	sum.inch = d1.inch + d2.inch;
//	if(sum.inch>12){
//		sum.inch=sum.inch-12;
//		sum.feet++;
//	}
//	printf("Sum of distances: (feet) %d (inch) %f",sum.feet,sum.inch);
//}

//---Ex.3------

//typedef struct SComplex{
//	float Real;
//	float Img;
//}complex;
//complex add(complex c1,complex c2);
//int main(){
//	complex c1,c2,sum;
//	printf("For 1st complex number\n");
//	printf("Enter real and imaginary respectively:\n");
//	fflush(stdout);scanf("%f %f",&c1.Real,&c1.Img);
//	printf("For 2st complex number\n");
//	printf("Enter real and imaginary respectively:\n");
//	fflush(stdout);scanf("%f %f",&c2.Real,&c2.Img);
//	sum = add(c1,c2);
//	printf("Sum = %.2f + %.2fi\n", sum.Real, sum.Img);
//	return 0;
//}
//complex add(complex c1,complex c2){
//	complex temp;
//	temp.Real = c1.Real + c2.Real;
//	temp.Img = c1.Img + c2.Img;
//	return temp;
//}

//---Ex.4------

//struct Sinf{
//	int roll;
//	float marks;
//	char name[100];
//};
//int main(){
//	struct Sinf student[10];
//	int i;
//	printf("Enter information of students:");
//	for(i=0;i<10;i++){
//		student[i].roll = i+1;
//		printf("\nFor roll number %d\n",student[i].roll);
//		printf("Enter Name: ");
//		fflush(stdout);scanf("%s",student[i].name);
//		printf("Enter Marks: ");
//		fflush(stdout);scanf("%f",&student[i].marks);
//	}
//	printf("Displaying information of students:-\n");
//	for(i=0;i<10;i++){
//		printf("Information for roll number %d\n",student[i].roll);
//		printf("Name:");
//		puts(student[i].name);
//		printf("Marks: %.2f\n",student[i].marks);
//	}
//	return 0;
//}

//---Ex.5------

#define PI 3.14
#define area(r)(PI*r*r)
int main(){
	float area,radius;
	printf("Enter the radius of the circle: ");
	fflush(stdout);scanf("%f",&radius);
	area = area(radius);
	printf("The Area = %.2f",area);
	return 0;
}

//---Ex.6------

//size of union = 32;
//size of struct = 40;
