/*****************************************************************************/
/**********A Header File For Managing Mouse & Colors In Address Book**********/
/******************************************************************************/



/*****-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*****/

/*****---------------------------MOUSPLUS.H------------------------------*****/

/*****------------------Header file By :Aiswarya.O-----------------------*****/

/*****------------For Projects [G.P.T.C Thirurangadi CT2 S4]-------------*****/

/*****----------|+|+|+|+|+|+|Year : 2009-2010|+|+|+|+|+|+|+|-------------*****/

/*****-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*****/

/*****************************************************************************/

#include<stdio.h>

struct AtMouse
 {
  long int bptnumber;
  int Xx;
  int Yy;
 };


struct display
 {
  short pgb;
  short pgt;
  short pgs;
  short mcb1;
  short mcb2;
  short mct;
 };

/********************************Globel*****************************************/

display DF1,DF2,DF3,DF4,DF5,DF6,DF7,Dif;

/*******************************************************************************/

AtMouse buttonPressed()
 {
  union REGS inreg,outreg;
  AtMouse AM;
  inreg.x.ax=0x5;

  int86(0x33,&inreg,&outreg);

  AM.bptnumber=outreg.x.bx;
  AM.Xx=outreg.x.cx;
  AM.Yy=outreg.x.dx;
  return(AM);
 }

void filldisplay()
 {
  DF1.pgb=1;
  DF1.pgt=10;
  DF1.pgs=9;
  DF1.mcb1=1;
  DF1.mcb2=1;
  DF1.mct=10;

  DF2.pgb=1;
  DF2.pgt=4;
  DF2.pgs=9;
  DF2.mcb1=11;
  DF2.mcb2=9;
  DF2.mct=4;

  DF3.pgb=8;
  DF3.pgt=12;
  DF3.pgs=8;
  DF3.mcb1=8;
  DF3.mcb2=0;
  DF3.mct=4;

  DF4.pgb=6;
  DF4.pgt=10;
  DF4.pgs=6;
  DF4.mcb1=6;
  DF4.mcb2=8;
  DF4.mct=10;

  DF5.pgb=1;
  DF5.pgt=4;
  DF5.pgs=9;
  DF5.mcb1=9;
  DF5.mcb2=9;
  DF5.mct=12;

  DF6.pgb=4;
  DF6.pgt=10;
  DF6.pgs=6;
  DF6.mcb1=6;
  DF6.mcb2=0;
  DF6.mct=10;

  DF7.pgb=4;
  DF7.pgt=9;
  DF7.pgs=9;
  DF7.mcb1=9;
  DF7.mcb2=0;
  DF7.mct=4;
 }


/*****************************************************************************/