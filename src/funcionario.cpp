#include <iostream>
#include <string>

#include "funcionario.h"


using namespace std;

Funcionario::Funcionario(string codigo,
                         string nome,
                         Funcao funcao,
                         string telefone,
                         string email,
                         string endereco) : codigo(codigo),
                                            nome(nome),
                                            funcao(funcao),
                                            telefone(telefone),
                                            email(email),
                                            endereco(endereco)
{
    cout << "Funcionario " << this->nome << " construido " << endl;
}
//--------------------------------------------------------------------
Funcionario::~Funcionario()
{
    cout << "Funcionario " << this->nome << " destruido " << endl;
}
//--------------------------------------------------------------------
string Funcionario::getCodigo()
{
    return this->codigo;
}

void Funcionario::setCodigo(string codigo)
{
    this->nome = codigo;
}
//--------------------------------------------------------------------
string Funcionario::getNome()
{
    return this->nome;
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}
//--------------------------------------------------------------------
Funcao Funcionario::getFuncao()
{
    return this->funcao;
}

void Funcionario::setFuncao(Funcao Funcao)
{
    this->funcao = funcao;
}
//--------------------------------------------------------------------
string Funcionario::getTelefone()
{
    return this->telefone;
}

void Funcionario::setTelefone(string telefone)
{
    this->telefone = telefone;
}
//--------------------------------------------------------------------
string Funcionario::getEmail()
{
    return this->email;
}

void Funcionario::setEmail(string email)
{
    this->email = email;
}
//--------------------------------------------------------------------
string Funcionario::getEndereco()
{
    return this->endereco;
}

void Funcionario::setEndereco(string endereco)
{
    this->endereco = endereco;
}