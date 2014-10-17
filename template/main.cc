/*
 * @file main.cc
 * @author japin
 * @time 2014/10/17 19:55
 */

#include "concrete.h"

#include <iostream>

int main(int argc, char *argv[])
{
	Abstract *abs;

	abs = new ConcreteA;

	abs->Test1();
	abs->Test2();

	delete abs;

	abs = new ConcreteB;

	abs->Test1();
	abs->Test2();

	delete abs;

	return 0;
}
