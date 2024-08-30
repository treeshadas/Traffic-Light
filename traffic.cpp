#include<iostream>
#include<graphics.h>
#include<winbgim.h>
char opt,ch[10];
int i,mx,my,cm=0,r=0,g=1,y=0,loop=0;
void signal(int r,int g,int y)
{
    //rectangle (int left,int top,int right,bottom)
    rectangle(900,125,980,300);
    circle(940,155,20);
    circle(940,210,20);
    circle(940,260,20);
    if(r==1){
        setcolor(RED);
        for(i=1;i<=19;i++)
            circle(940,155,i);
    }
    if(y==1)
    {
        setcolor(YELLOW);
        for(i=1;i<=19;i++)
            circle(940,260,i);
    }
    setcolor(WHITE);
    rectangle(930,300,950,550);
    line(0,550,1200,550);

    line(10,605,150,605);

    line(220,605,340,605);
    line(410,605,550,605);
    line(610,605,750,605);
    line(810,605,950,605);

    line(965,560,1105,560);
    line(970,565,1110,565);
    line(975,570,1115,570);
    line(980,575,1120,575);
    line(985,580,1125,580);
    line(990,585,1130,585);
    line(995,590,1135,590);



}
void car(int px,int py)
{
    setcolor(WHITE);
    line(px,py,px-130,py);
    line(px-130,py,px-180,py-60);
    line(px-180,py-60,px-400,py-60);
    line(px-400,py-60,px-450,py);
    line(px-450,py,px-530,py);
    line(px-530,py,px-530,py+60);
    line(px-530,py+60,px-480,py+60);
    line(px-400,py+60,px-150,py+60);
    line(px-70,py+60,px,py+60);
    line(px,py,px,py+60);



    circle(px-440,py+60,35);
    circle(px-440,py+60,3);
    circle(px-110,py+60,36);
    circle(px-110,py+60,3);


     line(px-150,py,px-185,py-45);
    line(px-150,py,px-270,py);
    line(px-270,py,px-270,py-45);
    line(px-185,py-45,px-270,py-45);

    line(px-280,py,px-430,py);
    line(px-280,py,px-280,py-45);
    line(px-280,py-45,px-390,py-45);
    line(px-430,py, px-390,py-45);

}
int main()
{
    initwindow(1200,660);
    i=0;
    while(true)
    {
        if(kbhit())
        {
            opt=getch();
            if(opt=='r'||opt=='R')
            {
                r=1;g=0;y=0;
            }
            else if(opt=='y'||opt=='Y')
            {
                r=0;y=1;g=0;
            }
        }
        if(y==1)
        {
            loop++;
            if(loop==30)
            {
                r=0;
                y=0;
                g=1;
                loop=0;
            }
        }
        signal(r,y,g);
        if(r==1||y==1)
        {
            if(cm!=760)
                cm+=20;
        }
        else if(g==1)
        {
            cm+=30;
        }
        if(cm>=2000)
        {
            cm=0;
        }
        car(cm,500);
        delay(60);
        cleardevice();
    }

    getch();
    return 0;
}
