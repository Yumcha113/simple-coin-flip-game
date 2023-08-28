#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	char choice;

	cout << "Welcome to the coin flip game. It costs a dollar to play." << endl;
	cout << "If you guess correctly, you will win $2.00" << endl;
	cout << "Do you want to play (Y/N)? ";
	cin >> choice;

	char computer_choice[]{ 'H', 'T' };

	srand(time_t(NULL));

	char guess;
	int num = rand() % 2;

	double bank = 15.00;
	int winnings = 0.0;

	while (toupper(choice) == 'Y')
	{
		cout << "Your bank is $" << bank << endl;

		cout << "Enter heads or tails (H/T) ";
		cin >> guess;
		guess = toupper(guess);
		num = rand() % 2;

		char computer_throw = computer_choice[num];
		cout << "Computer throws " << computer_throw << '\n';

		if (guess == computer_throw)
		{
			cout << "You win\n";
			winnings = 2.00;
		}
		else
		{
			cout << "You lost\n";
			winnings = -2.00;
		}

		num = rand() % 2;

		bank += winnings;
	}
	system("pause");
	return 0;
}