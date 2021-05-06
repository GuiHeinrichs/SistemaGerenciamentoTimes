#ifndef Empresa_hpp
#define Empresa_hpp

/*
[X]a. Consulta de Jogador: Pode receber um nome ou ID e apresentar de qual time o jogador
faz parte, seus dados pessoais (nome/idade), seu salário bruto e líquido..

[X]b. Lista de jogadores: Similar ao método anterior, apresenta uma lista com todos os
jogadores que fazem parte da empresa.

[ ]c. Relatório Financeiro: Para cada time gerenciado pela empresa, apresentar o relatório
contendo os custos totais de cada time, destacando:
i. Valor a ser pago em salários
ii. Valor a ser destinado ao INSS
iii. Valor retido a ser pago ao imposto de renda
*/
#include <vector>
#include "Time.hpp"

class Empresa{
public:
  Empresa(string nomeEmpresa);
  void ConsultaJogador(string nome);
  void RelatorioFinanceiroEmpresa();
  void ListaJogadoresEmpresa();
  void AdicionaTime(string nome, string categoria, int quantidadeJogadores);
  void AdicionaJogadorEmpresa(string nome, int diaNascimento, int mesNascimento, int anoNascimento, string nacionalidade, string categoria, double salario);
  double TotalSalarios();

private:
  double DescontoINSS;
  double DescontoImposto;
  double salariosLiquidosTotal;
  double SalarioLiquido; 
  
  double auxiliar;
  double somaSalLiquido;
  int quantidadeJogadores;
  string nomeTime;
  string nomeEmpresa;


  vector <Time> Times;
  vector <Jogador> jogadores;
};

#endif