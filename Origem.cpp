#include <iostream>
#include "Exercicio_1.h"
#include "Exercicio_2.h"
#include "Exercicio_3.h"

void Exercicio1();
void Exercicio2();
void Exercicio3();
void Exercicio4();
void Exercicio5();
void Exercicio6();
void Exercicio7();
void Exercicio8();
void Exercicio9();



int main() {
	Exercicio3();



	return 0;
}

void Exercicio1() {
	Exercicio_1 classe1(1, 1.5, "oi");
	Exercicio_1 classe2(1, 1.2, "xau");
}

void Exercicio2() {
	Aluno pedrinho(7, 8, 9.3f);
	Aluno joao(4, 5.4f, 3.6f);
}

void Exercicio3() {
	Carro celta(1, "tuka", 300);
	celta.Acelerar(3000);
	celta.Parar();
	celta.Frear(3000);
	std::cout << celta.getVelocidadeAtual();
	
}
void Exercicio4() {
	
}
void Exercicio5() {
	
}
void Exercicio6() {
	
}
void Exercicio7() {
	
}
void Exercicio8() {
	
}
void Exercicio9() {
	
}