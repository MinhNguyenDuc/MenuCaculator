#include <stdio.h>
#include <string.h>

void display() {
	char choice;
	printf("======MENU======");
	printf("\n");
	printf("1. Them moi sinh vien\n");
	printf("2. Hien thi danh sach\n");
	printf("3. Sua sinh vien\n");
	printf("4. Xoa sinh vien\n");
	printf("5. Thoat\n");
	printf("================\n");
	printf("Vui long nhap lua chon : ");
	scanf("%s", &choice);
	switch(choice){
		case '1' : {
			addStudent();
			break;
		}
		
		default : {
			printf("Ki tu nhap khong hop le, vui long lua chon lai\n ");
			break;
		}
	}
	
}


void addStudent(){
	char name[15];
	char dateofBirth[10];
	char phoneNumber[11];
	printf("Nhap ten sinh vien : ");
	do{
		fflush(stdin);
		gets(name);
		if(strlen(name) < 3){
			printf("Ten qua ngan. Vui long nhap ten trong khoang 4-15 ki tu : ");
		}
		else if(strlen(name) > 15){
			printf("Ten qua dai. Vui long nhap ten trong khoang 4-15 ki tu : ");
		}
		else break;
	}while(1);
	printf("Nhap ngay sinh : ");
	scanf("%s", dateofBirth);
	printf("Nhap so dien thoai :");
	scanf("%s", phoneNumber);
	printf("Ten Sinh vien : %s\n", name);
	printf("Ngay thang nam sinh : %s\n", dateofBirth);
	printf("So dien thoai : %s \n", phoneNumber);	
}

int main()
{
	while(1)
	display();
}

