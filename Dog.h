#pragma once
#include <iostream>
#include "Animal.h"

class Dog : public Animal {
public:
	Dog() {
		_icon = R"( /^ ^\
/ 0 0 \
V\ Y /V
 / - \
 |    \
 || (__V)";
	}
};