#include<iostream>
using namespace std;

//Luas Lingkaran
float circle(int r){
    float area;
    area = 3.14*r*r;
    return area;
}

//Progam Utama
int main(){
    cout<<"Pilih Menu"<<endl;
    cout<<"1. Luas Lingkaran"<<endl;
    cout<<"Masukkan Pilihan : ";
    int menu;
    cin>>menu;

    if(menu == 1){
        cout<<"Masukkan Jari-Jari : ";
        int r;
        cin>>r;
        cout<<circle(r)<<endl;
    }


}