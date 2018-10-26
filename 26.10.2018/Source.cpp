#include <iostream>

using namespace std;

int enterNumber();
bool isPrimeNumber(int);
void outputResult(bool, int);

int main()
{
	char esc = 'y';
	
	while (esc == 'y' || esc == 'Y')
	{
		int number = enterNumber();

		bool isPrime = isPrimeNumber(number);

		outputResult(isPrime, number);
		
		cout << "Press y or Y to continue ";
		cin >> esc;
		system("cls");
	}

	return 0;
}

int enterNumber()
{
	int number;

	while (true)
	{
		cout << "Enter number: ";
		cin >> number;

		if (number > 1)
		{
			break;
		}

		cout << "Invalid number! Try again!" << endl;
		system("pause");
		system("cls");
	}

	return number;
}

bool isPrimeNumber(int number)
{
	if (number <= 1)
	{
		return false;
	}

	bool isPrime = true;
	for (int i = 2; i <= sqrt(number); i++)
	{
		if (!(number % i))
		{
			isPrime = false;
			break;
		}
	}

	return isPrime;
}

void outputResult(bool isPrime, int number)
{
	if (isPrime)
	{
		cout << number << " - primer number" << endl;
	}
	else
	{
		cout << number << " - not primer number" << endl;
	}

	return;
}