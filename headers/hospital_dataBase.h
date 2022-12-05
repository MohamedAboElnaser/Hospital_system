#ifndef DATABASE
#define DATABASE

#include <vector>
#include <deque>
#include <iostream>
using namespace std;

struct Patient{
int specialization_number;
bool is_urgent;
string name;
};

class Database{
private:
vector<deque<Patient>> db;
friend class System;
public: 
   void creat_Database(int number_of_specifications);
};

void print();
#endif