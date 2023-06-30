#pragma once
#include <iostream>

using namespace std;

class Animal {
protected:
	string _icon;

public:
	void show() {
		cout << _icon << endl;
	}
};