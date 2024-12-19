#include <stdio.h>
#include <string.h>

struct Student {
	  int id;
    char name[50];
    int age;
    int phoneNumber;
};

int main() {
	int nAllStd = 5;
    struct Student students[nAllStd];

    for (int i = 0; i < nAllStd; i++) {
    	  students[i].id = i;
        printf("nhap thong tin cho sinh vien %d:\n", i + 1);
        
        printf("nhap ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

        printf("nhap tuoi: ");
        scanf("%d", &students[i].age); 

        printf("nhap so dien thoai: ");
        scanf("%d", &students[i].phoneNumber);
        fflush(stdin);
    }

    printf("\ndanh sach thong tin sinh vien:\n");
    for (int i = 0; i < nAllStd; i++) {
    	printf("id %d:\n", students[i].id);
        printf("sinh vien %d:\n", i + 1);
        printf("ten: %s\n", students[i].name);
        printf("tuoi: %d\n", students[i].age);
        printf("so dien thoai: %d\n\n", students[i].phoneNumber);
    }

    return 0;
}
