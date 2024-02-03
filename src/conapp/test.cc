#include <iostream>
#include "simplegui/simplegui.h"


int main(int argC, char* args) {
	std::cout << "Welcome, let's see if our lib works!" << std::endl;
	Oryol::SimpleGui::Works();
	std::cout << " \nIf you see this, then things seems to work correctly. GG WP!" << std::endl;
}

