#ifndef SYSTEM
#define SYSTEM 
#include "../headers/hospital_dataBase.h"
class System{
private:
    Database hospital_DataBase;
    bool run;

    void addNewPatient();
    void printAllPatiens();
    void getNextPatient();
    void doLogic();
    Patient readPatient();
    void showOptionsInSystem();
    int readChoice();
    void drawLine();
    
public:
System ();
void runSystem();
};

#endif