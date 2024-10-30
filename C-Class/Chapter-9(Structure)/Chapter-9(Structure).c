/*#include<stdio.h>
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
   printf("Student Name = %s\n",s1.name);
   printf("Student Roll = %d\n",s1.roll);
   printf("Student CGPA = %f\n",s1.cgpa);
   printf("\n");
   struct student s2;
   s2.roll = 03;
   s2.cgpa = 3.55;
   strcpy(s2.name,"Rifat");

   printf("Student Name: %s\n",s2.name);
   printf("Student Roll: %d\n",s2.roll);
   printf("Student CGPA: %f\n",s2.cgpa);
   printf("\n");
   struct student s3;
   s3.roll = 04;
   s3.cgpa = 3.99;
   strcpy(s3.name,"Raju");

   printf("Student Name: %s\n",s3.name);
   printf("Student Roll: %d\n",s3.roll);
   printf("Student CGPA: %f\n",s3.cgpa);
}*/
/*#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
   struct student ece[100];
   ece[0].roll=1234;
   ece[0].cgpa=7.9;
   strcpy(ece[0].name,"Nela");
   printf("Name : %s\n",ece[0].name);
   printf("Roll : %d\n",ece[0].roll);
   printf("CGPA : %f\n",ece[0].cgpa);

return 0;
}*/
//Initializing Structures
/*#include<stdio.h>
#include<string.h>
struct student{
   char name[100];
   int roll;
   float cgpa;
};
int main(){
  struct student s1={"Moriom",1234,9.2};
  printf("Student name : %s\n",s1.name);
  printf("Student roll: %d\n",s1.roll);
  printf("Student cgpa: %f\n",s1.cgpa);
}*/
//Pointers to Structures
#include<stdio.h>
#include<string.h>
struct student{
      char name[100];
      int roll;
      float cgpa;
   };
int main(){
   struct student s1 = {"Nela",1234,3.78};
   printf("Student Name : %s\n",s1.name);

   struct student *ptr = &s1;
   printf("Student Name: %s\n",(*ptr).name);


}




