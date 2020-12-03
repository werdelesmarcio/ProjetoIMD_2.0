#include <iostream>
#include <vector>

#include "funcionario.hpp"

using namespace std;



int main() {


	int i = 0;
	int num;

	Funcionario vet01("vet","Paulo Fernandes", "849872133420", "paulofernandes@hotmail.com","Rua florliz,554, Bairro das flores");

	cout << "----------Veterinario inserido----------" << endl;
	cout << vet01.getId() << " - " << vet01.getNome() << endl;
	//Veterinario* veterinario1 = new Veterinario("")

	//vector<int> vetor;
	//vetor.resize(0);

	//cout << "Inicializando PetFera... " <<endl;

	//while (cin >> num){

		//vetor.push_back(num);
		//cout << "Numeros: " << vetor[i] << endl;
		//i++;
	//}

	return 0;
}