#include <iostream>
using namespace std;

class CSingleton {
    
    public:
        CSingleton(){};
        virtual ~CSingleton(){
            instanceFlag = false;
        };

        static CSingleton* getInstance();

    private:
        static bool instanceFlag;
        static CSingleton* instance;
        int nTotal = 0;

    public:
        void AddValue(int nvalue); //+
        void SubValue(int nvalue); //-
        int GetTotalValue();



};
