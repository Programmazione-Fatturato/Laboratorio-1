#include<stdio.h>
 int main(){

   int anno;
   printf("Inserire anno :\n");
   scanf("%d", &anno);

   if (anno % 4 == 0)
   {
     if (anno % 100 == 0)
     {
       if (anno % 400 == 0)
       {
         printf("Anno bisestile.");
       }
       else printf("Anno non bisestile.");
     }
     else printf("Anno bisestile.");
   }

  else printf("Anno non bisestile.");

   return 0;
 }