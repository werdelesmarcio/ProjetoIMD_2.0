#pragma once

#ifndef _TRATADOR_H_
#define _TRATADOR_H_

#include <iostream>

#include "funcionario.hpp"

using namespace std;

//limpeza dos locais onde os animais ficam, 
//preparação da alimentação dos animais
class Tratador: public Funcionario {

public:
    Tratador();
    Tratador(string nome, string telefone, 
                   string email, string endereco);
    ~Tratador();

private:

    string funcao;

};


#endif