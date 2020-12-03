#include <iostream>
#include "syscomm.cpp"

#include "animal.hpp"

void menuPrincipal()
{
	char opcao;
	limpaTela();
	do
	{
		cout << endl
			 << "+----------------------------------------+";
		cout << endl
			 << "|      PET-FERA - VERSAO 1.0 (BETA)      |";
		cout << endl
			 << "+----------------------------------------+";
		cout << endl
			 << "|                 OPCOES:                |";
		cout << endl
			 << "+----------------------------------------+";
		cout << endl
			 << "| A - Cadastrar um Animal.               |";
		cout << endl
			 << "| R - Remover um Animal.                 |";
		cout << endl
			 << "| L - Relatorio de Animais Cadastrados.  |";
		cout << endl
			 << "+----------------------------------------+";
		cout << endl
			 << "| U - Atualizar Cadastro.                |";
		cout << endl
			 << "+----------------------------------------+";
		cout << endl
			 << endl
			 << "X - Encerrar.";

		cout << endl
			 << endl
			 << "Selecione a opcao: ";

		cin >> opcao;

		limpaTela();

		switch (opcao)
		{
		case 'A':
		case 'a':
		{
			cout << "Selecionou a opcao: A";
		}
		break;
		case 'R':
		case 'r':
		{
			cout << "Selecionou a opcao: R";
		}
		break;
		case 'L':
		case 'l':
		{
			cout << "Selecionou a opcao: L";
		}
		break;
		case 'U':
		case 'u':
		{
			cout << "Selecionou a opcao: U";
		}
		break;
		case 'X':
		case 'x':
		{
			return;
		}
		break;
		default:
			cout << endl
				 << "OPCAO INVALIDA!";
		}
		cout << endl;

		pausar();
		limpaTela();

	} while (opcao != 'X' && opcao != 'x');
}

int main(int argc, char const *argv[])
{
	menuPrincipal();

	return 0;
}
