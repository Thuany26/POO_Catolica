#include "Exercicio_3.h"
#include <iostream>
using namespace std;

Carro::Carro(int numCarro, std::string nomePiloto, float velocidadeMax)
{
	this->numCarro = numCarro;
	this->nomePiloto = nomePiloto;
	this->velocidadeMax = velocidadeMax;
}

void Carro::Acelerar(float quanto)
{
	if (!carroLigado) {
		cout << "Carro desligado";
		return;
	}
	velocidadeAtual += quanto;

	if (velocidadeAtual > velocidadeMax) 
		velocidadeAtual = velocidadeMax;
}

void Carro::Parar()
{
	velocidadeAtual = 0;
}

void Carro::Frear(float quanto)
{
	if (quanto < 1) {
		quanto = 1;
	}
	velocidadeAtual -= velocidadeAtual * quanto / 100;
	if (velocidadeAtual < velocidadeMin) {
		velocidadeAtual = velocidadeMin;
	}

}

void Carro::Desligar()
{
	if (!carroLigado) {
		cout << "Carro já está desligado";
	}
	carroLigado = false;
}

void Carro::Ligar()
{
	if (carroLigado) {
		cout << "Carro já está ligado";
	}
	carroLigado = true;
}