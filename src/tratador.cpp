#include <iostream>

#include "tratador.hpp"

using namespace std;

//lista de inicializadores de atributos
Tratador::Tratador(string nome, string telefone, 
                string email, string endereco): 
                Funcionario(nome, telefone, email, endereco){

        cout << " Novo veterinario adicionado " << this->nome << " construido." << endl;
}

Tratador::~Tratador(){
    cout << this->nome << "Esta deixando de existir." << endl;
}   