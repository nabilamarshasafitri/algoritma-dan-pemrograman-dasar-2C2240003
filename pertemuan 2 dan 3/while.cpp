// #include <iostream>
// using namespace std;

// int main() {
//     int nilai_awal, nilai_akhir;

//     // Meminta input dari user untuk nilai a dan b
//     cout << "Masukkan nilai a: ";
//     cin >> nilai_awal;
//     cout << "Masukkan nilai b: ";
//     cin >> nilai_akhir;

//     // Menggunakan perulangan while untuk mencetak dari a hingga b
//     while (nilai_awal <= nilai_akhir) {
//         cout << nilai_awal << " ";  // Menampilkan nilai a
//         nilai_awal +=3;               // Menambahkan a sebesar 1 setiap iterasi
//     }

//     return 0;
// }

//do while
#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Meminta input dari user untuk nilai a dan b
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    // Menggunakan perulangan do-while untuk mencetak dari a hingga b
    do {
        cout << a << "AKU ADA DISINI" <<endl;  // Menampilkan nilai a
        a++;               // Menambahkan a sebesar 1 setiap iterasi
    } while (a <= b);      // Kondisi dicek setelah setiap iterasi

    return 0;
}
