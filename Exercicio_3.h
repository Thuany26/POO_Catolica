#pragma once

#include <string>
class Carro
{
	int numCarro;
	std::string nomePiloto;
	float velocidadeMax;
	float velocidadeMin = 0;
	float velocidadeAtual = 0;
	bool carroLigado = false;
public:

	Carro(int numCarro, std::string nomePiloto, float velocidadeMax);

	/*
		@param quanto = valor absoluto
	*/
	void Acelerar(float quanto);
	void Parar();
	void Frear(float quanto);
	void Desligar();
	void Ligar();

	inline std::string getNomePiloto() {
		return this->nomePiloto;
	}

	inline void setNomePiloto(std::string nomePiloto) {
		this->nomePiloto = nomePiloto;
	}
	
	inline float getVelocidadeAtual() {
		return this->velocidadeAtual;
	}

};

