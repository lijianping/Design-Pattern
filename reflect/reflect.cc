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

bool ReflectFactory::Register(const std::string &name, CreateCallback createFn)
{
	return callbacks_.insert(
		CallbackMap::value_type(name, createFn)).second;
}

bool ReflectFactory::Unregister(const std::string &name)
{
	return callbacks_.erase(name) == 1;
}

void* ReflectFactory::Create(const std::string &name)
{
	CallbackMap::const_iterator i = callbacks_.find(name);

	if (i == callbacks_.end()) {
		/* not found */
		throw std::runtime_error("Unknown Class Name");
	}

	return (i->second)();
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
