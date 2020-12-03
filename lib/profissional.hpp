#pragma once

#ifndef _PROFISSIONAL_H_
#define _PROFISSIONAL_H_

#include <iostream>

#include "funcionario.hpp"

using namespace std;

enum funcao
{
    recepcionista,
    limpeza,
    motorista,
    limpezaLocalAnimais,
    preparacaoDeAlimentos

};

//#pessoas que trabalha na recepão, na limpeza do
//local(recepção, banheiros, sala de espera),
//motorista
class Profissional : public Funcionario
{

public:
    Profissional();
    Profissional(string nome, string telefone,
                 string email, string endereco);
    ~Profissional();

private:
    string funcao;
};

#endif