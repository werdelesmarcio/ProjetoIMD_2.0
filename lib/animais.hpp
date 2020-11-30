#pragma once

#ifndef _ANIMAIS_H_
#define _ANIMAIS_H_

#include <iostream>

using namespace std;

enum tipoAnimal
{
    anfibio,
    reptil,
    mamifero,
    ave
};

enum classifAnimal
{
    silvestreNativo,
    silvestreExotico,
    domesticoNativo,
    domesticoExotico
};

//Classe que trata dos animais e de suas características.
class Animal
{

public:
    string getTipo();
    void setTipo(string tipo_);
    string getRaca();
    void setRaca(string raca_);
    string getIdade();
    void setIdade(string idade_);
    string getCodigo();
    void setCodigo(string codigo_);

    // Este método lê os dados do animal. Acessando os métodos que irão preencher e efetivar a operação.
    /**
private:
// Método interno usado para verificar o cadastro do animal
    string tipo;
    string raca;
    string idade;
    string codigo;
**/
};

#endif
