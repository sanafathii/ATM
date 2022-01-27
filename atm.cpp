#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<dos.h>
#include<time.h>
#include<ctype.h>
#include<windows.h>
#include<float.h>
#include <unistd.h>
#include<cstdlib>//for change color of background and text
#include<stdlib.h>
#define size 50
struct customer{
	char name[size];
	int password;
	long int mojodi;
	int accountnumber;
	int t;
	int tra[10][size];
}k,k1;
struct employe{
	char name[size];
	int pass[4];
	char pas[4];
};
FILE *op;
FILE *m;
void menu();
void employeee();
void customer();
int chakingemp();
int chakingcust();
void open();
void update();
void settle();

void archive();
void transfer();
void balance();
void Cash();
void Recent();
void changepasword();

void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main(){
	system("color B0");
	
	menu();

	
}
void menu(){
	
	int number,n,x;
	int s,m,h;
	s=time(0)%60;
	m=(time(0)/60)%60;
	h=(time(0)/60)%24;
	int a;
	
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
		printf("1398/11/07");
		printf("\t\t  ");
		printf("%d:%d:%d",h,m,s);
			printf("\t\t\t\t\t\t\n");
			printf("\t\t\t\t\t\t");
	printf("<<WELCOM TO ATM>>\n");
	printf("\t\t\t\t\t\t");
	printf(">>>>>>MENU<<<<<<\n");
		printf("\t\t\t\t\t\t");
	printf("1.sing in as employee\n");
	printf("\t\t\t\t\t\t");
	printf("2.sing in as customer\n");
	printf("\t\t\t\t\t\t");
	printf("3.Exit");
	printf("\n");
	printf("\t\t\t\t\t\t");
	scanf("%d",&number);//choose menu
	
	switch(number){
			case 1:system("cls");
			a=chakingemp();
		
			if( a==1  ){
				system("cls");
				employeee();
			}
		break;
		case 2:system("cls");
		a=chakingcust();
		if(a==1){
			system("cls");
			customer();
	
		 
		break;
		case 3:system("cls");
		menu();
		break;
		
		
		
	}
	
}
}
void employeee(){
	int n;
	int number;

	//printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
	gotoxy(40,10);			
			
			   printf("1.open an account\n");
			   printf("\t\t\t\t\t");
			   printf("2.update an account\n");
			   printf("\t\t\t\t\t");
			   printf("3.settle and Archive account\n");
			   printf("\t\t\t\t\t");
			   printf("4.list Recent Archive Accounts\n");
			   printf("\t\t\t\t\t");
			   printf("5.back to menu\n");
			   printf("\t\t\t\t\t");
			   scanf("%d",&n);
			switch(n)
			{
				case 1:system("cls");
					open();
					break;
		
				case 2:system("cls");
				
					update();
					break;
				
				case 3:system("cls");
				settle();
				break;
				case 4:system("cls");
				archive();
				break;
				case 5:	system("cls");
				menu();
				break;
			}
	}

	
int chakingemp(){
	int t=0;
	struct employe p1,p2;
	strcpy(p1.name,"sana");
	p1.pass[0]=9;
	p1.pass[1]=8;
	p1.pass[2]=8;
	p1.pass[3]=6;
	

		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
		printf("please inter your accont number:");
		scanf("%s",p2.name);
		printf("\t\t\t\t\t");
		printf("please inter your password:");
		for(int i=0;i<4;i++){
			p2.pas[i]=getch();
			p2.pass[i]=p2.pas[i]-'0';
			printf("*");
		}
		for(int i=0;i<4;i++){
			if(p1.pass[i]==p2.pass[i]){
				t++;
			}
		}
		
		
		
		
		
		if(strcmpi(p1.name,p2.name)==0&&t==4){
				system("color 02");
				Sleep(1000);
				system("cls");
					system("color B0");
			return 1;
		}
		else{
			printf("\a");
				system("color 04");
				Sleep(1000);
				system("cls");
					system("color B0");
				menu();
			
		}
			
	}
	
void customer(){
	int x;
	system("cls");
	//printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
	gotoxy(40,10);
			   printf("1.Account balance\n");
			   printf("\t\t\t\t\t");
			   printf("2.Transfer\n");
			   printf("\t\t\t\t\t");
			   printf("3.Cash winthdrawal\n");
			   printf("\t\t\t\t\t");
			   printf("4.Recent account updates\n");
			   printf("\t\t\t\t\t");
			   printf("5.change pasword\n");
			   printf("\t\t\t\t\t");
			   printf("6.back to the menu\n");
			   printf("\t\t\t\t\t");
			   scanf("%d",&x);
		switch(x){
			case 1:system("cls");
			balance();
				break;
			case 2:	system("cls");
			 transfer();
			break;
			case 3:system("cls");
			Cash();
			break;
			case 4:system("cls");
			Recent();
			break;
			case 5:system("cls");
			changepasword();
			break;
			case 6:system("cls");
			menu();
			break;
			
		}
}
void open(){
	
	
	gotoxy(40,10);
	struct customer k;
		
		op = fopen("test1.bin", "ab+");
		if(op==NULL)
		{
			printf("file");
		}
		
	printf("inter account name:");
	scanf("%s",k.name);
	
	printf("\t\t\t\t\t");
	printf("inter accontnumber:");
	scanf("%d",&k.accountnumber);
	printf("\t\t\t\t\t");
	printf("inter password:");
	scanf("%d",&k.password);
	printf("\t\t\t\t\t");
	printf("inter frist mojodi:");
	scanf("%d",&k.mojodi);
	k.t=1;
	fwrite(&k,sizeof(k),1,op);
	printf("\t\t\t\t\t");
	printf("THE ACCONT OPENED");
	fclose(op);

	Sleep(1000);
	system("cls");
	employeee();
	
}
void update(){
	int newa;
	int id=0;
//	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
	gotoxy(40,10);
	printf("inter account number:");
	scanf("%d",&newa);
	op = fopen("test1.bin", "rb+");
	fseek(op,0,SEEK_CUR);
	
	while(feof(op)==0){
		fread(&k,sizeof(k),1,op);
		if(newa==k.accountnumber){
			id=1;
			break;
			}
		}
			
			if(id==1){
				//printf("enter new accountnumber:");
			//	scanf("%d",&k.accountnumber);
			printf("\t\t\t\t\t");
					printf("enter new password:");
					scanf("%d",&k.password);
					printf("\t\t\t\t\t");
					printf("inter new mojodi:");
					scanf("%d",&k.mojodi);
					
						fseek(op,-sizeof(k),SEEK_CUR);
		
			fwrite(&k,sizeof(k),1,op);
		
			}
			else{
				printf("not fount");
			}
			
			system("cls");
		
	employeee();
	
	}
	

void Cash(){
	int n;
	gotoxy(40,10);
	printf("inter your mablagh:");
	scanf("%d",&n);
	k.mojodi=k.mojodi-n;
	fseek(op,-sizeof(k),SEEK_CUR);
	fwrite(&k,sizeof(k),1,op);
	system("cls");
	gotoxy(40,10);
	printf("please wait....");
	Sleep(1000);
	system("cls");
    gotoxy(40,10);
	printf("ok,done");
	Sleep(1000);
	system("cls");
	customer();

}

int  chakingcust(){
	int a,b;
	gotoxy(40,10);
	printf("inter your accout number:");
	scanf("%d",&a);
	printf("\t\t\t\t\t");
	printf("inter password:");
	scanf("%d",&b);
	op = fopen("test1.bin", "rb+");
	while(feof(op)==0){
		fread(&k,sizeof(k),1,op);
		if(k.accountnumber==a&&k.password==b){
			if(k.t==0){
		    	Recent();
			}
			
			else{
				return 1;
			}
			break;
		}
		
	}
	
	
}
void settle(){
	int id;
	gotoxy(40,10);
	printf("enter accountnumber:");
	scanf("%d",&id);
	
	op = fopen("test1.bin", "rb+");
	fseek(op,0,SEEK_SET);
	while(feof(op)==0){
		fread(&k,sizeof(k),1,op);
		if(id==k.accountnumber){
			
			k.t=0;
		
			break;
		
		}
		}
	
		fseek(op,-sizeof(k),SEEK_CUR);
		
		
		fwrite(&k,sizeof(k),1,op);
		fclose(op);
		
	
}
void archive(){
	op = fopen("test1.bin", "rb+");
	while(feof(op)==0){
		fread(&k,sizeof(k),1,op);
		if(k.t==0){
			break;
		
		}
		
		printf("name\t\t");
		printf("accountnumber\t\t");
		printf("mojodi\n");
		printf("%s\t\t",k.name);
		printf("%d\t\t\t",k.accountnumber);
		printf("%d",k.mojodi);
	
		
		
	}
	        
	
	
	
	fclose(op);
}
void balance(){
		gotoxy(40,10);
		printf("the mojodi of the account:");
		printf("%d",k.mojodi);
		
	}

void transfer(){
	int z,t;
	gotoxy(40,10);
	printf("enter account number:");
	scanf("%d",&z);
	printf("\t\t\t\t\t");
	printf("enter mablagh:");
	scanf("%d",&t);
	k.mojodi=k.mojodi-t;
	fseek(op,-sizeof(k),SEEK_CUR);
	fwrite(&k,sizeof(k),1,op);
	m = fopen("test1.bin", "rb+");
	fseek(op,0,SEEK_CUR);
	while(feof(m)==0){
		fread(&k,sizeof(k),1,m);
		if(z==k.accountnumber){
			break;
		}
		
	}
	printf("%s\n",k.name);
			k.mojodi=k.mojodi+t;
			printf("%d",k.mojodi);
			printf("ok,done");
			k1=k;
	fseek(m,-sizeof(k1),SEEK_CUR);
	fwrite(&k1,sizeof(k1),1,m);
	
	
}
void changepasword(){
	int x;
	gotoxy(40,10);
	printf("enter new password:");
	scanf("%d",&x);
	k.password=x;
	fseek(op,-sizeof(k),SEEK_CUR);
	fwrite(&k,sizeof(k),1,op);
	
	
	
}
	
void Recent(){
	
	
	
	
	
}
	
	









