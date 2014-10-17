/*
 * @file abstract.cc
 * @author japin
 * @time 2014/10/17 19:41
 */

#include "abstract.h"

#include <iostream>

Abstract::Abstract()
{

}

Abstract::~Abstract()
{

}

void Abstract::Test1()
{
	std::cout <<"What's your name?" <<std::endl;
	std::cout <<"Answer: ";
	Answer1();
	std::cout <<std::endl;
}

void Abstract::Test2()
{
	std::cout <<"How old are you?" <<std::endl;
	std::cout <<"Answer: ";
	Answer2();
	std::cout <<std::endl;
}
