// Ardhika Restu Yoviyanto

#include<iostream>
#include<string.h>
#define MAX 5
using namespace std;
//Jawaban Soal A
struct spare_part_5190411312{
	string kode_barang;
	string nama_barang;
	string kategori_barang;
	float harga;
};
spare_part_5190411312 keranjang_spare_part_ardhika[MAX],temp;

void penjualan(spare_part_5190411312 arrdata[]){
	string x;
	int jmlh_beli;
	float total ;
	cout<<"Masukkan Kode barang : ";
	cin>>x;
	cout<<"Masukkan Jumlah Pembelian : ";
	cin>>jmlh_beli;
	
	for(int i=0; i<5; i++){
		if(arrdata[i].kode_barang == x ){
			total = jmlh_beli * arrdata[i].harga ;
		}
	}
	cout<<"Jumlah Rp. "<<total;
}

void printpenjualan(){
	penjualan(keranjang_spare_part_ardhika);
	cout<<endl;
	system("pause");
	system("cls");
}

//Akhir Jawaban Soal A

//Fungsi Untuk Menginputkan dan menampilkan data
//input data tidak boleh pakai spasi (pakai underscore)
void inputdata(){
	for(int i=0; i<5; i++){
		cout<<"Masukkan Kode Barang : ";
		cin>>keranjang_spare_part_ardhika[i].kode_barang;
		cout<<"Masukkan Nama Barang : ";
		cin>>keranjang_spare_part_ardhika[i].nama_barang;
		cout<<"Masukkan Kategori Barang : ";
		cin>>keranjang_spare_part_ardhika[i].kategori_barang;
		cout<<"Masukkan Harga Rp. ";
		cin>>keranjang_spare_part_ardhika[i].harga;
		cout<<endl;
	}
	cout<<"Data berhasil di Inputkan"<<endl;
	system("pause");
	system("cls");
}

void tampildata(spare_part_5190411312 arrdata){
	cout<<"Kode Barang     : "<<arrdata.kode_barang<<endl;
	cout<<"Nama Barang     : "<<arrdata.nama_barang<<endl;
	cout<<"Kategori Barang : "<<arrdata.kategori_barang<<endl;
	cout<<"Harga Barang    : "<<arrdata.harga<<endl;
	cout<<endl;

}

int printdata(){
	cout<<endl;
	cout<<"+=========================+"<<endl;
	cout<<"| Data Yang anda Masukkan |"<<endl;
	cout<<"+=========================+"<<endl;
	cout<<endl;
	for(int i=0; i<5; i++){
		tampildata(keranjang_spare_part_ardhika[i]);
		cout<<endl;
	}
	system("pause");
	system("cls");
	return 0;
}
//Akhir Fungsi Untuk menginputkan dan Menampilkan Data


//Jawaban Soal B
void tampil_nama_barang_consumable(spare_part_5190411312 arrdata[]){
	for(int i=0; i<5; i++){
		if(arrdata[i].kategori_barang == "consumable"){
			cout<<"Nama Barang : "<<arrdata[i].nama_barang<<endl;
			cout<<"Harga Rp. "<<arrdata[i].harga;
			cout<<endl;
		}
	}
}
void print_tampil_nama_barang_consumable(){
	tampil_nama_barang_consumable(keranjang_spare_part_ardhika);
	cout<<endl;
	system("pause");
	system("cls");
}
// Akhir Jawaban Soal B


//Jawaban Soal C
void urut_keranjang_spare_part_ardhika(spare_part_5190411312 arrdata[]){

	for(int i=0; i<5; i++){
		for(int j=i; j<5; j++){
			if(arrdata[i].harga>arrdata[j].harga){
				temp=arrdata[i];
				arrdata[i]=arrdata[j];
				arrdata[j]=temp;
				
			}
		}
	}
	for(int i=0; i<5; i++){
	cout<<"Kode Barang     : "<<arrdata[i].kode_barang<<endl;
	cout<<"Nama Barang     : "<<arrdata[i].nama_barang<<endl;
	cout<<"Kategori Barang : "<<arrdata[i].kategori_barang<<endl;
	cout<<"Harga Barang    : "<<arrdata[i].harga<<endl;
	cout<<endl;
	}
} 

void print_dataurut(){
	urut_keranjang_spare_part_ardhika(keranjang_spare_part_ardhika);
	system("pause");
	system("cls");
}
//Akhir Jawaban Soal C

int main(){
int pilih;
do{
		cout<<"+=====================================+"<<endl;
		cout<<"|        Database Penjualan           |"<<endl;
		cout<<"+=====================================+"<<endl;
		cout<<"|1. Input Data                        |"<<endl;
		cout<<"|2. Tampilkan Semua Data              |"<<endl;
		cout<<"|3. Beli barang                       |"<<endl;
		cout<<"|4. Detail barang kategori consumable |"<<endl;
		cout<<"|5. Urutkan Data (Min->Max)           |"<<endl;
		cout<<"|6. Keluar program                    |"<<endl;
		cout<<"+=====================================+"<<endl;
		cout<<"Masukkan Pilihan : ";
		cin>>pilih;
		cout<<endl;
		
		switch(pilih){
			case 1 : inputdata();
			break;
			case 2 : printdata();
			break;
			case 3 : printpenjualan();
			break;
			case 4 : print_tampil_nama_barang_consumable();
			break;
			case 5 : print_dataurut();
			break;
			case 6 : exit(0);
			default : 
			cout<<"Pilihan Tidak Tersedia"<<endl;
			break;
		}
	}while(pilih!=7);
}

