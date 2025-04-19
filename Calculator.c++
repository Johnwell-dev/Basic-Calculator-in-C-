#include <iostream>

int main() {
  char op;
  double n1;
  double n2;
  double resultado;
  std::string c;

  std::cout<<"############### CALCULADORA ############### \n"; 
  std::cout<<"English (en), Spanish (es) \n";
  std::cout<<"You Are: ";
  std::cin>> c;

  if (c == "es")
  {
    std::cout<<"Elige el Operador: (+,-,*,/): ";
  std::cin>> op;
  std::cout<<"Elige el Numero 1: ";
  std::cin>> n1;
  std::cout<<"Elige el Numero 2: ";
  std::cin>> n2;

  switch (op) {
    case '+':
      resultado = n1+n2;
      std::cout<<"El resultado es: "<<resultado<<std::endl;
      break;
    case '-':
      resultado = n1-n2;
      std::cout<<"El resultado es: "<<resultado<<std::endl;
      break;
    case '*':
      resultado = n1*n2;
      std::cout<<"El resultado es: "<<resultado<<std::endl;
      break;
    case '/':
      resultado = n1/n2;
      std::cout<<"El resultado es: "<<resultado<<std::endl;
      break;
    default:
      std::cout<<"Error."<<std::endl;
  }

  std::cout<<"###########################################";
  return(0);
}
else if (c == "en")
{
  std::cout<<"Choose the Operator: (+,-,*,/): ";
  std::cin>> op;
  std::cout<<"Choose the Number 1: ";
  std::cin>> n1;
  std::cout<<"Choose the Number 2: ";
  std::cin>> n2;

  switch (op) {
    case '+':
      resultado = n1+n2;
      std::cout<<"The Result is: "<<resultado<<std::endl;
      break;
    case '-':
      resultado = n1-n2;
      std::cout<<"The Result is: "<<resultado<<std::endl;
      break;
    case '*':
      resultado = n1*n2;
      std::cout<<"The Result is: "<<resultado<<std::endl;
      break;
    case '/':
      resultado = n1/n2;
      std::cout<<"The Result is: "<<resultado<<std::endl;
      break;
    default:
      std::cout<<"Error."<<std::endl;
  }
}
else {
  std::cout<<"Error"<<std::endl; 
}
  
  std::cout<<"###########################################";
  return(0);
}
