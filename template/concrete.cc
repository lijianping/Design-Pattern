/*
 * @file concrete.cc
 * @author japin
 * @time 2014/10/17 19:52
 */

#include "concrete.h"

#include <iostream>

void ConcreteA::Answer1()
{
	std::cout <<"Japin";
}

void ConcreteA::Answer2()
{
	std::cout <<21;
}

void ConcreteB::Answer1()
{
	std::cout <<"Eric";
}

void ConcreteB::Answer2()
{
	std::cout <<23;
}
