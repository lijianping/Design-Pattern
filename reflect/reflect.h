/*
 * @file reflect.h
 * @author japin
 * @time 2014/10/14 17:25
 * @description Implement C plus plus reflect.
 * using singleton mode
 */

#ifndef REFLECT_H_HEADER
#define REFLECT_H_HEADER

#include <map>
#include <string>
#include <iostream>

class ReflectFactory
{
public:
	static ReflectFactory& Instance();

private:
	ReflectFactory();

	virtual ~ReflectFactory();

	ReflectFactory(const ReflectFactory&);

	ReflectFactory& operator=(const ReflectFactory&);

	static void Create();

	static void OnDeadReference();

	static ReflectFactory *reflect_;

	static bool destotyed_;
};

#endif
