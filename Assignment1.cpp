#include <iostream>
#include <math.h>

using namespace std;

int nhapSoNguyen(char c){
        int n;
        cout << "Moi ban nhap vao gia tri cua bien nguyen " << c <<": ";  cin >> n;
        return n;
}

float nhapSoThuc(){
        float n;
        cout << "Moi ban nhap vao gia tri cua bien thuc (x): ";  cin >> n;
        return n;
}

int tangGiaTri(int n){
        return n+=1;
}

int giamGiaTri(int n){
        return n-=1;
}

float tinhP(float x, int n){
        float ketQua = 2018*pow(x, n);
        for(int i=2; i<=n; i++) {
                ketQua += pow(x, i)/pow(3, i-1);
        }
        return ketQua;
}

int tongChan(int n){
        int tong=0;
        for(int i=6; i<=n; i+=2) {
                tong += i;
        }
        return tong;
}

void inRaGiaTri(int n){
        cout << "*) Gia tri cua "<< n << " sau khi: " << endl;
        cout << "\t +) Tang mot don vi la: " << tangGiaTri(n) << endl;
        cout << "\t +) Giam mot don vi la: " << giamGiaTri(n) << endl;
        cout << endl;
}

int main(){
        float x = nhapSoThuc();
        int n = nhapSoNguyen('n');
        int m = nhapSoNguyen('m');

        cout<<endl;
        inRaGiaTri(n);
        inRaGiaTri(m);

        cout << "*) Gia tri cua bieu thuc:   P("<< x <<", "<< n <<") = "<< fixed << tinhP(x, n) << endl << endl;

        cout << "*) Tong cac so chan lon hon 5 trong doan ["<< n <<", "<< m <<"] la: " << tongChan(m)-tongChan(n) << endl;

        return 0;
}
