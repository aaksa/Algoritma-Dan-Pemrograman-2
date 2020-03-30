#include<iostream>
using namespace std;

int main(){
    char kata[20]; 
    int jumlah,x;
    cout<<"Masukkan Kata yang ingin dihitung : ";
    cin.getline(kata,sizeof(kata));
    jumlah=0;
    for (x=0;kata[x];x++){
    	jumlah=jumlah+1; 
		} 

    cout<<"Jumlah karakter Adalah : "<<jumlah;
    return 0; 
} 
