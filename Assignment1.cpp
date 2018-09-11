#include <iostream>
#include <math.h>

using namespace std;

void nhapSoNguyen(int &n, char c){
        cout << "Nhap so nguyen " << c <<": ";
        cin >> n;
}

void nhapSoThuc(float &x){
        cout << "Nhap so thuc x: ";
        cin >> x;
}

void tang(int &n){
        n++;
}

void giam(int &n){
        n--;
}

float P(float x,int n){
        float xN=1;
        for (int i=1; i<=n; i++) {
                xN*=x;
        }
        float P=2018*xN;

        float T=x;
        for (int i=2; i<=n; i++) {
                T*=(float)x/3;
                P+=T;
        }
        return P;
}

int tongChan(int n){
        int tong=0;
        for(int i=6; i<=n; i+=2) {
                tong+=i;
        }
        return tong;
}

int main(){

        float x;
        nhapSoThuc(x);
        int n,m;
        nhapSoNguyen(n, 'n');
        nhapSoNguyen(m, 'm');

        tang(n);
        tang(m);

        float ketQua = P(x,n);
        cout << "P(x, n) = "<< fixed << ketQua << endl;

        cout << "Tong cac so chan lon hon 5 trong doan ["<< n <<", "<< m <<"] la: " << tongChan(m)-tongChan(n) << endl;

        return 0;
}
