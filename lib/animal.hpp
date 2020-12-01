#ifndef _ANIMAIS_
#define _ANIMAIS_

#include <iostream>

using namespace std;

enum tpFamilia
{
    anfibio,
    reptil,
    mamifero,
    ave
};

enum tpHabitat
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

    tpFamilia familia;
    tpHabitat habitat;

public:
    Animal();
    
    Animal(string codigo, string especie, tpFamilia familia, 
           string raca, tpHabitat habitat, string nascimento, string dataentrada):
           codigo(codigo), especie(especie), familia(familia), raca(raca), 
           habitat(habitat), nascimento(nascimento), dataentrada(dataentrada){};

    virtual ~Animal(){};
    
    string getCodigo();
    string getEspecie();
    tpFamilia getFamilia();
    string getRaca();
    tpHabitat getHabitat();
    string getNascimento();
    string getDataEntrada();

    void setCodigo(string codigo_);
    void setEspecie(string especie_);
    void setFamilia(tpFamilia familia_);
    void setRaca(string raca_);
    void setHabitat(tpHabitat habitat_);
    void setNascimento(string nascimento_);
    void setDataEntrada(string dataentrada_);
};

#endif