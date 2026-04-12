#include <iostream>
using namespace std;

struct dosen
{
    string nama[12] = {
        "Leon", "Claire", "Jill", "Chris", "Ada", "Albert",
        "Rebecca", "Barry", "Carlos", "Hunk", "Sheva", "Ethan"};
};

struct mahasiswa
{
    string nama;
    dosen dosenwali;
};

int main()
{
    mahasiswa m1;

    m1.nama = "Akhsan Maulana Rahim";
    m1.dosenwali = dosen();

    cout << "Nama        : " << m1.nama << endl;
    cout << "Dosen wali  : " << m1.dosenwali.nama[11] << endl;

    return 0;
}