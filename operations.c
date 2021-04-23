#include "operations.h"

void doOperation(struct Operation* opPointer) {

  switch(opPointer->opChoice) {
    case 1 :
      opPointer->operator = '+';
      opPointer->result = add(opPointer->operand[0],opPointer->operand[1]);
      break;
    default :
      break;
  }
}

double add(double operand1, double operand2) {
  return operand1 + operand2;
}

double subtract(double operand1, double operand2) {
  return operand1 - operand2;
}

double multiply(double operand1, double operand2) {
  return operand1 * operand2;
}

double divide(double operand1, double operand2) {
  return operand1 / operand2;
}

double modulo(double operand1, double operand2) {
  double modulus;
  if (operand1 < 0) {
    modulus = -operand1;
  } else {
    modulus = operand1;
  }

  if (operand2 < 0) {
    operand2= -operand2;
  }

  while (modulus >= operand2) {
    modulus -= operand2;
  }

  if (operand1 < 0) {
    modulus = -modulus; 
  }

  return modulus;
}