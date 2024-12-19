#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    int phoneNumber;
};

void editStudentInfo(int id, struct Student students[], int size) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (students[i].id == id) {
            found = 1;
            printf("Thong tin sinh vien truoc khi sua:\n");
            printf("ID: %d\n", students[i].id);
            printf("Ten: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("So dien thoai: %d\n", students[i].phoneNumber);

            printf("Nhap ten moi: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';

            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            
            printf("Nhap so dien thoai moi: ");
			      scanf("%d", &students[i].age);
			
			
            printf("thong tin sinh vien sau khi sua:\n");
            printf("ID: %d\n", students[i].id);
            printf("ten: %s\n", students[i].name);
            printf("tuoi: %d\n", students[i].age);
            printf("so dien thoai: %d\n", students[i].phoneNumber);
            
            break;
        }
    }

    if (!found) {
        printf("ID %d khong ton tai\n", id);
    }
}

int main() {
    struct Student students[5] = {
        {1, "a", 99, 113},
        {2, "b", 99, 114},
        {3, "c", 99, 115},
        {4, "d", 99, 911},
        {5, "e", 99, 118}
    };

    int id;
    printf("nhap ID sinh vien can sua thong tin: ");
    scanf("%d", &id);
  	fflush(stdin);
    editStudentInfo(id, students, 5);
    return 0;
}
