#pragma once

#ifndef _ANIMAIS_
#define _ANIMAIS_

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
private:
    // Método interno usado para verificar o cadastro do animal
    string codigo;
    string familia;
    string especie;
    string raca;
    string habitat;
    string nascimento;
    string dataentrada;

public:
    string getCodigo();
    void setCodigo(string codigo_);
    string getFamilia();
    void setFamilia(string familia_);
    string getEspecie();
    void setEspecie(string especie_);
    string getRaca();
    void setRaca(string raca_);
    string getHabitat();
    void setHabitat(string habitat_);
    string getNascimento();
    void setNascimento(string nascimento_);
    string getDataEntrada();
    void setDataEntrada(string dataentrada_);
};

#endif