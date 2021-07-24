#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

   int n;
   char *sequenc;

   scanf("%d", &n);
   int x = n;
   sequenc = malloc(n * sizeof(char));
   scanf("%c", sequenc);

    for (int i = 0; i < n; i++){
      if( (sequenc[i] == "R" && sequenc[i+1] == "U") || (sequenc[i] == "U" && sequenc[i+1] == "R") )
         x = x-1;
   }
   
   printf("%d", x);

   return 0;
}