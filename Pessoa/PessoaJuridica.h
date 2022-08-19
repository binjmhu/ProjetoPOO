#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Pessoa.h"

#include <string>
using std::string;

class PessoaJuridica : public Pessoa {

protected:
  long int CNPJ;

public:
  PessoaJuridica();
  
  PessoaJuridica( string, long int );

  virtual void exibirPessoa() const;

  virtual long int getCnpj() const { return this->CNPJ; };

};

#endif