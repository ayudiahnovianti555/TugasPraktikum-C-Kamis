#include<stdio.h>

int main()
{
	printf("lama_bekerja(jam_masuk, jam_keluar): ");
	printf("konversi jam masuk dan jam keluar ke format 24 jam");
	scanf("jam_masuk_24 = jam_keluar if jam_keluar kurang lebih 12 else jam_masuk - 12");
	scnaf("jam_keluar_24 = jam_keluar if jam_keluar kurang lebih 12 else jam_keluar - 12");
	
	printf("Hitung lama_bekerja (dibulatkan ke bawah) ");
	scanf("lama_bekerja = (jam_keluar_24 - jam_masuk_24) // 24");
	
printf("Tes program dengan beberapa kasus uji"); 
printf("lama_bekerja(10, 11) output: 1 jam");
printf("lama_bekerja(10, 2) output: 4 jam");
printf("lama_bekerja(10, 7) output: 9 jam");

return 0;
}
