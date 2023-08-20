# include <iostream>
using namespace std;

int main() {

  char cal;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> cal;

  cout << "Enter first operand: "<<endl;
  cin >> num1;
  cout<<"Enter the second operand:"<<endl;
  cin>> num2;

  switch(cal) {

    case '+':
      cout <<"SUM IS :"<< num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout <<"SUBSTRACTION IS : "<< num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout<<"MULTIPLICATION IS : "  << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout <<"DIVISION IS : "<< num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Error °__°! operator is not correct";
     cout<<"Try again!!";
      break;
  }

  return 0;
}
