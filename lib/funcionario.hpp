#pragma once

#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <iostream>
#include <list>

#include "veterinario.hpp"

#define CAPACIDADE_MAX 5

using namespace std;

enum funcao
{
    recepcionista,
    limpeza,
    motorista,
    limpezaLocalAnimais,
    preparacaoDeAlimentos

};

class Funcionario {

//atributos pode ser acessado pela propria classe pelos metodos derivados da classe(subclasses)
protected:
    string id;
    string nome; 
    string telefone;
    string email;
    string endereco;
    int qtd_funcionario = 0;

private:
    Veterinario* veterinario[CAPACIDADE_MAX];

public:
   
    Funcionario();
    Funcionario(string id, string nome, string telefone, 
                  string email, string endereco);
    ~Funcionario();
    string getId();
    string getNome();
    string getTelefone();
    string getEmail();
    string getEndereco();

    void setId(string id);
    void setNome(string nome);
    void setTelefone(string telefone);
    void setEmail(string email);
    void setEndereco(string endereco);

    void addVeterinario(Veterinario* novo);
	void remVeterinario(string nome);
	void listarVeterinarios();

};

#endif