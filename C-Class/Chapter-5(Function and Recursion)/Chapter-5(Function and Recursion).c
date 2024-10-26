#include <stdio.h>
#include<math.h>
  /*void printhello();
  void printgoodbye();

int main() {
    printhello();
    printgoodbye();
    return 0;
}
void printhello(){
printf("Hello\n");
printf("My name is Mriom\n");
}
void printgoodbye(){
printf("Goodbye\n");
}*/

/*void namasta();
void bonjor();
int main(){
  printf("Enter f for french and i for india:");
  char ch;
  scanf("%c",&ch);
  if(ch=='i'){
    namasta();
    }else{
     bonjor();
    }
}
void namasta(){
printf("Namasta");
}
void bonjor(){
printf("Bonjor");
}*/

/*int sum (int a,int b);
int main(){
   int a,b;
   printf("Enter first number:");
   scanf("%d",&a);
   printf("Enter second number:");
   scanf("%d",&b);

   int s=sum(a,b);
   printf("Sum is: %d",s);
   return 0;
}

 int sum(int x,int y){
     return x+y;
 }*/
 /*int sum(int a,int b);
 void printtable(int n);

 int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    printtable(n);
    return 0;
 }
 int sum(int x,int y){
   return x+y;
 }
 void printtable(int n){
     for(int i=1;i<=10; i++){
        printf("%d\n", i*n);
     }
 }*/

 /*void calculatePrice(float value);

 int main(){
   float value = 100.0;
   calculatePrice(value);
   return 0;
 }

void calculatePrice(float value){
    value=value+(0.18 * value);
    printf("Final price is:%f",value);
}*/

/*void calculateprice(float value);
int main(){
    int n = 4;
    printf("%f",pow(n,2));
    return 0;
}*/
/*#include <stdio.h>

float squareArea(float side);  // Consistent with function definition
float circleArea(float rad);   // Function prototype
float rectangleArea(float a, float b);  // Function prototype

int main() {
    float a = 5.0;
    float b = 10.0;

    printf("Area is: %f\n", rectangleArea(a, b));  // Call the correct function
    return 0;
}

float squareArea(float side) {
    return side * side;
}

float circleArea(float rad) {
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b) {
    return a * b;
}
*/

//Recursion
void printHW(int count);
int main(){
    printHW(5);
  return 0;
}
void printHW(int count){
   if(count == 0){
    return;
   }
   printf("Hello World\n");
   printHW(count-1);

}













