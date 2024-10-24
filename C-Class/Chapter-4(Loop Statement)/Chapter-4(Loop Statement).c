#include<stdio.h>

/*int main() {
       for(int i=1; i<5; i++){
        printf("Hello Nela.\n");
       }
    return 0;
}*/
/*int main(){
   int i=1;
   while(i<=10){
    printf("Hello Refat.\n");
    i++;
   }
}*/

/*int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);

    for(int i = 1; i <= number; i++){
        printf("%d\n",i);    }
    return 0;
}*/
   /*int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);

    int i;
    do{
      printf("%d\n",i);
      i++;
    }
    while(i <= number);
    return 0;
   }*/
  /*int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);

    int sum = 0;
    for(int i = 1; i <= number; i++){
        sum = sum + i;
        }
        printf("Sum is:%d\n",sum);
        for(int i = number; i >=1 ;i--){
            printf("%d\n",i);
        }
    return 0;
}*/

/*int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    for(int i = 1; i<=10; i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}*/
/*int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);

   for (int i =1; i <=n; i++){
      if(n%7 == 0){
      break;
   }
    printf("%d\n",i);
      }
      printf("Thank you");
      return 0;
}*/

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);

   for (int i =1; i <= n; i++){
      if(i % 2 != 0){
        printf("Odd Number :%d\n",i);
   }
   else{
       printf("Even Number: %d\n",i);
      }
   }
      return 0;

}





