#include "Singleton.h"
#include "iostream"
using namespace std;

int main() 
{
	cout << "SingleTon" << endl; 
	CSingleton *pSingleton_1 = CSingleton::getInstance();
	CSingleton *pSingleton_2 = CSingleton::getInstance();
	CSingleton *pSingleton_3 = CSingleton::getInstance();

	//-----------------------------------------------------
	cout << "===== pSingleton_1 --> add 30 =====" << endl; 
	pSingleton_1->AddValue(30);
	cout << "pSingleton_1 Value : " << pSingleton_1->GetTotalValue() << endl;
	cout << "pSingleton_2 Value : " << pSingleton_2->GetTotalValue() << endl;
	cout << "pSingleton_3 Value : " << pSingleton_3->GetTotalValue() << endl;
	cout << "\n\n" << endl; 


	//-----------------------------------------------------
	cout << "===== pSingleton_2 --> Sub 10 =====" << endl; 
	pSingleton_2->SubValue(10);
	cout << "pSingleton_1 Value : " << pSingleton_1->GetTotalValue() << endl;
	cout << "pSingleton_2 Value : " << pSingleton_2->GetTotalValue() << endl;
	cout << "pSingleton_3 Value : " << pSingleton_3->GetTotalValue() << endl;
	cout << "\n\n" << endl; 


	//-----------------------------------------------------ss
	cout << "===== pSingleton_3 --> add 50 =====" << endl; 
	pSingleton_3->AddValue(50);
	cout << "pSingleton_1 Value : " << pSingleton_1->GetTotalValue() << endl;
	cout << "pSingleton_2 Value : " << pSingleton_2->GetTotalValue() << endl;
	cout << "pSingleton_3 Value : " << pSingleton_3->GetTotalValue() << endl;
	cout << "\n\n" << endl; 


	return 0;
}