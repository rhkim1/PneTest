#include "Singleton.h"

bool CSingleton::instanceFlag = false;
CSingleton* CSingleton::instance = NULL;

CSingleton* CSingleton::getInstance(){
	if(!instance){
		instance = new CSingleton();
		instanceFlag = true;
	}
	return instance;
}

void CSingleton::AddValue(int nvalue){
	nTotal += nvalue;
}

void CSingleton::SubValue(int nvalue){
	nTotal -= nvalue;
}

int CSingleton::GetTotalValue(){
	return nTotal;
}