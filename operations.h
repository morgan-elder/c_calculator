#ifndef OPERATIONS_H 
#define OPERATIONS_H

struct Operation {
  double operand[2];
  int opChoice;
  double result;
  char operator;
  void (*doOperation)(struct Operation* opPointer);
};

double add(double operand1, double operand2);

double subtract(double operand1, double operand2);

double multiply(double operand1, double operand2);

double divide(double operand1, double operand2);

double modulo(double operand1, double operand2);

#endif