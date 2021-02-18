#include <iostream>

using namespace std;

int main()
{
	int age = -1;
	cout << "Gib dein Alter an: ";
	cin >> age;

	if (age == 0)
		cout << "Sehr realistisch?! ";
	else if (age == 1)
		cout << "Alter ist eins.";
	else if (age == 2)
		cout << "Alter ist zwei.";
	else
	{
		cout << "Alles klar\n";
		cout << "..."  << endl;
	}

	system("pause");
	return 0;
}