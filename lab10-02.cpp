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
int main()
{
    int level;
    string name;
    cin >> name >> level;
    Hero h(name,level);
    cout << h.getName() << " " << h.getLevel() << endl;
    return 0;
}