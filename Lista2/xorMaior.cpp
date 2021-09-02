#include <bits/stdc++.h>

using namespace std;

int main(){
   int a, aux, maior = 0, b;
   cin >> a;

   for (int i = 0; i < a; i++){
      aux = a ^ i;
      if (aux >= maior){
         maior = aux;
         b = i;
      }
   }

   cout << a << " " << b << endl;

   return 0;
}