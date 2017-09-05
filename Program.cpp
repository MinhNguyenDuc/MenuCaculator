#include <stdio.h>
#include <string.h>

//Procedure
int plus(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
float div(int a, int b);

//Display
void display()
{
	printf("======MENU======");
	printf("\n");
	printf("1. Cong 2 so\n");
	printf("2. Tru 2 so\n");
	printf("3. Nhan 2 so\n");
	printf("4. Chia 2 so\n");
	printf("================\n");
	printf("Vui long nhap lua chon : ");
}

void Management()
{
	int a ,b;
	char number;
	scanf("%s", &number);
	switch(number)
	{
		case '1' :{
			//input(a, b);
			printf("Vui long nhap 2 so nguyen : ");
			scanf("%d%d", &a, &b);
			printf("Tong hai so la : %d\n", plus(a, b));
			break;
		}
		case '2': {
			//input(a, b);
			printf("Vui long nhap 2 so nguyen : ");
			scanf("%d%d", &a, &b);
			printf("Hieu 2 so la : %d\n", minus(a, b));
			break;
		}
		case '3' :{
			//input(a, b);
			printf("Vui long nhap 2 so nguyen : ");
			scanf("%d%d", &a, &b);
			printf("Tich 2 so la : %d\n", multi(a, b));
			break;
		}
		case '4': {
			//input(a, b);
			printf("Vui long nhap 2 so nguyen : ");
			scanf("%d%d", &a, &b);
			if(b == 0)
			{
				printf("So thu 2 phai khac 0\n");
			}
			else{
				printf("Thuong 2 so la : %g\n", div(a, b));
			}
			break;
		}
		default: {
			printf("Ki tu nhap khong hop le vui long nhap lai\n");
			break;
		}
	}	
}

//This function add two number
int plus(int a, int b){
	return a+b;
}

//This function minus two number
int minus(int a, int b){
	return a-b;
}

//This function multiple two number
int multi(int a, int b){
	return a*b;
}

//This function divide two number 
float div(int a, int b){
	if(b!=0){
		return (float)(a)/(float)(b);
	}
}


int main()
{
	while(true){
		display();
		Management();
	}
}
