/*****************************************************************************/

/********** This Program Will Install Address Book In Your Computer ***********/

/*****************************************************************************/

#include <conio.h>
#include <stdio.h>
#include <process.h>
#include <fstream.h>

#include "vision07.h"

ifstream fin;
ofstream fout;
char sorcelist[500][100];

class documents
 {
  public:
  char filename[75];
  documents(char* disk,char *fname)
   {
    strcpy(filename,disk);
    strcat(filename,fname);
   }
 };

void initialSetup()
 {
  mkdir("C:\\MISION");
  mkdir("C:\\MISION\\SETTING");
  mkdir("C:\\MISION\\VISION");
  mkdir("C:\\MISION\\V_DATA");
  mkdir("C:\\MISION\\GRAPHICS");
  mkdir("C:\\MISION\\HELP");
 }


int listall()
 {
  struct ffblk ffblk;
  int done;
  int count=0;
  done = findfirst("*.*",&ffblk,0);
  while (!done)
   {
    strcpy(sorcelist[count],ffblk.ff_name);
    count++;
    done = findnext(&ffblk);
   }
  return(count);
 }

int startCoping(char*sorce,char*target)
 {
  char   ch;
  cout<<"\n\t\t\t"<<sorce<<endl;
  cout<<"\n\t\t\t"<<target<<"\n";
  fin.open(sorce,ios::in|ios::nocreate|ios::binary);
  if(!fin)
    {
     clrscr();
     cout<<"\n\n\n\n\n\n";
     textcolor(11);
     cprintf("\n\n\n                             Error In File Reading                                                      ");
     cprintf("\n\n   Read Help File Care fully\n\n                                                              Aborted...!");
     getch();
     exit(1);
    }
  fout.open(target,ios::out|ios::binary|ios::trunc);
   if(!fout)
    {
     cout<<"\n\t\t\tError In File Writing\n";
     getch();
     return(-1);
    }
  while(fin)
   {
    fin.get(ch);
    fout.put(ch);
   }
  fin.close();
  fout.close();
  return(1);
 }
void copyAll(char*sorcedir,char *targetdir)
 {
  int i=0;
  int tlen,count;
  char temptargetdir[100];
  char tempsorcedir[100];
  changeDriveAndDirectory(sorcedir);
  strcat(targetdir,"\\");
  strcpy(temptargetdir,targetdir);
  count=listall();
  tlen=strlen(targetdir);
  strcpy(temptargetdir,left(targetdir,tlen));
  strcat(sorcedir,"\\");
  strcpy(tempsorcedir,sorcedir);
  while(i<count)
   {
    strcpy(temptargetdir,concatinate(temptargetdir,sorcelist[i]));
    strcpy(sorcelist[i],concatinate(sorcedir,sorcelist[i]));
    startCoping(sorcelist[i],temptargetdir);
    strcpy(temptargetdir,left(targetdir,tlen));
    i++;
   };
 }
void Responce()
 {
  textmode(C80);

  textcolor(10);
  cprintf("\n\n\n\n\n\n\n\n\n\n                 This Will Install Address Book In Your Computer\n");
  textbackground(BLACK);
  textcolor(9);
  cprintf("\n                                               Press F7 To Continue\n\n");
  if(F7!=getBiosKey())
   {
    exit(0);
   }
  clrscr();

 }
int main(void)
  {
   clrscr();
   Responce();
   initialSetup();

   int disk=getdisk();
   char sorcedisk[5];

   sorcedisk[0]=diskinChar(disk);
   sorcedisk[1]=':';
   sorcedisk[2]='\\';
   sorcedisk[3]='\0';


   documents DSG(sorcedisk,"VISION\\GRAPHICS");
   documents DSS(sorcedisk,"VISION\\SETTING") ;
   documents DSD(sorcedisk,"VISION\\V_DATA") ;
   documents DSV(sorcedisk,"VISION\\VISION") ;
   documents DSH(sorcedisk,"VISION\\HELP") ;

   documents DTG("C:\\","MISION\\GRAPHICS");
   documents DTS("C:\\","MISION\\SETTING") ;
   documents DTD("C:\\","MISION\\V_DATA") ;
   documents DTV("C:\\","MISION\\VISION") ;
   documents DTH("C:\\","MISION\\HELP") ;

   copyAll(DSG.filename,DTG.filename);
   delay(25);
   copyAll(DSS.filename,DTS.filename);
   delay(25);
   copyAll(DSD.filename,DTD.filename);
   delay(25);
   copyAll(DSV.filename,DTV.filename);
   delay(25);
   copyAll(DSH.filename,DTH.filename);
   delay(25);
   changeDriveAndDirectory("C:\\MISION\\HELP");
   spawnle(P_OVERLAY,"FINALIZE.EXE", NULL,NULL);
   return(0);
  }

/****************************************************************************/