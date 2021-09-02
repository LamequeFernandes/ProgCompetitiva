#include <bits/stdc++.h>

using namespace std;

int main () {

   int vezes, vacinas; cin >> vezes >> vacinas;
   int somaVacinas = vacinas;
   int furiosos = 0;

   for (int i = 0; i < vezes; i++) {
      char registro; cin >> registro;
      if (registro == '+'){
         int v; cin >> v;
            somaVacinas += v;
      }
      else {
         int v; cin >> v;
         if (v > somaVacinas)
            furiosos++;
         else
            somaVacinas -= v;
      }
   }

   cout << somaVacinas << " " << furiosos << endl;

   return 0;
}