/*
 * @file singleton.cc
 * @author japin
 * @time 2014/10/14 14:36
 */

#include "singleton.h"

Singleton *Singleton::pInstance_ = 0;

bool Singleton::destoryed_ = false;
