#ifndef LIMITE_ERROR
#define LIMITE_ERROR

#include <stdexcept>
using std::out_of_range;

class ForaDoLimite : public out_of_range {
public:
  ForaDoLimite(const char *e = "Valor Fora do Limite!") : 
      out_of_range(e) {  }
};

#endif