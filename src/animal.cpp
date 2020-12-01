#include <iostream>
#include <string>

#include "animal.hpp"

using namespace std;

//lista de inicializadores de atributos
Animal::Animal(string codigo, string especie, string raca, 
                string nascimento, string dataentrada): 
                Animal(codigo, especie,
                        raca, nascimento,
                        dataentrada){

        cout << " Novo animal adicionado " << this->codigo << " construido." << endl;
}

Animal::~Animal(){
    cout <<"Animal " << this->codigo << "Dado baixa." << endl;
}

string Animal::getCodigo(){
    return this->codigo;
}

void Animal::setCodigo(string codigo_){
    this->codigo = codigo_;
}

string Animal::getEspecie(){
    return this->especie;
}

void Animal::setEspecie(string especie_){
    this->especie = especie_;
}

string Animal::getRaca(){
    return this->raca;
}

void Animal::setRaca(string raca_){
    this->raca = raca_;
}

string Animal::getNascimento(){
    return this->nascimento;
}

void Animal::setNascimento(string nascimento_){
    this->nascimento = nascimento_;
}

string Animal::getDataEntrada(){
    return this->dataentrada;
}

void Animal::setDataEntrada(string dataentrada_){
    this->dataentrada = dataentrada_;
}


