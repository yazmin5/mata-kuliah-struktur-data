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
	
void select( data * a )
{
	int min;
	for(int i=0; i<n-1; i++)
	{
		min = i;
		for(int j=i; j<n; j++)
		{
			if(a[min].nim > a[j].nim)
			{
				min = j;
			}
		}
		swap(a[i],a[min]);
		cetak(&a[0]);
	}
}

int main(){
	cin >> n;
	data mhs[n];
	for(int i=0; i<n; i++){
		cin >> mhs[i].nim >> mhs[i].nama;
	}
	
	// sorting
	select(&mhs[0]);
	
	// hasil akhir
	cout << "Hasil akhir :\r\n";
	for(int k=0; k<n; k++)
	{
		cout << mhs[k].nim << " - " << mhs[k].nama;
		cout << "\r\n";
	}
	
	return 0;
