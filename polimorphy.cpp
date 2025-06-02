#include <iostream>
using namespace std;

class kamu{
    public:
    // virtual void pesan() = 0;
    virtual void pesan(){
        cout << "Pesan dari kamu" << endl;

    }
};

class joko :public kamu{

};

int main (){

}