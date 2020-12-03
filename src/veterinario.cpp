#include <iostream>
#include <string>

#include "veterinario.hpp"

using namespace std;

//lista de inicializadores de atributos
Veterinario::Veterinario(string nome, string telefone,
                         string email, string endereco) : Funcionario(nome, telefone, email, endereco)
{

    cout << " Novo veterinario adicionado " << this->nome << " construido." << endl;
}

Veterinario::~Veterinario()
{
    cout << this->nome << "Esta deixando de existir." << endl;
}
