#include "Exercicio_2.h"
#include <iostream>

Aluno::Aluno(float n1, float n2, float n3)
{
	float notaFinal = (n1 + n2 + n3) / 3;
	if (notaFinal > 6)
		situacao = "Aprovado";
	else if (notaFinal > 4 && notaFinal < 6)
		situacao = "Verificacao Suplementar";
	else
		situacao = "Reprovado";

	std::cout << situacao << std::endl;
}
