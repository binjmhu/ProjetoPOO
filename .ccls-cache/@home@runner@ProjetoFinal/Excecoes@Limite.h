#ifndef LIMITE_ERROR
#define LIMITE_ERROR

#include <stdexcept>
using std::out_of_range;

class Limite : public out_of_range
{
public:
  Limite(const char *e = "Valor Fora do Limite!") : out_of_range(e) {
    
  }
};

#endif