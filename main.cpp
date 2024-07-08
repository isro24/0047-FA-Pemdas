/**
 * @file main.cpp
 * @author Isro
 * @brief
 * @version 0.1
 * @date 2024-06-24
 *
 * @copyright Copyright (c) 2024
 *
 * @mainpage sistem penilaian mata kuliah Pemrograman dan Jaringan
 * @section 
 */

#include <iostream>
using namespace std;
class MataKuliah
{
private: // isi dengan access modifier yang dibutuhkan
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;
    // tambahkan dengan variabel lain yang dibutuhkan dibawah ini
public:
    MataKuliah()
    {
        presensi = 0.0;
        activity = 0.0;
        exercise = 0.0;
        tugasAkhir = 0.0;
        // isi dengan inisialisasi variabel yang dibutuhkan dibawah ini
    }
    virtual void namaMataKuliah() {}
    virtual void inputNilai() {}
    virtual float hitungNilaiAkhir() { return 0; }
    virtual void cekKelulusan() {}

    // tambahkan virtual fungsi lain yang dibutuhkan dibawah ini
    void setPresensi(float nilai)
    {
        this->presensi = nilai;
    }
    float getPresensi()
    {
        return presensi;
    }
    void setActivity(float nilai)
    {
        this->activity = nilai;
    }
    float getActivity()
    {
        return activity;
    }
    void setExercise(float nilai)
    {
        this->exercise = nilai;
    }
    float getExercise()
    {
        return exercise;
    }
    void setTugasAkhir(float nilai)
    {
        this->tugasAkhir = nilai;
    }
    float getTugasAkhir()
    {
        return tugasAkhir;
    }
    // tambahkan setter dan getter lain yang dibutuhkan dibawah ini
};
class Pemrograman : public MataKuliah
{
public:
    void inputNilai() {
        cout << "Masukkan nilai presensi : " << endl;
        float presensi;
        cin >> presensi;
        setPresensi(presensi);

        cout << "Masukkan nilai activity : " << endl;
        float activity;
        cin >> activity;
        setActivity(activity);

        cout << "Masukkan nilai exercise : " << endl;
        float exercise;
        cin >> exercise;
        setExercise(exercise);

        cout << "Masukkan nilai tugas akhir : " << endl;
        float tugasakhir;
        cin >> tugasakhir;
        setTugasAkhir(tugasakhir);
    }

    float hitungNilaiAKhir() {
        return (getPresensi() * 0.1) + (getActivity() * 0.2) + (getExercise() * 0.3) + (getTugasAkhir() * 0.4);
    }

    void cekKelulusan() {
        float nilaiAkhir = hitungNilaiAKhir();
        if (nilaiAkhir > 75) {
            cout << "Selamat anda dinyatakan Lulus" << endl;
        }
        else {
            cout << "Anda dinyatakan Tidak Lulus" << endl;
        }
    }


    // isi disini untuk mengisi kelas pemrograman
};
class Jaringan : public MataKuliah
{
public:
    void inputNilai() {
        cout << "Masukkan nilai activity : " << endl;
        float activity;
        cin >> activity;
        setActivity(activity);

        cout << "Masukkan nilai exercise : " << endl;
        float exercise;
        cin >> exercise;
        setExercise(exercise);
        // isi disini untuk mengisi kelas jaringan
    }

    float hitungNilaiAKhir() {
        return (getActivity() * 0.4) + (getExercise() * 0.6);
        cout << "Nilai Akhir" << hitungNilaiAKhir();
    }

    void cekKelulusan() {
        float nilaiAkhir = hitungNilaiAKhir();
        if (nilaiAkhir > 75) {
            cout << "Selamat anda dinyatakan Lulus" << endl;
        }
        else {
            cout << "Anda dinyatakan Tidak Lulus" << endl;
        }
    }
};
int main()
{
    char pilih;
    MataKuliah* mataKuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;

    cout << "Pilih Mata Kuliah : " << endl;
    cout << "1. Pemrograman" << endl;
    cout << "2. Jaringan" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih :" << endl;
    cin >> pilih;

    while(true){
        switch (pilih)
        {
        case '1':
            pemrograman.inputNilai();
            pemrograman.cekKelulusan();
            break;
        case '2':
            jaringan.inputNilai();
            jaringan.cekKelulusan();
            break;
        case '3':
            return 0;
        default:
            break;
        }
    }
    // isi disini untuk menentukan mata kuliah yang dipilih
}