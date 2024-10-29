#include<stdio.h>
#include<string.h>

struct student{
   int roll;
   float cgpa;
   char name[100];
};
int main(){
   struct student s1;
   s1.roll=02;
   s1.cgpa=9.5;
   strcpy(s1.name, "Nela");
   printf("Student name = %s\n",s1.name);
   printf("Student roll = %d\n",s1.roll);
   printf("Student CGPA = %f\n",s1.cgpa);

}
