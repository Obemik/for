#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int r = rand() % 499 + 1;
    int num;
	for (;;)
	{
        cout <<"Enter number(between 1 and 500): ";
        cin >> num;
        if (num < r) {
            cout << "The requested number is more\n";
        }
        else if (num > r) {
            cout << "The requested number is less\n";
        }
        else {
            cout << "You guessed the number " << r << "\n";
            break;
        }
	}
    return 0;
}