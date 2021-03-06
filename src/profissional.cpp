#include <iostream>
#include <string>

#include "profissional.hpp"
#include "funcionario.hpp"

using namespace std;

//lista de inicializadores de atributos
Profissional::Profissional(string nome,
                           string telefone,
                           string email, 
                           string endereco) : Profissional(nome, 
                                                          telefone,
                                                          email, 
                                                          endereco)
{
    cout << " Novo veterinario adicionado " << this->nome << " construido." << endl;
}
//----------------------------------------------------------------
Profissional::~Profissional()
{
    cout << this->nome << "Esta deixando de existir." << endl;
}