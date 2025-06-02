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
    public:
    void pesan(){
        cout << "Pesan dari joko" << endl;
    }
};

class lia :public kamu{
    public:
        void pesan(){
            cout << "Pesan dari Lia" << endl;
        }
};

int main (){
    kamu* object;
    joko a;
    lia b;

    object = &a;
    object->pesan();
    object = &b;
    object->pesan();

    // a.seseorang::pesan();
    // b.seseorang::pesan();

    return 0;
}