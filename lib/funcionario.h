#pragma once

#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <iostream>
#include <list>

#include "veterinario.hpp"

#define CAPACIDADE_MAX 5

using namespace std;

enum Funcao
{
    recepcionista,
    limpeza,
    motorista,
    limpezaLocalAnimais,
    preparacaoDeAlimentos

};

class Funcionario
{
    //atributos pode ser acessado pela propria classe pelos metodos derivados da classe(subclasses)
private:
    string codigo;
    string nome;
    Funcao funcao;
    string telefone;
    string email;
    string endereco;
    int qtd_funcionario = 0;
    Veterinario* veterinario[CAPACIDADE_MAX];

public:
    Funcionario();

    Funcionario(string codigo,
                string nome,
                Funcao funcao,
                string telefone,
                string email,
                string endereco);

    ~Funcionario();

    string getCodigo();
    string getNome();
    Funcao getFuncao();
    string getTelefone();
    string getEmail();
    string getEndereco();

    void listaFuncionario();

    void setCodigo(string codigo_);
    void setNome(string nome_);
    void setFuncao(Funcao funcao_);
    void setTelefone(string telefone_);
    void setEmail(string email_);
    void setEndereco(string endereco_);

    void addVeterinario(Veterinario *novo);
    void remVeterinario(string nome);
    void listarVeterinarios();
};

#endif