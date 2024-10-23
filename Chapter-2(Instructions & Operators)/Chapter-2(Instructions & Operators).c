#include<stdio.h>
//1. Type Declaration Instructions
/*int main(){
   int age = 22;
   int oldAge = age;
   int newage = oldAge +2;

   printf("New age is: %d",&newage);
}*/
//2. Arithmetic Instructions
/*int main(){
   int a=2, b=3,c=5;
   a= b+c;
   printf("%d\n",3%2);
}*/

/*int main() {
printf("sum of 2 & 3 : %d\n", 2 + 3);
printf("sum of 2.0 & 3 : %f\n", 2.0 + 3);
printf("sum of 2.0 & 3.0 : %f\n", 2.0 + 3.0);
  return 0;
}*/

//3. Relational Operator
/*int main() {
printf("%d \n", 4==4);
printf("%d \n", 4<3);
printf("%d \n", 3<4);
printf("%d \n", 4<4);
printf("%d \n", 4<=4);
printf("%d \n", 4>3);
printf("%d \n", 3>4);
printf("%d \n", 4>4);
printf("%d \n", 4>=4);
printf("%d \n", 4!=4);
printf("%d \n", 3!=4);
return 0;
}*/
//4. Logical Operator
/*int main() {
printf("%d \n", 3<4 && 3<5);
printf("%d \n", 3<4 && 5<4);
printf("%d \n", 3<4 && 5<4);
printf("%d \n", 3>4 && 5>4);
printf("%d \n", 3<4 && 3<5);
printf("%d \n", !(3<4 && 3<5));
printf("%d \n", !(4<3 || 5<3));
return 0;
}*/
//5. Assignment Operator
/*int main() {
int a = 10;
a += 10;
printf("a+10 = %d \n", a);
a -= 10;
printf("a-10 = %d \n", a);
a *= 10;
printf("a*10 = %d \n", a);
a /= 10;
printf("a/10 = %d \n", a);
a %= 10;
printf("a%c10 = %d \n", '%', a);
 return 0;
}
*/


int main(){
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    printf("%d",x%2==0);
    return 0;


}




