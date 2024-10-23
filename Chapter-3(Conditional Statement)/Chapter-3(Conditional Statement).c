#include<stdio.h>
 /*int main(){
   int age;
   printf("Enter age: ");
   scanf("%d",&age);

   if(age >= 18){
    printf("Adult\n");
    printf("They can vote\n");
   }else if(age >=13 && age < 18){
     printf("Teenager\n");
   }else{
     printf("child\n");
   }
   printf("Thank you");
   return 0;
 }*/
 //Switch
 /*int main(){
   int day;
   printf("Enter day(1-7)");
   scanf("%d",&day);
   switch(day){
     case 1:printf("Saturday");
     break;
     case 2:printf("Sunday");
     break;
     case 3:printf("Monday");
     break;
     case 4:printf("Tuesday");
     break;
     case 5:printf("Wednesday");
     break;
     case 6:printf("Thursday");
     break;
     case 7:printf("Friday");
     break;
   }
 }*/
 /*int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);

    if(number >= 0){
        printf("Positive\n");
        if(number %2 == 0){
            printf("Even\n");
        }else{
           printf("Odd\n");
        }
        }else{
          printf("Negative");
        }
        return 0;
 }*/

 /*int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);

    if(marks < 33){
        printf("C");
    } else if(30 <= marks && marks < 70) {
      printf("B");
    }else if(70 <= marks && marks < 90)  {
        printf("A");
    }else{
      printf("A+");
    }
 }*/
int main(){
   char ch;
   printf("Enter charter:");
   scanf("%c",&ch);

   if(ch >= 'A' && ch <= 'Z'){
    printf("Uppercase");
   }else if(ch >= 'a' && ch <= 'z'){
    printf("Lowercase");
   }else{
    printf("Not English letter");
   }
}










