/*
 * @file main.cc
 * @author japin
 * @time 2014/11/03 14:58
 * @description Just for testing Decorator
 */

#include "beef.h"
#include "chicken.h"

#include <iostream>

int main(int argc, char *argv[])
{
	Hamburger hb;
	std::cout <<"Hamburger:\t" <<hb.price() <<std::endl;

	Beef bf(&hb);
	std::cout <<"Beef Hamburger:\t" <<bf.price() <<std::endl;

	Chicken ch(&hb);
	std::cout <<"Chicken Hamburger:\t" << ch.price() <<std::endl;

	Chicken ch_bf(&bf);
	std::cout <<"Beef & Chicken Hamburger:\t" <<ch_bf.price() <<std::endl;

	return 0;
}
