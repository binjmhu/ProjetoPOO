#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <iostream>
#include <vector>

#include "../Pessoa/Pessoa.h"

#include "../Transacao/Transacao.h"

#include "../Excecoes/ForaDoLimite.h"
#include "../Excecoes/SaldoInsuficiente.h"

using std::vector;
using std::string;

class Conta {

protected:
  int numeroConta;
  Pessoa *correntista;
  double saldo;
  vector<Transacao> transacoes;

public:
  Conta(int, Pessoa &, double);
  Conta();

  virtual void print() const;
  virtual void transfere(double, Conta &) { };

  virtual int getNumeroDaConta() const { return this->numeroConta; }
  virtual string getNomeCorrentista() const { return this->correntista->getNome(); }
  virtual double getSaldo() { return this->saldo; }

  virtual void operator>>(double valor);

  virtual void operator<<(double valor) {

    if(valor <= 0) 
      throw ForaDoLimite("O valor está fora do limite permitido");
  
    else{
      this->saldo += valor;
      Transacao transacao("22/07", valor, valor > 0 ? "Crédito" : "Débito");
      this->transacoes.push_back(transacao);
    }
  }
};

#endif