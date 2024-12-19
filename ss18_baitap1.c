#include <stdio.h>

struct sinhVien{
	char name[50];
	int age;
	int phoneNumber; 
};
	
int main(){
	struct sinhVien sinhVien1 = {
	"Nguyen Tung Duong",
	18,
	1924712942	
	};
	
	printf("ten: %s\n", sinhVien1.name);
	printf("tuoi: %d\n", sinhVien1.age);
	printf("so dien thoai: %d\n", sinhVien1.phoneNumber);
	
	return 0;
}
