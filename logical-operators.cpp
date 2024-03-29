#include <iostream>
#include <tchar.h>
int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int number;
	bool logicResult1, logicResult2;
	std::cout << "Digite um número: ";
	std::cin >> number;
	logicResult1 = ((number > 100) && (number != 0));
	std::cout << "True = 1 False = 0" << "\n";
	std::cout << "O primeiro resultado lógico da verificação Booleana é: " << logicResult1 << "\n";
	logicResult2 = ((number == 100) || (number > 200) && (number < 1000));
	std::cout << "O segundo resultado lógico da verificação Booleana é: " << logicResult2 << "\n";
	system("PAUSE");
}