#include <bits/stdc++.h>

using namespace std;

int main () {

   int t; cin >> t;
   vector<int> a; // vetor em q sera armazenado a primeira posicao q o usuario da
   vector<int> b; // vetor em q sera armazenado o opsto de "a" de acordo com o usuario
   vector<int> c; // vetor em q sera armazenado a primeira posicao e que queremos q encontra o oposto dele
   
   // estrutura de repetiçao para colocar as entradas nos vetores declarados
   for (int i = 0; i < t; i++){
      int ai, bi, ci; cin >> ai >> bi >> ci;
      a.push_back(ai);
      b.push_back(bi);
      c.push_back(ci);
   }

   vector<int> tamCirculo; // vetor q vai armazenas o tamanho de cada circulo

   // estrutura de repetiçao  para pegar o tamanho de cada circulo
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

   vector<int> resultadosOposto; // vetor q vai armazenar cada resultado oposto de c

   for (int i = 0; i < t; i++) { // enquanto todo os circulos n forem analisados ele repete
      int oposto = c[i], volta = 0; // coloco o oposto igual a c para ele começar acontar a partir da posicao q o usuario digitou
         for (int j = 0; j < tamCirculo[i] / 2; j++){
            oposto++; // vai somar 1 no oposto ate completar mais (tamanho do circulo / 2)
            if (oposto > tamCirculo[i]) { // se o oposto passa do tamanho total do circulo ele volta para o inicio do circulo, exemplo: um circulo com 6 pessoas e ele quer o oposto de 4, quando ele chegar no 6 ele tem q voltar para a posicao 1, pq ja deu a volta no circulo
               oposto = 1;
               volta++; // aqui eu conto quantas voltas ja foram dadas, pq se der mais do que uma é impossivel tbm.
            }
         }
         //aqui verifico se o oposto encontrado vai ser igual ao numero primario do usuario, exemplo: se o oposto de 4 é 8, então o oposto de 8 tem q ser 4 e vice e versa. Entao a variavel chamada opostoDoOposto é o numero "c", declarada pelo usuario.
         int opostoDoOposto = oposto; // coloco o opostoDoOposto = a oposto para ele começar a contar a partir do numero oposto encontrado nos comandos acima
         int volta2 = 0;
         for (int j = 0; j < tamCirculo[i] / 2; j++){
            opostoDoOposto++; // vai somar 1 no opostoDoOposto ate completar mais (tamanho do circulo / 2)
            if (opostoDoOposto > tamCirculo[i]) {
               opostoDoOposto = 1; // assim como antes o opostoDoOposto pode estar quase dando a volta, entao se o opostoDoOposto passa do tamanho total do circulo ele volta para o inicio do circulo, exemplo: um circulo com 6 pessoas e ele quer o oposto de 4, quando ele chegar no 6 ele tem q voltar para a posicao 1, pq ja deu a volta no circulo
               volta2++;
            }

         }

         if (a[i] == b[i]-1 || a[i] == b[i]+1) // se os numeros forem sequenciais n pode haver um terceiro q tenha oposto
            resultadosOposto.push_back(-1);
         else if ((tamCirculo[i] % 2) != 0) // se o tamanho do circulo n for par o numero tbm é impossivel
            resultadosOposto.push_back(-1);
         else if (volta > 1 || volta2 > 1) // se o numero de voltas for maior do q 1 armazena -1 para o resultado do circulo
            resultadosOposto.push_back(-1);
         else if (c[i] > tamCirculo[i]) // se o numero c dado pelo usuario for maior do que o tamanho do circulo o resultado do circulo tbm sera -1
            resultadosOposto.push_back(-1);
         else if (opostoDoOposto == c[i]) // se apos ele encontrar o oposto ele contar mais metade do circulo e chegar ao numero c q o usuario informou o circulo armazena o resultado do oposto no resultado
            resultadosOposto.push_back(oposto);
         else  
            resultadosOposto.push_back(-1); 
      }   
   
   // printa na tela os resultados armazenados em c de casa circulo.
   for (int i = 0; i < t; i++)
      cout << resultadosOposto[i] << endl;


   return 0;
}