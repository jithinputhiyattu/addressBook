


/*****************************************************************************/

/*****-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*****/

/*****---------------------------VISION07.H------------------------------*****/

/*****----------------Header file By :Jithin kumar.p---------------------*****/

/*****------------For Projects [G.P.T.C Thirurangadi CT2 S4]-------------*****/

/*****----------|+|+|+|+|+|+|Year : 2009-2010|+|+|+|+|+|+|+|-------------*****/

/*****-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*****/

/*****************************************************************************/



#include<bios.h>
#include<dos.h>
#include<dir.h>
#include<ctype.h>
#include<string.h>
#include<graphics.h>


#define ON 1
#define OFF 0
#define TRUE 1
#define ALPHA 0
#define SYSTEM 1
#define FALSE 0


#define  F1    0x3b00
#define  F2    0x3c00
#define  F3    0x3d00
#define  F4    0x3e00
#define  F5    0x3f00
#define  F6    0x4000
#define  F7    0x4100
#define  F8    0x4200
#define  F9    0x4300
#define  F10   0x4400


#define  ALT_PLUS_F1  0x6800
#define  ALT_PLUS_F2  0x6900
#define  ALT_PLUS_F3  0x6a00
#define  ALT_PLUS_F4  0x6b00
#define  ALT_PLUS_F5  0x6c00
#define  ALT_PLUS_F6  0x6d00
#define  ALT_PLUS_F7  0x6e00
#define  ALT_PLUS_F8  0x6f00
#define  ALT_PLUS_F9  0x7000
#define  ALT_PLUS_F10  0x7100


#define  CTRL_PLUS_F1  0x5e00
#define  CTRL_PLUS_F2  0x5f00
#define  CTRL_PLUS_F3  0x6000
#define  CTRL_PLUS_F4  0x6100
#define  CTRL_PLUS_F5  0x6200
#define  CTRL_PLUS_F6  0x6300
#define  CTRL_PLUS_F7  0x6400
#define  CTRL_PLUS_F8  0x6500
#define  CTRL_PLUS_F9  0x6600
#define  CTRL_PLUS_F10  0x6700


#define  CTRL_PLUS_HOME  0x7700
#define  CTRL_PLUS_END  0x7500


#define  CTRL_PLUS_A  0x1e01
#define  CTRL_PLUS_B  0x3002
#define  CTRL_PLUS_C  0x2e03
#define  CTRL_PLUS_D  0x2004
#define  CTRL_PLUS_E  0x1205
#define  CTRL_PLUS_F  0x2106
#define  CTRL_PLUS_G  0x2207
#define  CTRL_PLUS_H  0x2308
#define  CTRL_PLUS_I  0x1709
#define  CTRL_PLUS_J  0x240a
#define  CTRL_PLUS_K  0x250b
#define  CTRL_PLUS_L  0x260c
#define  CTRL_PLUS_M  0x320d
#define  CTRL_PLUS_N  0x310e
#define  CTRL_PLUS_O  0x180f
#define  CTRL_PLUS_P  0x1910
#define  CTRL_PLUS_Q  0x1011
#define  CTRL_PLUS_R  0x1312
#define  CTRL_PLUS_S  0x1f13
#define  CTRL_PLUS_T  0x1414
#define  CTRL_PLUS_U  0x1615
#define  CTRL_PLUS_V  0x2f16
#define  CTRL_PLUS_W  0x1117
#define  CTRL_PLUS_X  0x2d18
#define  CTRL_PLUS_Y  0x1519
#define  CTRL_PLUS_Z  0x2c1a


#define  ALT_PLUS_A  0x1e00
#define  ALT_PLUS_B  0x3000
#define  ALT_PLUS_C  0x2e00
#define  ALT_PLUS_D  0x2000
#define  ALT_PLUS_E  0x1200
#define  ALT_PLUS_F  0x2100
#define  ALT_PLUS_G  0x2200
#define  ALT_PLUS_H  0x2300
#define  ALT_PLUS_I  0x1700
#define  ALT_PLUS_J  0x2400
#define  ALT_PLUS_K  0x2500
#define  ALT_PLUS_L  0x2600
#define  ALT_PLUS_M  0x3200
#define  ALT_PLUS_N  0x3100
#define  ALT_PLUS_O  0x1800
#define  ALT_PLUS_P  0x1900
#define  ALT_PLUS_Q  0x1000
#define  ALT_PLUS_R  0x1300
#define  ALT_PLUS_S  0x1f00
#define  ALT_PLUS_T  0x1400
#define  ALT_PLUS_U  0x1600
#define  ALT_PLUS_V  0x2f00
#define  ALT_PLUS_W  0x1100
#define  ALT_PLUS_X  0x2d00
#define  ALT_PLUS_Y  0x1500
#define  ALT_PLUS_Z  0x2c00

#define  ALT_PLUS_CTRL_PLUS_F5  0x6c00
#define  ALT_PLUS_CTRL_PLUS_F6  0x6d00
#define  ALT_PLUS_CTRL_PLUS_F7  0x6e00
#define  ALT_PLUS_CTRL_PLUS_F8  0x6f00
#define  ALT_PLUS_CTRL_PLUS_F9  0x7000
#define  ALT_PLUS_CTRL_PLUS_F10  0x7100



#define  SHIFT_PLUS_F1  0x5400
#define  SHIFT_PLUS_F2  0x5500
#define  SHIFT_PLUS_F3  0x5600
#define  SHIFT_PLUS_F4  0x5700
#define  SHIFT_PLUS_F5  0x5800
#define  SHIFT_PLUS_F6  0x5900
#define  SHIFT_PLUS_F7  0x5a00
#define  SHIFT_PLUS_F8  0x5b00
#define  SHIFT_PLUS_F9  0x5c00
#define  SHIFT_PLUS_F10  0x5d00


#define  END      0x4f00
#define  DEL      0x5300
#define  PG_UP    0x4900
#define  PG_DOWN  0x5100
#define  HOME     0x4700
#define  INS      0x5200
#define  ESC      0x11b
#define  ENTER    0x1c0d
#define  TAB      0xf09


#define   RIGHT_SHIFT  0x01
#define   LEFT_SHIFT   0x02


#define    UP_ARROW    0X4800
#define    DOWN_ARROW  0X5000
#define    RIGHT_ARROW 0X4d00
#define    LEFT_ARROW  0X4b00


#define LEFT_CTRL       0x0100
#define LEFT_ALT        0x0200
#define RIGHT_CTRL      0x0400
#define RIGHT_ALT       0x0800
#define SCR_LOCK        0x1000
#define NUM_LOCK        0x2000
#define CAPS_LOCK       0x4000
#define SYS_REQ         0x8000




#define PI        3.14159265358979323846


enum disk_and_drive
 {
  FLOPY=65,
  CD_DVD,
  C,
  D,
  E,
  F,
  G,
  H,
  I,
  J,
  K,
  L,
  M,
  N,
  O,
  P,
  Q,
  R,
  S,
  T,
  U,
  V,
  W,
  X,
  Y,
  Z
 };


char *mid(char*sorce,int start,int length)
 {
  int i=0;
  char *result="vision : error";
  if((start+length)<=strlen(sorce))
   {
    for(i=start;i<(start+length);i++)
     {
      result[i-start]=sorce[i];
     }
    result[i-start]='\0';
   }
  return(result);
 }


char *left(char*sorce,int length)
 {
  int i;
  char *result="vision : error";
  if(length<=strlen(sorce))
   {
    for(i=0;i<length;i++)
     {
      result[i]=sorce[i];
      result[i+1]='\0';
     }
   }
  return(result);
 }


char *right(char*sorce,int length)
 {
  int i;
  char *result="vision : error";
  if(length<=strlen(sorce))
   {
    for(i=(strlen(sorce)-length);i<strlen(sorce);i++)
     {
      result[i-(strlen(sorce)-length)]=sorce[i];
     }
    result[i-(strlen(sorce)-length)]='\0';
   }
  return(result);
 }


char*concatinate(char*firstone,char*secondone)
 {
  char*result="vision : error ";
  strcpy(result,firstone);
  strcat(result,secondone);
  return(result);
 }


void leftTrim(char * sorce,char *result)
 {
  int i,j;
  char *result="vision : error";
  for(i=0;((i<strlen(sorce))&&(sorce[i]==' '));i++);
  for(j=i;j<strlen(sorce);j++)
   {
    result[j-i]=sorce[j];
   }
  result[j-i]='\0';

 }


 void rightTrim(char *sorce,char *result)
 {
  int i;
  for(i=strlen(sorce)-1;sorce[i]==' ';i--);
  strcpy(result,sorce);
  result[i+1]='\0';
 }


char *trim(char *sorce)
 {
  int i;
  char *result="vision : error";
  strcpy(result,rightTrim(sorce));
  strcpy(result,leftTrim(result));
  return(result);
 }


char*removeFromLeft(char *sorce,char Ch)
 {
  int i;
  char *result="vision : error";
  for(i=0;(sorce[i]!='\0'&&sorce[i]!=Ch);i++);
  strcpy(result,sorce);
  result[i]='\0';
  return(result);
 }


char*removeFromRight(char *sorce,char Ch)
 {
  int i;
  char *result="vision : error";
  for(i=strlen(sorce);((i>0)&&sorce[i]!=Ch);i--);
  strcpy(result,sorce);
  result[i]='\0';
  return(result);
 }


void screenMain()
 {
  int gd,gm;
  gd=DETECT;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
 }


void lineNoteBook(int width,int bkcolor)
 {
  int i;
  cleardevice();
  setbkcolor(bkcolor);
  setcolor(RED);
  line(10,42,615,42);
  line(10,45,615,45);
  line(42,10,42,450);
  line(45,10,45,450);
  setcolor(BLUE);
  for(i=65;i<450;i+=width)
   {
   line(10,i,615,i);
   }
 }


void stanterdScreen(int borderwidth,int bordercolor,int bkcolor)
 {
  int i;
  cleardevice();
  setbkcolor(bkcolor%16);
  setcolor(bordercolor%16);
  for(i=0;i<650;i++)
   {
    circle(i,10,borderwidth/2);
   }
  for(i=0;i<650;i++)
   {
    circle(i,470,borderwidth/2);
   }
 }


void viewPort(int x1,int y1,int x2,int y2,int Clear)
 {
  if(Clear)
   {
    cleardevice();
   }
  setviewport(x1,y1,x2,y2,1);
  rectangle(0,0,(x2-x1),(y2-y1));
 }


void createImplisitTable(int colums,int rows,int Clear)
 {
  int totalColumWidth;
  int totalRowWidth;
  int i;
  struct viewporttype viewinfo;
  if(Clear)
   {
    cleardevice();
   }
  getviewsettings(&viewinfo);
  totalColumWidth=viewinfo.right-viewinfo.left;
  totalRowWidth=viewinfo.bottom-viewinfo.top;
  if(rows)
   {
    for(i=0;i<=rows;i++)
     {
      line(0,((totalRowWidth/rows)*i),viewinfo.right,((totalRowWidth/rows)*i));
     }
   }
  if(colums)
   {
      for(i=0;i<=colums;i++)
     {
      line(((totalColumWidth/colums)*i),0,((totalColumWidth/colums)*i),viewinfo.bottom);
     }
   }
 }


void createExplisitTable(int stX,int stY,int endX,int endY,int colums,int rows,int Clear)
 {
  int totalColumWidth;
  int totalRowWidth;
  int i;
  if(Clear)
   {
    cleardevice();
   }
  totalColumWidth=endX-stX;
  totalRowWidth=endY-stY;
  rectangle(stX,stY,endX,endY);
  if(rows)
   {
    for(i=0;i<=rows;i++)
     {
      line(stX,((totalRowWidth/rows)*i+stY),endX,((totalRowWidth/rows)*i+stY));
     }
   }
  if(colums)
   {
      for(i=0;i<=colums;i++)
     {
      line(((totalColumWidth/colums)*i+stX),stY,((totalColumWidth/colums)*i+stX),endY);
     }
   }
 }


int getBiosModifier()
 {
  int modifiers;
  while (bioskey(1) == 0);
  modifiers = bioskey(2);
  return(modifiers);
 }


int getBiosKey()
 {
  int key;
  key = bioskey(0);
  if(isalnum(key&0xff))
   {
    char alpha;
    alpha=key;
    return(alpha);
   }
  return(key);
 }


int getItCh()
 {
  int itch;
  itch=getch();
  if((itch>=48)&&(itch<=57))
   {
    itch-=48;
    return(itch);
   }
  return(itch);
 }


int getIntCh(char Ch)
 {
  Ch-=48;
  return(Ch);
 }


long int factorialOf(int number)
 {
  long int fact=1;
  while(number>0)
   {
    fact*=number;
    number--;
   };
  return(fact);
 }


char diskinChar(int disk)
 {
  char Chdisk;
  disk+=65;
  Chdisk=disk;
  return(Chdisk);
 }


int changeDriveAndDirectory(char *path)
 {
  int disks;
  char driveletter[5];
  strcpy(driveletter,left(path,1));
  driveletter[0]=toupper(driveletter[0]);
  disks=driveletter[0];
  disks-=65;
  setdisk(disks);
  disks=chdir(path);
  if(!disks)
   {
    return(0);
   }
  return(1);
 }


int deleteDirectory(char *path)
 {
   struct find_t ffblk;
   int done;
   char back[75];
   char name[25];
   strcpy(back,removeFromLeft(path,'\\'));
   strcpy(name,right(path,(strlen(path)-strlen(back)-1)));
   if(changeDriveAndDirectory(path))
    {
     return(1);
    }
   done = _dos_findfirst("*.*",_A_NORMAL,&ffblk);
   while (!done)
    {
     unlink(ffblk.name);
     done = _dos_findnext(&ffblk);
   }
  changeDriveAndDirectory(back);

  done=rmdir(name);
  return(done);
 }


float valueOf(char*text)
 {
  float intresult=0;
  float floatresult=0;
  float result=0;
  int MUX=10;
  double MUD=0.1;
  int flag=0,i;
  for(i=0;(i<strlen(text)&&(((text[i]>='0')&&(text[i]<='9'))||(text[i]=='.')));i++)
   {
    if(text[i]=='.')
     {
      flag=1;
      continue;
     }
    if(!flag)
     {
      intresult=(intresult*MUX)+getIntCh(text[i]);
     }
    else
     {
      floatresult+=(getIntCh(text[i])*MUD);
      MUD=MUD/10;
     }
   }
  result=intresult+floatresult;
  return (result);
 }

void fillRectangle(int stx,int sty,int endx,int endy,int color,int avdcolor)
 {
  int i,j;
  for(i=stx;i<=endx;i++)
   {
    for(j=sty;j<=endy;j++)
     {
      if((avdcolor==getpixel(i,j)))
       {
	continue;
       }
      putpixel(i,j,color);
     }
   }

 }

int initMouse()
 {
  union REGS inreg,outreg;
  inreg.x.ax=0x0;
  int86(0x33,&inreg,&outreg);
  return(outreg.x.ax);
 }
void showMouse()
 {
  union REGS inreg,outreg;
  inreg.x.ax=0x1;
  int86(0x33,&inreg,&outreg);
 }
void hideMouse()
 {
  union REGS inreg,outreg;
  inreg.x.ax=0x2;
  int86(0x33,&inreg,&outreg);
 }
void setMouseCurserPosition(int x, int y)
 {
  union REGS inreg,outreg;
  inreg.x.ax=0x4;
  inreg.x.cx=x;
  inreg.x.dx=y;
  int86(0x33,&inreg,&outreg);
 }