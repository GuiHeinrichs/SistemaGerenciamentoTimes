#include <iostream>
#include "Empresa.hpp"


int main() {
  Empresa emp("Empire");

  emp.AdicionaTime("Inter", "Profissional", 2);

  emp.AdicionaJogadorEmpresa("JOSE", 5, 6, 2001, "Brasileiro", "Profissional", 14.444);
  emp.AdicionaJogadorEmpresa("carlos", 5, 6, 2001, "Brasileiro", "Profissional", 14.444);
  
  // emp.RelatorioFinanceiroEmpresa();

  // emp.ConsultaJogador("JOSE");

  emp.ListaJogadoresEmpresa();

  
}