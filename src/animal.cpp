#include <iostream>
#include <string>

#include "animal.hpp"

using namespace std;

//lista de inicializadores de atributos
Animal::Animal(string codigo, string especie, tpFamilia familia,
               string raca, tpHabitat habitat, string nascimento, string dataentrada) : 
               codigo(codigo), especie(especie), familia(familia), raca(raca),
               habitat(habitat), nascimento(nascimento), dataentrada(dataentrada)
{
    cout << " Novo animal adicionado " << this->codigo << " construido." << endl;
}

Animal::~Animal()
{
    cout << "Animal " << this->codigo << "Dado baixa." << endl;
}

string Animal::getCodigo()
{
    return this->codigo;
}

void Animal::setCodigo(string codigo_)
{
    this->codigo = codigo_;
}

string Animal::getEspecie()
{
    return this->especie;
}

void Animal::setEspecie(string especie_)
{
    this->especie = especie_;
}

void Animal::setFamilia(tpFamilia familia_)
{
    this->familia = familia_;
}

string Animal::getRaca()
{
    return this->raca;
}

void Animal::setRaca(string raca_)
{
    this->raca = raca_;
}

void Animal::setHabitat(tpHabitat habitat_){
    this -> habitat = habitat_;
}

string Animal::getNascimento()
{
    return this->nascimento;
}

void Animal::setNascimento(string nascimento_)
{
    this->nascimento = nascimento_;
}

string Animal::getDataEntrada()
{
    return this->dataentrada;
}

void Animal::setDataEntrada(string dataentrada_)
{
    this->dataentrada = dataentrada_;
}
