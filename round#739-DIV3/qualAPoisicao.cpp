#include <bits/stdc++.h>

using namespace std;

int main () {

   int t; cin >> t;
   vector<int> a;
   vector<int> b;
   vector<int> c;
   
   for (int i = 0; i < t; i++){
      int ai, bi, ci; cin >> ai >> bi >> ci;
      a.push_back(ai);
      b.push_back(bi);
      c.push_back(ci);
   }

   vector<int> tamCirculo;

   for (int i = 0; i < t; i++) {
      if (a[i] > b[i]){
         int tamanhoCirculo = (a[i] - b[i]) * 2;
         tamCirculo.push_back(tamanhoCirculo);

      }
      else {
         int tamanhoCirculo = (b[i] - a[i]) * 2;
         tamCirculo.push_back(tamanhoCirculo);
      }
   }

   vector<int> resultadosOposto;

   for (int i = 0; i < t; i++) {
      int oposto = c[i], volta = 0;      
         for (int j = 0; j < tamCirculo[i] / 2; j++){
            oposto++;
            if (oposto > tamCirculo[i]) {
               oposto = 1;
               volta++;
            }
         }
         int opostoDoOposto = oposto;
         for (int j = 0; j < tamCirculo[i] / 2; j++){
            opostoDoOposto++;
            if (opostoDoOposto > tamCirculo[i]) {
               opostoDoOposto = 1;
               volta++;
            }

         }

         if (a[i] == b[i]-1 || a[i] == b[i]+1)
            resultadosOposto.push_back(-1);
         else if (volta > 1)
            resultadosOposto.push_back(-1);
         else if (c[i] > tamCirculo[i])
            resultadosOposto.push_back(-1);
         else if (opostoDoOposto == c[i])
            resultadosOposto.push_back(oposto);
         else  
            resultadosOposto.push_back(-1);
      }  
   
   
   
   for (int i = 0; i < t; i++)
      cout << resultadosOposto[i] << endl;


   return 0;
}