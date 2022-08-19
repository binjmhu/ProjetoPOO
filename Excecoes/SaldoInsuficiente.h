#ifndef SALDO_INSUFICIENTE_ERROR
#define SALDO_INSUFICIENTE_ERROR

#include <stdexcept>
using std::out_of_range;

class SaldoInsuficiente : public out_of_range {
public:
  SaldoInsuficiente(const char *e = "Saldo Insuficiente!") : out_of_range(e) {
  }
};

#endif