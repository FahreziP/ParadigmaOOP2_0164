#include <iostream>
using namespace std;

class remotLampu{
   private:
        string saklarNo[10];
    public:
        void setSaklarNo(int i, string value){
            saklarNo[i] = value;
        }
        string getSaklarNo(int i){
            return saklarNo[i];
        }
};

int main (){
    remotLampu lampuRumah;

    lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarNo(2, "Lampu Ruang Tidur");
    lampuRumah.setSaklarNo(3, "Lampu Ruang Dapur");

    cout << lampuRumah.getSaklarNo(0) << endl;
    cout << lampuRumah.getSaklarNo(1) << endl;
    cout << lampuRumah.getSaklarNo(2) << endl;
    cout << lampuRumah.getSaklarNo(3) << endl;

    return 0;
}