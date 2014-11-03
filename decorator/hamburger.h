/* 
 * @file hamburger.h
 * @author japin
 * @time 2014/11/03 14:27
 */

#ifndef HAMBURGER_H_HEADER
#define HAMBURGER_H_HEADER

class Hamburger
{
public:
	Hamburger();

	virtual ~Hamburger();

	virtual double price();
	
//protected:
	double price_;
};

#endif /* HAMBURGER_H_HEADER */
