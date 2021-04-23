#include <stdio.h>
#include <string.h>
#include "operations.h"

void displayMenu();
void enterOperation(struct Operation* op);

int main() {
  struct Operation op;
  displayMenu();
  enterOperation(&op);
  if (op.opChoice == 0) {
    return 0;
  } else {
    op.doOperation(&op);
    printf("%lf", op.result);
  }

  return 0;

}

void displayMenu() {
  char title[] = "Calculator\n";
  char options[] = "Options:\n\t1) Add \n\t2) Subtract\n\t3) Multiply\n\t4) Divide\n\t5) Remainder\n\t0) Quit\n";
  printf("%s%s",title,options);
}

void enterOperation(struct Operation* op) {
  const int MIN_CHOICE = 0;
  const int MAX_CHOICE = 5;
  op->opChoice = -1;
  
  while (op->opChoice < MIN_CHOICE || op->opChoice > MAX_CHOICE) {
    printf("Enter operation: ");
    scanf("%d%lf%lf", &op->opChoice,&op->operand[0],&op->operand[1]); 

    if (op->opChoice < MIN_CHOICE || op->opChoice > MAX_CHOICE) {
      printf("Invalid operation choice: must be an integer from 0-5");
    }
  }
}