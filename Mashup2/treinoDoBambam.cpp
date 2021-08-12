#include <bits/stdc++.h>

using namespace std;

int main() {

   int n, somaChest = 0, somaBiceps = 0, somaBack = 0, cont = 1;
   cin >> n;
   
   for (int i = 1; i <= n; i++){
      int num;
      cin >> num;
      if (cont % 2 == 0)
         somaBiceps += num;
      else if (cont % 3 == 0)
         somaBack += num;
      else
         somaChest += num;
      if (cont < 3)
         cont++;
      else
         cont = 1;
   }

   if (somaChest > somaBiceps && somaChest > somaBack)
      cout << "chest" << endl;
   if (somaBiceps > somaChest && somaBiceps > somaBack)
      cout << "biceps" << endl;
   if (somaBack > somaChest && somaBack > somaBiceps)
      cout << "back" << endl;

   return 0;
}