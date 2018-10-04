#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main(){
	int y,z,ta=0,x,xi2=0;
	float rata,sd,sdf,r;

	cout<<"Masukan jumlah data = ";cin>>z;
	int a[z];

	for(y=0;y<z;y++){
		cout<<"Masukkan data ke-"<<y+1<<" = ";cin>>a[z];
		ta=ta+a[z];	
		xi2=xi2+pow(a[z],2);
	}
	rata=ta/z;
	x=pow(ta,2);
	r=(z*xi2-x)/(z*(z-1));
	sd=sqrt(r);
	cout<<endl;
	cout<<"Rata-rata = "<<rata<<endl;
	cout<<"Varian = "<<r<<endl;
	cout<<"Standar Deviasi = "<<sd;

	getch();
	return 0;
}















 
