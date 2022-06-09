#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string nama[3]  = {"2015" , "2016", "2017"};
    string matkul[3] = {"Komputer" , "Elektro" , "Pemesinan"};
    int numb, i;
    float nilaiF[3] = {60, 45, 45,};
    float nilaiM[3] = {65, 80, 90,};
    float nilaiK[3] = {80, 90, 90,};
   
    
    float nilai[10][10];
    nilai[0][0]= 60;
    nilai[0][1]= 65;
    nilai[0][2]= 80;
    nilai[1][0]= 45;
    nilai[1][1]= 80;
    nilai[1][2]= 90;
    nilai[2][0]= 45;
    nilai[2][1]= 90;
    nilai[2][2]= 90;
   
   
    cout<<"\n|=====Tahun Prodi======|===============Nilai===================|"<<endl;
    cout<<"|\t\t|Tek.Komputer\t  Tek.Elektro\t Tek.Permesinan\t|"<<endl;
    cout<<"|         |=======================================|"<<endl;
    numb=1;
    for( i=0; i<3; i++ )
    {
         cout <<"|"<<numb<<"."<<nama[i]<<setw(6)<<"\t|"<<setw(4)<<nilaiF[i]<<"\t\t"<<setw(8)<<nilaiM[i]<<"\t\t "
              <<nilaiK[i]<<"\t "<<"\t|"<<endl;
         numb++;
    }
    cout<<"|=======================================================|"<<endl;
   
   
   
    cout<<"Rata-rata Kelulusan per tahun: "<<endl;
    cout<<"\n";
   
    float total, average_tp_siswa;
    int x, y;
    int counter;
    total= 0;
   
    for( x=0; x<3; x++ )
    {
         counter =0;
         for( y=0; y<3; y++ )
         {
              total = total + nilai[x][y];
              counter++;
         }

    average_tp_siswa = total/counter;
    cout<<"Rata-rata "<<nama[x]<<setw(4)<<"\t"<<average_tp_siswa<<endl;
    total = 0;
    }//end
   
   
    cout<<"\nRata-rata Per tahun per prodi: "<<endl;
    cout<<"\n";
   
    float average_tp_matkul;
    total = 0;
    for( y=0; y<3; y++ )
    {
         counter = 0;
         for( x=0; x<3; x++ )
         {
              total = total + nilai[x][y];
              counter++;
         }
   
    average_tp_matkul = total/counter;
    cout<<"Rata-rata "<<matkul[y]<<setw(4)<<"\t"<<average_tp_matkul<<endl;
    
    total = 0;
    }
}
