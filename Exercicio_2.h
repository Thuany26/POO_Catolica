#pragma once

#include <string>
/*
2. Fa�a um programa que calcule a m�dia de um aluno de acordo com o crit�rio definido
nesta disciplina (n1, n2, n3). Al�m disso, o programa tem que informar o status do aluno de
acordo com o crit�rio a seguir:
a. Nota acima de 6 � �Aprovado�
b. Nota entre 4 e 6 Verifica��o Suplementar�
c. Nota abaixo de 4 � Conceito �Reprovado�
*/

class Aluno
{

	std::string situacao;
public:	
	Aluno(float n1, float n2, float n3);
};

