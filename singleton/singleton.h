/*
 * @file singleton.h
 * @author japin
 * @time 2014/10/14 14:31
 * @from modern c++ design sixth
 */

#ifndef SINGLETON_H_HEADER
#define SINGLETON_H_HEADER

#include <stdexcept>

class Singleton
{
public:
	static Singleton& Instance() {
		if (!pInstance_) {
			/* check for dead reference */
			if (destoryed_) {
				OnDeadReference();
			} else {
				/* First call--initialize */
				Create();
			}
		}

		return *pInstance_;
	}

	/* ... operations ... */

private:
	/* Prevent clients from creating a new Singleton */
	Singleton() {

	}

	/* Prevent clients from creating a copy of the Singleton */
	Singleton(const Singleton&) {

	}

	Singleton& operator=(const Singleton&) {

	}

	virtual ~Singleton() {
		pInstance_ = 0;
		destoryed_ = true;
	}

	/*
	 * Create a new Singleton and store
	 * a pointer to it in pInstance_
	 */
	static void Create() {
		// Task: initialize pInstance_
		static Singleton theInstance;
		pInstance_ = &theInstance;
	}

	/* Gets called if dead reference detected */
	static void OnDeadReference() {
		throw std::runtime_error("Dead Reference Detected");
	}

	/* The one and only instance */
	static Singleton *pInstance_;

	static bool destoryed_;
};

#endif
