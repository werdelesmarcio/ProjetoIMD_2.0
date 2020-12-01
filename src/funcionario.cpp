#include <iostream>

#include "funcionario.hpp"

using namespace std;

Funcionario::Funcionario (string nome, string telefone, 
                  string email, string endereco): nome(nome),
                  telefone(telefone), email(email), endereco(endereco){

       cout << "Funcionrio " << this->nome << " construido " << endl;               
}

Funcionario::~Funcionario() {
    cout << "Funcionario " << this->nome << " destruido " << endl;
}

string Funcionario::getNome() {
    return this->nome;
}

void Funcionario::setNome(string nome) {
    this->nome = nome;
}

string Funcionario::getTelefone() {
    return this->telefone;
}

void Funcionario::setTelefone(string telefone) {
    this->telefone = telefone;
}

string Funcionario::getEmail() {
    return this->email;
}

void Funcionario::setEmail(string email) {
    this->email = email;
}
