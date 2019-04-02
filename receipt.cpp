#include<iostream>
#include<string>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctime> 
using namespace std;
void fordelay(int j){
   	int i,k;
	for(i=0;i<j;i++)
         k=i;
}
int main(){
	string menu[100][100],name[100];
	string textmenu[15]={"Chicken Parmigiana","Fettuccine Alfredo","Lasagna","inguine With Clam Sauce",
	"Veal Marsala","Chicken Saltimbocca","Pasta primavera","Shrimp Fra Diavolo","Orange Juice",
	"Lemonade","Smoothie","Zabaglione","Cannoli","Zeppole","II Panettone"};
    int pmenu[15]={400,580,620,350,800,500,280,760,65,70,80,230,120,210,200};
	int n=0,list=0,pow[100][100],p[100][100],total[100],seat[100];
Name:
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\t\t\tPlease enter your name | ";
	cin>>name[n];
	cout<<"\n\t\t   Please enter the seat you want to book | ";
	cin>>seat[n];
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\t\t\tLOADING";
	for(int i=0;i<=10;i++){
            fordelay(100000000);
            cout<<".";
        }
    system("cls");
	
Menu:
	cout<<"                             +--------------------+\n";
    cout<<"                             | PLEASE SELECT MENU |\n";
    cout<<"                             +--------------------+\n";
    cout<<" ///////////// Main Food ///////////// | /////////////// Drink ///////////////\n";
    cout<<"  1. Chicken Parmigiana         400-   |   a. Orange Juice                65- \n";
    cout<<"  2. Fettuccine Alfredo         580-   |   b. lemonade                    70- \n";
	cout<<"  3. Lasagna                    620-   |   c. Smoothie                    80- \n";
    cout<<"  4. Linguine With Clam Sauce   350-   | ////////////// Dessert //////////////\n";
    cout<<"  5. Veal Marsala               800-   |   d. Zabaglione                 230- \n";
    cout<<"  6. Chicken Saltimbocca        500-   |   e. Cannoli                    120- \n";
    cout<<"  7. Pasta Primavera            280-   |   f. Zeppole                    210- \n";
    cout<<"  8. Shrimp Fra Diavolo         760-   |   g. II Panettone               200- \n";
    cout<<"--------------------------------------------------------------------------------\n";
    cout<<"                             +--------------------+\n";
    cout<<"                             |     YOUR MENUS     |\n";
    cout<<"                             +--------------------+\n";
    cout<<" PRESS 0 FINISHED.\n";
    cout<<"------------------\n";
    while(menu){
    menu[n][list]=getch();
    if(menu[n][list]=="1"){
    	cout<<textmenu[0]<<"\t X";
    	p[n][list]=pmenu[0];
	}else if(menu[n][list]=="2"){
    	cout<<textmenu[1]<<"\t X";
    	p[n][list]=pmenu[1];
	}else if(menu[n][list]=="3"){
    	cout<<textmenu[2]<<"\t\t\t X";
    	p[n][list]=pmenu[2];
	}else if(menu[n][list]=="4"){
    	cout<<textmenu[3]<<"\t X";
    	p[n][list]=pmenu[3];
	}else if(menu[n][list]=="5"){
    	cout<<textmenu[4]<<"\t\t X";
    	p[n][list]=pmenu[4];
	}else if(menu[n][list]=="6"){
    	cout<<textmenu[5]<<"\t X";
    	p[n][list]=pmenu[5];
	}else if(menu[n][list]=="7"){
    	cout<<textmenu[6]<<"\t\t X";
    	p[n][list]=pmenu[6];
	}else if(menu[n][list]=="8"){
    	cout<<textmenu[7]<<"\t X";
    	p[n][list]=pmenu[7];
	}else if(menu[n][list]=="a"){
    	cout<<textmenu[8]<<"\t\t X";
    	p[n][list]=pmenu[8];
	}else if(menu[n][list]=="b"){
    	cout<<textmenu[9]<<"\t\t X";
    	p[n][list]=pmenu[9];
	}else if(menu[n][list]=="c"){
    	cout<<textmenu[10]<<"\t\t X";
    	p[n][list]=pmenu[10];
	}else if(menu[n][list]=="d"){
    	cout<<textmenu[11]<<"\t\t X";
    	p[n][list]=pmenu[11];
	}else if(menu[n][list]=="e"){
    	cout<<textmenu[12]<<"\t\t\t X";
    	p[n][list]=pmenu[12];
	}else if(menu[n][list]=="f"){
    	cout<<textmenu[13]<<"\t\t\t X";
    	p[n][list]=pmenu[13];
	}else if(menu[n][list]=="g"){
   		cout<<textmenu[14]<<"\t\t X";
    	p[n][list]=pmenu[14];
	}else if(menu[n][list]=="0"){
		list++;
		break;	
	}else NULL;
	cin>>pow[n][list];
	list++;
	if(menu[n][list]=="0")break;
}
	for(int i=0;i<=list;i++){
		total[n]+=p[n][i]*pow[n][i];
	}
	cout<<"\n LOADING";
	for(int i=0;i<=10;i++){
            fordelay(100000000);
            cout<<".";
        }
	system("cls");
bill:
    cout<<"#######################################\n";
  	cout<<"        +--------------------+\n";
    cout<<"        |    BILL DETAILS    |\n";
    cout<<"        +--------------------+\n";
    cout<<"     Name of customer | "<<name[n]<<"\n";
    cout<<"---------------------------------------\n";
    for(int list=0;list<=100;list++){
    if(menu[n][list]=="1"){
    	cout<<" ";cout<<textmenu[0]<<"\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="2"){
    	cout<<" ";cout<<textmenu[1]<<"\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="3"){
    	cout<<" ";cout<<textmenu[2]<<"\t\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="4"){
    	cout<<" ";cout<<textmenu[3]<<" X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="5"){
    	cout<<" ";cout<<textmenu[4]<<"\t\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="6"){
    	cout<<" ";cout<<textmenu[5]<<"\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="7"){
    	cout<<" ";cout<<textmenu[6]<<"\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="8"){
    	cout<<" ";cout<<textmenu[7]<<"\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="a"){
    	cout<<" ";cout<<textmenu[8]<<"\t\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="b"){
    	cout<<" ";cout<<textmenu[9]<<"\t\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="c"){
    	cout<<" ";cout<<textmenu[10]<<"\t\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="d"){
    	cout<<" ";cout<<textmenu[11]<<"\t\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="e"){
    	cout<<" ";cout<<textmenu[12]<<"\t\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="f"){
    	cout<<" ";cout<<textmenu[13]<<"\t\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="g"){
   		cout<<" ";cout<<textmenu[14]<<"\t\t X";cout<<pow[n][list]<<"\t"<<p[n][list]*pow[n][list]<<"\n";
	}else if(menu[n][list]=="0"){
   		break;
	}
	}
	cout<<"---------------------------------------\n";
	cout<<" Total\t\t\t\t"<<total[n]<<"\n\n";
	cout<<"#######################################\n";
	string sname;
	cin>>sname;
	for(int i=0;i<=n;i++){
		if(sname==name[i]){
			cout<<"n ="<<i;
		}
	}
	n++;
	{char home;
	home = getch();
	if(home=='h') goto Name;
	}
	
	return 0;
}

