#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Fish.h"

using namespace std;

int main() {
	Fish fish;
	Dog dog;

	cout << "FISH" << endl;
	fish.show();
	cout << endl;

	cout << "DOG" << endl;
	dog.show();
	cout << endl;

	return 0;
}