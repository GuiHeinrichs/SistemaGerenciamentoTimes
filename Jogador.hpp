#ifndef Jogador_hpp
#define Jogador_hpp

#include <iostream>
using namespace std;

class Jogador{
public:
  Jogador(string nome, int diaNascimento, int mesNascimento, int anoNascimento, string nacionalidade, string categoria, double salario);
  
  string getNome();
  int getAno();
  string getNacionalidade();
  string getcategoria();
  float getSalario();
  int calculaIdade(int anoNascimento);
  void tempoAposentadoria();
  double salarioLiquido(double salario);
  void toString();
  void EmpresaConsulta();
  double DescontoINSSEmpresa(double salario);
  double DescontoImpostoEmpresa(double salario);

private:
  string nome;
  int diaNascimento;
  int mesNascimento;
  int anoNascimento;
  string nacionalidade;
  string categoria;
  float salario;
  int numId;

  int static UltimoId;
  int geraId();

};

#endif