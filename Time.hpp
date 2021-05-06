#ifndef Time_hpp
#define Time_hpp

#include "Jogador.hpp"
#include <vector>

/*
a. Atributos:
i. Nome
ii. Id do Time - Informação unica, gerada automaticamente para cada atleta
iii. Categoria (Base / Profissional)
iv. Conjunto de jogadores que fazem parte do time

b. Métodos
i. Gets e Sets
ii. RelatórioGeral: Apresenta o nome do time e os dados de seus jogadores
iii. Relatório Financeiro: Apresenta o nome de todos os jogadores ativos, seu
respective salário bruto e líquido.
*/


class Time{
public:
  Time(string nome, string categoria, int quantidadeJogadores);
  string getNome();
  void adicionaJogadores(string nome, int diaNascimento, int mesNascimento, int anoNascimento, string nacionalidade, string categoria, double salario);
  void RelatorioGeral();
  void RelatorioFinanceiro();
  void ConsultaEmpresa(string nome);
  
  vector<Jogador>getJogadores();

private:
  double DescontoINSS;
  double DescontoImposto;
  double SalarioLiquido;
  double salariosLiquidosTotal;
  int numIdTime;
  int totalJogadores;
  string nome;
  string categoria;
  int quantidadeJogadores;

  int static numJogadores;
  int contaJogadores();
  vector<Jogador> jogadores;
  int static UltimoIdTime;
  int geraIdTime();
};

#endif