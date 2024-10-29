#include<stdio.h>
#include<string.h>

struct student{
   int roll;
   int cgpa;
   char name[100];
};
int main(){
   struct student s1;
   s1.roll=02;
   s1.cgpa=9.2;
   strcpy(s1.name, "Nela");
   printf("Student name = %s\n",s1.name);
   printf("Student roll = %d",s1.roll);

}
