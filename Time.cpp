#include "Time.hpp"
 int Time::UltimoIdTime=0;
 
 int Time::numJogadores=0;

Time::Time(string nome, string categoria, int quantidadeJogadores){
  this->nome = nome;
  this->categoria = categoria;
  this->quantidadeJogadores = quantidadeJogadores;
  this->numIdTime = geraIdTime();
  this->totalJogadores = contaJogadores();

}

int Time::geraIdTime(){
  UltimoIdTime++;
  return UltimoIdTime;
}

int Time::contaJogadores(){
  numJogadores++;
  return numJogadores;
}

vector<Jogador>Time::getJogadores(){
  return jogadores;
}

void Time::adicionaJogadores(string nome, int diaNascimento, int mesNascimento, int anoNascimento, string nacionalidade, string categoria, double salario){

  jogadores.push_back(Jogador(nome, diaNascimento, mesNascimento, anoNascimento, nacionalidade, categoria, salario));
  
  if(numJogadores <= quantidadeJogadores){
    cout << "\nAdicionando o jogador de número " << numJogadores << ":" << endl;
    contaJogadores();
  }else{
    cout << "\nImpossível adicionarmos mais um jogador, pois a equipe tem um elenco máximo de " << quantidadeJogadores << " jogadores." <<endl;
  }
}

string Time::getNome(){
  return nome;
}

void Time::RelatorioGeral(){
  cout << "\nTime: " << nome << endl;
  for(int i=0; i < jogadores.size(); i++){
    jogadores[i].toString();
  }
}

void Time::RelatorioFinanceiro(){
  cout << "\nJogadores ativos: " << endl;
  for(int i= 0; i < jogadores.size(); i++){
     cout << "\nNome: " << jogadores[i].getNome() << "\n" << "Salario bruto: " << jogadores[i].getSalario() << "\n" << "Salario liquido: " << jogadores[i].salarioLiquido(jogadores[i].getSalario()) << "\n" << endl;
  }
}

void Time::ConsultaEmpresa(string nome){
  for(int i= 0; i < jogadores.size(); i++){
    if(jogadores[i].getNome() == nome){
      cout << "\nNome: " << nome << "\n" << "Idade: " << jogadores[i].calculaIdade(jogadores[i].getAno()) << "\n" << "Categoria: " << jogadores[i].getcategoria() << "\n" << "Salario bruto: " << jogadores[i].getSalario() << "\n" << "Salario liquido: " << jogadores[i].salarioLiquido(jogadores[i].getSalario()) << endl;
    }
  }
}




