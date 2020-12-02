#pragma once

#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <iostream>
#include <list>

using namespace std;

enum funcao
{
    recepcionista,
    limpeza,
    motorista,
    limpezaLocalAnimais,
    preparacaoDeAlimentos

};

class Funcionario
{

    //pode ser acessado pela propria classee pelos metodos derivados da classe(subclasses)
protected:
    string nome;
    string telefone;
    string email;
    string endereco;

public:
    Funcionario();
    Funcionario(string nome, string telefone,
                string email, string endereco);
    ~Funcionario();
    string getNome();
    string getTelefone();
    string getEmail();
    string getEndereco();

    void setNome(string nome);
    void setTelefone(string telefone);
    void setEmail(string email);
    void setEndereco(string endereco);
};

#endif