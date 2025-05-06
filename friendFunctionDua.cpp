#include <iostream>
using namespace std;

class pelajar;
class manusia
{
    public:
        void showNilaiPelajar(pelajar &X);
};

class pelajar
{
    private:
        int nilai;

    public:
        pelajar() { nilai = 100; }
        friend void manusia::showNilaiPelajar(pelajar &X);
};

void manusia ::showNilaiPelajar(pelajar &X)
{
    cout << X.nilai;
}
int main()
{
    manusia budi;
    pelajar pbudi;
    budi.showNilaiPelajar(pbudi);
    return 0;
}