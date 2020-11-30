#ifndef _VETERINARIO_
#define _VETERINARIO_

#include <iostream>

using namespace std;

class Veterinario {

private:
    string especialidade;
    string nome;
    string telefone;
    string email;
    string endereco;
    //Animal* animal[]; //quais animais estar sendo acompanhado pelo veterinario

public:
    string getNome();
    void setNome(string nome_);
    string getTelefone();
    void setTelefone(string telefone_);
    string getEmail();
    void setEmail(string email_);
};

#endif