#include <bits/stdc++.h>

using namespace std;

int main () {

   string frase; cin >> frase;
   string fraseReformulada;   
   string wub = "WUB";
   int tam = frase.size();

   for (int i = 0; i < frase.size(); i++){
      if (i < tam - 2) {
         if ()



         if (frase.at(i) == 'W' && frase.at(i+1) == 'U' && frase.at(i+2) == 'B'){            
            frase.replace(i, 3, " ");
         }      
      }
   }


//   for (int i = 0; i < frase.size(); i++)
//      cout << frase.at(i) << endl;

/*

   for (int i = 0; i < frase.size(); i++){
      if (i < tam -1){
         if (frase.at(i) == ' ' && frase.at(i+1) == ' ')
            fraseReformulada.push_back(frase.at(i));
      }
   }

*/
   cout << frase << endl;

   return 0;
}