#ifndef __SIMPLE_CLASS_H__
#define __SIMPLE_CLASS_H__

#include <string>

enum someThingEnumerated {
	kValue1 = 1,
	kValue2,
	kValue3,
	kValue4
};

class SimpleNativeClass
{
protected:
	int m_someField;
	int m_someOtherField;
	char* m_anotherMoreComplexField;

public:
	SimpleNativeClass();
	~SimpleNativeClass();

	// these methods are simple, can be defined inline
	int getSomeField() {
		return m_someField;
	};
	int getSomeOtherField() {
		return m_someOtherField;
	};
	char *getAnotherMoreComplexField() {
		return m_anotherMoreComplexField;
	}
	void setSomeField(int f) {
		m_someField = f;
	}
	void setSomeOtherField(int f) {
		m_someOtherField = f;
	}
	void setAnotherMoreComplexField(const char *str);

	void receivesLongLong(long long someId);
	std::string returnsAString();
	char *returnsACString();

	// std::string not working yet!
	int doSomeProcessing(std::string arg1, std::string arg2);
};

namespace SomeNamespace {
class AnotherClass {
protected:
	int justOneField;

public:
	int aPublicField;

	AnotherClass();
	~AnotherClass();

	// also simple methods, can be defined inline
	int getJustOneField() {
		return justOneField;
	}
	// wrong setter - won't work (needs ONLY one parameter in order to work)
	void setJustOneField() {
		justOneField = 999;
	}

	void doSomethingSimple();
};
};

#endif