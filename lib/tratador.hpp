#ifndef _TRATADOR_
#define _TRATADOR_

#include <iostream>

using namespace std;

//limpeza dos locais onde os animais ficam, 
//preparação da alimentação dos animais
class Tratador {

private:
    string nome;
    string telefone;
    string email;
    string funcao;
    string endereco;

public:
    string getNome();
    void setNome(string nome_);
    string getTelefone();
    void setTelefone(string telefone_);
    string getEmail();
    void setEmail(string email_);
};

#endif
