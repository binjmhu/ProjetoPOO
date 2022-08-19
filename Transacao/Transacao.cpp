#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
using std::string;

#include "Transacao.h"

Transacao::Transacao( string data, double valor, string descricao) : 
data( data ), valor( valor ), descricao( descricao ) { }
