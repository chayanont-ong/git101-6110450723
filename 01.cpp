#include <iostream>
#include <string>
using namespace std;

class Hero {
private:
    string name;
    int level;
public:
    Hero(string nn, int le){
        this->name = nn;
        level = le;
    }
    string getName(){
        return this->name;
    }
    int getLevel(){
        return this->level;
    }
};

int main()
{
    // สร้าง object เพื่อทดสอบด้วยตัวเอง
}