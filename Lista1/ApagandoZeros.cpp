#include<bits/stdc++.h>

using namespace std;

int main () {

   int n; cin >> n;
   vector<string> zerosEUns;

   for (int i = 0; i < n; i++){
      string numero; cin >> numero;
      zerosEUns.push_back(numero);
   }

   vector<int> somaZeros;
   for (int i = 0; i < n; i++){
      somaZeros.push_back(0);
   }


   for (int i = 0; i < n; i++){
      int tam = zerosEUns[i].size();
      for(int j = 0; j < tam; j++){
         if (zerosEUns[i].at(j) == '1'){
            int soma = 0;
            for (int k = j + 1; k < tam ; k++){
               if (zerosEUns[i].at(k) == '0'){
                  soma++;
               }
               if (zerosEUns[i].at(k) == '1'){
                  somaZeros[i] += soma; k = tam;
               }
            }
         }
      }
   }

   for (int i = 0; i < n; i++){
      cout << somaZeros[i] << endl;
   }

   return 0;
}