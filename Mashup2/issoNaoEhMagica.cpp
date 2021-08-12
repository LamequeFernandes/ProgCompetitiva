#include <bits/stdc++.h>

using namespace std;

int main() {
   
   int a, b;

   vector<int> a_n;
   vector<int> b_n;
   vector<int> all;

   cin >> a;
   for (int i = 0; i < a; i++){
      int n;
      cin >> n;
      a_n.push_back(n);
   }

   cin >> b;
   for (int i = 0; i < b; i++){
      int n;
      cin >> n;
      b_n.push_back(n);
   }

   for (int i = 0; i < a_n.size(); i++){
      all.push_back(a_n[i]);
   }
   for (int i = 0; i < b_n.size(); i++){
      all.push_back(b_n[i]);
   }

   int soma = 0;
   for (int i = 0; i < all.size(); i++){
      for (int j = 0; j < all.size() && j < a_n.size(); i++){
         for (int k = 0; k < all.size() && k < b_n.size(); k++){
            if (all[i] != a_n[j] + b_n[k]) {               
               cout << a_n[j] << " " << b_n[k] << endl;
               k = 500;
               i = 500;
               j = 500;
         
            }
         }
      }
   }      
   cout << soma << endl;
   return 0;
}