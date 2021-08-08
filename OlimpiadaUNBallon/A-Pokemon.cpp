#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
 
/*
    vector<pair<string, long int>> testando;
    string teste;
    string testeDefinitivo;
    cin >> testeDefinitivo;
    testando.push_back(make_pair(testeDefinitivo, 7));
    cin >> teste;
    if(teste == testando[0].first){
        cout << "DEU CERTO CARAMBA" << endl;
    } 
*/
 
    long int qtdPokemons;
    long int qtdConsultas;
    vector<pair<string, long int>> dadosPokemon;
    vector<string> consulta;
 
    cin >> qtdPokemons >> qtdConsultas;
 
    for (long int i = 0; i < qtdPokemons; i++){
        string pokemon;
        long int level;
        cin >> pokemon >> level;
        dadosPokemon.push_back(make_pair(pokemon, level));
    }
    for (long int i = 0; i < qtdConsultas; i++){
        string nome;
        cin >> nome;
        consulta.push_back(nome);
    }
    
//    cout << dadosPokemon[0].first << dadosPokemon[0].second << endl << dadosPokemon[1].first << dadosPokemon[1].second << endl << dadosPokemon[2].first << dadosPokemon[2].second << endl << consulta[0] << endl << consulta[1] << endl;
 
    vector<long int>somaVitorias;
    for (long int i = 0; i < consulta.size(); i++)
        somaVitorias.push_back(0);
    
    for (long int i = 0; i < consulta.size(); i++){
        for (long int j = 0; j < dadosPokemon.size(); j++) {
            if (consulta[i] == dadosPokemon[j].first) {
                for (long int k = 0; k < dadosPokemon.size(); k++){
                    if(dadosPokemon[j].second > dadosPokemon[k].second){
                        somaVitorias[i]++;
                    }
                }
            }
        }
    }
 
    for (long int i = 0; i < somaVitorias.size(); i++){
        cout << somaVitorias[i] << endl;
    }
 
    return 0;
}