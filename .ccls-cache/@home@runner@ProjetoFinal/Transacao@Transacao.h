#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <string>
using std::string;

class Transacao {

protected:
  string data;
  double valor;
  string descricao;

public:
  Transacao() {};

  Transacao( string, double, string );

  virtual string getData() const { return data; };

  virtual double getValor() const { return valor; };

  virtual string getDescricao() const { return descricao; };

};

#endif