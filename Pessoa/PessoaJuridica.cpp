#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
using std::string;

#include "Pessoa.h"
#include "PessoaJuridica.h"

PessoaJuridica::PessoaJuridica() : Pessoa( "" ), CNPJ( 0 ) { }

PessoaJuridica::PessoaJuridica(string nome, long int CNPJ) : Pessoa( nome ), CNPJ( CNPJ ) { }

void PessoaJuridica::exibirPessoa() const{
  cout << "Nome: " << this->getNome() << endl;
  cout << "CNPJ: " << this->getCnpj() << endl;
  cout << endl;
}