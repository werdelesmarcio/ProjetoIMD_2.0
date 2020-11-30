#pragma once

#include <vector>
#include <string>

using std::string;
using std::vector;

class Animais
{
public:
    Animais(string tipo, string raca, string idade, string codigo);
    ~Animais();
    
    string getTipo() const;
    string getRaca() const;
    string getIdade() const;
    string getCodigo() const;

    /** Este método lê os dados do animal.
         * puxando os métodos que irão
         * preencher e efetivar a operação
        **/

    //Interface com os usuários do sistema
    void novoAnimal();
    void removeAnimal();
    void vendeAnimal();
    void listaAnimal();

    //Metodos para realizar as operações

    void imprimeListaAnimais(string codigo);

private:
    // Método interno usado para verificar o cadastro do animal
    string tipo;
    string raca;
    string idade;
    string codigo;
};
