#include <bits/stdc++.h>

using namespace std;

int main () {

   int n, x, y; cin >> n >> x >> y;
   vector<int> coordenadasX;
   vector<int> coordenadasY;
   vector<int> almoco;

   for (int i = 0; i < n; i++) {
      int xi, yi, valor; cin >> xi >> yi >> valor;
      coordenadasX.push_back(xi);
      coordenadasY.push_back(yi);
      almoco.push_back(valor);
   }
   
   vector<int> total;

   for (int i = 0; i < n; i++) {
      int a = x - coordenadasX[i];
      int b = y - coordenadasY[i];

      if (a < 0)
         a *= -1;
      if (b < 0)
         b *= -1;

      total.push_back((a + b) * 2 + almoco[i]);
   }

   int result = 0, result2 = 1;
   result = total[0];

   for (int i = 0; i < total.size(); i++){
      if (total[i] < result){
         result = total[i];
         result2 = i+1;
      }
   }

   cout << result << " " << result2 << endl;



   return 0;
}