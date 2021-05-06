#include "Empresa.hpp"

Empresa::Empresa(string nomeEmpresa){
  this->nomeEmpresa = nomeEmpresa;
}

void Empresa::AdicionaTime(string nome, string categoria, int quantidadeJogadores){
  nomeTime = nome;
  cout << "\nTime " << nome << " a partir de agora é gerenciado pela " << nomeEmpresa << endl;
  Times.push_back(Time(nome, categoria, quantidadeJogadores));


  this->quantidadeJogadores = quantidadeJogadores;
}

void Empresa::AdicionaJogadorEmpresa(string nome, int diaNascimento, int mesNascimento, int anoNascimento, string nacionalidade, string categoria, double salario){

  for(int i=0; i < quantidadeJogadores; i++){
    
    jogadores.push_back(Jogador( nome, diaNascimento, mesNascimento, anoNascimento, nacionalidade, categoria, salario));
  
  }
  for(int i= 0; i < jogadores.size(); i++){
    if(jogadores[i].getNome() == nome){
      auxiliar = jogadores[i].salarioLiquido(jogadores[i].getSalario());
    }  
  }
  
  somaSalLiquido += auxiliar;
  
  for(int i=0; i < jogadores.size(); i++){
    if(jogadores[i].getNome() == nome){
      DescontoINSS = jogadores[i].DescontoINSSEmpresa(jogadores[i].getSalario());
      DescontoImposto = jogadores[i].DescontoImpostoEmpresa(jogadores[i].getSalario() - DescontoINSS);
    }
  }
}


  /*
  [ ]a. Consulta de Jogador: Pode receber um nome ou ID e apresentar de qual time o jogador
  faz parte, seus dados pessoais (nome/idade), seu salário bruto e líquido..
  */

void Empresa::ConsultaJogador(string nome){
  cout << "\nTime: " << nomeTime << endl;
  for(int i=1; i < jogadores.size(); i++){
    if(jogadores[i].getNome() == nome){
      jogadores[i].EmpresaConsulta();
    }
  }
}

void Empresa::ListaJogadoresEmpresa(){
/*[ ]b. Lista de jogadores: Similar ao método anterior, apresenta uma lista com todos os
jogadores que fazem parte da empresa.
*/
  for(int i=1; i<jogadores.size(); i++){
    jogadores[i].EmpresaConsulta();
  }
}

/*[ ]c. Relatório Financeiro: Para cada time gerenciado pela empresa, apresentar o relatório
contendo os custos totais de cada time, destacando:
i. Valor a ser pago em salários
ii. Valor a ser destinado ao INSS
iii. Valor retido a ser pago ao imposto de renda
*/

void Empresa::RelatorioFinanceiroEmpresa(){
  for(int i= 0; i < Times.size(); i++){
      cout << "\nTime: " << Times[i].getNome() << "\n" << "Valor a ser pago em salarios: " << somaSalLiquido << "\n" << "Valores INSS: " << DescontoINSS << "\n" << "Valores Imposto: "<< DescontoImposto << endl;
  }
}