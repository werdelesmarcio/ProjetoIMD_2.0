#include <iostream>

#include "animal.hpp"

using namespace std;

//lista de inicializadores de atributos
Animal::Animal(string codigo, string familia, 
                string especie, string raca, 
                string habitat, string nascimento, string dataentrada): 
                Animal(codigo, familia, especie,
                        raca, habitat, nascimento,
                        dataentrada){

        cout << " Novo animal adicionado " << this->codigo << " construido." << endl;
}

Animal::~Animal(){
    cout << codigo << "Esta deixando de existir." << endl;
}