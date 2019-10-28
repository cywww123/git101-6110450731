#include <iostream>
#include <string>
using namespace std;


class Hero{
public:
    string name;
    int level;

    Hero(string name, int level){
        this->name = name;
        this->level = level;

    }
    string getName(){
        return name;
    }

    int getLevel(){
        return level;
    }

};