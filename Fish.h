#pragma once
#include "Animal.h"

class Fish : public Animal {
public:
	Fish()  {
		_icon = R"(      /'.',
     /,...,':'
 ,.''  .  .'\.,.'')
: @ ):'; .    .  {
 '.., ''  ,."'\'',)
     '\\''\,."')";
	}
};