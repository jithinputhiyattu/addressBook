/******************************************************************************/
/*******************Creating Desktop Icon & Start Menu Folder*****************/
/******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<process.h>

#include<fstream.h>

#include"vision07.h"


#define Menufold      "C:\\Docume~1\\\Alluse~1\\Startm~1\\Programs\\VISION"
#define Desktop       "C:\\Docume~1\\Alluse~1\\Desktop\\Ad_Book.PIF"
#define StartMenu     "C:\\Docume~1\\\Alluse~1\\Startm~1\\Programs\\VISION\\Ad_Book.PIF"
#define StartMenuhtm  "C:\\Docume~1\\\Alluse~1\\Startm~1\\Programs\\VISION\\help.htm"


char msg1[50];
char msg2[50];

void Report(int c,char *msg1,char *msg2)
 {
  int i,k,l;
  int twidth1;
  int twidth2;
  int Y=getmaxy()/2;
  settextstyle(7,0,3);
  twidth1=textwidth(msg1);
  twidth2=textwidth(msg2);
  for(i=Y,k=((getmaxx()-twidth1)/2),l=((getmaxx()-twidth2)/2);i>50;i--)
   {
    if(kbhit())
     {
      getch();
      break;
     }
    setcolor(15);
    outtextxy(k,i,msg1);
    setcolor(12);
    line(k,i+33,k+twidth1-7,i+33);
    setcolor(c);
    outtextxy(l,i+35,msg2);
    delay(21);
    setcolor(9);
    outtextxy(k,i,msg1);
    line(k,i+33,k+twidth1-7,i+33);
    outtextxy(l,i+35,msg2);
   }
  }
void forMyCollege()
 {
  int i,k;
  int twidth1;
  settextstyle(7,0,3);
  setcolor(15);
  sprintf(msg1,"By Computer Students G.P.T.C.Thirurangadi");
  twidth1=textwidth(msg1);
  outtextxy(((getmaxx()-twidth1)/2),getmaxy()/2-25,msg1);
  setcolor(9);
  delay(2500);
  sprintf(msg1,"By Computer Students G.P.T.C.Thirurangadi");
  twidth1=textwidth(msg1);
  outtextxy(((getmaxx()-twidth1)/2),getmaxy()/2-25,msg1);
  setcolor(15);

 }
int main()
 {
  mkdir(Menufold);
  char sorcepath[100];
  int i;
  char Ch;
  fstream fin;
  fstream foutMenu;
  fstream foutDesk;
  screenMain();
  stanterdScreen(50,1,9);
  strcpy(sorcepath,"C:\\MISION\\HELP\\Ad_Book.PIF");

  fin.open("C:\\MISION\\VISION\\Ad_Book.PIF",ios::nocreate|ios::in);
  if(!fin)
   {
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tFirst Use INSTAL.EXE\n\n\n\n\n";
    getch();
    exit(0);
   }

  fin.close();

  fin.open(sorcepath,ios::nocreate|ios::in|ios::binary);
  if(fin)
   {
    foutDesk.open(Desktop,ios::out|ios::trunc|ios::binary);
    foutMenu.open(StartMenu,ios::out|ios::trunc|ios::binary);
   }
  else
   {
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tError In Process\n\n\t\t\t\tAborted !";
    getch();
    exit(0);
   }
  while(fin)
   {
    fin.get(Ch);
    foutDesk.put(Ch);
    foutMenu.put(Ch);
   }
  fin.close();
  foutDesk.close();
  foutMenu.close();
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tDesktop Shortcut Is Created\n\n\t\t\tFile Is Added To Start Menu \n\n\n\n";
  fin.open("C:\\MISION\\help\\help.htm",ios::nocreate|ios::in);
  foutMenu.open(StartMenuhtm,ios::out|ios::trunc|ios::binary);
  while(fin)
   {
    fin.get(Ch);
    foutMenu.put(Ch);
   };
  fin.close();
  foutMenu.close();
  stanterdScreen(50,1,9);
  forMyCollege();
  delay(250);
  Report(11,"Graphics&Header","dreamBlitzer");
  Report(11,"Mouse","CCoder");
  Report(11,"Data Management","MadCoder");
  Report(11,"File & Storage","Looxers");
  Report(11,"Desktop & Menu","dreamBlitzer");
  setcolor(11);
  sprintf(msg1,"Thank You");
  outtextxy(((getmaxx()-(textwidth(msg1)))/2),getmaxy()/2-50,msg1);
  initMouse();
  showMouse();
  setMouseCurserPosition(50,50);
  outtextxy(180,275,"Press Esc To Exit . . . !");
  do
   {
    i=getBiosKey();
   }
   while(i!=ESC);
  return(0);
 }

/****************************************************************************/