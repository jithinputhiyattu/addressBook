
/*****************************************************************************/

/*****-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*****/

/*****------------------------AdDress Book.eXe---------------------------*****/

/*****--------------------Project By : CT S4 Students--------------------*****/

/*****-------------------[G.P.T.C Thirurangadi CT2 S4]-------------------******/

/*****----------|+|+|+|+|+|+|Year : 2009-2010|+|+|+|+|+|+|+|-------------*****/

/*****-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*****/

/*****************************************************************************/


#include<conio.h>
#include<process.h>

#include<fstream.h>

#include"vision07.h"
#include"mousplus.h"


/*****************************************************************************/

/*****-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*****/

/*****-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*****/

/*****-*-*-*-*-*-*-*-*-*-*-*-Globel Variables-*-*-*-*-*-*-*-*-*-*-*-*-*-******/

char msg[25];
fstream finout;
fstream ftempinout;
AtMouse AM,TAM;
short simpleview=ON;

/*****-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*****/

/*****************************************************************************/

/*****-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*****/

int mouseMenu();
void initilizeGB();
long int total();
void c_ret(int x1,int y1,int x2,int y2,int cr);
void paralalogram(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int cr);
void forLMouse();
void forRMouse();
void reademe();
void aboutProgram();
void aboutprogramersG();
void aboutGPTC();
void page1();
void page3();
void lastpage();
void errorpage();
void terminate();
int moveForword(int &recno);
void insertData(int &recno,long int &setporg);
int editData(int &recno,int Qus);
int deleteData(int&recno,long int &setporg,int Qus);
int moveDataRight(int &recno);
int moveDataLeft(int &recno);
int moveBackword(int &recno);
void changeView();

/*****-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*****/

/*****************************************************************************/


class adress_book
 {

  char name[25];
  char home[25];
  char post[25];
   char way[25];
  char dist[25];
  char phn1[25];
  char phn2[25];
  char note[25];

  public :
  adress_book();
  ~adress_book()
   {
   }
  void getdata();
  void display(int recno);
  void mod_data();
  int  check(adress_book &P); //sorting
  void get_or_modify_data();
  friend void serch_name(int &recno);
  friend void serch_phno(int &recno);
  friend int check_integrity( adress_book &PH1,adress_book &PH2,int Exp);
 };

adress_book::adress_book()
 {
  strcpy(name,"       ");
  strcpy(home,"       ");
  strcpy(post,"       ");
  strcpy(way,"        ");
  strcpy(dist,"MALAPPURAM");
  strcpy(phn1,"       ");
  strcpy(phn2,"       ");
  strcpy(note,"NO_NOTE");
 }

int adress_book::check(adress_book &P)
 {
  if(1<strcmp(name,P.name))
   {
    return(1);
   }
  return(0);
 }
void adress_book:: display(int recno)
 {
  setcolor(4);
  sprintf(msg," %d",recno+1);
  outtextxy(465,55,msg);
  settextstyle(1,0,1);
  sprintf(msg,"  %s",name);
  outtextxy(225,125,msg);
  if(!simpleview)
  {
   sprintf(msg,"  %s",home);
   outtextxy(225,155,msg);
   sprintf(msg,"  %s",post);
   outtextxy(225,185,msg);
   sprintf(msg,"  %s",way);
   outtextxy(225,215,msg);
   sprintf(msg,"  %s",dist);
   outtextxy(225,245,msg);
  }
   sprintf(msg,"  %s",phn1);
   outtextxy(225,305,msg);
   sprintf(msg,"  %s",phn2);
    outtextxy(225,335,msg);
 if(!simpleview)
  {
   sprintf(msg,"  %s",note);
   outtextxy(225,395,msg);
  }
 }

void adress_book::get_or_modify_data()
 {
  char temp_store[25];
  cout<<"\n\n\n\t\tPress\"*\"To Store Same Or Default  Data";
  cout<<"\n";
  cout<<"\n\t\t\tName         : ";
  cin>>temp_store;
  if((strcmp("*",temp_store)))
   {
    strcpy(name,temp_store);
   }
  cout<<"\n\t\t\tHome         : ";
  cin>>temp_store;
  if((strcmp("*",temp_store)))
   {
    strcpy(home,temp_store);
   }
  cout<<"\n\t\t\tPost         : ";
  cin>>temp_store;
  if((strcmp("*",temp_store)))
   {
    strcpy(post,temp_store);
   }
  cout<<"\n\t\t\tWay          : ";
  cin>>temp_store;
  if((strcmp("*",temp_store)))
   {
    strcpy(way,temp_store);
   }
  cout<<"\n\t\t\tDistrict     : ";
  cin>>temp_store;
  if((strcmp("*",temp_store)))
   {
    strcpy(dist,temp_store);
   }
  cout<<"\n\t\t\tPhN1         : ";
  cin>>temp_store;
  if((strcmp("*",temp_store)))
   {
    strcpy(phn1,temp_store);
   }
  cout<<"\n\t\t\tPhN2         : ";
  cin>>temp_store;
  if((strcmp("*",temp_store)))
   {
    strcpy(phn2,temp_store);
   }
  cout<<"\n\t\t\tAny Note     : ";
  cin>>temp_store;
  if((strcmp("*",temp_store)))
   {
    strcpy(note,temp_store);
   }


 }

void adress_book:: mod_data()
 {
  cout<<"\n\n\t\t\tName         : ";
  cout<<name;
  cout<<"\n\n\t\t\tHome         : ";
  cout<<home;
  cout<<"\n\n\t\t\tPost         : ";
  cout<<post;
  cout<<"\n\n\t\t\tWay          : ";
  cout<< way;
  cout<<"\n\n\t\t\tDistrict     : ";
  cout<<dist;
  cout<<"\n\n\t\t\tPhN1         : ";
  cout<<phn1;
  cout<<"\n\n\t\t\tPhN2         : ";
  cout<<phn2;
  cout<<"\n\n\t\t\tAny Note     : ";
  cout<<note<<endl<<endl;
  cout<<"\t\t\t";

 }

/*---------------------------------------------------------------------------*/

adress_book PH1,PH2;
void initilizeGB()
 {
  AM.Xx=0;
  AM.Yy=0;
  AM.bptnumber=0;
  TAM.bptnumber=0;
 }

/*---------------------------------------------------------------------------*/

void find_what(int &recno,int Qus)
 {
  if(!Qus)
   {
    hideMouse();
    stanterdScreen(50,1,9);
    cout<<"\n\n\n";
   }
  if(!Qus)
   {
    cout<<"\n\t\t\tRecord No    :: ";
    cin>>recno;
   }
  else
   {
    recno++;
   }
  if((recno<1)||(recno>total()))
   {
    if(Qus)
     {
      cout<<"\n\n\t\t\tNo Such Entry...!";
     }
    else
     {
      cout<<"\n\n\n\t\t\tInvalid Record Number..!";
     }
    getch();
    recno=-1;
    screenMain();
    showMouse();
    page1();
   }
  else
   {
    recno--;
    finout.seekg(recno*sizeof(adress_book),ios::beg);
    finout.read((char*)&PH1,sizeof(adress_book));
    PH1.mod_data();
    cout<<"\n\t\t\tPress Any Key To Go Default Data Book View\t";
    getch();
    screenMain();
    showMouse();
    page1();
    recno--;
    moveDataRight(recno);
   }

 }

void serch_phno(int&recno)
 {
  hideMouse();
  stanterdScreen(50,1,9);
  cout<<"\n\n\n\n\t\t\tEnter Phone Number    : ";
  char temp[25];
  int flag=OFF;
  cin>>temp;
  for(int i=0;i<recno;i++)
   {
    finout.seekg(i*sizeof(adress_book),ios::beg);
    finout.read((char*)&PH1,sizeof(adress_book));
    if(0==strcmp(PH1.phn1,temp))
     {
      flag=ON;
      recno=i;
      break;
     }
   else if(0==strcmp(PH1.phn2,temp))
    {
     flag=ON;
     recno=i;
     break;
    }
   else
    {
     continue;
    }
   }
  if(!flag)
   {
    recno=-1;
   }
  find_what(recno,ON);
 }

void serch_name(int &recno)
 {
  hideMouse();
  stanterdScreen(50,1,9);
  cout<<"\n\n\n\n\t\t\tEnter Name For Serch  : ";
  char temp[25];
  int i;
  int flag=OFF;
  cin>>temp;
  for(i=0;i<strlen(temp);i++)
   {
    temp[i]=toupper(temp[i]);
   }

  for(i=0;i<recno;i++)
   {
    finout.seekg(i*sizeof(adress_book),ios::beg);
    finout.read((char*)&PH1,sizeof(adress_book));
    if(0==strcmp(PH1.name,temp))
     {
      flag=ON;
      recno=i;
      break;
     }
   else
    {
     continue;
    }
   }
  if(!flag)
   {
    recno=-1;
   }
  find_what(recno,ON);
 }


long int total()
 {
  long int startp,endp,totalsize,totalrecords;
  finout.seekp(0,ios::beg);
  startp=finout.tellp();
  finout.seekp(0,ios::end);
  endp=finout.tellp();
  totalsize=endp-startp;
  totalrecords=(totalsize/sizeof(adress_book));
  return(totalrecords);
 }

void c_ret(int x1,int y1,int x2,int y2,int cr)
 {
  int i;
  setcolor(cr);
  for(i=x2-2;i>x1-1;i--)
   {
    line(i,y1+2,i,y2-2);
   }
 }


void paralalogram(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int cr)
 {
  int i,j;
  setcolor(cr);
  if((x1<x2)&&(y1>y2)&&(x3<x4)&&(y3>y4))
  for(i=y1,j=y2;i<y3;i+=2,j+=2)
   {
    line(x1,i,x2,j);
   }
  else if((x1<x2)&&(y1<y3)&&(x3<=x1)&&(x2>x4))
  for(i=x1,j=x3;i<x2;i+=2,j+=2)
   {
    line(i,y1,j,y3);
   }

  else if((x1<x2)&&(y1<y2)&&(x3<x4)&&(y3<y4))
  for(i=y1,j=y2;i<y3;i+=2,j+=2)
   {
    line(x1,i,x2,j);
   }

 }


void forLMouse()
 {
  setcolor(1);
  rectangle(0,5,60,475);
  setcolor(Dif.mct);
  settextstyle(0,0,0);
  outtextxy(5,25,"Insert");
  line(5,35,10,35);
  fillRectangle(3,8,57,50,Dif.mcb1,Dif.mct);
  outtextxy(5,75,"Delete");
  line(5,35+51,10,35+51);
  fillRectangle(3,53,57,100,Dif.mcb2,Dif.mct);
  outtextxy(5,125," Edit");
  line(12,35+101,18,35+101);
  fillRectangle(3,103,57,150,Dif.mcb1,Dif.mct);
  outtextxy(5,175," View");
  line(13,35+151,19,35+151);
  fillRectangle(3,153,57,200,Dif.mcb2,Dif.mct);
  outtextxy(5,225,"  >>");
  fillRectangle(3,203,57,250,Dif.mcb1,Dif.mct);
  outtextxy(5,275,"  <<");
  fillRectangle(3,253,57,300,Dif.mcb2,Dif.mct);
  outtextxy(5,325,"#G007#");
  line(13,35+301,19,35+301);
  fillRectangle(3,303,57,350,Dif.mcb1,Dif.mct);
  outtextxy(5,375," GPTC");
  line(28,35+351,35,35+351);
  fillRectangle(3,353,57,400,Dif.mcb2,Dif.mct);
  outtextxy(5,435," Exit");
  fillRectangle(3,403,57,470,Dif.mcb1,Dif.mct);
  setcolor(15);
 }
void forRMouse()
 {
  setcolor(1);
  rectangle(585,5,635,475);
  setcolor(Dif.mct);
  settextstyle(0,0,0);
  outtextxy(592,25,"Home");
  fillRectangle(588,8,632,50,Dif.mcb1,Dif.mct);
  outtextxy(592,75,"End.!");
  fillRectangle(588,53,632,100,Dif.mcb2,Dif.mct);
  outtextxy(592,125,"Find");
  line(592,35+101,598,35+101);
  fillRectangle(588,103,632,150,Dif.mcb1,Dif.mct);
  outtextxy(587,175," PhNo");
  line(611,35+151,617,35+151);
  fillRectangle(588,153,632,200,Dif.mcb2,Dif.mct);
  outtextxy(592,225,"Name");
  line(592,35+201,598,35+201);
  fillRectangle(588,203,632,250,Dif.mcb1,Dif.mct);
  outtextxy(592,275,"About");
  line(592,35+251,598,35+251);
  fillRectangle(588,253,632,300,Dif.mcb2,Dif.mct);
  outtextxy(592,325,"Paint");
  line(591,35+301,598,35+301);
  fillRectangle(588,303,632,350,Dif.mcb1,Dif.mct);
  outtextxy(595,375,"Help");
  line(595,35+351,601,35+351);
  fillRectangle(588,353,632,400,Dif.mcb2,Dif.mct);
  outtextxy(592,435," ESC");
  fillRectangle(588,403,632,470,Dif.mcb1,Dif.mct);
  setcolor(15);
 }
void reademe()
 {
  cleardevice();
  stanterdScreen(50,1,9);
  settextstyle(1,0,4);
  setcolor(15);
  outtextxy((getmaxx()-textwidth("Control Panel"))/2,50,"Control Panel");
  printf("\n\n\n\n\n\n\n");
  printf("   Add New Address         : Ctrl + I  ");
  printf("   Modify An Address       : Ctrl + M\n\n");
  printf("   Edit Current Address    : Ctrl + E  ");
  printf("   Familarize Control      : Ctrl + H\n\n");
  printf("   Find An Address         : Ctrl + F  ");
  printf("   Delete Current Address  : Press Del\n\n");
  printf("   Delete An Address       : Ctrl + D  ");
  printf("   About Program           : Ctrl + A\n\n");
  printf("   Change User View        : Ctrl + V  ");
  printf("   About Our College       : Ctrl + T\n\n");
  printf("   About Programers        : Ctrl + G  ");
  printf("   Refresh Mouse           : Alt  + F5\n\n");
  printf("   Go To Home Page         : Home Key  ");
  printf("   Go To Last Page         : End Key\n\n");
  printf("   Serch With Name         : Ctrl + N  ");
  printf("   Re Paint Address Book   : Ctrl + P\n\n");
  printf("   Serch With Phone Number : Alt  + N  ");
  printf("   Quit From Book          : Press ESC\n\n\n");
  line(315,125,315,375);
  printf("\t\t\tPress Any Key To Go Back.........!");
  getch();
 }
void aboutProgram()
 {
  hideMouse();
  stanterdScreen(50,11,0);
  setcolor(15);
  settextstyle(1,0,5);
  outtextxy(150,75,"Address Book.eXe");
  settextstyle(6,0,3);
  outtextxy(150,150,"Program To Store Address Of A Person");
  settextstyle(6,0,2);
  outtextxy(150,200,"Platforms      :  C & C++");
  outtextxy(150,225,"Year           :  2009-10");
  outtextxy(150,275,"Jithin Kumar.P");
  outtextxy(150,300,"Aiswarya.O");
  outtextxy(150,325,"Ranjith Amarnath.P");
  outtextxy(150,350,"Rashmi.P.E");
  outtextxy(150,375,"Ummuhabeeba.P");
  settextstyle(6,1,2);
  outtextxy(450,225,"G.P.T.C Thirurangadi");
  getch();
  setbkcolor(0);
  cleardevice();
  showMouse();
 }
void aboutprogramersG()
 {
  hideMouse();
  stanterdScreen(50,11,0);
  settextstyle(7,0,3);
  setcolor(12);
  outtextxy(100,55,"Programer");
  outtextxy(375,55,"Phone Number");
  settextstyle(1,0,3);
  setcolor(15);
  outtextxy(100,110,"Jithin Kumar.P");
  outtextxy(375,110,"9048771701");
  outtextxy(100,160,"Aiswarya.O");
  outtextxy(375,160,"9446729948");
  outtextxy(100,210,"Ranjith Amarnath.P");
  outtextxy(375,210,"9037336044");
  outtextxy(100,260,"Rashmi P.E");
  outtextxy(375,260,"9288199033");
  outtextxy(100,310,"Ummuhabeeba.P");
  outtextxy(375,310,"04942461499");
  setcolor(12);
  outtextxy(100,375,"Press Any Key To See Next Page ... !");
  getch();
  setbkcolor(0);
  cleardevice();
  stanterdScreen(50,11,0);
  settextstyle(1,0,4);
  setcolor(12);
  outtextxy((getmaxx()/2-textwidth("Our Teachers")/2),55,"Our Teachers");
  settextstyle(1,0,3);
  setcolor(15);
  outtextxy((getmaxx()/2-textwidth("Mis Sreeja")/2),110,"Mis Sreeja");
  outtextxy((getmaxx()/2-textwidth("Mr Jamal Kutty")/2),160,"Mr Jamal Kutty");
  outtextxy((getmaxx()/2-textwidth("Mis Padhma")/2),210,"Mis Padhma");
  outtextxy((getmaxx()/2-textwidth("Mis Nitha")/2),260,"Mis Nitha");
  outtextxy((getmaxx()/2-textwidth("Mr Jaleel")/2),310,"Mr Jaleel");
  setcolor(12);
  outtextxy(175,375,"Press Any Key To Exit ... !");
  setcolor(1);
  getch();


  showMouse();
  setbkcolor(0);
  cleardevice();
 }
void aboutGPTC()
 {
  hideMouse();
  stanterdScreen(50,11,0);
  rectangle(40,60,600,420);
  rectangle(45,65,595,415);

  setcolor(6);
  settextstyle(1,0,4);
  outtextxy(75,100,"Government Polytechnic College");
  outtextxy(225,150,"Thirurangadi");
  outtextxy(150,200,"Chelari,Velimukku.P.O");
  outtextxy(150,250,"Malappuram -676317");
  outtextxy(175,300,"Ph : 04942401136");
  showMouse();
  getch();
  setbkcolor(0);
  cleardevice();
 }
void page1()
 {
  forLMouse();
  forRMouse();
  rectangle(200,50,525,450);
  c_ret(200,50,525,450,Dif.pgb);
  paralalogram(225,25,550,25,200,50,525,450,Dif.pgs);
  paralalogram(525,50,550,25,500,450,525,425,Dif.pgs);
  settextstyle(1,0,5);
  setcolor(Dif.pgt);
  sprintf(msg,"Address Book");
  outtextxy(225,150,msg);
  setcolor(11);
  circle(350,275,50);
  circle(350,275,47);
  circle(350,275,10);
  circle(350,275,5);
  setcolor(15);
  sprintf(msg,"Project By : CT_S4 2010");
  settextstyle(2,0,5);
  outtextxy(325,400,msg);
  sprintf(msg,"G.P.T.C.Thiurangadi,Chelari");
  outtextxy(325,425,msg);
  paralalogram(100,25,200,50,50,425,200,475,0);
 }


void page3()
 {
  int i;
  rectangle(200,50,525,450);
  c_ret(200,50,525,450,7);
  setcolor(9);
  for(i=55;i<470;i+=30)
   {
    line(205,i,520,i);
   }
  paralalogram(100,25,200,50,50,425,200,475,7);
 }

void lastpage()
 {
  page3();
  settextstyle(1,0,3);
  setcolor(11);
  outtextxy((getmaxx()-textwidth("No Data"))/2+25,200,"No Data");
  sprintf(msg,"Total Records=%ld",total());
  outtextxy((getmaxx()-textwidth(msg))/2+25,265,msg);
 }

void errorpage()
 {
  stanterdScreen(50,6,0);
  setMouseCurserPosition(50,50);
  setcolor(4);
  settextstyle(1,0,3);
  outtextxy(275,175,"ERROR");
  outtextxy(190,225,"BOOK CANOT BE OPEN");
  outtextxy(265,275,"ABORTED");
  getch();
  finout.close();
  closegraph();
  exit(0);
 }


void sortfile ( adress_book &PH1,adress_book &PH2)
 {
   int i,j;
   for(i=0;i<total();i++)
    {
     for(j=i+1;j<total();j++)
      {
       finout.seekg(i*sizeof(adress_book),ios::beg);
       finout.read((char*)&PH1,sizeof(adress_book));
       finout.seekg(j*sizeof(adress_book),ios::beg);
       finout.read((char*)&PH2,sizeof(adress_book));

       if(1==PH1.check(PH2))
	{
	 finout.seekp(i*sizeof(adress_book),ios::beg);
	 finout.write((char*)&PH2,sizeof(adress_book));

	 finout.seekp(j*sizeof(adress_book),ios::beg);
	 finout.write((char*)&PH1,sizeof(adress_book));
	}
      }
    }
 }

int check_integrity( adress_book &PH1,adress_book &PH2,int Exp)
 {
   int i;
   for(i=0;i<total();i++)
    {
     if(i==Exp)
      {
       continue;
      }
     finout.seekg(i*sizeof(adress_book),ios::beg);
     finout.read((char*)&PH2,sizeof(adress_book));
     if(0==(strcmp(PH1.phn1,PH2.phn1)))
      {
       return(i+1);
      }
    }
  return(0);
 }


int moveBackword(int &recno)
 {
  recno--;
  return(recno);
 }

void terminate()
 {
   finout.close();
   ftempinout.close();
   unlink("C:\\MISION\\V_DATA\\Ad_temp");
   unlink("C:\\MISION\\HELP\\DSKMENU.EXE");
   unlink("C:\\MISION\\HELP\\FINALIZE.EXE");
   closegraph();
   exit(0);
 }

int moveForword(int &recno)
 {
  recno++;
  return(recno);
 }


void insertData(int &recno,long int &setporg)
 {
  hideMouse();
  stanterdScreen(50,1,9);
  PH1.get_or_modify_data();
  recno=check_integrity(PH1,PH2,-1);
  if(!recno)
   {
    finout.seekp(setporg*sizeof(adress_book),ios::beg);
    finout.write((char*)&PH1,sizeof(adress_book));
    sortfile (PH1,PH2);
    setporg++;
    screenMain();
    showMouse();
    recno=-1;
    page1();
   }
  else
   {
    screenMain();
    stanterdScreen(50,1,0);
    settextstyle(1,0,4);
    setcolor(12);
    outtextxy(150,125,"Member All Redy Exist");
    sprintf(msg,"Record Number  ::  %d",recno);
    outtextxy(150,200,msg);
    outtextxy(225,275,"Aborted ... !");
    settextstyle(1,0,3);
    setcolor(11);
    outtextxy(75,350,"Press Any Key To See The Existing Record . !");
    getch();
    cleardevice();
    recno-=2;
    page1();
    moveDataRight(recno);
    showMouse();
   }
 }
int editData(int &recno,int Qus)
 {
  char Tch;
   if(!Qus)
   {
    if((!(recno<total()))||(recno<0))
     {
      return(0);
     }
   }
  hideMouse();
  stanterdScreen(50,1,9);
  cout<<"\n\n\n\n\t\t\tRecord No    :: ";
  if(!Qus)
   {
    cout<<recno+1<<endl;
   }
  else
   {
    cin>>recno;
    recno--;
   }
  if((!(recno<total()))||(recno<0))
   {
    cout<<"\n\t\t\tNo Such Data";
    getch();
    screenMain();
    showMouse();
    recno=-1;
    page1();
    return(0);
   }
  finout.seekg(recno*sizeof(adress_book),ios::beg);
  finout.read((char*)&PH1,sizeof(adress_book));
  cout<<"\n\t\t\tMODIFY THIS  [Y\\N]";
  PH1.mod_data();
  Tch=getch();
  if((Tch=='Y')||(Tch=='y'))
   {
    screenMain();
    stanterdScreen(50,1,9);
    PH1.get_or_modify_data();
    Qus=check_integrity(PH1,PH2,recno);
    if(0!=Qus)
     {
      screenMain();
      stanterdScreen(50,1,0);
      settextstyle(1,0,4);
      setcolor(12);
      outtextxy(150,125,"Member All Redy Exist");
      sprintf(msg,"Record Number  ::  %d",Qus);
      outtextxy(150,200,msg);
      outtextxy(225,275,"Aborted ... !");
      settextstyle(1,0,3);
      setcolor(11);
      outtextxy(75,350,"Press Any Key To See The Existing Record . !");
      getch();
      cleardevice();
      recno=Qus-2;
      page1();
      moveDataRight(recno);
      showMouse();
      return(0);
     }
    finout.seekp(recno*sizeof(adress_book),ios::beg);
    finout.write((char*)&PH1,sizeof(adress_book));
    recno=-1;
   }
  else
   {
    cout<<"\n\t\t\tSerch Again";
    recno=-1;
    getch();
   }
  screenMain();
  showMouse();
  recno=-1;
  page1();
  return(0);
 }
int deleteData(int&recno,long int &setporg,int Qus)
 {
  char Tch;
  if(!Qus)
   {
    if((!(recno<total()))||(recno<0))
     {
      return(0);
     }
    }
   hideMouse();
   stanterdScreen(50,1,9);
   cout<<"\n\n\n\n\t\t\tRecord No    :: ";
   if(!Qus)
    {
     cout<<recno+1<<endl;
    }
   else
    {
     cin>>recno;
     recno--;
    }
   if((!(recno<total()))||(recno<0))
     {
      cout<<"\n\t\t\tNo Such Data";
      getch();
      screenMain();
      showMouse();
      recno=-1;
      page1();
      return(0);
     }
   finout.seekg(recno*sizeof(adress_book),ios::beg);
   finout.read((char*)&PH1,sizeof(adress_book));
   cout<<"\n\t\t\tDELETE THIS  [Y\\N]";
   PH1.mod_data();
   Tch=getch();
   if((Tch=='Y')||(Tch=='y'))
    {
     for(int i=0,k=0;i<setporg;i++,k++)
      {
       finout.seekg(i*sizeof(adress_book),ios::beg);
       finout.read((char*)&PH1,sizeof(adress_book));
       if(i==recno)
	{
	 k--;
	 continue;
	}
       ftempinout.seekp(k*sizeof(adress_book),ios::beg);
       ftempinout.write((char*)&PH1,sizeof(adress_book));
      }
     setporg--;
     finout.close();
     finout.open("C:\\MISION\\V_DATA\\Ad_book",ios::in|ios::out|ios::trunc|ios::binary);
     for(i=0;i< setporg;i++)
      {
       ftempinout.seekg(i*sizeof(adress_book),ios::beg);
       ftempinout.read((char*)&PH1,sizeof(adress_book));
       finout.seekp(i*sizeof(adress_book),ios::beg);
       finout.write((char*)&PH1,sizeof(adress_book));
      }
     recno=-1;
    }
   else
    {
    cout<<"\n\t\t\tSerch Again";
    recno=-1;
    getch();
   }
  screenMain();
  showMouse();
  recno=-1;
  page1();
  return(0);
 }

int moveDataRight(int &recno)
 {
  recno=moveForword(recno);
  if(recno>=total())
   {
    recno=total();
    lastpage();
    return(0);
   }
  page3();
  finout.seekg(recno*sizeof(adress_book),ios::beg);
  finout.read((char*)&PH1,sizeof(adress_book));
  PH1.display(recno);
  return(0);
 }
int moveDataLeft(int &recno)
 {
  recno=moveBackword(recno);
  if((recno<0)||0==total())
   {
    recno=-1;
    page1();
    return(0);
   }
  page3();
  finout.seekg(recno*sizeof(adress_book),ios::beg);
  finout.read((char*)&PH1,sizeof(adress_book));
  PH1.display(recno);
  return(0);
 }

void changeView()
 {
  if(simpleview)
   {
    simpleview=OFF;
   }
  else
   {
    simpleview=ON;
   }
 }

int main()
 {
  int MR;
  int recno=-1;
  initilizeGB();
  screenMain();
  filldisplay();
  Dif=DF2;  //Default Display
  initMouse();
  showMouse();
  setMouseCurserPosition(75,150);
  page1();
  finout.open("C:\\MISION\\V_DATA\\Ad_book",ios::in|ios::out|ios::ate|ios::binary);
  ftempinout.open("C:\\MISION\\V_DATA\\Ad_temp",ios::in|ios::out|ios::trunc|ios::binary);
  long int setporg=total();
  if(!finout)
   {
    errorpage();
   }
  do
   {
    while(!kbhit())
     {
      AM=buttonPressed();
      if(((AM.Xx>53)&&(AM.Xx<588))||(AM.Xx==0)||(TAM.bptnumber>AM.bptnumber))
       {
	continue;
       }
      else if((AM.Yy<53)&&(AM.Xx<53))
       {
	insertData(recno,setporg);
       }
      else  if((AM.Yy<103)&&(AM.Xx<53))
       {
	deleteData(recno,setporg,OFF);
       }
      else  if((AM.Yy<153)&&(AM.Xx<53))
       {
	editData(recno,OFF);
       }
      else  if((AM.Yy<203)&&(AM.Xx<53))
       {
	if((recno==-1)||(!(recno<total())))
	 {
	  continue;
	 }
	changeView();
	moveBackword(recno);
	moveDataRight(recno);
       }
      else  if((AM.Yy<253)&&(AM.Xx<53))
       {
	if(recno>=total()-1)
	 {
	  continue;
	 }
	moveDataRight(recno);
       }
      else  if((AM.Yy<303)&&(AM.Xx<53))
       {
	if(recno<1)
	 {
	  continue;
	 }
	moveDataLeft(recno);
       }
      else  if((AM.Yy<353)&&(AM.Xx<53))
       {
	aboutprogramersG();
	recno=-1;
	page1();
       }
      else  if((AM.Yy<403)&&(AM.Xx<53))
       {
	aboutGPTC();
	recno=-1;
	page1();
       }
      else if((AM.Yy<53)&&(AM.Xx>588))
       {
	if(recno==-1)
	 {
	  continue;
	 }
	recno=-1;//Home Button
	page1();
       }
      else  if((AM.Yy<103)&&(AM.Xx>588))
       {
	recno=total(); //END Button
	lastpage();
       }
      else  if((AM.Yy<153)&&(AM.Xx>588))
       {
	find_what(recno,OFF);
       }
      else if((AM.Yy<203)&&(AM.Xx>588))
       {
	recno=total();
	serch_phno(recno);
       }
      else  if((AM.Yy<253)&&(AM.Xx>588))
       {
	recno=total();
	serch_name(recno);
       }
      else  if((AM.Yy<303)&&(AM.Xx>588))
       {
	aboutProgram();
	recno=-1;
	page1();
       }
      else  if((AM.Yy<353)&&(AM.Xx>588))
       {
	if(recno<0)
	 {
	  page1();
	 }
	else
	 {
	  forLMouse();
	  forRMouse();//Paint
	  paralalogram(225,25,550,25,200,50,525,450,Dif.pgs);
	  paralalogram(525,50,550,25,500,450,525,425,Dif.pgs);
	  moveDataLeft(recno);
	  moveDataRight(recno);
	 }
       }
      else  if((AM.Yy<403)&&(AM.Xx>588))
       {
	hideMouse();
	reademe();
	recno=-1;
	screenMain();
	showMouse();
	page1();
       }

      else  if(AM.Yy>403)
       {
	terminate();
       }
      TAM.bptnumber=AM.bptnumber;
     };
    MR=getBiosKey();
    switch(MR)
     {
      case CTRL_PLUS_I:
       {
	insertData(recno,setporg);
	break;
       }
      case CTRL_PLUS_V:
       {
	if((recno<0)||(recno>=total()))
	 {
	  break;
	 }
	changeView();
	recno=moveBackword(recno);
       }
      case RIGHT_ARROW:
       {
	if(recno>=total())
	 {
	  continue;
	 }
	moveDataRight(recno);
	break;
       }
      case DEL:
       {
	deleteData(recno,setporg,OFF);
	break;
       }
      case LEFT_ARROW:
       {
	if(recno<0)
	 {
	  continue;
	 }
	moveDataLeft(recno);
	break;
       }
      case CTRL_PLUS_E:
       {
	editData(recno,OFF);
	break;
       }
      case CTRL_PLUS_H:
       {
	hideMouse();
	reademe();
	recno=-1;
	screenMain();
	showMouse();
	page1();
	break;
       }
      case CTRL_PLUS_D:
       {
	deleteData(recno,setporg,ON);
	break;
       }
      case CTRL_PLUS_M:
       {
	editData(recno,ON);
	break;
       }
      case HOME:
       {
	recno=-1;
	page1();
	break;
       }
      case END:
       {
	recno=total();
	lastpage();
	break;
       }
      case ALT_PLUS_F5:
       {
	screenMain();
	recno=-1;
	page1();
	initilizeGB();
	initMouse();
	showMouse();
	break;
       }
      case CTRL_PLUS_N:
       {
	recno=total();
	serch_name(recno);
	break;
       }
      case ALT_PLUS_N:
       {
	recno=total();
	serch_phno(recno);
	break;
       }
     case CTRL_PLUS_F:
      {
       find_what(recno,OFF);
       break;
      }
     case CTRL_PLUS_T:
      {
       aboutGPTC();
       recno=-1;
       page1();
       break;
      }
     case CTRL_PLUS_G:
      {
       aboutprogramersG();
       recno=-1;
       page1();
       break;
      }
     case CTRL_PLUS_P:
      {
       if(recno<0)
	{
	 page1();
	}
       else
	{
	 forLMouse();
	 forRMouse();//Paint
	 paralalogram(225,25,550,25,200,50,525,450,Dif.pgs);
	 paralalogram(525,50,550,25,500,450,525,425,Dif.pgs);
	 moveDataLeft(recno);
	 moveDataRight(recno);
	}
       break;
      }
     case CTRL_PLUS_A:
      {
       aboutProgram();
       recno=-1;
       page1();
       break;
      }
     case CTRL_PLUS_F1:
      {
       Dif=DF1;
       recno=-1;
       page1();
       break;
      }
     case CTRL_PLUS_F2:
      {
       Dif=DF2;
       recno=-1;
       page1();
       break;
      }
     case CTRL_PLUS_F3:
      {
       Dif=DF3;
       recno=-1;
       page1();
       break;
      }
     case CTRL_PLUS_F4:
      {
       Dif=DF4;
       recno=-1;
       page1();
       break;
      }
     case CTRL_PLUS_F5:
      {
       Dif=DF5;
       recno=-1;
       page1();
       break;
      }
     case CTRL_PLUS_F6:
      {
       Dif=DF6;
       recno=-1;
       page1();
       break;
      }
     case CTRL_PLUS_F7:
      {
       Dif=DF7;
       recno=-1;
       page1();
       break;
      }
      default:
       {
	break;
       }
     }
   }
   while(MR!=ESC);
  terminate();
  return(0);
 }

/*****************************************************************************/

/******************************************************************************/

/*-*-*-*-*-*-*-*-**-*-*-*-**-*-*-*Comleted*-*-*-*-*-*-*-*-**-*-*-*-**-*-*-*-*-*/

/*****************************************************************************/

/******************************************************************************/

