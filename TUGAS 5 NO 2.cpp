#include<stdio.h>

int main(){
	int kode, harga, diskon;
	char jenis;
	
	printf("Masukan kode barang:");
	scanf("%d", &kode);
	printf("Masukan jenis barang(A/B/C):");
	scanf("%c", &jenis);
	printf("Masukan harga barang:");
	scanf("%d", &harga);
	
	switch(jenis){
		case'A':
			diskon=harga*10/100;
			break;
		case'B':
			diskon=harga*15/100;
			break
		case'C':
			diskon=harga*20/100;
			break 
			
		default:
			printf("jenis barang tidak valid\n");
			reutrn 1;
		
	}
	
	printf("jenis barang %c mendapat diskon=%d%%, harga setelah didiskon=%d\n",jenis,diskon*100/harga-diskon);
	
	return0;
}
