#include<stdio.h>
int main(){
   FILE *fptr;
   fptr = fopen("Test.txt","r");
   char ch;
   char EFO;
   ch = fgetc(fptr);
   while(ch != EFO){
    printf("%c",ch);
    ch = fgetc(fptr);
   }


   //fputc('M',fptr);
   //printf("%c\n",fgetc(fptr));
   //printf("%c\n",fgetc(fptr));
    //fprintf(fptr,"%c",'M');
     //fprintf(fptr,"%c",'A');
   fclose(fptr);
   return 0;

}
