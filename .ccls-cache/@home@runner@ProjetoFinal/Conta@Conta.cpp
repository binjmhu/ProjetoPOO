#include "Conta.h"
#include "../Pessoa/Pessoa.h"

#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

Conta::Conta(int numeroConta, Pessoa &correntista, double saldo) : 
            numeroConta( numeroConta ), correntista( &correntista ), saldo( saldo )  { }


