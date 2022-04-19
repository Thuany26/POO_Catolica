#pragma once

#include <string>
/*
2. Faça um programa que calcule a média de um aluno de acordo com o critério definido
nesta disciplina (n1, n2, n3). Além disso, o programa tem que informar o status do aluno de
acordo com o critério a seguir:
a. Nota acima de 6 à “Aprovado”
b. Nota entre 4 e 6 Verificação Suplementar”
c. Nota abaixo de 4 à Conceito “Reprovado”
*/

class Aluno
{

	std::string situacao;
public:	
	Aluno(float n1, float n2, float n3);
};

