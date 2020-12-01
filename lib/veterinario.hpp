#ifndef _VETERINARIO_
#define _VETERINARIO_

#include "funcionario.hpp"

#include <iostream>

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

class Veterinario: public Funcionario {

public:
    Veterinario();
    Veterinario(string nome, string telefone, 
                   string email, string endereco);
    ~Veterinario();


private:
  
    string especialidade;


};

#endif