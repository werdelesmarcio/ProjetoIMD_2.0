#ifndef _PROFISSIONAL_
#define _PROFISSIONAL_

#include <iostream>

using namespace std;

//#pessoas que trabalha na recepão, na limpeza do 
//local(recepção, banheiros, sala de espera), 
//motorista
class Profissional {

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
    string getEndereco();
    void setEndereco(string endereco_);

};

#endif