#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"No Induk = "<<nim<<endl;
    }
};

int main (){
    mahasiswa mhs{1}; //Object mhs
    mhs.showNim(); //Member Acces Operator

    mahasiswa &refMhs = mhs; //Pointer Refererences refMhs
    refMhs.nim = 2; //Member acces operator
    mhs.showNim();
    

}