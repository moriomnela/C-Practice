#include<stdio.h>
/*int main(){
   int age=22;
   int *ptr=&age;
   int _age=*ptr;

   printf("%p\n",&age);
   printf("%u\n",&age);
   printf("%u\n",ptr);
   printf("%u\n", &ptr);
   return 0;
}*/

/*int main(){
   int i=5;
   int *ptr=&i;
   int **pptr= &ptr;
   printf("%d",**pptr);
}*/

/*void square(int n);
int main(){
  int number=4;
  square(number);
  printf("number = %d\n",number);
  return 0;
}//call by value
void square(int n){
   n=n*n;
   printf("square = %d\n",n);
}*/

/*void swap(int a, int b);
void _swap(int* a, int *b);
int main() {
int x = 3, y = 5;
//call by value
swap(x, y);
printf("x = %d & y = %d\n", x, y);
//call by reference
_swap(&x, &y);
printf("x = %d & y = %d\n", x, y);
return 0;
}
void swap(int a, int b) {
int t = a;
a = b;
b = a;
}
void _swap(int* a, int* b) {
int t = *a;
*a = *b;
*b = *a;
}*/


void printAddress(int n);
int main(){
  int n = 4;
  printAddress(n);
  printf("%u\n",&n);
  return 0;
}
void printAddress(int n){
   printf("%u\n",&n);
}
