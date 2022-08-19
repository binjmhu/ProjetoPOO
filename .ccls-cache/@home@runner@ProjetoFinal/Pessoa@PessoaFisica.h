#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

#include <string>
using std::string;

class PessoaFisica : public Pessoa {

protected:
  long int CPF;

public:
  PessoaFisica();
  
  PessoaFisica( string, long int );

  virtual void exibirPessoa() const;

  virtual long int getCpf() const { return this->CPF; };

};

#endif