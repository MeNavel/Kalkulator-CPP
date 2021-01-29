#include<iostream>
using namespace std;

//Luas Lingkaran
float circle(int r){
    float area;
    area = 3.14*r*r;
    return area;
}

class a
{
public:
    float r;
};

//Progam Utama
int main(){
    cout<<"Pilih Menu"<<endl;
    cout<<"1. Luas Lingkaran"<<endl;
    cout<<"2. Keliling Lingkaran"<<endl;
    cout<<"Masukkan Pilihan : ";
    int menu;
    cin>>menu;

    if(menu == 1){
        cout<<"Masukkan Jari-Jari : ";
        int r;
        cin>>r;
        cout<<circle(r)<<endl;
    }
    if(menu == 2){
        cout<<"Masukkan Jari-Jari : ";
        int jari; cin>>jari;
        float keliling_lingkaran;
        a keliling;
        keliling.r = jari;
        keliling_lingkaran = 2*keliling.r*3.14;
        cout<<keliling_lingkaran<<endl;
    }

}
