#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class Pessoa {

protected:
  string nome;

public:
  Pessoa() {};

  Pessoa( string );

  virtual string getNome() const { return this->nome; };

};

#endif