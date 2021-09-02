#include <bits/stdc++.h>

using namespace std;

int main () {

   int n;
   vector<string> palavras;

   cin >> n;

   for (int i = 0; i < n; i++){
      string str; cin >> str;
      palavras.push_back(str);
   }

   for (int i = 0; i < n; i++){
      if(palavras[i].length() < 11)
         cout << palavras[i] << endl;
      else {
         cout << palavras[i].front() << palavras[i].length() - 2 << palavras[i].back() << endl;
      }
   }

   return 0;
}