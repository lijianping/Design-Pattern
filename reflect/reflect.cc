/*
 * @file reflect.cc
 * @author japin
 * @time 2014/10/14 17:31
 */

#include "reflect.h"
#include <stdexcept>

ReflectFactory *ReflectFactory::reflect_ = 0;

bool ReflectFactory::destotyed_ = false;

/**********************************************
 *                   public                   *
 *********************************************/

ReflectFactory& ReflectFactory::Instance()
{
	if (!reflect_) {
		if (destotyed_) {
			OnDeadReference();
		} else {
			Create();
		}
	}

	return *reflect_;
}


/**********************************************
 *                   private                  *
 *********************************************/

ReflectFactory::ReflectFactory()
{

}

ReflectFactory::~ReflectFactory()
{
	reflect_ = 0;
	destotyed_ = true;
}

ReflectFactory::ReflectFactory(const ReflectFactory &rhs)
{

}

ReflectFactory& ReflectFactory::operator=(const ReflectFactory &rhs)
{

}

void ReflectFactory::Create()
{
	static ReflectFactory obj;
	reflect_ = &obj;
}

void ReflectFactory::OnDeadReference()
{
	throw std::runtime_error("Deaded Reference");
}
