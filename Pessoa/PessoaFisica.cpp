#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
using std::string;

#include "Pessoa.h"
#include "PessoaFisica.h"

PessoaFisica::PessoaFisica() : Pessoa( "" ), CPF( 0 ) { }

PessoaFisica::PessoaFisica(string nome, long int CPF) : Pessoa( nome ), CPF( CPF ) { }

void PessoaFisica::exibirPessoa() const{
  cout << "Nome: " << this->getNome() << endl;
  cout << "CPF: " << this->getCpf() << endl;
  cout << endl;
}