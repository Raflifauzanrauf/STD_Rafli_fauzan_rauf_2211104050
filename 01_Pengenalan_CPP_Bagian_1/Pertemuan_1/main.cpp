#include <iostream>

using namespace std;

int main()
{
    /*

    string nama = "Rafli Fauzan Rauf";
    int angka = 50;
    float desimal = 12.5;
    double tinggi = 12;
    char jenis_kelamin = 'L';
    bool isSunny = true;

    cout <<"NAMA: " << nama << endl;
    cout <<"NAMA: " << angka << endl;
    cout <<"NAMA: " << desimal << endl;
    cout <<"NAMA: " << tinggi << endl;
    cout <<"NAMA: " << jenis_kelamin << endl;
    cout <<"NAMA: " << isSunny << endl;
    */

    /*
    int angka;
    cout << "Masukan angka: ";
    cin >> angka;
    cout << "Hasil " << angka << endl;
    */





    //Operator

    /*

    int angka1 = 4;
    int angka2 = 4;
    int hasil = angka1 + angka2;
    cout<< "HASILNYA: " << hasil << endl;
    */


    //Operator Perbandingan
    /*

    int angka1 = 8;
    int angka2 = 3;
    bool hasil = angka1 == angka2;
    cout<< "HASILNYA: " <<boolalpha <<hasil << endl;
    */



    //Operator Logika

    /*

    bool kondisi1 =  true;
    bool kondisi2 =  true;
    bool hasil = (kondisi1 && kondisi2);

    cout << "Hasil: " << boolalpha << hasil << endl;
    */

    /*
    bool kondisi1 = true;
    bool hasil = !kondisi1;
    cout << "Hasilnya adalah: " << boolalpha << hasil << endl;
    */


    /*
    string kata;
    cout << "Masukan kata = HALO" << endl;
    cin >> kata;

    if(kata == "HALO"){
        cout << "Kata sesuai" << endl;
    }else{
        cout << "Kata Tidak Sesuai" << endl;
    }
    */



    /*
    int tv;
    cout << "Daftar chanel tv" << endl;
    cout << "1. RCTI" << endl;

    cout << "Masukan channel yang dipilih: ";
    cin >> tv;

    switch(tv){
        case 1:
        cout << "chanel yang anda pilih rcti" << endl;
    break;
    }
    */

    /*

    for(int i=0; i<5; i++){
        cout << i << " Hello World" << endl;
    }
    */

    /*
    float bil1, bil2;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    float penjumlahan = bil1 + bil2;
    float pengurangan = bil1 - bil2;
    float perkalian = bil1 * bil2;

    float pembagian;
    if (bil2 != 0) {
        pembagian = bil1 / bil2;
        cout << "Hasil Pembagian: " << pembagian << endl;
    } else {
        cout << "Tidak bisa membagi dengan nol!" << endl;
    }

    cout << "Hasil Penjumlahan: " << penjumlahan << endl;
    cout << "Hasil Pengurangan: " << pengurangan << endl;
    cout << "Hasil Perkalian: " << perkalian << endl;


    return 0;
    */

    /*
    int a, b, bilangan;
    cout << "Masukan Bilangan A : ";
    cin >> a;

    cout << "Masukan Bilangan B : ";
    cin >> b;

    for(bilangan = a; bilangan <= b; bilangan++){
        cout << "Bilangan: " << bilangan <<endl;
    }

    return 0;
    */

    int n;
    cout <<"Masukan Bilangan Bulat Positif: ";
    cin >> n;

    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            cout << j << " ";
        }
        cout << "* ";
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
     cout << "* "<< endl;
     return 0;

}
