#include<iostream.h>
#include<fstream.h>
#include<process.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iomanip.h>

///////////////////////////////////////////////////////////////////////////

struct player//structure change highscore
{
 char name[50];
int score;char password[10];
 };

////////////////////////////////////////////////////////////////////////////

class WORLD
{ public:
  char  name[2][11];
  int abc,t,speed,y;
  player a,st;

 WORLD()
 {abc=0;speed=40,y=-1;}

 void firstpage();
 void obj();
 void ds(int );
 void getup();
 void getup1();
 void wild();
 void WALKINGDEAD();
 void loadpage();
 void loadgame();
 void loading();
 void title();
 char startpage();
 void newgame();
 char gamemenu();
 void highscore();
 void options();
 void help();
 void quit();
 void won();
 void UPDATION(WORLD W);
 /*void disp()
 {cout<<' '<<st.name<<setw(14)<<st.score<<endl<<endl;}
   */

};

///////////////////////////////////////////////////////////////////

void WORLD::loadpage()
{clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"..\\bgi");

 cleardevice();
 setcolor(RED);
  for(int k=0;k<=100;k++)
   { setcolor(MAGENTA);
     arc(300,220,50+2*k,220+2*k,20);
     setcolor(BLUE);
     arc(300,220,170+k,60+k,25);
     setcolor(YELLOW);
     arc(300,220,40+3*k,150+3*k,30);
     setcolor(CYAN);
     arc(300,220,120+k,45+k,35);
     delay(20);
    }
}

///////////////////////////////////////////////////////////////////////

void WORLD::loading()
{ setfillstyle(1,WHITE);
  bar(10,419,10+119*5,420);

  setfillstyle(1,RED);
  settextstyle(7,HORIZ_DIR,1);
  outtextxy(530,420,"LOADING...");
  for(int i=0;i<120;i++)
   {
    delay(20);
    bar(10,419,10+i*5,420);
    }
}

////////////////////////////////////////////////////////////////////////

void WORLD::title()
{cleardevice();
 settextstyle(GOTHIC_FONT,0,5);
 setcolor(RED);
  for(int l=1;l<=200;l++);
   outtextxy(10,275,"MAYANK");
   setcolor(YELLOW);

  for(int m=1;m<=1000;m++);
   outtextxy(240,275,"PAVAN");
   setcolor(RED);

   outtextxy(420,275,"ARAVIND");

  for(int n=1;n<=1000;n++);
   loading();
}

////////////////////////////////////////////////////////////////////////

char WORLD::startpage()
{cleardevice();
 setbkcolor(RED);
 settextstyle(GOTHIC_FONT,0,5);
   char t[2];
 setcolor(WHITE);
   outtextxy(150,20,"ANDRO RUNNER");
 settextstyle(0,0,2);

    outtextxy(225,90,"A-->NEWGAME");
    outtextxy(225,160,"B-->LOADGAME");
    outtextxy(225,230,"C-->HIGHSCORE");
    outtextxy(225,295,"D-->HELP");
    outtextxy(225,360,"E-->EXIT");
    outtextxy(50,400,"Enter your choice:");
     t[1]='\0';
     t[0]=getch();
    outtextxy(370,400,t);
  getch();
 return t[0];
}

/////////////////////////////////////////////////////////////////

void WORLD::newgame()
{
 clrscr();
 int i,y=0;
 char t[2];

 cleardevice();
 setcolor(BLACK);
 setbkcolor(YELLOW);
 setcolor(RED);
 setfillstyle(7,BLUE);
 setcolor(RED);
 t[1]='\0';
 settextstyle(1,HORIZ_DIR,4);

  outtextxy(250,80,"LOGIN");
  settextstyle(11,HORIZ_DIR,2);
  setfillstyle(1,6);
  rectangle(357,190,475,205);//user name rectangle
  outtextxy(200,195,"USERNAME(10 chars):");
  outtextxy(200,240,"PASSWORD(6 chars) :");   //reenter nd to do
  rectangle(357,235,475,250);//password rectangle

     for(i=0;i<=10;i++)
     {name[0][i]=getch();
      t[0]=name[0][i];

       if(name[0][i]!=13)
       outtextxy(360+i*10,195,t);
       else
       break;
      }
  name[0][i]='\0';y++;
  strcpy(st.name,name[0]);
  st.score=0;
  for(i=0;i<6;i++)
  {st.password[i]=getch();

   if(st.password[i]!=13)
    outtextxy(360+i*10,240,"*");
   else
    break;
  }

st.password[i]='\0';

 int o=0;//for reenter password nxt line
 char rename[6];

do
{
 outtextxy(200,285+o*45,"RE-ENTER PASSWORD :");
 rectangle(357,280+o*45,475,295+o*45);
 for(i=0;i<6;i++)
 {
  rename[i]=getch();

   if(rename[i]!=13)
   outtextxy(360+i*10,285+o*45,"*");
   else
   break;
   } o++;
   rename[i]='\0';
}
while(!(st.password[0]==rename[0]&&st.password[1]==rename[1]&&st.password[2]==rename[2]&&st.password[3]==rename[3]&&st.password[4]==rename[4]&&st.password[5]==rename[5]));


getch();
loadpage();
}

////////////////////////////////////////////////////////////////

char WORLD::gamemenu()
{cleardevice();
 char z[2];
 z[1]='\0';
 setcolor(BLACK);
 setbkcolor(GREEN);
 setcolor(RED);
 setlinestyle(2,0,2);
 setcolor(BLUE);
 settextstyle(1,HORIZ_DIR,5);
 setcolor(YELLOW);
 outtextxy(230,30,"WELCOME");

 settextstyle(1,HORIZ_DIR,4);
  outtextxy(0,88,".................................................................................");

 setcolor(WHITE);
 outtextxy(140,140,"(a) THE VIKENDI");
 outtextxy(140,200,"(b) THE MIRAMAR");
 setcolor(LIGHTGRAY);
 settextstyle(1,HORIZ_DIR,2);
	setcolor(RED);
 outtextxy(20,400,"Enter your choice :");
 z[0]=getch();
 outtextxy(222,400,z);
getch();

 if (z[0]=='a')
{cleardevice();
 setcolor(WHITE);
 settextstyle(1,HORIZ_DIR,8);
  outtextxy(80,100,"THE");
  outtextxy(80,160,"VIKENDI");       getch();
  cleardevice();
  settextstyle(1,HORIZ_DIR,1);
  outtextxy(50,50,"STORY:");
  outtextxy(1,85,"A viral infection has attacked atlanta.People who get   ")  ;
  outtextxy(1,115,"infected are dying and coming back as dead people(walkers).");
  outtextxy(1,145, "Only U can stop the infection from spreading and save everybody. ");
  outtextxy(1,175,"play the game by tackling the obstacles(walkers) in your way and ");
  outtextxy(1,205,"reach the UNO sceince lab to inject the antidote to the virus and");
  outtextxy(1,235,"save the world  ");
  outtextxy(1,280,"RUN FAST AND WIN THE GAME TO THE SAVE THE WOLRD!!...all the best");
  getch();

 WALKINGDEAD();
}
  else if (z[0]=='b')
{ cleardevice();
  setcolor(WHITE);
  settextstyle(1,HORIZ_DIR,8);
  outtextxy(80,100,"THE MIRAMAR");
  getch();
   cleardevice();
  settextstyle(1,HORIZ_DIR,1);
  outtextxy(50,50,"STORY:");
  outtextxy(1,85,"you crash landed in another alien planet and your spaceship got   ")  ;
  outtextxy(1,115,"destroyed.The aliens are after you.To escape overcome the aliens and ");
  outtextxy(1,145, "reach the portal loacted at the end of the game.Pass through the ");
  outtextxy(1,175,"portal to reach earth safely. ");
  outtextxy(50,220,"ALL THE BEST");
  getch();
  closegraph();
  wild();
}

loadpage();

 cleardevice();
outtextxy(100,100,"do you want to continue?")   ;
outtextxy(100,200,"for main menu press x");
char h;
h=getch();
if(h=='x')
//R.highscore();
startpage();
}

//////////////////////////////////////////////////////////////////////////////

void WORLD::help()
{cleardevice();
 char u[2];
 int p[10]={5,5,635,5,635,470,5,470,5,5};
 setbkcolor(BLACK);
 setcolor(GREEN);
 drawpoly(5,p);
 setcolor(RED);
 settextstyle(1,HORIZ_DIR,3);
 outtextxy(250,30,"HELP");
 outtextxy(250,45,"----");
 outtextxy(240,250,"CONTROLS");
 outtextxy(240,265,"-------");
 outtextxy(140,300,"JUMP:");
 outtextxy(365,430,"a.PREVIOUS PAGE");
  setcolor(GREEN);
 outtextxy(50,85,"ANDRO RUNNER is an exciting arcade-style game featuring ");
 outtextxy(50,115,"you as the exceptional free runner who won't be held");
 outtextxy(50,145,"down by the system. Run, jump and try to  ");
 outtextxy(50,175,"survive. But, whatever ");
 outtextxy(50,205,"you do , YOU CAN'T WIN THIS GAME! ");
 outtextxy(193,300," SPACE BAR");
  u[1]='\0';
  u[0]=getch();
  outtextxy(570,430,u);
  getch();

 if(u[0]=='a')
 startpage();
}

////////////////////////////////////////////////////////////////////////////////////

void WORLD::quit()
{
  exit(0);
}

/////////////////////////////////////////////////////////////////////////////////////

void WORLD::getup()
{
 textcolor(BLACK);
 textbackground(15);
 clrscr();
 window(10,3,70,3);
 cprintf("Press X to go to main menu & Press Space to Jump");
 cout<<endl;
 window(62,2,80,3);
 cprintf("SCORE : ");
 window(1,25,80,25);
 for(int x=0;x<79;x++)
 cprintf("п");
 textcolor(0);
}

//////////////////////////////////////////////////////////////////////////////

void WORLD::ds(int jump=0)
{textcolor(GREEN);
 static int a=1;
  if(jump==0)
  t=0;
  else if(jump==2)
  t--;
  else
  t++;
  window(2,15-t,18,25);
  cprintf("                 ");
  cprintf("     ллпллпл     ");
  cprintf("     ллллллл     ");
  cprintf("     ллллллл     ");
  cprintf("     мллллпп     ");
  cprintf("  м  лллллммм    ");
  cprintf("  пппллллл  п    ");
  cprintf("     ллллл       ");
  if(jump==1 || jump==2)
  {
  cprintf("     лл пл       ");
  cprintf("     лм  лм      ");
  }
  else if(a==1)
  {
  cprintf("      лл пп      ");
  cprintf("       лм        ");
  a=2;
  }
  else if(a==2)
  {
  cprintf("     плм л       ");
  cprintf("         лм      ");
  a=1;
  }
  cprintf("                 ");
  delay(speed);
  }

/////////////////////////////////////////////////////////////////////////////////

 void WORLD::won()
{
int gdriver = DETECT,gmode;
int x,y,i;
  initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
  cleardevice();
  x=getmaxx()/2;
  y=getmaxy()/2;
  settextstyle(0,0,3);
  outtextxy(200,350," YOU WON! ")    ;

	outtextxy(350,450," press any key to continue");
	getch();
	 closegraph();

 }

/////////////////////////////////////////////////////////////////////////////////

void WORLD::obj()
{ static int x=0,scr=0;
  if(x==60 && t<4)
  { st.score+=scr;
    abc++;
    scr=0;
    speed=40;
    window(36,8,60,9);
    cprintf("Game Over");
    getch();
    window(36,8,60,9);
    cprintf("         ");
   }
    textcolor(RED);
    window(74-x,20,80-x,25);
    cprintf("  лллл ");
    cprintf("  лллл ");
    cprintf("  мллм ");
    cprintf("   лл  ");
    cprintf("  лппл " );
    x++;
     if(x==73)
    { x=0;
      scr++;
      window(70,2,80,3);
      cprintf("     ");
      window(70,2,80,3);
      cprintf("%d",scr);
      if(speed>20)
       speed-=2;
     }
 }

///////////////////////////////////////////////////////////////////////////////

void WORLD::WALKINGDEAD()
{ char ch;
  int i;
  cleardevice();
  closegraph();
  clrscr();
  getup();
  while(1){

	    while(!kbhit())
	    {
	      ds();
	      obj();

	    }
	    ch=getch();

	    if(ch==' ')

	    {
	      for(i=0;i<10;i++)
	      {
		ds(1);
		obj();
	      }
	      for(i=0;i<10;i++)
	      {
		ds(2);
		obj();
	      }

	     }

	     else if (ch=='x')
	     {
	       break;
	     }

	  }

}

//////////////////////////////////////////////////////////////////////

void WORLD::highscore()
{ clrscr();
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\bgi");
  cleardevice();

  int g,l,k=0,n;
  WORLD PLAY;WORLD S[20],G[100],A;
  setbkcolor(BLUE);
  textcolor(RED);

  cout<<"\n\n\t\t HIGHSCORE\n\n\n\n";
  cout<<setw(12)<<"PLAYER NAME"<<setw(12)<<"SCORE\n\n";

  ifstream fin("WORLD1INSERT.dat",ios::binary|ios::in);

  while(fin.read((char*)&A,sizeof(A)))
  {
    G[k++]=A;
  }

  fin.close();

  n=k;

  for(int i=0;i<n-1;i++)
  for(int j=0;j<n-1-i;j++)
     if(G[j].st.score<G[j+1].st.score)
     {
       PLAY=G[j];
       G[j]=G[j+1];
       G[j+1]=PLAY;
     }

  int ix=10;
  for(i =0;i<n;i++)
  {
    gotoxy(3,ix);
    cout<<G[i].st.name;
    gotoxy(20,ix);
    cout<<G[i].st.score;
    ix+=3;

  }

  ofstream f2("WORLD1INSERT.dat",ios::binary);

  for(i =0;i<n;i++)
  {
    f2.write((char*)&G[i],sizeof(G[i]));

  }

  f2.close();

  ifstream f3;                    WORLD R;
  f3.open("WORLD1INSERT.dat",ios::binary);
  i=0,j=8;

  f3.close();

  getch();
  closegraph();

}

//////////////////////////////////////////////////////////////////////

void WORLD::getup1()
{
  textcolor(GREEN);
  textbackground(YELLOW);

  clrscr();

  window(10,3,70,3);
  cprintf("Press X to go to main menu & Press Space to Jump");
  cout<<endl;
  window(62,2,80,3);
  cprintf("SCORE : ");
  window(1,25,80,25);

  for(int x=0;x<79;x++)
  cprintf("п");
  textcolor(0);

}

/////////////////////////////////////////////////////////////////////

void WORLD::wild()
{
  char ch;
  int i;
  getup1();
  while(1){
	    while(!kbhit())
	    {
	      ds();
	      obj();
	    }

	    ch=getch();

	    if(ch==' ')

	    {
	      for(i=0;i<10;i++)
	      {
		ds(1);
		obj();
	      }

	      for(i=0;i<10;i++)
	      {
		ds(2);
		obj();
	      }

	    }

	    else
	    if (ch=='x')
	    {
	      break;
	    }
	  }
}

/////////////////////////////////////////////////////////////////////

void loadplayer()
{
  char name[2][13];
  WORLD x;
  clrscr();

  int i,y=0;
  char t[2];

  cleardevice();

  setcolor(BLACK);
  setbkcolor(YELLOW);
  setcolor(RED);
  setfillstyle(7,BLUE);
  setcolor(RED);
  t[1]='\0';
  settextstyle(1,HORIZ_DIR,4);
  outtextxy(250,80,"LOGIN");
  settextstyle(11,HORIZ_DIR,2);
  setfillstyle(1,6);
  rectangle(357,190,475,205);//user name rectangle
  outtextxy(200,195,"USERNAME(10 chars):");
  outtextxy(200,240,"PASSWORD(6 chars) :");   //reenter nd to do
  rectangle(357,235,475,250);//password rectangle

  for(i=0;i<=10;i++)
  {
    name[0][i]=getch();
    t[0]=name[0][i];

    if(name[0][i]!=13)
    outtextxy(360+i*10,195,t);
    else
    break;
  }

  name[0][i]='\0';y++;
  strcpy(x.st.name,name[0]);
  x.st.score=0;

  for(i=0;i<6;i++)
  {
    x.st.password[i]=getch();
    if(x.st.password[i]!=13)
      outtextxy(360+i*10,240,"*");
    else
      break;
  }

  x.st.password[i]='\0';

  fstream  fin("WORLD1INSERT.dat",ios::binary|ios::in|ios::out);

  WORLD l;
  int flag=0;

  while(fin.read((char*)&l,sizeof(l)))
  {
    if(strcmpi(x.st.name,l.st.name)==0&&strcmp(x.st.password,l.st.password)==0)
      {
	flag++;
	l.WALKINGDEAD();

	fin.seekp((int)(-1*sizeof(x)),ios::cur);
	fin.write((char*)&l,sizeof(l));
      }
  }
  if(flag!=0)
  {
    clrscr();
    outtextxy(50,370,"player not found");
  }

  fin.close();
  l.highscore();

  }

////////////////////////////////////////////////////////////////////////////

void main()
{
  WORLD A;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\bgi");

  char m,n,z;

  A.loadpage();

  cleardevice();

  setcolor(WHITE);
  settextstyle(GOTHIC_FONT,0,5);
  outtextxy(170,200,"ANDRO RUNNER");

  delay(2500);

  A.loading();
  A.title();
  char charc;
  do{
	 m= A.startpage();

	 if(m=='a'||m=='A')
	 {
	   A.newgame();
	   z=A.gamemenu();

	   while(z=='y'||z=='Y')
	   {
	     A.newgame();
	     z= A.gamemenu();
	   }

	   ofstream fout("WORLD1INSERT.dat",ios::binary|ios::out|ios::app);
	   fout.write((char*)&A,sizeof(A));
	   fout.close();
	   A.highscore();
	   }
	   else
	   if(m=='c'||m=='C')
																																																{
	   A.highscore();
	   z='x';
	 }
	 else
	 if(m=='D'||m=='d')
	   A.help();
	 else
	 if(m=='e'||m=='E')
	   A.quit();

	 else if(m=='b'||m=='B')
	 {
	   WORLD E;int flag=0;
	   loadplayer();

	 }
    }while(z=='x');

  getch();
  closegraph();

}

///////////////////////////////////////////////////////////////////////
//////////////////***********************************//////////////////
///////////////////////////////////////////////////////////////////////