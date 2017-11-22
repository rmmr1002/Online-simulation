#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<Stdlib.h>
#include<fstream.h>
#include<string.h>

char genchoice;   //global variable for the general choice functio
float bill=0;
void forgotpass();
void checkedoutpage();
void border();
void cod();
void cardpay();
void voucherpay();
void generalchoicefuncdis();
void generalchoicefunccom();
char paychoice[1];    //change variable name

void categories();
void  mycart();
void  myoders();
void  notification();

void startinganim()
{
 clrscr();
 highvideo();
 textcolor(RED+BLINK);
 gotoxy(37,12
 );
 cprintf("AMAZON");



 int xxx,yyy;
  textcolor(CYAN);

  for(yyy=1;yyy<12;yyy++)
  {
    for(xxx=1;xxx<79;xxx++)
     {
      delay(1);
      gotoxy(xxx,yyy);
      cprintf("o");
     }
   }
  textcolor(RED);
  for(xxx=44;xxx<79;xxx++)
  {
    for(yyy=1;yyy<24;yyy++)
     {
      delay(1);
      gotoxy(xxx,yyy);
      cprintf("|");
     }
  }
  textcolor(GREEN);
  for(yyy=13;yyy<24;yyy++)
  {
   for(xxx=77;xxx>0;xxx--)
   {
     delay(1);
     gotoxy(xxx,yyy);
     cprintf("o");
   }
  }
  textcolor(YELLOW);
  for(yyy=23;yyy>1;yyy--)
  {
  delay(1);
  gotoxy(1,yyy);
  cprintf("|");
  }
  for(xxx=1;xxx<35;xxx++)
  {
   for(yyy=23;yyy>11;yyy--)
   {
    delay(1);
    gotoxy(xxx,yyy);
    cprintf("|");
   }
  }
  delay(900);



}





//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////


 //// inventory test code

class inventory {

  public:
  char name[30];
  int code;
  int price;


  void inputinven()
  { cout<<"code>";
    cin>>code;
    cout<<"name>>";
    gets(name);
    cout<<"price>>>";
    cin>>price;
  }

  void dispinven()
  {
   textcolor(CYAN);
   cout<<"  "<<code<<" .";
   puts(name);
   cout<<"  Rs. "<<price;
  }

  };

 inventory stuff[20];
 inventory temp;
  fstream invenfile;
  int j11,j12;
////// inventory add function in the admin code
 void inventoryaddfunc(int n)
 {
 j12=n;
 invenfile.open("inventory",ios::out,ios::in);
 for(int i12=0;i12<n;i12++)
 {
 stuff[i12].inputinven();
 invenfile.write((char*)&stuff[i12],sizeof(stuff[i12]));
 }
 }


 //delay(300);
 //clrscr();
 void inventorydispfunc()
 {

 gotoxy(2,4);
 for (j11=0;j11<j12;j11++)
 {

 cout<<" "<<endl;
 invenfile.read((char*)&stuff[j11],sizeof(stuff[j11]));

 stuff[j11].dispinven();

 }
 }




/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////



int a;
int counter=0;
int check=0;
void purchase();
void login();
void compare();
void initialize();
void page1();
void mai2();
void admin();
void checkout();


class object
{
public :
char name[50];
int quantity;
int bought;              //change the value to something else when user buys
public:
int itemcode;
float price;
void input()
{
cout<<"Enter item code\n";
cin>>itemcode;
cout<<"Enter name";
gets(name);
cout<<"Enter price\n";
cin>>price;
cout<<"Enter quantity\n";
cin>>quantity;
}
int codereturn()
{
return itemcode;
}
void output()
{
cout<<"Name:";
puts(name);
cout<<"|  ";
cout<<"Price:Rs."<<price;
cout<<"\n|  ";
cout<<"Itemcode:"<<itemcode;


}
}obj1,obj2,obj3,obj4,obj5,ob[20];

class Password
{
public:
char pswd[20];

}o1,o2;

class Username
{
public:
char usrnm[20];

char mmbr;  //Checks whether member or not.
}o3,o4;

class Customer
{
public:
char password[40];
char usrnm[20];
void inputcust()
{

gotoxy(33,14);
cout<<"Enter username: ";
gets(usrnm);
gotoxy(33,16);
cout<<"Enter password: ";
gets(password);
}


}a1,a2,a3,a4,a5,a6,a7;


////array to store item codes
int icode[20];
int counterrr=0;


 void border()
  {
  clrscr();
  textcolor(YELLOW);
  int x,y;

  for(x=1;x<79;x++)
  {
  //delay(20);
  gotoxy(x,1);
  cprintf("-");
  }
  for(y=2;y<24;y++)
  {
  //delay(30);
  gotoxy(78,y);
  cprintf("|");
  }
  for(x=78;x>0;x--)
  {
  //delay(20);
  gotoxy(x,24);
  cprintf("-");
  }
  for(y=23;y>1;y--)
  {
  //delay(30);
  gotoxy(1,y);
  cprintf("|");
  }


  }


void checkedoutpage()
{
border();
gotoxy(35,4);
cout<<"PAYMENT";
gotoxy(30,5);
cout<<"Final Value is Rs."<<bill;

gotoxy(20,7);
cout<<"Select your preferred mode of payment :";
gotoxy(30,9);
cout<<"1.Cash on delivery";
gotoxy(30,11);
cout<<"2.Credit/Debit card";
gotoxy(25,17);
cout<<"PLEASE SELECT A CHOICE: ";
cin>>genchoice;

if(genchoice=='1'){ cod(); }

else if(genchoice=='2'){ cardpay();  }

else generalchoicefunccom();
//else if(genchoice==3){ voucherpay();  }

//else //generalchoices(); code. this will have all the general page choices
     // like back, quit , home etc................
}


char addr[200];


void cod()
{
clrscr();
border();
generalchoicefuncdis();
gotoxy(28,4);
cout<<"CASH ON DELIVERY PAYMENT";
gotoxy(19,6);
cout<<"Please fill in the following address details: ";
gotoxy(23,9);
cout<<"Area: ";
gotoxy(23,11);
cout<<"Street: ";
gotoxy(23,13);
cout<<"Door #: ";
gotoxy(23,15);
cout<<"PIN code: ";
gotoxy(29,9);
gets(addr);
gotoxy(31,11);
gets(addr);
gotoxy(31,13);
gets(addr);
gotoxy(33,15);
gets(addr);

gotoxy(18,19);
cout<<"DO YOU WANT TO COMFIRM THIS ORDER? (Y/N) >> ";
cin>>genchoice;
if(genchoice=='y'||genchoice=='Y')
{ clrscr(); border(); gotoxy(27,11); cout<<"ORDER SUCCESSFULLY PLACED"; }
//else if no and else if generalchoice
// now delay and take the user to the home screen
else generalchoicefunccom();
}

void cardpay()
{
clrscr();
border();
generalchoicefuncdis();
gotoxy(28,4);
cout<<"CREDIT/DEBIT CARD PAYMENT";
gotoxy(17,10);
cout<<"Enter 12 digit card number: ____________";
char cardnum[12];
gotoxy(45,10);
gets(cardnum);
gotoxy(17,13);
cout<<"Enter name on card: ";
char cardname[20];
gotoxy(37,13);
gets(cardname);
gotoxy(17,15);
cout<<"Enter 3 digit CVV number: ";
char cvvnum[3];
gotoxy(43,15);
gets(cvvnum);

delay(1000);
clrscr();
border();
gotoxy(35,11);
cout<<"PROCESSING..";
delay(3000);
clrscr();
border();
gotoxy(31,11);
cout<<"PAYMENT SUCCESSFULL!";
delay(2000);
//NOW REDIRECT USER TO HOME SCREEN
}




  int k=0;

  void categories()
  {
 /* gotoxy(6,6);
  textcolor(RED);
  cprintf("AVAILABLE ITEMS");
  textcolor(CYAN);
   for(a=6;a<21;a++)
   {
    gotoxy(a,7);cprintf("-");
   }
   ifstream f6("Object1002.txt",ios::in);
   while(k!=2)                              //make sure to put in items in
					   //increasing order of the length of characters
   {
   int i1=4;
   f6.read((char*)&obj2,sizeof(obj2));
   gotoxy(i1,9);
   obj2.output();
   //i1+=10;
   ++k;
   }                         /// displaying items one by one.
   while(k!=3)
   {
   int i1=4;
   f6.read((char*)&obj2,sizeof(obj2));
   gotoxy(i1,13);
   obj2.output();
   //i1+=10;
   ++k;
   }
   gotoxy(4,17);
   cout<<"<< for MORE press M >>";

   */
  textcolor(RED);
  gotoxy(6,6);
  cprintf("CATEGORIES");
  textcolor(CYAN);
   for(a=6;a<21;a++)
   {
    gotoxy(a,7);cprintf("-");
   }


  textcolor(WHITE);
  gotoxy(4,9); cout<<"C1.Electronics";
  gotoxy(4,10); cout<<"C2.Lifestyle";
  gotoxy(4,11); cout<<"C3.Home decor";
  gotoxy(4,12); cout<<"C4.Books";
  gotoxy(4,13); cout<<"C5.Automotive";


  }

  void mycart()
  {
  clrscr();
  cout<<"\t\tYOUR CART\n";
  for(int k=0;k<counterrr;k++)
  stuff[icode[k]].dispinven();
  }


  void myoders()
  {
  gotoxy(40,6);
  cout<<"MY ORDERS";
  for(a=40;a<49;a++)
   {
    gotoxy(a,7);cout<<"-";
   }
  for(int k=0;k<counter;k++)
  ob[k].output();
  }


  void notification()
  {
  gotoxy(58,6);
  textcolor(RED);

  cprintf("NOTIFICATIONS");
  textcolor(CYAN);
  for(a=58;a<71;a++)
   {
    gotoxy(a,7);cprintf("-");
   }
  gotoxy(55,9);                  //donot exceeed x coordinate of 78
  cout<<"N1.iPhone7 offers!!";     // do not exceed 19 characters else it will go out of the border
  gotoxy(55,10);
  cout<<"N2.New branded clothes";
  gotoxy(55,11);                 //max of 5 notifications
  cout<<"N3.Diodes available!";



  }


void amazonanim()
{
int xx,yy;
 for(xx=35;xx<42;xx++)
 {
  gotoxy(xx,4);
  cout<<"-";
 }
 for(yy=5;yy<20;yy++)
 {
  gotoxy(34,yy);
  cout<<"|";
 }
 for(yy=5;yy<20;yy++)
 {
  gotoxy(42,yy);
  cout<<"|";
 }
 for(xx=35;xx<42;xx++)
 {
  gotoxy(xx,20);
  cout<<"-";
 }
 textcolor(BROWN+BLINK);
 gotoxy(38,7);
 cprintf("A");
 gotoxy(38,9);
 cprintf("M");
 gotoxy(38,11);
 cprintf("A");
 gotoxy(38,13);
 cprintf("Z");
 gotoxy(38,15);
 cprintf("O");
 gotoxy(38,17);
 cprintf("N");

}
void page1()
{

  clrscr();
  border();
  gotoxy(35,2);
  cout<<"WELCOME";
  amazonanim();       ///// middle art work
  categories();  // welcome <username>
  notification();
  generalchoicefuncdis();
  gotoxy(35,23);
  cout<<">> ";
  cin>>genchoice;
  generalchoicefunccom();
 }

void generalchoicefuncdis()          //to display
{
  gotoxy(4,22);
  cout<<"MY CART {C}";
  gotoxy(18,22);
  cout<<"CHECKOUT {B}";
  gotoxy(34,22);
  cout<<"MAKE A PURCHASE {P}";
  gotoxy(56,22);
  cout<<"QUIT {Q}" ;
  gotoxy(67,22);
  cout<<"MORE {M}";
  //cout<<"Enter your choice >>";
  //cin>>genchoice;
}
void generalchoicefunccom()           //to compare
{
  if(genchoice=='P'||genchoice=='p')
  {
  purchase();
  generalchoicefuncdis();
  gotoxy(35,23);
  cout<<">> ";
  cin>>genchoice;
  generalchoicefunccom();
  }
  else if(genchoice=='C'||genchoice=='c')
  {
  mycart();
  generalchoicefuncdis();
  gotoxy(35,23);
  cout<<">> ";
  cin>>genchoice;
  generalchoicefunccom();
   }
  else if(genchoice=='B'||genchoice=='b')
  {
  checkout();
  generalchoicefuncdis();
  gotoxy(35,23);
  cout<<">> ";
  cin>>genchoice;
  generalchoicefunccom();
  }
  else if(genchoice=='Q'||genchoice=='q')
  {
  // clrscr();
   //cout<<"DO YOU REALLY WANT TO QUIT ?";
   //cout<<">> ";
   //cin>>genchoice;
   //if(genchoice=='y'||genchoice=='Y')
   { exit(0);}

  }
  else if(genchoice=='m'||genchoice=='M')
  {
  purchase();
  }

}





void purchase ()
{
clrscr();
border();
generalchoicefuncdis();

gotoxy(31,3);
cout<<"Available items";
/*
ifstream f5("Object1002.txt",ios::in);
while(k!=2)
{
   int i1=4;
   f5.read((char*)&obj2,sizeof(obj2));
   gotoxy(i1,9);
   obj2.output();
   //i1+=10;
   ++k;
}                         /// displaying items one by one.
while(k!=3)
{
   int i1=4;
   f5.read((char*)&obj2,sizeof(obj2));
   gotoxy(i1,13);
   obj2.output();
   //i1+=10;
   ++k;
} */
inventorydispfunc();

/*void purchase()
{
char c;
//do{
int i=0;
clrscr();
generalchoicefuncdis();
border();
 gotoxy(31,3);
 cout<<"Available items";
  // for(a=6;a<16;a++)
   {
   gotoxy(a,7);cout<<"-";
  }//
   ifstream f6("Object1002.txt",ios::in);
   while(k!=1)                              //make sure to put in items in   //increasing order of the length of characters
   {
   int i1=4;
   f6.read((char*)&obj2,sizeof(obj2));
   gotoxy(i1,9);
   obj2.output();
   //i1+=10;
   ++k;
   }

*/
char choi='y';
while (choi=='y'||choi=='Y')
{
gotoxy(15,20);
int i=0;
cout<<"Enter item code of object to buy >>";
int code1;
cin>>code1;
//counter++;
ifstream invenfile;
invenfile.open("inventory",ios::in);

//while(!invenfile.eof())
 {
   for(int aa=0;aa<j12;a++)    //j12 is the no of inventory items
   { invenfile.read((char*)&stuff[aa],sizeof(stuff[aa]));

    if(stuff[aa].code==code1)
     {
      icode[i]=stuff[aa].code;
      i++;
      counterrr++;
     }
    else generalchoicefunccom();
    }
  }
gotoxy(20,5);
cout<<"Do you wish to buy something else(Y/N)?";
cin>>choi;

}


}


void checkout()
{
clrscr();

for(int y=0;y<20;y++)
bill=bill+ob[y].price;
border(); //border function
generalchoicefuncdis();
gotoxy(35,3);
cout<<"CHECKOUT";
gotoxy(4,6);
cout<<"ORDERS:";
 for(int k=0;k<counter;k++)
  ob[k].output();
//mycart();
//ORDERS LIST
gotoxy(14,20);
//cout<<"Would you like to edit your orders ? (Y/N) >> ";

    gotoxy(9,20);
    cout<<"Would you like to checkout and place your order ? (Y/N) >> ";

    cin>>genchoice;

   if(genchoice=='y'||genchoice=='Y')
   {
     checkedoutpage();
   }
   else if (genchoice=='n'||genchoice=='N')
   {
    page1();
   }
   else generalchoicefunccom();

}
//else generalchoicefunccom();









void header()
{
clrscr();
gotoxy(30,2);
textcolor(CYAN);
cprintf("Welcome to the Future");
delay(100);
gotoxy(34,4);
textcolor(GREEN);
cprintf("AMAZON ONLINE");
gotoxy(13,24);
textcolor(CYAN);
cprintf("Created by Rohan Mishra");
}


int pwdcounter= 0;

void login()
{

header();
gotoxy(25,10);
cout<<"Please enter your username and password";
gotoxy(33,12);
cout<<"Username: ";
gets(a1.usrnm);
gotoxy(33,14);
cout<<"Password: ";
gets(a1.password);
}


void initial()
{

  a3.inputcust();

  ofstream f2("Usrnam.txt",ios::app|ios::binary);
   int i;
   //for(i=0;i<20;i++)                        // initial username ( Comment out other codes)
   f2.write((char*)&a3,sizeof(a3));

  ofstream f0("Paswd.txt",ios::app|ios::binary);
   int j;
   //for(j=0;j<20;j++)
  f0.write((char*)&a3,sizeof(a3));
  f0.close();

}

void compare()
{ ++pwdcounter;

  ifstream f1("Paswd.txt",ios::in);
  ifstream f3("Usrnam.txt",ios::in);
  while(!f1.eof()&& !f3.eof())
  {
  f1.read((char*)&a4,sizeof(a4));
  f3.read((char*)&a5,sizeof(a5));
  if((strcmp(a4.password,a1.password)==0)&&(strcmp(a5.usrnm,a1.usrnm)==0))// Checking both usernmae and pswd
  { check=1;
    page1();
    break;
  }
}

   if(check==0)
    {
      if((strcmp(a1.usrnm,"Admin")==0)&&(strcmp(a1.password,"Admin")==0))
      {
      check=2;
      }
      else
      {

      if(pwdcounter<4)
      {
	clrscr();
	header();
	gotoxy(30,11);
	cout<<"WRONG USERNAME !!!!";
	delay(1300);
	login();  /// loops 3 times and incrases pwdcounter
	///and then after 3 fails, it runs the forgotpass function
      }
     // else
     // forgotpass();
      }

    }


}

char frgtpwdvar;

void forgotpass()
{
clrscr();
gotoxy(17,8);
cout<<"Have you forgotten your username or password ?(Y/N)";
gotoxy(35,10);
cout<<">> ";
cin>>frgtpwdvar;
if(frgtpwdvar=='y'||frgtpwdvar=='Y')
{
// resetpwd();
}
else if(frgtpwdvar=='n'||frgtpwdvar=='N')
{
 clrscr();
 gotoxy(20,10);
 cout<<"YOU WILL BE REDIRECTED TO THE LOGIN SCREEN";
 delay(3000);
 mai2();
}
}





void admin()
{
clrscr();
cout<<"\t\t\tWelcome to admin login";
cout<<"\nHow many items to be uploaded?";
int n;
cin>>n;
/*int i=0;
while(i<n)
{
ofstream f2("Object1002.txt",ios::app|ios::binary);
object a1;
a1.input();
f2.write((char*)&a1,sizeof(a1));
i++;
} */
inventoryaddfunc(n);



delay(3000);
mai2();
}





void guest()
{
  header();
  gotoxy(23,10);
  cout<<"You will be logged in as guest";
}

void mai2()
{

clrscr();
header();
gotoxy(23,10);
cout<<"Are you a returning customer/admin? (Y/N) ";
char ch[1];
gotoxy(36,11);
cout<<">> ";
gets(ch);
if(ch[0]=='y'||ch[0]=='Y')
{
 login();
 compare();
 if(check==2)   //if admin
 {
 admin();
 }


}
else if(ch[0]=='N'||ch[0]=='n')
{ header();
  gotoxy(12,10);
  cout<<"Would you be interested in creating a new account? (Y/N) ";
  gotoxy(36,11);
  cout<<">> ";
  gets(ch);
  if(ch[0]=='y'||ch[0]=='Y')
  {
   initial();
   clrscr();
   gotoxy(35,12);
   cout<<"ACCOUNT CREATED";
   delay(1000);
   login();
   compare();
  }
  else if(ch[0]=='N'||ch[0]=='n')
   {
   guest();

   }
 }



}

void main()
{
//startinganim();
//delay(200);
clrscr();
mai2();
getch();
}
