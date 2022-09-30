//Program Membuat Alarm

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    int j=0, j1=0, m=0, m1=0, d=0, d1=0, j2=0, m2=0, d2=0;

    cout << "Pisahkan jam(JJ), menit(MM), dan detik(DD) dengan spasi\n\n";

    //Menunjukkan waktu saat ini
    cout << "Masukkan waktu dalam format JJ::MM::DD\n";
    cin >> j >> m >> d;

    cout << "\n";

    //Waktu alarm pertama berbunyi
    cout << "Set alarm pertama dalam JJ::MM::DD\n";
    cin >> j1 >> m1 >> d1;

    cout << "\n";

    //Waktu alarm kedua berbunyi
    cout << "Set alarm kedua dalam JJ::MM::DD\n";
    cin >> j2 >> m2 >> d2;

    /*
    Alarm dapat ditambah dengan membuat kode yang sama seperti baris 18 dan 19
    dengan mengganti j1, m1, d1 dengan jn, mn, dn; n sebagai alarm ke-n; serta
    memberikan deklarasi jn, mn, dan dn ke int pada baris ke 11;
    */

    if(j < 24 && m < 60 && d < 60) {
    start:
    for (j; j<24; j++){
        for(m; m<60; m++){
            for(d; d<60; d++){
                system("CLS");
                cout << j << ":" << m << ":" << d;

                if(j==j1 && m==m1 && d==d1){
                   //Masukkan audio disini (audio dalam format WAV)
                   PlaySound("D:\\Laguku\\BlueArchive", NULL, SND_ASYNC);
                }

                if(j==j2 && m==m2 && d==d2){
                    //Masukkan audio disini (audio dalam format WAV)
                    PlaySound("D:\\Laguku\\SilentMajority", NULL, SND_ASYNC);
                }

                //Agar loop berjalan setiap detik
                for(double i=0; i < 99999999; i++){
                    i++;
                    i--;
                }
            }
            d=0;
        }
        m=0;
    }
    j=0;
    goto start;
    }

    //Format ketika input waktu salah
    else{
        cout << "Pastikan masukkan format jam dalam bentuk JJ:MM::DD\n";
    }

    return 0;
}
