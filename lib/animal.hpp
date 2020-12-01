#ifndef _ANIMAIS_
#define _ANIMAIS_

#include <iostream>

using namespace std;

enum familia
{
    anfibio,
    reptil,
    mamifero,
    ave
};

enum habitat
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
    string especie;
    string raca;
    string nascimento;
    string dataentrada;

public:
    Animal();
    Animal(string codigo, string especie, string raca,
            string nascimento, string dataentrada);

    ~Animal();
    string getCodigo();
    string getEspecie();
    string getRaca();
    string getNascimento();
    string getDataEntrada();

    void setCodigo(string codigo_);
    void setEspecie(string especie_);
    void setRaca(string raca_);
    void setNascimento(string nascimento_);
    void setDataEntrada(string dataentrada_);
};

#endif