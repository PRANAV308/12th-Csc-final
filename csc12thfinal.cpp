#include<iostream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<alloc.h>
#include<dos.h>
#include<stdlib.h>
#include<fstream>
#include<graphics.h>
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ENTER 13
void loadscreen()
{
int style[][5]={{2,0,4,203,265},{2,0,4,370,230},{0,1,1,90,210},{1,1,1,320,200},{1,1,1,-4,200},{0,0,1,0,0},{2,0,4,203,198},{0,1,1,125,210},{2,0,1,145,240},{0,1,1,360,210},{1,1,1,280,200},{2,1,4,400,233},{2,0,2,90,202},{0,1,1,245,210},{2,0,5,0,0},{1,1,1,255,200},{0,0,1,16,269},{2,0,4,360,200},{1,1,1,185,200},{2,0,2,90,269},{0,0,1,0,0},{2,0,4,360,265}};
char *text[]={"L","O","A","D","I","N","G","N","I","D","A","O","L","N","I","D","A","O"};
int diagonal_text[][2]={{133,270},{136,260},{139,250},{142,240},{145,230},{148,220},{151,210},{156,220},{159,230},{162,240},{165,250},{168,260},{173,270},{300,213},{307,223},{310,233},{315,243},{320,253}};
unsigned int ms1=500,ms2=600;
int pos[16]={1,7};pos[9]=13;pos[10]=18;pos[15]=7;pos[16]=13;
setcolor(RED);
for(int repeat=0;repeat<3;++repeat)
{
	for(int l=0;l<22;++l)
	{
		settextstyle(style[l][0],style[l][1],style[l][2]);
		if((l==5)||(l==14)||(l==20))
		{
			if(l==5) outtextxy(133,270,"L");
			for(int j=pos[l-5];j<pos[l-4];++j)
				outtextxy(diagonal_text[j][0],diagonal_text[j][1],text[j]);
			delay(ms1);
			continue;
		}
		outtextxy(style[l][3],style[l][4],"LOADING");
		delay(ms1);
	}
	ms1=0;
	int x=420,y=230;
	settextstyle(DEFAULT_FONT,0,6);
	for(int i=0;i<4;++i)
	{
		delay(ms2);
		outtextxy(x,y,".");
		x+=40;
	}
	cleardevice();
	ms2-=100;
}
for(int i=0;i<15;++i)
{
	delay(100);
	setbkcolor(i);
}
setbkcolor(BLACK);
}
struct care
   {
char player[20];
long score;
int level;
}SS;

class CAR
    {
public:
int vel, cp, init, op1, op2, op3, level;
long score;
long lev_score[ 5 ];
char player[ 20 ];
CAR()
    {
level = 1;
vel = 1;
cp = 300;
init = 0;
    op1 = 0;
    op2 = -20;
    op3 = -40;
score = 0;
lev_score[ 0 ] = 10000;
lev_score[ 1 ] = 30000;
lev_score[ 2 ] = 60000;
lev_score[ 3 ] = 100000;
lev_score[ 4 ] = 150000;
    }
}car;




void page()
 {
clrscr();
char mch;
int h=DETECT,g;
initgraph(&h,&g,"c:\\turboc3\\bgi");
setfillstyle(SOLID_FILL,LIGHTBLUE);
line(15,10,625,10);
line(15,10,15,470);
line(15,470,625,470);
line(625,10,625,470);
settextstyle(10,0,10);
outtext(" P S P");
settextstyle(7,0,1);
outtextxy(70,250,"PRANAV");
outtextxy(300,250,"SAKTHI");
outtextxy(470,250,"PRAVEEN");
settextstyle(10,0,4);
outtextxy(190,350,"developers");
floodfill(262,26,WHITE);
delay(3000);
cleardevice();
line(15,10,625,10);
line(15,10,15,470);
line(15,470,625,470);
line(625,10,625,470);

setfillstyle(SOLID_FILL,RED);
	line(273,68,285,65);
	line(285,65,298,63);
	line(298,63,306,63);
	line(306,63,314,65);
	line(314,65,327,66);
	line(327,66,334,68);
	line(334,68,328,117);
	line(328,117,279,117);
	line(279,117,273,68);



//========PART 2===========/
line(283,124,324,124);
line(324,124,324,178);
line(324,178,314,180);
line(314,180,304,182);
line(304,182,294,180);
line(294,180,283,178);
line(283,178,283,124);



//==============PART 3=======================//
line(335,100,339,68);
line(339,68,347,71);
line(347,71,352,73);
line(352,73,357,75);
line(357,75,360,77);
line(360,77,363,79);
line(363,79,368,82);
line(368,82,371,85);
line(371,85,375,89);
line(375,89,378,93);
line(378,93,382,97);
line(382,97,385,100);
line(385,100,386,112);
line(386,112,388,122);
line(388,122,389,135);
line(389,135,389,146);
line(389,146,389,159);
line(389,159,392,162);
line(392,162,395,165);
line(395,165,397,170);
line(397,170,398,173);
line(398,173,399,182);
line(399,182,399,191);
line(399,191,400,197);
line(400,197,398,207);
line(398,207,396,215);
line(396,215,393,222);
line(393,222,391,229);
line(391,229,390,231);
line(390,231,388,240);
line(388,240,385,251);
line(385,251,383,260);
line(383,260,381,267);
line(381,267,379,274);
line(379,274,378,287);
line(378,287,378,301);
line(378,301,377,306);
line(377,306,376,311);
line(376,311,374,318);
line(374,318,371,325);
line(371,325,367,332);
line(367,332,363,336);
line(363,336,360,341);
line(360,341,346,363);
line(346,363,339,370);
line(339,370,321,359);
line(321,359,284,359);
line(284,359,263,370);
line(263,370,258,363);
line(258,363,247,347);
line(247,347,240,336);
line(240,336,232,324);
line(232,324,227,311);
line(227,311,226,292);
line(226,292,223,255);
line(223,255,218,245);
line(218,245,217,231);
line(217,231,211,217);
line(211,217,208,204);
line(208,204,207,184);
line(207,184,208,174);
line(208,174,211,165);
line(211,165,217,157);
line(217,157,220,100);
line(220,100,228,92);
line(228,92,233,86);
line(233,86,239,81);
line(239,81,245,77);
line(245,77,254,73);
line(254,73,267,67);
line(267,67,271,100);
line(271,100,250,105);
line(250,105,246,90);
line(246,90,246,106);
line(246,106,237,111);
line(237,111,231,114);
line(231,114,225,120);
line(225,120,226,136);
line(226,136,227,148);
line(227,148,227,164);
line(227,164,227,206);
line(227,206,225,215);
line(225,215,221,231);
line(221,231,222,244);
line(222,244,223,249);
line(223,249,254,310);
line(254,310,253,318);
line(253,318,252,325);
line(252,325,251,331);
line(251,331,263,355);
line(263,355,272,354);
line(272,354,280,351);
line(280,351,294,352);
line(294,352,296,351);
line(296,351,298,350);
line(298,350,299,349);
line(299,349,307,349);
line(307,349,312,352);
line(312,352,327,352);
line(327,352,334,355);
line(334,355,341,355);
line(341,355,355,329);
line(355,329,353,321);
line(353,321,353,316);
line(353,316,357,306);
line(357,306,365,291);
line(365,291,371,281);
line(371,281,375,275);
line(375,275,378,266);
line(378,266,382,254);
line(382,254,384,242);
line(384,242,386,233);
line(386,233,385,227);
line(385,227,383,218);
line(383,218,381,212);
line(381,212,380,209);
line(380,209,381,120);
line(381,120,376,116);
line(376,116,373,114);
line(373,114,367,111);
line(367,111,359,108);
line(359,108,358,92);
line(358,92,353,104);
line(353,104,335,100);
line(375,89,367,111);
line(396,215,381,212);
line(367,332,355,329);
line(228,92,231,114);
line(211,217,227,206);



//===PART 4====//
line(267,371,283,363);
line(283,363,320,363);
line(320,363,334,371);
line(334,371,327,372);
line(327,372,315,373);
line(315,373,291,373);
line(291,373,280,372);
line(280,372,267,371);



//=====PART 5====//
line(257,321,268,339);
line(268,339,276,329);
line(276,329,330,329);
line(330,329,338,339);
line(338,339,348,321);
line(348,321,349,330);
line(349,330,340,349);
line(340,349,338,351);
line(338,351,334,349);
line(334,349,328,346);
line(328,346,312,346);
line(312,346,311,345);
line(311,345,297,345);
line(297,345,296,347);
line(296,347,280,346);
line(280,346,269,350);
line(269,350,267,351);
line(267,351,256,332);
line(256,332,257,321);

//========PART 6======//
line(229,123,237,117);
line(237,117,242,115);
line(242,115,245,114);
line(245,114,251,112);
line(251,112,260,110);
line(260,110,266,107);
line(266,107,272,106);
line(272,106,279,182);
line(279,182,303,189);
char ssd;
line(303,189,326,182);
line(326,182,334,104);
line(334,104,346,109);
line(346,109,355,112);
line(355,112,361,115);
line(361,115,367,118);
line(367,118,373,121);
line(373,121,377,124);
line(377,124,375,133);
line(375,133,374,139);
line(374,139,373,145);
line(373,145,372,151);
line(372,151,371,159);
line(371,159,370,167);
line(370,167,369,185);
line(369,185,369,186);
line(369,186,368,207);
line(368,207,369,214);
line(369,214,370,220);
line(370,220,329,236);
line(329,236,323,238);
line(323,238,319,241);
line(319,241,313,242);
line(313,242,306,243);
line(306,243,295,243);
line(295,243,284,243);
line(284,243,277,236);
line(277,236,272,235);
line(272,235,236,221);
line(236,221,237,212);
line(237,212,238,204);
line(238,204,239,205);
line(239,205,240,196);
line(240,196,239,183);
line(239,183,238,174);
line(238,174,237,165);
line(237,165,236,161);
line(236,161,235,153);
line(235,153,233,146);
line(233,146,232,136);
line(232,136,230,128);
line(230,128,229,123);
line(279,182,236,221);
line(326,182,370,220);


//======PART 7=====//
line(235,225,277,242);
line(277,242,280,244);
line(280,244,278,248);
line(278,248,264,248);
line(264,248,248,242);
line(248,242,235,225);



//=====PART 8====//
line(370,223,324,245);
line(324,245,326,248);
line(326,248,337,247);
line(337,247,349,245);
line(349,245,355,243);
line(355,243,370,231);
line(370,231,370,223);



//===PART 9====//
line(234,232,244,247);
line(244,247,279,255);
line(279,255,283,249);
line(283,249,301,250);
line(301,250,318,249);
line(318,249,324,256);
line(324,256,361,249);
line(361,249,370,239);
line(370,239,370,251);
line(370,251,362,280);
line(362,280,331,324);
line(331,324,276,325);
line(276,325,245,281);
line(245,281,234,248);
line(234,248,234,232);
line(279,255,276,325);
line(324,256,331,324);
setbkcolor(YELLOW);
floodfill(262,26,WHITE);
setfillstyle(SOLID_FILL,BLUE);
line(15,400,625,400);
line(15,400,15,470);
line(625,470,625,400);
line(15,470,625,470);
floodfill(30,430,WHITE);

outtextxy(90,405,"PICKAXE PRESENTS");
delay(3000);
cleardevice();
setbkcolor(BLACK);
line(15,10,625,10);
line(15,10,15,470);
line(15,470,625,470);
line(625,10,625,470);

settextstyle(4,0,8);
setcolor(LIGHTBLUE);
outtextxy(100,100,"FORTNITE");
settextstyle(10,0,3);
setcolor(RED);
outtextxy(100,200,"DESTINY IS STILL ALIVE");
outtextxy(120,250,"THE END IS NEAR !!!");

delay(5000);

cleardevice();
loadscreen();
delay(90);
cleardevice();
line(15,10,625,10);
line(15,10,15,470);
line(15,470,625,470);
line(625,10,625,470);

settextstyle(7,0,4);
setcolor(RED);
outtextxy(200,50,"STORY LINE");
setcolor(YELLOW);
settextstyle(3,0,3);
outtextxy(50,150,"YOU ARE A F1 RACER");
outtextxy(50,200,"KEEP YOUR FANS HAPPY ");
outtextxy(50,250,"WHILE RACING ")   ;
settextstyle(3,0,3);
outtextxy(50,300,"YOU ARE NOW RACING A TRAFFIC ROAD ");
outtextxy(50,350,"RACE IN THE TRAFFIC AND WIN YOUR OBJECTIVE");
settextstyle(3,0,2);
outtextxy(50,400,"USE RESPECTIVE ARROW KEYS TO MOVE ON THE ROADS");
delay(6000);
cleardevice();
setcolor(RED);
outtextxy(270,150,"DONE BY");
outtextxy(270,200,"1.PRANAV");
outtextxy(270,250,"2.SAKTHI");
outtextxy(270,300,"3.PRAVEEN");
delay(1000);
cleardevice();

 }

int randx()
    {
int x = random( 56 * 8 );
if ( x < 22 * 8 )
    {
    x = x + ( 22 * 8 );
    }
return ( x );
    }

void saver()
    {
cleardevice();
setcolor( 4 );
settextstyle( 2, 0, 6 );
outtextxy( 10, 0, "Your score is" );
gotoxy( 20, 2 );
cout<<car.score;
SS.score=car.score;
outtextxy( 10, 40, "Enter your name to store :" );
gotoxy( 35, 4 );
gets(car.player );
strcpy(SS.player,car.player);
SS.level=car.level;
ofstream score( "saver.dat", ios::binary|ios::app );
score.write((char*)&SS,sizeof(SS) );
   // score <<car.score;
score.close();
    }
void right()
    {
if ( car.cp< 420 )
    {
car.cp += 10;
    }
    }

void left()
    {
if ( car.cp> 180 )
    {
car.cp -= 10;
    }
    }

void score_store()
    {
cleardevice();
setcolor( 4 );
settextstyle( 2, 0, 6 );
outtextxy( 10, 0, "Your score is" );

gotoxy( 20, 2 );
cout<<car.score;
SS.score=car.score;
outtextxy( 10, 40, "Enter your name to store :" );
gotoxy( 35, 4 );
gets(car.player );
strcpy(SS.player,car.player);
SS.level=car.level;
ofstream score( "score.dat", ios::binary|ios::app );
score.write((char*)&SS,sizeof(SS) );
   // score <<car.score;
score.close();

    }

void  disp_score()
    {

cleardevice();
setcolor( 5 );
settextstyle( 2, 0, 9 );
outtextxy( 200, 0, "SCORE CARD" );
settextstyle(2,0,4);
setcolor(6);
outtextxy(100,70,"NAME             SCORE            LEVEL");
settextstyle( 2, 0, 9 );
setcolor(8);
ifstream score( "score.dat",ios::binary );         //  itoa
gotoxy(1,5);
int xx=0,yy=90;
while(score.read((char*)&SS,sizeof(SS)))
    {xx=0;
cout<<"\n";
char k[20],j[20];
itoa(SS.score,k,10);
itoa(SS.level,j,10);
outtextxy(xx+100,yy,SS.player);
xx+=100;
outtextxy(xx+100,yy,k);
xx+=100;
outtextxy(xx+100,yy,j);
yy+=50;

//puts(SS.player);
//cout<<"\t"<<SS.score<<"\t"<<SS.level;
    }
score.close();
getch();
    }

void bgmove()
    {
if ( car.init> 5 )
    {
car.init = 1;
    }

else
    {
car.init += car.vel;
    }

setcolor( RED );
setfillstyle( SOLID_FILL, RED );
sector(car.cp + 20, 330, 0, 180, 20, 30 );
setfillstyle( SOLID_FILL, YELLOW );
bar3d(car.cp, 333, car.cp + 37, 360, 4, 4 );
sector(car.cp + 20, 362, 180, 360, 20, 10 );

for ( int i = car.init;i< 70;i += 5 )
    {
setcolor( GREEN );
setfillstyle( 9, GREEN );
bar( 16 * 8, i * 8, 20 * 8, ( i + 2 ) * 8 );
bar( 60 * 8, i * 8, 64 * 8, ( i + 2 ) * 8 );

    }


    }

void opp1( int x1 )
    {
if ( car.op1 < 600 )
    {
    car.op1 += 10;
setfillstyle( 1, RED );
    bar3d( x1, car.op1, x1 + 30, car.op1 + 30, 2, 3 );
    }

else
    {
    car.op1 = 0;
    }

      }

void opp2( int x2 )
    {
if ( car.op2 < 600 )
    {
    car.op2 += 10;
setfillstyle( 1, YELLOW );
    bar3d( x2, car.op2, x2 + 30, car.op2 + 30, 2, 3 );
    }

else
    {
    car.op2 = 0;
    }

	}

void opp3( int x3 )
    {
if ( car.op3 < 600 )
    {
    car.op3 += 10;
setfillstyle( 1, BLUE );
    bar3d( x3, car.op3, x3 + 30, car.op3 + 30, 2, 3 );
    }

else
    {
    car.op3 = 0;
    }


    }

int check( int x, int op, int cp )
    {
int a[ 31 ], b[ 31 ], c[ 40 ], d[ 50 ];

for ( int i = 0;i < 30;i++ )
    {
a[ i ] = x + i;
    }

for ( i = 0;i < 30;i++ )
    {
b[ i ] = op + i;
    }

for ( i = 0;i < 40;i++ )
    {
c[ i ] = cp + i;
    }

for ( i = 0;i < 50;i++ )
    {
d[ i ] = 300 + i;
    }

for ( i = 0;i < 40;i++ )
    {
for ( int j = 0;j < 50;j++ )
    {
for ( int k = 0;k < 30;k++ )
    {
    if ( a[ k ] == c[ i ] && b[ k ] == d[ j ] )
return 1;
    }
    }
    }

return 0;
    }


void loss()
    {
setcolor( 10 );
settextstyle( 2, 0, 9 );
outtextxy( 180, 150, "ONE CHANCE LOST" );
delay( 1000 );
    }

void over()
    {
for ( int i = 1;i < 35;i++ )
    {
cleardevice();delay( 20 );
settextstyle( 1, 0, 6 );
setcolor( RED );
outtextxy( 150, 100, "GAME OVER" );
delay( 20 );
    }
delay( 2000 );
cleardevice();
score_store();
    //getch();
    }

void score()
    {
car.score = car.score + 11 * car.vel;
setcolor( 5 );
settextstyle( 2, 0, 6 );
outtextxy( 530, 12, "Score " );
gotoxy( 75, 2 );
cout<<car.score;
return ;
					    }

void win()
    {
cleardevice();

for ( int k = 0;k < 2;k++ )
    {
for ( int i = 0;i < 15;i++ )
    {
setcolor( i );
settextstyle( 4, 0, 5 );
outtextxy( 200, 100, "Congrats!!" );
setcolor( i + 1 );
outtextxy( 150, 200, "You won the race" );
delay( 150 );
    }
    }

delay( 3000 );
score_store();
return ;
    }

void level()
    {
int level = car.level;

if ( car.score>car.lev_score[ level - 1 ] )
    {
if ( car.level< 5 )
    {
car.level++;

if ( car.vel< 4 )
    {
car.vel++;
    }


    }

else
    {win();}
    }

settextstyle( 2, 0, 6 );
setcolor( 5 );
outtextxy( 4, 12, "Level" );
gotoxy( 8, 2 );
cout<<car.level;
return ;
    }

void about()
    {
char opt;

while ( !kbhit() )
    {
for ( int i = 300;kbhit() == 0;i++ )
    {
cleardevice();
setcolor( 9 );
settextstyle( 4, 0, 5 );
setfillstyle( 9, 12 );
outtextxy( 220, 0, "ABOUT" );
bar( 220, 60, 370, 62 );
settextstyle( 2, 0, 5 );
setcolor( 2 );

setcolor( 6 );
settextstyle( 2, 0, 6 );
outtextxy( 600 - i, 600 - i, "PSP" );

setfillstyle( 1, 4 );
bar3d( 180, 380, 450, 460, 4, 6 );
setcolor( 1 );
settextstyle( 2, 0, 10 );
outtextxy( 280, 380, "BYE" );
outtextxy( 230, 420, "FRIENDS" );

delay( 60 );

    }
    }

getch();
return ;
    }


int play(int cont)//
    {int life;
if(cont==0)
car.score=0;
life = 3;
int m, x1, x2, x3, s;
re:
while ( life )
    {
cleardevice();

if ( car.op1 == 0 )
    {
x1 = randx();
car.op1++;
    }

else
    {
opp1( x1 );
    }

if ( car.op2 == 0 )
    {
x2 = randx();
car.op2++;
    }

else if ( car.op2 < 1 )
    {car.op2++;}

else
    {
opp2( x2 );
    }

if ( car.op3 == 0 )
    {
x3 = randx();
car.op3++;
    }

else if ( car.op3 < 1 )
    {car.op3++;}

else
    {
opp3( x3 );
    }

setcolor( 10 );
setfillstyle( 0, 0 );
bar3d( 0, 0, 80, 70, 4, 3 );
bgmove();
level();
score();
settextstyle( 2, 0, 6 );
setcolor( 5 );
outtextxy( 4, 44, "Life" );
gotoxy( 8, 4 );cout<< life;

if ( check( x2, car.op2, car.cp ) || check( x1, car.op1, car.cp ) || check( x3, car.op3, car.cp ) )
    {
loss();
life--;

if ( life == 0 )
    {

over();
    }

    car.op1 = 1;
    car.op2 = -16;
    car.op3 = -32;
goto re;
    }

if ( kbhit() )
    {
    m = getch();

switch ( m )
    {
case LEFT: left();
break;
case RIGHT: right();
break;
case 's':saver();
    // break;
case 'q': exit( 0 );

    }
    }

else
    {
delay( 100 );
    }
    }

getch();
return ( 0 );
    }

void help()
    {
cleardevice();
settextstyle( 4, 0, 6 );
setcolor( 13 );
outtextxy( 200, 10, "HELP" );
textcolor( YELLOW );
gotoxy( 3, 6 );
cout<< "\n\n\n\n->UP\t--\tForward movement\n->LEFT\t--\tLeftside movement\n->RIGHT\t--\tRightside movement\n->q\t--\tExit from game at any time\n";
getch();
return ;
    }
void conti()
{ cleardevice();
int accscore,acclvl,flag=0;
char accname[20];
gotoxy(5,1);
cout<<"Enter The Name Of The Account You Want To continue:";
gets(accname);
ifstream fin("saver.dat",ios::binary);
while(fin.read((char*)&SS,sizeof(SS)))
    {if(strcmpi(accname,SS.player)==0)
     {
car.level=SS.level;
car.score=SS.score;
flag++;
break;
     }
     }
if(flag==1)
play(1);
else
play(0);

    };
void menu()
    {
int s = 0, t = 0, a, p = 110;

do
    {
do
    {
cleardevice();
setcolor( YELLOW);
settextstyle( 1, 0, 4 );
outtextxy( 230, 30, "MENU" );
setfillstyle( 1, 2 );
bar( 140, 80, 400, 82 );
settextstyle( 1, 0, 1 );
setcolor( 10 );
outtextxy( 220,107,  "1)RESUME" );
outtextxy( 220, 137, "2)PLAY GAME" );
outtextxy( 220, 167, "3)SCORES" );
outtextxy( 220, 197, "4)HELP" );
outtextxy( 220, 227, "5)ABOUT" );
outtextxy( 220, 257, "6)EXIT" );
setcolor( BLUE );
rectangle( 200, p, 350, p + 20 );
    a = getch();

switch ( a )
    {

case UP: if ( p > 110 )
    {
    p -= 30;
s--;
    }

break;

case DOWN: if ( p < 260 )
    {
    p += 30;
s++;
    };

break;

case ENTER: a = 1;

break;

default: break;
    }
    }

while ( a != 1 );

switch ( s )
    {
case 0: conti();
break;
case 1: play(0);
break;
case 2: disp_score();
break;
case 3: help();
break;
case 4: about();
break;
case 5: {exit( 0 );
    }
break;
    }

    }

while ( t == 0 );

getch();
     }

void main()
    {
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "..\\Bgi" );
cleardevice();
//	ShowBMP(0,0,"kiki.bmp");
//	delay(3000);
page();
    w1:
menu();
closegraph();
    }