#pragma once

#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <iostream>
#include <list>

#include "veterinario.hpp"
#include "tratador.hpp"
#include "profissional.hpp"

using namespace std;

enum especialidade
{
    clinicoGeral,
    cirurgiao,
    anestesista,
    cardiologista,
    neurologista,
    psicologo,
    nutricionista

};

enum funcao
{
    recepcionista,
    limpeza,
    motorista,
    limpezaLocalAnimais,
    preparacaoDeAlimentos

};

class Funcionario {

private:
    //string nome;   
    Veterinario* veterinario[];
    //Tratador* tratador[];
    //Profissional* profissional[];
    int qtdProfissionais = 0;
    int qtdVeterinarios = 0;
    int qtdTratadores = 0;

public:
    //string getNome();
    //void setNome(string nome_);
    void addVeterinario(Veterinario* novo);
    void removVeterinario(string nome);
    void addTratador(Tratador* novo);
    void removTratador(string nome);
    void addProfissional(Tratador* novo);
    void removProfissional(string nome);
};

#endif