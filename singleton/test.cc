/* 
 * @file test.cc
 * @author japin
 * @time 2014/10/14 16:16
 * @description Testing singleton
 */

#include "singleton.h"
#include <iostream>

int main(int argc, char *argv[])
{
	Singleton::Instance();

	return 0;
}
