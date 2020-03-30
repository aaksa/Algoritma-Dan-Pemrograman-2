#include<cstdlib>
#include<iostream>
#include<string.h>

using namespace std;
void Enkrip (char plain[],int a,char chiper[]);
void Diskrip (char chiper[],int a,char teks[]);

int main()
{
    int pil;char kata[100];char chiper[100];int key;int plain;       

     		cout << "masukkan text yang asli yang ingin dienkripsi : " ; 
            cin >> kata;
            cout << "masukkan key :"; cin >> key;
            Enkrip (kata,key,chiper);
                  

}

void Enkrip (char plain[],int key,char chiper[])
    {
         for (int i=0;i<strlen(plain);i+=1){
             cout << plain[i] << "(" << int(plain[i]) << ")";
             chiper [i] = (plain[i]+key) % 128;
             }
            cout << "\n Hasil Kata Setelah di Enkrip : ";
             for (int i=0;i<strlen(plain);i+=1){
                 cout << chiper[i];
                 }
                cout << endl;
    }
