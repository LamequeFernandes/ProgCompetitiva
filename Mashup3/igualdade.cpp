#include <bits/stdc++.h>

using namespace std;

int main () {

   int n; cin >> n;
   int maior = 0, doacao = 0;
   vector<int> cidadaos;


   for (int i = 0; i < n; i++) {
      int dindin; cin >> dindin;
      cidadaos.push_back(dindin); 
      if (dindin >= maior)
         maior = dindin;
   }

   for (int i = 0; i < n; i++) {
      if (cidadaos[i] < maior) {
         for (int j = cidadaos[i]; j < maior; j++)
            doacao++;
      }
   }

   cout << doacao << endl;

   return 0;
}