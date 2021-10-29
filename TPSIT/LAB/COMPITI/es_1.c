#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   char * stringa1;
   char * stringa2;
   int j=0;
   int dim;
   
   stringa1=(char*)malloc(40 * sizeof(char));
   stringa2=(char*)malloc(40 * sizeof(char));
   
   printf("Inserisci una parola: ");
   gets(stringa1);
   dim = strlen (stringa1);
   
   int i=dim-2;
   
   while(j < dim && i >= 0)
   {
       stringa2[j]=stringa1[i];   //Sto mettendo la stringa al contrario in stringa2
       i--;
       j++;
   }
   
   int m=0,n=0;
   while(m < dim && n < dim) {  /*Controllo lettera per lettera*/
       if(stringa1[m]==stringa2[n] && stringa1[m]!='\0' && stringa1[n]!='\0') {  
          m++;
          n++;
       } else {
            printf("La parola non e' palindroma\n");   //Se trovo una lettera diversa non è palindroma e stampo 0,
            return 0;       
       }     
   }
   
   printf("La parola e' palindroma\n"); //Se arrivo qui significa che la stringa è palindroma e stampo 1.

   system("pause");
   
   return 0;
   
}