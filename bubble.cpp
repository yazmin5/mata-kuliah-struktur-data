#include <iostream>
using namespace std;

struct Data{
	unsigned long nim;
	string nama;
	};
typedef struct Data data;

int n;
void cetak(data*a){
	for(int k=0; k<n; k++){
		cout<<a[k].nim<<" ";
		}
		cout <<"\r\n";
	}
	
void bubble( data * a){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j].nim > a[j+1].nim){
				swap(a[j],a[j+1]);
			}
			cetak(&a[0]);
		}
	}
}

int main(){
	cin >> n;
	data mhs[n];
	for(int i=0; i<n; i++){
		cin >> mhs[i].nim >> mhs[i].nama;
	}
	
	// sorting
	bubble(&mhs[0]);
	
	// hasil akhir
	cout << "Hasil akhir :\r\n";
	for(int k=0; k<n; k++)
	{
		cout << mhs[k].nim << " - " << mhs[k].nama;
		cout << "\r\n";
	}
	
	return 0;
}  
