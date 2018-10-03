# TugasMandiri
Tugas Mandiri Hal.13 Nomor  1

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

main (){
	int r=95;
	int total,i;
	int nilai [100];
	float rata;
	
	cout<<"HAY BRO & SIS "<<endl;
	cout<<"***********************"<<endl;
	cout<<"HITUNG NILAI RATA-RATA MU KUY"<<endl;
	cout<<"***********************"<<endl;
	getch();
	system("cls");
	cout<<"Masukkan jumlah nilaimu"<<endl;
	cout<<"Nilaiku Ada =";cin>>r;
	system("cls");
	for (i=1;i<=r;i++);
	{
		cout<<"Nilai saya"<<i<<"=";cin>>nilai[i];
		total=total+nilai[i];
	}
	system("cls");
	
	cout<< "__________"<<endl;
	cout<<"|No| Nilai |"<<endl;
	cout<<"|__|_______|"<<endl;
	
	for(i=1;i<=r;i++){
		if(nilai[i]>=100)cout<<"|"<<i<<"|"<<nilai[i]<<"|"<<endl;
		else cout<<"|"<<i<<"|"<<nilai[i]<<"|"<<endl;
	}
	cout<<"|__|_______|"<<endl;
	rata=total/r;
	cout<<"Total Nilai Kamu Adalah"<<total<<endl;
	cout<<"Rata Rata Kamu ="<<rata<<endl;
	
	getch();
	}
