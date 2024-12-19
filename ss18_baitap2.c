#include <stdio.h>
struct sinhVien{
	char name[50];
	int age;
	int phoneNumber; 
};
	
int main(){
	struct sinhVien sinhVien1;	
	printf("nhap ten: ");
	fgets(sinhVien1.name, sizeof(sinhVien1.name), stdin);
	printf("nhap tuoi: ");
	scanf("%d", &sinhVien1.age);
	printf("nhap so dien thoai: ");
	scanf("%d", &sinhVien1.phoneNumber);
	
	printf("ten: %s\n", sinhVien1.name);
	printf("tuoi: %d\n", sinhVien1.age);
	printf("so dien thoai: %d\n", sinhVien1.phoneNumber);
	
	return 0;
}
