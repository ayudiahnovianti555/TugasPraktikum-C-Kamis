#include<stdio.h>

int main()
{
	// deklarasi variabel
	int Bilangan;
	
	//Meminta input bilangan dari pengguna
	printf("Masukan sebuah bialngan bulat positif: "),
	scanf("%d", &Bilangan);
	
	//Memeriksa apakah bilangan positif atau tidak
	
	//Memeriksa apakah bilangan genap atau ganjil
	if (Bilangan % 2 == 0) {
		printf("Genap\n");
	} else {
		printf("GANJIL/n");
	}
	return 0;
} 
