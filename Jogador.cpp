#include "Jogador.hpp"
#include <iostream>

int Jogador::UltimoId=0;

Jogador::Jogador(string nome, int diaNascimento, int mesNascimento, int anoNascimento, string nacionalidade, string categoria, double salario){

this->nome = nome;
this->diaNascimento = diaNascimento;
this->mesNascimento = mesNascimento;
this->anoNascimento = anoNascimento;
this->nacionalidade = nacionalidade;
this->categoria = categoria;
this->salario = salario;
this->numId = geraId();

}

int Jogador::geraId(){
  UltimoId++;
  return UltimoId;
}

string Jogador::getNome(){
  return nome;
}

string Jogador::getcategoria(){
  return categoria;
}

float Jogador::getSalario(){
  return salario;
}

int Jogador::calculaIdade(int anoNascimento){
  int idade = 2021-anoNascimento;
  return idade;
}

void Jogador::tempoAposentadoria(){
  int anosAposentadoria = 60 - calculaIdade(anoNascimento);

if(anosAposentadoria >= 1)
  cout << "\nFaltam " << anosAposentadoria << " anos para anunciar sua aposentadoria." << endl;
else
  cout << "\nChegou a hora de se aposentar: " << calculaIdade(anoNascimento) << "anos." << endl;
}

double Jogador::DescontoINSSEmpresa(double salario){
double Descontos;
  if(salario <= 1.100){
    Descontos = salario * 0.075;
    return Descontos;
  }else if(salario > 1.100 && salario <= 2.000){
    Descontos = (salario - 1.100) * 0.09;
    return Descontos;
  }else if(salario > 2.000 && salario <= 3.100){
    Descontos = (salario - 2.000) * 0.12;
    return Descontos;
  }else if(salario > 3.100 && salario <= 4.100){
    Descontos = (salario - 3.100) * 0.14;
    return Descontos;
  }else{
    Descontos = (salario - 4.100) * 0.14;
    return Descontos;
  }
}

double Jogador::DescontoImpostoEmpresa(double salario){
double Descontos;
  if(salario > 1.100 && salario <= 2.000){
    Descontos = salario * 0.075;
    return Descontos;
  }else if(salario > 2.000 && salario <= 3.100){
    Descontos = salario * 0.15;
    return Descontos;
  }else if(salario > 3.100 && salario <= 4.100){
    Descontos = salario * 0.22;
    return Descontos;
  }else{
    Descontos = salario * 0.27;
    return Descontos;
  }
}

double Jogador::salarioLiquido(double salario){
  double Descontos;
  double salarioFinal;

  if(salario <= 1.100){
    Descontos = salario * 0.075;
    salarioFinal = salario - Descontos;
    return salarioFinal;
  }else if(salario > 1.100 && salario <= 2.000){
    Descontos = (salario - 1.100) * 0.165;
    salarioFinal = salario - Descontos;
    return salarioFinal;
  }else if(salario > 2.000 && salario <= 3.100){
    Descontos = (salario - 2.000) * 0.27;
    salarioFinal = salario - Descontos;
    return salarioFinal;
  }else if(salario > 3.100 && salario <= 4.100){
    Descontos = (salario - 3.100) * 0.36;
    salarioFinal = salario - Descontos;
    return salarioFinal;
  }else{
    Descontos = (salario - 4.100) * 0.41;
    salarioFinal = salario - Descontos;
    return salarioFinal;
  }
}

void Jogador::toString(){
  cout << "\nJogador " << numId << "\n" << "Nome: " << nome << "\n" << "Data de nascimento: " << diaNascimento << "/" << mesNascimento << "/" << anoNascimento << "\n" << "Nacionalidade: " << nacionalidade << "\n" << "Categoria: " << categoria << "\n" << "Salario bruto: " << salario << endl;
}

void Jogador::EmpresaConsulta(){
  cout << "\nNome: " << nome << "\n" << "Idade: " << calculaIdade(anoNascimento) << "\n" << "Categoria: " << categoria << "\n" << "Salario bruto: " << salario << "\n" << "Salario liquido: " << salarioLiquido(salario) << endl;
}

int Jogador::getAno(){
  return anoNascimento;
}