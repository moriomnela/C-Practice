//#include<stdio.h>
/*int main(){
     int rows;
     int cols;
     printf("Enter cols:");
     scanf("%d",&cols);
     printf("Enter rows:");
     scanf("%d",&rows);

     for(int i=0; i < rows;i++){
        for(int j=0; j < cols; j++){
            printf("*");
        }
        printf("\n");
     }
     return 0;
}*/
/*int main(){
   int n;
   int isPrime=1;
   printf("Enter number: ");
   scanf("%d",&n);

   if(n>=1){
    printf("%d is not prime number",n);
    return 0;
   }
   for(int i=2; i*i <= n; i++){
    if(n%i == 0){
        isPrime = 0;
        break;
    }
   }
   if(isPrime){
      printf("%d is prime number",n);
   }else{
       printf("%d is not prime number");
       return 0;
   }
}*/
#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int start, end;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int n = start; n <= end; n++) {
        if (isPrime(n)) {
            printf("%d ", n);
        }
    }
    printf("\n");
    return 0;
}





