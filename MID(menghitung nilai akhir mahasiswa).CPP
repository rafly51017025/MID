#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int main()
{
char nama[30], grade;
int nt1, nt2, nt3, stbk, nlmid, nlfnl, NA, tnt;
cout<<endl<<endl;
cout<<"\t~~~~~~~~~~PROGRAM MENGHITUNG NILAI AKHIR~~~~~~"<<endl<<endl;
cout<<"\tMasukkan Nama Mahasiswa : "; gets(nama);
cout<<"\tMasukkan Nim            : "; cin>>stbk;
cout<<"\tMasukkan Nilai Tugas 1   : "; cin>>nt1;
cout<<"\tMasukkan Nilai Tugas 2   : "; cin>>nt2;
cout<<"\tMasukkan Nilai Tugas  : ";cin>>nt3;
cout<<"\tMasukkan Nilai Mid   : "; cin>>nlmid;
cout<<"\tMasukkan Nilai Final   : "; cin>>nlfnl;
tnt = ( nt1 + nt2 + nt3)/3;
NA = (0.2*tnt)+(0.4*nlmid)+(0.4*nlfnl);
if (NA>=80)
{
grade = 'A';
}
else if (NA>=70)
{
grade = 'B';
}
else if (NA>=60)
{
grade = 'C';
}
else if (NA>=50)
{
grade = 'D';
}
else
{
grade = 'E';
}
cout<<endl<<endl;
cout<<"\t~~~~~~~~~~~~~~~~~~Hasil Nilai Akhir Mahasiswa~~~~~~~~~~~~"<<endl<<endl;
cout<<"\tNama : "<<nama<<endl;
cout<<"\tNim : "<<stbk<<endl;
cout<<"\tNilai Akhir : "<<NA<<endl;
cout<<"\tgrade : "<<grade<<endl;
getch();
return 0;
}
