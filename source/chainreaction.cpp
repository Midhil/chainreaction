
#include <simplecpp>
bool checkgameover1(int A[][6]);
bool checkgameover2(int A[][6]);
bool checkgameover3(int A[][6]);
bool checkgameover4(int A[][6]);
bool checkgameover5(int A[][6]);

bool checkvalidity(int A[][6],int B[][6],int &x,int &y,int &count);
void outputthecircle(int &x,int &y,int A[][6],int B[][6]);
void outputthecircle1(int &x,int &y,int A[][6],int B[][6]);
bool checkvalidity3(int A[][6],int B[][6],int &x,int &y,int &count);
void outputthecircle3(int &x,int &y,int A[][6],int B[][6]);
void outputthecircle31(int &x,int &y,int A[][6],int B[][6]);
bool checkvalidity4(int A[][6],int B[][6],int &x,int &y,int &count);
void outputthecircle4(int &x,int &y,int A[][6],int B[][6]);
void outputthecircle41(int &x,int &y,int A[][6],int B[][6]);
bool checkvalidity5(int A[][6],int B[][6],int &x,int &y,int &count);
void outputthecircle5(int &x,int &y,int A[][6],int B[][6]);
void outputthecircle51(int &x,int &y,int A[][6],int B[][6]);
int get_xcoordinate(int d);
int get_ycoordinate(int e);
int max_no_of_orbs(int i,int j);
void undo5(int A[][6],int B[][6],int &e);
void lines5(int &count);
void new_game5(int&c,int A[][6],int B[][6],int C[][6],int D[][6],int E[][6],int F[][6],int G[][6],int H[][6],int I[][6],int J[][6],int K[][6],int L[][6],int M[][6],int N[][6]);

void undo4(int A[][6],int B[][6],int &e);
void lines4(int &count);
void new_game4(int&c,int A[][6],int B[][6],int C[][6],int D[][6],int E[][6],int F[][6],int G[][6],int H[][6],int I[][6],int J[][6],int K[][6],int L[][6]);


void undo3(int A[][6],int B[][6],int &e);
void lines3(int &count);
void new_game3(int&c,int A[][6],int B[][6],int C[][6],int D[][6],int E[][6],int F[][6],int G[][6],int H[][6],int I[][6],int J[][6]);
void undo(int A[][6],int B[][6],int &e);
void lines(int &count);
void new_game(int&c,int A[][6],int B[][6],int C[][6],int D[][6],int E[][6],int F[][6],int G[][6],int H[][6]);
void lines(int &count)
{
    if (count%2==1)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("blue"));
            m.imprint();
        }
        repeat(7)//creates vertical lines//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("blue"));
            l.imprint();
        }
        endFrame();
    }
    if(count%2==0)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("green"));
            m.imprint();
        }
        repeat(7)//creates vertical lines//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("green"));
            l.imprint();
        }
        endFrame();
    }
}
void lines3(int &count)
{
    if (count%3==1)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines3//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("blue"));
            m.imprint();
        }
        repeat(7)//creates vertical lines3//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("blue"));
            l.imprint();
        }
        endFrame();
    }
    if(count%3==2)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines3//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("green"));
            m.imprint();
        }
        repeat(7)//creates vertical lines3//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("green"));
            l.imprint();
        }
        endFrame();
    }


    if (count%3==0)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines3//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("red"));
            m.imprint();
        }
        repeat(7)//creates vertical lines3//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("red"));
            l.imprint();
        }
        endFrame();
    }

}
void lines4(int &count)
{
    if (count%4==1)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines4//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("blue"));
            m.imprint();
        }
        repeat(7)//creates vertical lines4//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("blue"));
            l.imprint();
        }
        endFrame();
    }
    if(count%4==2)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines4//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("green"));
            m.imprint();
        }
        repeat(7)//creates vertical lines4//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("green"));
            l.imprint();
        }
        endFrame();
    }


    if (count%4==3)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines4//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("red"));
            m.imprint();
        }
        repeat(7)//creates vertical lines4//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("red"));
            l.imprint();
        }
        endFrame();
    }


    if (count%4==0)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines4//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("yellow"));
            m.imprint();
        }
        repeat(7)//creates vertical lines4//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("yellow"));
            l.imprint();
        }
        endFrame();
    }


}


int max_no_of_orbs(int i,int j)
{
    if((i==0||i==5)&&(j==0||j==5)) return 2;
    if((i==0)||(i==5)||(j==0)||(j==5)) return 3;
    return 4;
}
bool checkgameover1(int A[][6])//checks if first player has won or not//
{
    int i,j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if(A[i][j]==2||A[i][j]==3||A[i][j]==4||A[i][j]==5)
            {
                return false;
            }
        }
    }
    return true;
}
bool checkgameover2(int A[][6])//checks if second player has won or not//
{
    int i,j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if(A[i][j]==1||A[i][j]==3 ||A[i][j]==4||A[i][j]==5)
            {
                return false;
            }
        }
    }
    return true;
}


bool checkgameover3(int A[][6])//checks if third player has won or not//
{
    int i,j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if(A[i][j]==1||A[i][j]==2||A[i][j]==4||A[i][j]==5)
            {
                return false;
            }
        }
    }
    return true;
}

bool checkgameover4(int A[][6])//checks if third player has won or not//
{
    int i,j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if(A[i][j]==1||A[i][j]==2||A[i][j]==3||A[i][j]==5)
            {
                return false;
            }
        }
    }
    return true;
}

bool checkgameover5(int A[][6])//checks if third player has won or not//
{
    int i,j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if(A[i][j]==1||A[i][j]==2||A[i][j]==3||A[i][j]==4)
            {
                return false;
            }
        }
    }
    return true;
}
void outputthecircle4(int &x,int &y,int A[][6],int B[][6])//outputs the circle if effectively splitting has taken place//
{
    switch(B[(x-27)/100][(y-27)/100])
    {
    case 0:
    {
        Circle cw(x,y,20);
        cw.setColor(COLOR("white"));
        cw.setFill();
        cw.imprint();
        Circle cw1(x+50,y,20);
        cw1.setColor(COLOR("white"));
        cw1.setFill();
        cw1.imprint();
        Circle cw2(x+25,y+50,20);
        cw2.setColor(COLOR("white"));
        cw2.setFill();
        cw2.imprint();
        break;
    }
    case 1:
    {
        Circle cw3(x+50,y,20);
        cw3.setColor(COLOR("white"));
        cw3.setFill();
        cw3.imprint();
        Circle cw4(x+25,y+50,20);
        cw4.setColor(COLOR("white"));
        cw4.setFill();
        cw4.imprint();
        Circle c(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%4)==1)
        {
            c.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==2)
        {
            c.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==3)
        {
            c.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==0)
        {
            c.setColor(COLOR("yellow"));
        }
        c.setFill();
        c.imprint();
        break;
    }
    case 2:
    {
        Circle cw5(x+25,y+50,20);
        cw5.setColor(COLOR("white"));
        cw5.setFill();
        cw5.imprint();
        Circle c1(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%4)==1)
        {
            c1.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==2)
        {
            c1.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==3)
        {
            c1.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==0)
        {
            c1.setColor(COLOR("yellow"));
        }
        c1.setFill();
        c1.imprint();
        Circle c2(x+50,y,20);
       if((A[(x-27)/100][(y-27)/100]%4)==1)
        {
            c2.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==2)
        {
            c2.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==3)
        {
            c2.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==0)
        {
            c2.setColor(COLOR("yellow"));
        }
        c2.setFill();
        c2.imprint();
        break;
    }
    case 3:
    {
        Circle c3(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%4)==1)
        {
            c3.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==2)
        {
            c3.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==3)
        {
            c3.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==0)
        {
            c3.setColor(COLOR("yellow"));
        }
        c3.setFill();
        c3.imprint();
        Circle c4(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%4)==1)
        {
            c4.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==2)
        {
            c4.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==3)
        {
            c4.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==0)
        {
            c4.setColor(COLOR("yellow"));
        }
        c4.setFill();
        c4.imprint();
        Circle c5(x+25,y+50,20);
        if((A[(x-27)/100][(y-27)/100]%4)==1)
        {
            c5.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==2)
        {
            c5.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==3)
        {
            c5.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==0)
        {
            c5.setColor(COLOR("yellow"));
        }
        c5.setFill();
        c5.imprint();
    }
    }
    return;
}
void outputthecircle41(int &x,int &y,int A[][6],int B[][6])//outputs the circles if splitting has not taken place effectively//
{
    switch(B[(x-27)/100][(y-27)/100])
    {
    case  1:
    {
        Circle c(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%4)==1)
        {
            c.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==2)
        {
            c.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==3)
        {
            c.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==0)
        {
            c.setColor(COLOR("yellow"));
        }
        c.setFill();
        c.imprint();
        break;
    }
    case 2:
    {
        Circle c1(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%4)==1)
        {
            c1.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==2)
        {
            c1.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==3)
        {
            c1.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==0)
        {
            c1.setColor(COLOR("yellow"));
        }
        c1.setFill();
        c1.imprint();
        Circle c2(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%4)==1)
        {
            c2.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==2)
        {
            c2.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==3)
        {
            c2.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==0)
        {
            c2.setColor(COLOR("yellow"));
        }
        c2.setFill();
        c2.imprint();
        break;
    }
    case 3:
    {
        Circle c3(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%4)==1)
        {
            c3.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==2)
        {
            c3.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==3)
        {
            c3.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==0)
        {
            c3.setColor(COLOR("yellow"));
        }
        c3.setFill();
        c3.imprint();
        Circle c4(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%4)==1)
        {
            c4.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==2)
        {
            c4.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==3)
        {
            c4.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==0)
        {
            c4.setColor(COLOR("yellow"));
        }
        c4.setFill();
        c4.imprint();
        Circle c5(x+25,y+50,20);

        if((A[(x-27)/100][(y-27)/100]%4)==1)
        {
            c5.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==2)
        {
            c5.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==3)
        {
            c5.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%4)==0)
        {
            c5.setColor(COLOR("yellow"));
        }
        c5.setFill();
        c5.imprint();

    }
    }
    return;
}

void outputthecircle(int &x,int &y,int A[][6],int B[][6])//outputs the circle if effectively splitting has taken place//
{
    switch(B[(x-27)/100][(y-27)/100])
    {
    case 0:
    {
        Circle cw(x,y,20);
        cw.setColor(COLOR("white"));
        cw.setFill();
        cw.imprint();
        Circle cw1(x+50,y,20);
        cw1.setColor(COLOR("white"));
        cw1.setFill();
        cw1.imprint();
        Circle cw2(x+25,y+50,20);
        cw2.setColor(COLOR("white"));
        cw2.setFill();
        cw2.imprint();
        break;
    }
    case 1:
    {
        Circle cw1(x+50,y,20);
        cw1.setColor(COLOR("white"));
        cw1.setFill();
        cw1.imprint();
        Circle cw2(x+25,y+50,20);
        cw2.setColor(COLOR("white"));
        cw2.setFill();
        cw2.imprint();
        Circle c(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%2)==1)
        {
            c.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%2)==0)
        {
            c.setColor(COLOR("green"));
        }
        c.setFill();
        c.imprint();
        break;
    }
    case 2:
    {
        Circle cw2(x+25,y+50,20);
        cw2.setColor(COLOR("white"));
        cw2.setFill();
        cw2.imprint();
        Circle c1(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%2)==1)
        {
            c1.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%2)==0)
        {
            c1.setColor(COLOR("green"));
        }
        c1.setFill();
        c1.imprint();
        Circle c2(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%2)==1)
        {
            c2.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%2)==0)
        {
            c2.setColor(COLOR("green"));
        }
        c2.setFill();
        c2.imprint();
        break;
    }
    case 3:
    {
        Circle c3(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%2)==1)
        {
            c3.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%2)==0)
        {
            c3.setColor(COLOR("green"));
        }
        c3.setFill();
        c3.imprint();
        Circle c4(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%2)==1)
        {
            c4.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%2)==0)
        {
            c4.setColor(COLOR("green"));
        }
        c4.setFill();
        c4.imprint();
        Circle c5(x+25,y+50,20);
        if((A[(x-27)/100][(y-27)/100]%2)==1)
        {
            c5.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%2)==0)
        {
            c5.setColor(COLOR("green"));
        }
        c5.setFill();
        c5.imprint();
    }
    }
    return;
}
void outputthecircle1(int &x,int &y,int A[][6],int B[][6])//outputs the circles if splitting has not taken place effectively//
{
    switch(B[(x-27)/100][(y-27)/100])
    {
    case  1:
    {
        Circle c(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%2)==1)
        {
            c.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%2)==0)
        {
            c.setColor(COLOR("green"));
        }
        c.setFill();
        c.imprint();
        break;
    }
    case 2:
    {
        Circle c1(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%2)==1)
        {
            c1.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%2)==0)
        {
            c1.setColor(COLOR("green"));
        }
        c1.setFill();
        c1.imprint();
        Circle c2(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%2)==1)
        {
            c2.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%2)==0)
        {
            c2.setColor(COLOR("green"));
        }
        c2.setFill();
        c2.imprint();
        break;
    }
    case 3:
    {
        Circle c3(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%2)==1)
        {
            c3.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%2)==0)
        {
            c3.setColor(COLOR("green"));
        }
        c3.setFill();
        c3.imprint();
        Circle c4(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%2)==1)
        {
            c4.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%2)==0)
        {
            c4.setColor(COLOR("green"));
        }
        c4.setFill();
        c4.imprint();
        Circle c5(x+25,y+50,20);
        if((A[(x-27)/100][(y-27)/100]%2)==1)
        {
            c5.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%2)==0)
        {
            c5.setColor(COLOR("green"));
        }
        c5.setFill();
        c5.imprint();
    }
    }
    return;
}


int get_xcoordinate(int d)//finds out the x coordinate of the center of first circle in the small square//
{
    int j=0;
    for( j=0; j<6; j++)
    {
        if(((2+100*j)<(d/65536))&&((d/65536)<(102+100*j)))


        {
            break;
        }
        if(j==5)return 0;

    }
    return 27+100*j;
}
int get_ycoordinate(int e)//finds out the y coordinate of the center of first circle in the small square//
{
    int j=0;
    for(j=0; j<6; j++)
    {
        if(((2+100*j)<(e%65536))&&((e%65536)<(102+100*j)))
        {
            break;
        }

    }
    return 27+100*j;
}
bool checkvalidity3(int A[][6],int B[][6],int &x,int &y,int &count)//ensures that game happens legally//
{
    if((count%3)==1)
    {
        if(A[(x-27)/100][(y-27)/100]==2||A[(x-27)/100][(y-27)/100]==3)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    if((count%3)==2)
    {
        if(A[(x-27)/100][(y-27)/100]==1||A[(x-27)/100][(y-27)/100]==3)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    if((count%3)==0)
    {
        if(A[(x-27)/100][(y-27)/100]==1||A[(x-27)/100][(y-27)/100]==2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

}
void undo3(int A[][6],int B[][6],int &e)
{
    int a,b;
    beginFrame();
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            a=100*i+27;
            b=100*j+27;
            outputthecircle3(a,b,A,B);
        }
    }
    endFrame();
    e--;
    return;
}
void new_game3(int&c,int A[][6],int B[][6],int C[][6],int D[][6],int E[][6],int F[][6],int G[][6],int H[][6],int I[][6],int J[][6])
{
    Rectangle ng(502,302,1004,604);
    ng.setColor(COLOR("white"));
    ng.setFill();
    ng.imprint();
    for(int i=0; i<6; i++) //initializing the arrays//
    {
        for(int j=0; j<6; j++)
        {
            A[i][j]=0;
            B[i][j]=0;
            C[i][j]=0;
            D[i][j]=0;
            E[i][j]=G[i][j]=H[i][j]=0;
            F[i][j]=0;
            I[i][j]=0;
            J[i][j]=0;
            c=1;
        }
    }
    return;
}
bool checkvalidity(int A[][6],int B[][6],int &x,int &y,int &count)//ensures that game happens legally//
{
    if((count%2)==1)
    {
        if(A[(x-27)/100][(y-27)/100]==2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    if((count%2)==0)
    {
        if(A[(x-27)/100][(y-27)/100]==1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
void undo(int A[][6],int B[][6],int &e)
{
    int a,b;
    beginFrame();
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            a=100*i+27;
            b=100*j+27;
            outputthecircle(a,b,A,B);
        }
    }
    endFrame();
    e--;
    return;
}
void new_game(int&c,int A[][6],int B[][6],int C[][6],int D[][6],int E[][6],int F[][6],int G[][6],int H[][6])
{
    Rectangle ng(502,302,1004,604);
    ng.setColor(COLOR("white"));
    ng.setFill();
    ng.imprint();
    for(int i=0; i<6; i++) //initializing the arrays//
    {
        for(int j=0; j<6; j++)
        {
            A[i][j]=0;
            B[i][j]=0;
            C[i][j]=0;
            D[i][j]=0;
            E[i][j]=G[i][j]=H[i][j]=0;
            F[i][j]=0;
            c=1;
        }
    }
    return;
}
bool checkvalidity4(int A[][6],int B[][6],int &x,int &y,int &count)//ensures that game happens legally//
{
    if((count%4)==1)
    {
        if(A[(x-27)/100][(y-27)/100]==2||A[(x-27)/100][(y-27)/100]==3||A[(x-27)/100][(y-27)/100]==4)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    if((count%4)==2)
    {
        if(A[(x-27)/100][(y-27)/100]==1||A[(x-27)/100][(y-27)/100]==3||A[(x-27)/100][(y-27)/100]==4)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    if((count%4)==3)
    {
        if(A[(x-27)/100][(y-27)/100]==1||A[(x-27)/100][(y-27)/100]==2||A[(x-27)/100][(y-27)/100]==4)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    if((count%4)==0)
    {
        if(A[(x-27)/100][(y-27)/100]==1||A[(x-27)/100][(y-27)/100]==2||A[(x-27)/100][(y-27)/100]==3)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

}
void undo4(int A[][6],int B[][6],int &e)
{
    int a,b;
    beginFrame();
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            a=100*i+27;
            b=100*j+27;
            outputthecircle4(a,b,A,B);
        }
    }
    endFrame();
    e--;
    return;
}
void new_game4(int&c,int A[][6],int B[][6],int C[][6],int D[][6],int E[][6],int F[][6],int G[][6],int H[][6],int I[][6],int J[][6],int K[][6],int L[][6])
{
    Rectangle ng(502,302,1004,604);
    ng.setColor(COLOR("white"));
    ng.setFill();
    ng.imprint();
    for(int i=0; i<6; i++) //initializing the arrays//
    {
        for(int j=0; j<6; j++)
        {
            A[i][j]=0;
            B[i][j]=0;
            C[i][j]=0;
            D[i][j]=0;
            E[i][j]=G[i][j]=H[i][j]=0;
            F[i][j]=0;
            I[i][j]=0;
            J[i][j]=0;
            K[i][j]=0;
            L[i][j]=0;
            c=1;
        }
    }
    return;
}
void lines5(int &count)
{
    if (count%5==1)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines5//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("blue"));
            m.imprint();
        }
        repeat(7)//creates vertical lines5//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("blue"));
            l.imprint();
        }
        endFrame();
    }
    if(count%5==2)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines5//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("green"));
            m.imprint();
        }
        repeat(7)//creates vertical lines5//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("green"));
            l.imprint();
        }
        endFrame();
    }


    if (count%5==3)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines5//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("red"));
            m.imprint();
        }
        repeat(7)//creates vertical lines5//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("red"));
            l.imprint();
        }
        endFrame();
    }


    if (count%5==4)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines5//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("yellow"));
            m.imprint();
        }
        repeat(7)//creates vertical lines5//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("yellow"));
            l.imprint();
        }
        endFrame();
    }

    if (count%5==0)
    {
        int x=2,y=2;
        beginFrame();
        repeat(7)//creates horizontal lines5//
        {
            Line m(2,y,602,y);
            y+=100;
            m.setColor(COLOR("black"));
            m.imprint();
        }
        repeat(7)//creates vertical lines5//
        {
            Line l(x,2,x,602);
            x=x+100;
            l.setColor(COLOR("black"));
            l.imprint();
        }
        endFrame();
    }



}
void outputthecircle3(int &x,int &y,int A[][6],int B[][6])//outputs the circle if effectively splitting has taken place//
{
    switch(B[(x-27)/100][(y-27)/100])
    {
    case 0:
    {
        Circle cw(x,y,20);
        cw.setColor(COLOR("white"));
        cw.setFill();
        cw.imprint();
        Circle cw1(x+50,y,20);
        cw1.setColor(COLOR("white"));
        cw1.setFill();
        cw1.imprint();
        Circle cw2(x+25,y+50,20);
        cw2.setColor(COLOR("white"));
        cw2.setFill();
        cw2.imprint();
        break;
    }
    case 1:
    {
        Circle cw3(x+50,y,20);
        cw3.setColor(COLOR("white"));
        cw3.setFill();
        cw3.imprint();
        Circle cw4(x+25,y+50,20);
        cw4.setColor(COLOR("white"));
        cw4.setFill();
        cw4.imprint();
        Circle c(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%3)==1)
        {
            c.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==2)
        {
            c.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==0)
        {
            c.setColor(COLOR("red"));
        }

        c.setFill();
        c.imprint();
        break;
    }
    case 2:
    {
        Circle cw5(x+25,y+50,20);
        cw5.setColor(COLOR("white"));
        cw5.setFill();
        cw5.imprint();
        Circle c1(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%3)==1)
        {
            c1.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==2)
        {
            c1.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==0)
        {
            c1.setColor(COLOR("red"));
        }

        c1.setFill();
        c1.imprint();
        Circle c2(x+50,y,20);
       if((A[(x-27)/100][(y-27)/100]%3)==1)
        {
            c2.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==2)
        {
            c2.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==0)
        {
            c2.setColor(COLOR("red"));
        }

        c2.setFill();
        c2.imprint();
        break;
    }
    case 3:
    {
        Circle c3(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%3)==1)
        {
            c3.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==2)
        {
            c3.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==0)
        {
            c3.setColor(COLOR("red"));
        }

        c3.setFill();
        c3.imprint();
        Circle c4(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%3)==1)
        {
            c4.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==2)
        {
            c4.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==0)
        {
            c4.setColor(COLOR("red"));
        }

        c4.setFill();
        c4.imprint();
        Circle c5(x+25,y+50,20);
        if((A[(x-27)/100][(y-27)/100]%3)==1)
        {
            c5.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==2)
        {
            c5.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==0)
        {
            c5.setColor(COLOR("red"));
        }

        c5.setFill();
        c5.imprint();
    }
    }
    return;
}
void outputthecircle31(int &x,int &y,int A[][6],int B[][6])//outputs the circles if splitting has not taken place effectively//
{
    switch(B[(x-27)/100][(y-27)/100])
    {
    case  1:
    {
        Circle c(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%3)==1)
        {
            c.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==2)
        {
            c.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==0)
        {
            c.setColor(COLOR("red"));
        }

        c.setFill();
        c.imprint();
        break;
    }
    case 2:
    {
        Circle c1(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%3)==1)
        {
            c1.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==2)
        {
            c1.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==0)
        {
            c1.setColor(COLOR("red"));
        }

        c1.setFill();
        c1.imprint();
        Circle c2(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%3)==1)
        {
            c2.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==2)
        {
            c2.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==0)
        {
            c2.setColor(COLOR("red"));
        }

        c2.setFill();
        c2.imprint();
        break;
    }
    case 3:
    {
        Circle c3(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%3)==1)
        {
            c3.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==2)
        {
            c3.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==0)
        {
            c3.setColor(COLOR("red"));
        }

        c3.setFill();
        c3.imprint();
        Circle c4(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%3)==1)
        {
            c4.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==2)
        {
            c4.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==0)
        {
            c4.setColor(COLOR("red"));
        }

        c4.setFill();
        c4.imprint();
        Circle c5(x+25,y+50,20);

        if((A[(x-27)/100][(y-27)/100]%3)==1)
        {
            c5.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==2)
        {
            c5.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%3)==0)
        {
            c5.setColor(COLOR("red"));
        }

        c5.setFill();
        c5.imprint();

    }
    }
    return;
}

void outputthecircle5(int &x,int &y,int A[][6],int B[][6])//outputs the circle if effectively splitting has taken place//
{
    switch(B[(x-27)/100][(y-27)/100])
    {
    case 0:
    {
        Circle cw(x,y,20);
        cw.setColor(COLOR("white"));
        cw.setFill();
        cw.imprint();
        Circle cw1(x+50,y,20);
        cw1.setColor(COLOR("white"));
        cw1.setFill();
        cw1.imprint();
        Circle cw2(x+25,y+50,20);
        cw2.setColor(COLOR("white"));
        cw2.setFill();
        cw2.imprint();
        break;
    }
    case 1:
    {
        Circle cw3(x+50,y,20);
        cw3.setColor(COLOR("white"));
        cw3.setFill();
        cw3.imprint();
        Circle cw4(x+25,y+50,20);
        cw4.setColor(COLOR("white"));
        cw4.setFill();
        cw4.imprint();
        Circle c(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%5)==1)
        {
            c.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==2)
        {
            c.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==3)
        {
            c.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==4)
        {
            c.setColor(COLOR("yellow"));}

        if((A[(x-27)/100][(y-27)/100]%5)==0)
        {
            c.setColor(COLOR("black"));
        }
        c.setFill();
        c.imprint();
        break;
    }
    case 2:
    {
        Circle cw5(x+25,y+50,20);
        cw5.setColor(COLOR("white"));
        cw5.setFill();
        cw5.imprint();
        Circle c1(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%5)==1)
        {
            c1.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==2)
        {
            c1.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==3)
        {
            c1.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==4)
        {
            c1.setColor(COLOR("yellow"));}

        if((A[(x-27)/100][(y-27)/100]%5)==0)
        {
            c1.setColor(COLOR("black"));
        }
        c1.setFill();
        c1.imprint();
        Circle c2(x+50,y,20);
       if((A[(x-27)/100][(y-27)/100]%5)==1)
        {
            c2.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==2)
        {
            c2.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==3)
        {
            c2.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==4)
        {
            c2.setColor(COLOR("yellow"));}

        if((A[(x-27)/100][(y-27)/100]%5)==0)
        {
            c2.setColor(COLOR("black"));
        }
        c2.setFill();
        c2.imprint();
        break;
    }
    case 3:
    {
        Circle c3(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%5)==1)
        {
            c3.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==2)
        {
            c3.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==3)
        {
            c3.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==4)
        {
            c3.setColor(COLOR("yellow"));}

        if((A[(x-27)/100][(y-27)/100]%5)==0)
        {
            c3.setColor(COLOR("black"));
        }
        c3.setFill();
        c3.imprint();
        Circle c4(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%5)==1)
        {
            c4.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==2)
        {
            c4.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==3)
        {
            c4.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==4)
        {
            c4.setColor(COLOR("yellow"));}

        if((A[(x-27)/100][(y-27)/100]%5)==0)
        {
            c4.setColor(COLOR("black"));
        }
        c4.setFill();
        c4.imprint();
        Circle c5(x+25,y+50,20);
        if((A[(x-27)/100][(y-27)/100]%5)==1)
        {
            c5.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==2)
        {
            c5.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==3)
        {
            c5.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==4)
        {
            c5.setColor(COLOR("yellow"));}

        if((A[(x-27)/100][(y-27)/100]%5)==0)
        {
            c5.setColor(COLOR("black"));
        }
        c5.setFill();
        c5.imprint();
    }
    }
    return;
}
void outputthecircle51(int &x,int &y,int A[][6],int B[][6])//outputs the circles if splitting has not taken place effectively//
{
    switch(B[(x-27)/100][(y-27)/100])
    {
    case  1:
    {
        Circle c(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%5)==1)
        {
            c.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==2)
        {
            c.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==3)
        {
            c.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==4)
        {
            c.setColor(COLOR("yellow"));}

        if((A[(x-27)/100][(y-27)/100]%5)==0)
        {
            c.setColor(COLOR("black"));
        }
        c.setFill();
        c.imprint();
        break;
    }
    case 2:
    {
        Circle c1(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%5)==1)
        {
            c1.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==2)
        {
            c1.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==3)
        {
            c1.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==4)
        {
            c1.setColor(COLOR("yellow"));}

        if((A[(x-27)/100][(y-27)/100]%5)==0)
        {
            c1.setColor(COLOR("black"));
        }
        c1.setFill();
        c1.imprint();
        Circle c2(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%5)==1)
        {
            c2.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==2)
        {
            c2.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==3)
        {
            c2.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==4)
        {
            c2.setColor(COLOR("yellow"));}

        if((A[(x-27)/100][(y-27)/100]%5)==0)
        {
            c2.setColor(COLOR("black"));
        }
        c2.setFill();
        c2.imprint();
        break;
    }
    case 3:
    {
        Circle c3(x,y,20);
        if((A[(x-27)/100][(y-27)/100]%5)==1)
        {
            c3.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==2)
        {
            c3.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==3)
        {
            c3.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==4)
        {
            c3.setColor(COLOR("yellow"));}

        if((A[(x-27)/100][(y-27)/100]%5)==0)
        {
            c3.setColor(COLOR("black"));
        }
        c3.setFill();
        c3.imprint();
        Circle c4(x+50,y,20);
        if((A[(x-27)/100][(y-27)/100]%5)==1)
        {
            c4.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==2)
        {
            c4.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==3)
        {
            c4.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==4)
        {
            c4.setColor(COLOR("yellow"));}

        if((A[(x-27)/100][(y-27)/100]%5)==0)
        {
            c4.setColor(COLOR("black"));
        }
        c4.setFill();
        c4.imprint();
        Circle c5(x+25,y+50,20);

        if((A[(x-27)/100][(y-27)/100]%5)==1)
        {
            c5.setColor(COLOR("blue"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==2)
        {
            c5.setColor(COLOR("green"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==3)
        {
            c5.setColor(COLOR("red"));
        }
        if((A[(x-27)/100][(y-27)/100]%5)==4)
        {
            c5.setColor(COLOR("yellow"));}

        if((A[(x-27)/100][(y-27)/100]%5)==0)
        {
            c5.setColor(COLOR("black"));
        }
        c5.setFill();
        c5.imprint();

    }
    }
    return;
}

bool checkvalidity5(int A[][6],int B[][6],int &x,int &y,int &count)//ensures that game happens legally//
{
    if((count%5)==1)
    {
        if(A[(x-27)/100][(y-27)/100]==2||A[(x-27)/100][(y-27)/100]==3||A[(x-27)/100][(y-27)/100]==4||A[(x-27)/100][(y-27)/100]==5)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    if((count%5)==2)
    {
        if(A[(x-27)/100][(y-27)/100]==1||A[(x-27)/100][(y-27)/100]==3||A[(x-27)/100][(y-27)/100]==4||A[(x-27)/100][(y-27)/100]==5)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    if((count%5)==3)
    {
        if(A[(x-27)/100][(y-27)/100]==1||A[(x-27)/100][(y-27)/100]==2||A[(x-27)/100][(y-27)/100]==4||A[(x-27)/100][(y-27)/100]==5)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    if((count%5)==4)
    {
        if(A[(x-27)/100][(y-27)/100]==1||A[(x-27)/100][(y-27)/100]==2||A[(x-27)/100][(y-27)/100]==3||A[(x-27)/100][(y-27)/100]==5)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
if((count%5)==0)
    {
        if(A[(x-27)/100][(y-27)/100]==1||A[(x-27)/100][(y-27)/100]==2||A[(x-27)/100][(y-27)/100]==3||A[(x-27)/100][(y-27)/100]==4)
        {
            return false;
        }
        else
        {
            return true;
        }
    }


}
void undo5(int A[][6],int B[][6],int &e)
{
    int a,b;
    beginFrame();
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            a=100*i+27;
            b=100*j+27;
            outputthecircle5(a,b,A,B);
        }
    }
    endFrame();
    e--;
    return;
}
void new_game5(int&c,int A[][6],int B[][6],int C[][6],int D[][6],int E[][6],int F[][6],int G[][6],int H[][6],int I[][6],int J[][6],int K[][6],int L[][6],int M[][6],int N[][6])
{
    Rectangle ng(502,302,1004,604);
    ng.setColor(COLOR("white"));
    ng.setFill();
    ng.imprint();
    for(int i=0; i<6; i++) //initializing the arrays//
    {
        for(int j=0; j<6; j++)
        {
            A[i][j]=0;
            B[i][j]=0;
            C[i][j]=0;
            D[i][j]=0;
            E[i][j]=G[i][j]=H[i][j]=0;
            F[i][j]=0;
            I[i][j]=0;
            J[i][j]=0;
            K[i][j]=0;
            L[i][j]=0;
            M[i][j]=0;
            N[i][j]=0;
            c=1;
        }
    }
    return;
}

main_program
{

    initCanvas("Chain Reaction" ,1010,610);//creates the grid//
    for(int i=0; i<9999; i++)
    {
        Rectangle bkgrd(505,305,1010,610);
        bkgrd.setFill();
        bkgrd.setColor(COLOR(0,200,150));
        Rectangle play(500,240,190,55);
        play.setFill();
        play.setColor(COLOR(255,150,0));
        Text playgame(500,240,"Play Game");
        Rectangle inst(500,400,190,55);
        inst.setFill();
        inst.setColor(COLOR(255,150,0));
        Text instr(500,400,"Instructions");
        Text exit(500,560,"(Click anywhere other than the options to exit)");
        for(int i=0; i<9999; i++)
        {
            int initial=getClick();
            if(((initial/65536)<595)&&((initial/65536)>405)&&((initial%65536)<268)&&((initial%65536)>212))
            {
                playgame.hide();
                instr.hide();
                play.hide();
                inst.hide();
                exit.hide();
                Text select(500,200,"select no of players");
                Rectangle to(200,300,70,50);
                to.setColor(COLOR(255,0,0));
                to.setFill();
                Text two(200,300,"TWO");

                 Rectangle thr(325,300,70,50);
                thr.setColor(COLOR(255,0,0));
                thr.setFill();
                Text three(325,300,"THREE");
                 Rectangle fr(450,300,70,50);
                fr.setColor(COLOR(255,0,0));
                fr.setFill();
                Text four(450,300,"FOUR");
                Rectangle fiv(575,300,70,50);
                fiv.setColor(COLOR(255,0,0));
                fiv.setFill();
                Text five(575,300,"FIVE");

                 int players=getClick();
                if(((players/65536)<235) && ((players/65536)>165) &&((players%65536)<325) && ((players%65536)>275)){
                 bkgrd.hide();
                select.hide();
                to.hide();
                thr.hide();
                two.hide();
                three.hide();
                fr.hide();
                four.hide();
                fiv.hide();
                five.hide();
                 Rectangle n(802,53,100,50);
                n.setColor(COLOR(0,100,140));
                n.setFill();
                Text tn(800,53,"NEW GAME");

                Rectangle e(802,553,100,50);
                e.setColor(COLOR(0,100,140));
                e.setFill();
                Text te(800,553,"EXIT GAME");

                Rectangle u(802,503,100,44);
                u.setColor(COLOR(0,100,140));
                u.setFill();
                Text un(800,503,"UNDO");
                int count=1,colorarray[6][6],numarray[6][6],ca[6][6],na[6][6],un1[6][6],uc1[6][6],un2[6][6],uc2[6][6];
                for(int i=0; i<6; i++) //initializing the arrays//
                {
                    for(int j=0; j<6; j++)
                    {
                        colorarray[i][j]=0;
                        numarray[i][j]=0;
                        ca[i][j]=0;
                        na[i][j]=0;
                        uc1[i][j]=0;
                        un1[i][j]=0;
                        uc2[6][6]=0;
                        un2[6][6]=0;
                    }
                }
                int infinite1=0;
                int infinite2=0;
                for(;;)//iterates such that turn oscillates between the two players//
                {
                    int undo_var=0;
                    for(;;)
                    {
                        if((count%2)==1)//turn of player 1//
                        {
                            lines(count);
                            Text t1(803,302,"Player1's turn:");
                            int click1=getClick();
                            if(((click1/65536)<852)&&((click1/65536)>752)&&((click1%65536)<528)&&((click1%65536)>478)&&(count>2))
                            {
                                if(undo_var==0)
                                {
                                    undo(uc2,un2,count);
                                    undo_var=1;
                                    for(int i=0; i<6; i++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            colorarray[i][j]=uc2[i][j];
                                            numarray[i][j]=un2[i][j];
                                        }
                                    }
                                }
                                else continue;
                            }
                            if(((click1/65536)<852)&&((click1/65536)>752)&&((click1%65536)<78)&&((click1%65536)>28))
                            {
                                new_game(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2);
                            }
                            if(((click1/65536)<852)&&((click1/65536)>752)&&((click1%65536)<578)&&((click1%65536)>528))
                            {
                                return 0;
                            }
                            int x1=get_xcoordinate(click1);
                            if(x1==0)continue;
                            int y1=get_ycoordinate(click1);
                            bool k = checkvalidity(colorarray,numarray,x1,y1,count);
                            if(k==false)
                            {
                                continue;   //cntrl is returned to player 1//
                            }
                            colorarray[((x1)-27)/100][((y1)-27)/100]=1;
                            numarray[((x1)-27)/100][((y1)-27)/100]++;
                            if(numarray[(x1-27)/100][(y1-27)/100]>=max_no_of_orbs((x1-27)/100,(y1-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//
                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//cntrl is declared to return the cntrl accordingly if splitting doesnt occur//
                                    //checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++)
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite1++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite1>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;//outputs circles//
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle1(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                        endFrame();
                                    }

                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle1(x1,y1,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc2[i][j]=colorarray[i][j];
                                    un2[i][j]=numarray[i][j];
                                }
                            }

                        }
                        if(count>2)
                        {
                            bool alpha = checkgameover1(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {
                                u.hide();
                                un.hide();
                                Text t1(802,203,"CONGRATULATIONS PLAYER1 WON");
                                t1.imprint();

                                for(;;)
                                {
                                    int newg=getClick();
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }
                        if((count%2)==0)
                        {
                            lines(count);
                            Text t2(803,302,"Player2's turn:");
                            int click2=getClick();
                            if(((click2/65536)<852)&&((click2/65536)>752)&&((click2%65536)<528)&&((click2%65536)>478)&&(count>1))
                            {
                                if(undo_var==0)
                                {
                                    undo(uc1,un1,count);
                                    undo_var=1;
                                    for(int i=0; i<6; i++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            colorarray[i][j]=uc1[i][j];
                                            numarray[i][j]=un1[i][j];
                                        }
                                    }
                                }
                                else continue;
                            }
                            if(((click2/65536)<852)&&((click2/65536)>752)&&((click2%65536)<78)&&((click2%65536)>28))
                            {
                                new_game(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2);
                            }
                            if(((click2/65536)<852)&&((click2/65536)>752)&&((click2%65536)<578)&&((click2%65536)>528))
                            {
                                return 0;
                            }
                            int x2=get_xcoordinate(click2);
                            if(x2==0)continue;
                            int y2=get_ycoordinate(click2);
                            bool k = checkvalidity(colorarray,numarray,x2,y2,count);
                            if(k==false)
                            {
                                continue;
                            }
                            colorarray[((x2)-27)/100][((y2)-27)/100]=2;
                            numarray[((x2)-27)/100][((y2)-27)/100]++;
                            if(numarray[(x2-27)/100][(y2-27)/100]>=max_no_of_orbs((x2-27)/100,(y2-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//

                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++) //inside boxes//
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }

                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite2++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite2>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle1(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                    }
                                    endFrame();
                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle1(x2,y2,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc1[i][j]=colorarray[i][j];
                                    un1[i][j]=numarray[i][j];
                                }
                            }
                        }//player2 end
                        if(count>1)
                        {
                            bool alpha = checkgameover2(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {
                                u.hide();
                                un.hide();
                                Text t2(802,203,"CONGRATULATIONS PLAYER2 WON");
                                t2.imprint();

                                int newg=getClick();
                                for(;;)
                                {
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }
                        break;
                    }
                }
            }

                else if(((players/65536)<360) && ((players/65536)>290) &&((players%65536)<325) && ((players%65536)>275)){
                bkgrd.hide();
                to.hide();
                thr.hide();
                two.hide();
                three.hide();
                select.hide();
                fr.hide();
                four.hide();
                fiv.hide();
                five.hide();

Rectangle n(802,53,100,50);
                n.setColor(COLOR(0,100,140));
                n.setFill();
                Text tn(800,53,"NEW GAME");

                Rectangle e(802,553,100,50);
                e.setColor(COLOR(0,100,140));
                e.setFill();
                Text te(800,553,"EXIT GAME");

                                int count=1,colorarray[6][6],numarray[6][6],ca[6][6],na[6][6],un1[6][6],uc1[6][6],un2[6][6],uc2[6][6],un3[6][6],uc3[6][6];
                for(int i=0; i<6; i++) //initializing the arrays//
                {
                    for(int j=0; j<6; j++)
                    {
                        colorarray[i][j]=0;
                        numarray[i][j]=0;
                        ca[i][j]=0;
                        na[i][j]=0;
                        uc1[i][j]=0;
                        un1[i][j]=0;
                        uc2[6][6]=0;
                        un2[6][6]=0;
                        un3[6][6]=0;
                        uc3[6][6]=0;

                    }
                }
                int infinite1=0;
                int infinite2=0;
                int infinite3=0;
                for(;;)//iterates such that turn oscillates between the two players//
                {
                    int undo_var=0;
                    for(;;)
                    {
                        if((count%3)==1)//turn of player 1//
                        {
                            lines3(count);
                            Text t1(803,302,"Player1's turn:");
                            int click1=getClick();
                  if(((click1/65536)<852)&&((click1/65536)>752)&&((click1%65536)<78)&&((click1%65536)>28))
                            {
                                new_game3(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3);
                            }
                            if(((click1/65536)<852)&&((click1/65536)>752)&&((click1%65536)<578)&&((click1%65536)>528))
                            {
                                return 0;
                            }
                            int x1=get_xcoordinate(click1);
                            if(x1==0)continue;
                            int y1=get_ycoordinate(click1);
                            bool k = checkvalidity3(colorarray,numarray,x1,y1,count);
                            if(k==false)
                            {
                                continue;   //cntrl is returned to player 1//
                            }
                            colorarray[((x1)-27)/100][((y1)-27)/100]=1;
                            numarray[((x1)-27)/100][((y1)-27)/100]++;
                            if(numarray[(x1-27)/100][(y1-27)/100]>=max_no_of_orbs((x1-27)/100,(y1-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//
                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//cntrl is declared to return the cntrl accordingly if splitting doesnt occur//
                                    //checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++)
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite1++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite1>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;//outputs circles//
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle3(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle31(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                        endFrame();
                                    }

                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle31(x1,y1,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc2[i][j]=colorarray[i][j];
                                    un2[i][j]=numarray[i][j];
                                }
                            }

                        }
                        if(count>6)
                        {
                            bool alpha = checkgameover1(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {
                                Text t1(802,203,"CONGRATULATIONS PLAYER1 WON");
                                t1.imprint();

                                for(;;)
                                {
                                    int newg=getClick();
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game3(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }
                        if((count%3)==2)//player 2
                        {
                            lines3(count);
                            Text t2(803,302,"Player2's turn:");
                            int click2=getClick();
                            if(((click2/65536)<852)&&((click2/65536)>752)&&((click2%65536)<528)&&((click2%65536)>478)&&(count>1))
                            {
                                if(undo_var==0)
                                {
                                    undo3(uc2,un2,count);
                                    undo_var=1;
                                    for(int i=0; i<6; i++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            colorarray[i][j]=uc1[i][j];
                                            numarray[i][j]=un1[i][j];
                                        }
                                    }
                                }
                                else continue;
                            }
                            if(((click2/65536)<852)&&((click2/65536)>752)&&((click2%65536)<78)&&((click2%65536)>28))
                            {
                                new_game3(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3);
                            }
                            if(((click2/65536)<852)&&((click2/65536)>752)&&((click2%65536)<578)&&((click2%65536)>528))
                            {
                                return 0;
                            }
                            int x2=get_xcoordinate(click2);
                            if(x2==0)continue;
                            int y2=get_ycoordinate(click2);
                            bool k = checkvalidity3(colorarray,numarray,x2,y2,count);
                            if(k==false)
                            {
                                continue;
                            }
                            colorarray[((x2)-27)/100][((y2)-27)/100]=2;
                            numarray[((x2)-27)/100][((y2)-27)/100]++;
                            if(numarray[(x2-27)/100][(y2-27)/100]>=max_no_of_orbs((x2-27)/100,(y2-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//

                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++) //inside boxes//
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }

                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite2++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite2>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle3(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle31(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                    }
                                    endFrame();
                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle31(x2,y2,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc1[i][j]=colorarray[i][j];
                                    un1[i][j]=numarray[i][j];
                                }
                            }
                        }//player 2 end
                        if(count>6)
                        {
                            bool alpha = checkgameover2(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {
                                Text t2(802,203,"CONGRATULATIONS PLAYER2 WON");
                                t2.imprint();

                                int newg=getClick();
                                for(;;)
                                {
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game3(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }//player2 checkgameover





                             if((count%3)==0)//new player3
                        {
                            lines3(count);
                            Text t2(803,302,"Player3's turn:");
                            int click3=getClick();
                            if(((click3/65536)<852)&&((click3/65536)>752)&&((click3%65536)<528)&&((click3%65536)>478)&&(count>1))
                            {
                                if(undo_var==0)
                                {
                                    undo3(uc3,un3,count);
                                    undo_var=1;
                                    for(int i=0; i<6; i++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            colorarray[i][j]=uc3[i][j];
                                            numarray[i][j]=un3[i][j];
                                        }
                                    }
                                }
                                else continue;
                            }
                            if(((click3/65536)<852)&&((click3/65536)>752)&&((click3%65536)<78)&&((click3%65536)>28))
                            {
                                new_game3(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3);
                            }
                            if(((click3/65536)<852)&&((click3/65536)>752)&&((click3%65536)<578)&&((click3%65536)>528))
                            {
                                return 0;
                            }
                            int x3=get_xcoordinate(click3);
                            if(x3==0)continue;
                            int y3=get_ycoordinate(click3);
                            bool k = checkvalidity3(colorarray,numarray,x3,y3,count);
                            if(k==false)
                            {
                                continue;
                            }
                            colorarray[((x3)-27)/100][((y3)-27)/100]=3;
                            numarray[((x3)-27)/100][((y3)-27)/100]++;
                            if(numarray[(x3-27)/100][(y3-27)/100]>=max_no_of_orbs((x3-27)/100,(y3-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//

                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++) //inside boxes//
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }

                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite3++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite3>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle3(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle31(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                    }
                                    endFrame();
                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle31(x3,y3,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc3[i][j]=colorarray[i][j];
                                    un3[i][j]=numarray[i][j];
                                }
                            }






                        }//player 3 end
                        if(count>6)
                        {
                            bool alpha = checkgameover3(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {
                                Text t2(802,203,"CONGRATULATIONS PLAYER3 WON");
                                t2.imprint();

                                int newg=getClick();
                                for(;;)
                                {
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game3(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }//player3 checkgameover
                        break;
                    }//second for loop

                }
            }
else if(((players/65536)<495) && ((players/65536)>415) &&((players%65536)<325) && ((players%65536)>275)){

                bkgrd.hide();
                select.hide();
                to.hide();
                thr.hide();
                two.hide();
                three.hide();
                fr.hide();
                four.hide();
                fiv.hide();
                five.hide();
                Rectangle n(802,53,100,50);
                n.setColor(COLOR(0,100,140));
                n.setFill();
                Text tn(800,53,"NEW GAME");

                Rectangle e(802,553,100,50);
                e.setColor(COLOR(0,100,140));
                e.setFill();
                Text te(800,553,"EXIT GAME");

                                int count=1,colorarray[6][6],numarray[6][6],ca[6][6],na[6][6],un1[6][6],uc1[6][6],un2[6][6],uc2[6][6],un3[6][6],uc3[6][6],un4[6][6],uc4[6][6];
                for(int i=0; i<6; i++) //initializing the arrays//
                {
                    for(int j=0; j<6; j++)
                    {
                        colorarray[i][j]=0;
                        numarray[i][j]=0;
                        ca[i][j]=0;
                        na[i][j]=0;
                        uc1[i][j]=0;
                        un1[i][j]=0;
                        uc2[6][6]=0;
                        un2[6][6]=0;
                        un3[6][6]=0;
                        uc3[6][6]=0;

                    }
                }
                int infinite1=0;
                int infinite2=0;
                int infinite3=0;
                int infinite4=0;
                for(;;)//iterates such that turn oscillates between the two players//
                {
                    int undo4_var=0;
                    for(;;)
                    {
                        if((count%4)==1)//turn of player 1//
                        {
                            lines4(count);
                            Text t1(803,302,"Player1's turn:");
                            int click1=getClick();
                                                        if(((click1/65536)<852)&&((click1/65536)>752)&&((click1%65536)<78)&&((click1%65536)>28))
                            {
                                new_game4(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4);
                            }
                            if(((click1/65536)<852)&&((click1/65536)>752)&&((click1%65536)<578)&&((click1%65536)>528))
                            {
                                return 0;
                            }
                            int x1=get_xcoordinate(click1);
                            if(x1==0)continue;
                            int y1=get_ycoordinate(click1);
                            bool k = checkvalidity4(colorarray,numarray,x1,y1,count);
                            if(k==false)
                            {
                                continue;   //cntrl is returned to player 1//
                            }
                            colorarray[((x1)-27)/100][((y1)-27)/100]=1;
                            numarray[((x1)-27)/100][((y1)-27)/100]++;
                            if(numarray[(x1-27)/100][(y1-27)/100]>=max_no_of_orbs((x1-27)/100,(y1-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//
                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//cntrl is declared to return the cntrl accordingly if splitting doesnt occur//
                                    //checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++)
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite1++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite1>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;//outputs circles//
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle4(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle41(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                        endFrame();
                                    }

                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle41(x1,y1,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc2[i][j]=colorarray[i][j];
                                    un2[i][j]=numarray[i][j];
                                }
                            }

                        }
                        if(count>6)
                        {
                            bool alpha = checkgameover1(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {

                                Text t1(802,203,"CONGRATULATIONS PLAYER1 WON");
                                t1.imprint();

                                for(;;)
                                {
                                    int newg=getClick();
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game4(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }
                        if((count%4)==2)//player 2
                        {
                            lines4(count);
                            Text t2(803,302,"Player2's turn:");
                            int click2=getClick();
                            if(((click2/65536)<852)&&((click2/65536)>752)&&((click2%65536)<528)&&((click2%65536)>478)&&(count>1))
                            {
                                if(undo4_var==0)
                                {
                                    undo4(uc1,un1,count);
                                    undo4_var=1;
                                    for(int i=0; i<6; i++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            colorarray[i][j]=uc1[i][j];
                                            numarray[i][j]=un1[i][j];
                                        }
                                    }
                                }
                                else continue;
                            }
                            if(((click2/65536)<852)&&((click2/65536)>752)&&((click2%65536)<78)&&((click2%65536)>28))
                            {
                                new_game4(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4);
                            }
                            if(((click2/65536)<852)&&((click2/65536)>752)&&((click2%65536)<578)&&((click2%65536)>528))
                            {
                                return 0;
                            }
                            int x2=get_xcoordinate(click2);
                            if(x2==0)continue;
                            int y2=get_ycoordinate(click2);
                            bool k = checkvalidity4(colorarray,numarray,x2,y2,count);
                            if(k==false)
                            {
                                continue;
                            }
                            colorarray[((x2)-27)/100][((y2)-27)/100]=2;
                            numarray[((x2)-27)/100][((y2)-27)/100]++;
                            if(numarray[(x2-27)/100][(y2-27)/100]>=max_no_of_orbs((x2-27)/100,(y2-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//

                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++) //inside boxes//
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }

                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite2++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite2>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle4(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle41(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                    }
                                    endFrame();
                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle41(x2,y2,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc1[i][j]=colorarray[i][j];
                                    un1[i][j]=numarray[i][j];
                                }
                            }
                        }//player 2 end
                        if(count>6)
                        {
                            bool alpha = checkgameover2(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {

                                Text t2(802,203,"CONGRATULATIONS PLAYER2 WON");
                                t2.imprint();

                                int newg=getClick();
                                for(;;)
                                {
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game4(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }//player2 checkgameover





                             if((count%4)==3)//new player3
                        {
                            lines4(count);
                            Text t2(803,302,"Player3's turn:");
                            int click3=getClick();
                            if(((click3/65536)<852)&&((click3/65536)>752)&&((click3%65536)<528)&&((click3%65536)>478)&&(count>1))
                            {
                                if(undo4_var==0)
                                {
                                    undo4(uc3,un3,count);
                                    undo4_var=1;
                                    for(int i=0; i<6; i++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            colorarray[i][j]=uc3[i][j];
                                            numarray[i][j]=un3[i][j];
                                        }
                                    }
                                }
                                else continue;
                            }
                            if(((click3/65536)<852)&&((click3/65536)>752)&&((click3%65536)<78)&&((click3%65536)>28))
                            {
                                new_game4(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4);
                            }
                            if(((click3/65536)<852)&&((click3/65536)>752)&&((click3%65536)<578)&&((click3%65536)>528))
                            {
                                return 0;
                            }
                            int x3=get_xcoordinate(click3);
                            if(x3==0)continue;
                            int y3=get_ycoordinate(click3);
                            bool k = checkvalidity4(colorarray,numarray,x3,y3,count);
                            if(k==false)
                            {
                                continue;
                            }
                            colorarray[((x3)-27)/100][((y3)-27)/100]=3;
                            numarray[((x3)-27)/100][((y3)-27)/100]++;
                            if(numarray[(x3-27)/100][(y3-27)/100]>=max_no_of_orbs((x3-27)/100,(y3-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//

                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++) //inside boxes//
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }

                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite3++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite3>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle4(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle41(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                    }
                                    endFrame();
                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle41(x3,y3,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc3[i][j]=colorarray[i][j];
                                    un3[i][j]=numarray[i][j];
                                }
                            }






                        }//player 3 end
                        if(count>6)
                        {
                            bool alpha = checkgameover3(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {

                                Text t2(802,203,"CONGRATULATIONS PLAYER3 WON");
                                t2.imprint();

                                int newg=getClick();
                                for(;;)
                                {
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game4(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }//player3 checkgameover




                     if((count%4)==0)//new player4
                        {
                            lines4(count);
                            Text t2(803,302,"Player4's turn:");
                            int click4=getClick();
                            if(((click4/65536)<852)&&((click4/65536)>752)&&((click4%65536)<528)&&((click4%65536)>478)&&(count>1))
                            {
                                if(undo4_var==0)
                                {
                                    undo4(uc4,un4,count);
                                    undo4_var=1;
                                    for(int i=0; i<6; i++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            colorarray[i][j]=uc4[i][j];
                                            numarray[i][j]=un4[i][j];
                                        }
                                    }
                                }
                                else continue;
                            }
                            if(((click4/65536)<852)&&((click4/65536)>752)&&((click4%65536)<78)&&((click4%65536)>28))
                            {
                                new_game4(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4);
                            }
                            if(((click4/65536)<852)&&((click4/65536)>752)&&((click4%65536)<578)&&((click4%65536)>528))
                            {
                                return 0;
                            }
                            int x4=get_xcoordinate(click4);
                            if(x4==0)continue;
                            int y4=get_ycoordinate(click4);
                            bool k = checkvalidity4(colorarray,numarray,x4,y4,count);
                            if(k==false)
                            {
                                continue;
                            }
                            colorarray[((x4)-27)/100][((y4)-27)/100]=4;
                            numarray[((x4)-27)/100][((y4)-27)/100]++;
                            if(numarray[(x4-27)/100][(y4-27)/100]>=max_no_of_orbs((x4-27)/100,(y4-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//

                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++) //inside boxes//
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }

                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite4++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite4>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle4(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle41(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                    }
                                    endFrame();
                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle41(x4,y4,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc4[i][j]=colorarray[i][j];
                                    un4[i][j]=numarray[i][j];
                                }
                            }






                        }//player 4 end
                        if(count>6)
                        {
                            bool alpha = checkgameover4(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {

                                Text t2(802,203,"CONGRATULATIONS PLAYER4 WON");
                                t2.imprint();

                                int newg=getClick();
                                for(;;)
                                {
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game4(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }//player4 checkgameover










                        break;
                    }//second for loop

                }//first for loop

}
else if(((players/65536)<620) && ((players/65536)>540) &&((players%65536)<325) && ((players%65536)>275)){
                 bkgrd.hide();
                select.hide();
                to.hide();
                thr.hide();
                two.hide();
                three.hide();
                fr.hide();
                four.hide();
                fiv.hide();
                five.hide();
                Rectangle n(802,53,100,50);
                n.setColor(COLOR(0,100,140));
                n.setFill();
                Text tn(800,53,"NEW GAME");

                Rectangle e(802,553,100,50);
                e.setColor(COLOR(0,100,140));
                e.setFill();
                Text te(800,553,"EXIT GAME");

                                int count=1,colorarray[6][6],numarray[6][6],ca[6][6],na[6][6],un1[6][6],uc1[6][6],un2[6][6],uc2[6][6],un3[6][6],uc3[6][6],un4[6][6],uc4[6][6],un5[6][6],uc5[6][6];
                for(int i=0; i<6; i++) //initializing the arrays//
                {
                    for(int j=0; j<6; j++)
                    {
                        colorarray[i][j]=0;
                        numarray[i][j]=0;
                        ca[i][j]=0;
                        na[i][j]=0;
                        uc1[i][j]=0;
                        un1[i][j]=0;
                        uc2[6][6]=0;
                        un2[6][6]=0;
                        un3[6][6]=0;
                        uc3[6][6]=0;
                         un4[6][6]=0;
                         uc4[6][6]=0;
                         un5[6][6]=0;
                         uc5[6][6]=0;
                    }
                }
                int infinite1=0;
                int infinite2=0;
                int infinite3=0;
                int infinite4=0;
                int infinite5=0;
                for(;;)//iterates such that turn oscillates between the two players//
                {
                    int undo5_var=0;
                    for(;;)
                    {
                        if((count%5)==1)//turn of player 1//
                        {
                            lines5(count);
                            Text t1(803,302,"Player1's turn:");
                            int click1=getClick();                                                            if(((click1/65536)<852)&&((click1/65536)>752)&&((click1%65536)<78)&&((click1%65536)>28))
                            {
                                new_game5(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4,uc5,un5);
                            }
                            if(((click1/65536)<852)&&((click1/65536)>752)&&((click1%65536)<578)&&((click1%65536)>528))
                            {
                                return 0;
                            }
                            int x1=get_xcoordinate(click1);
                            if(x1==0)continue;
                            int y1=get_ycoordinate(click1);
                            bool k = checkvalidity5(colorarray,numarray,x1,y1,count);
                            if(k==false)
                            {
                                continue;   //cntrl is returned to player 1//
                            }
                            colorarray[((x1)-27)/100][((y1)-27)/100]=1;
                            numarray[((x1)-27)/100][((y1)-27)/100]++;
                            if(numarray[(x1-27)/100][(y1-27)/100]>=max_no_of_orbs((x1-27)/100,(y1-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//
                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//cntrl is declared to return the cntrl accordingly if splitting doesnt occur//
                                    //checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++)
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite1++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite1>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;//outputs circles//
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle5(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle51(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                        endFrame();
                                    }

                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle51(x1,y1,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc2[i][j]=colorarray[i][j];
                                    un2[i][j]=numarray[i][j];
                                }
                            }

                        }
                        if(count>6)
                        {
                            bool alpha = checkgameover1(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {

                                Text t1(802,203,"CONGRATULATIONS PLAYER1 WON");
                                t1.imprint();

                                for(;;)
                                {
                                    int newg=getClick();
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game5(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4,uc5,un5);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }
                        if((count%5)==2)//player 2
                        {
                            lines5(count);
                            Text t2(803,302,"Player2's turn:");
                            int click2=getClick();
                            if(((click2/65536)<852)&&((click2/65536)>752)&&((click2%65536)<528)&&((click2%65536)>478)&&(count>1))
                            {
                                if(undo5_var==0)
                                {
                                    undo5(uc3,un3,count);
                                    undo5_var=1;
                                    for(int i=0; i<6; i++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            colorarray[i][j]=uc3[i][j];
                                            numarray[i][j]=un3[i][j];
                                        }
                                    }
                                }
                                else continue;
                            }
                            if(((click2/65536)<852)&&((click2/65536)>752)&&((click2%65536)<78)&&((click2%65536)>28))
                            {
                                new_game5(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4,uc5,un5);
                            }
                            if(((click2/65536)<852)&&((click2/65536)>752)&&((click2%65536)<578)&&((click2%65536)>528))
                            {
                                return 0;
                            }
                            int x2=get_xcoordinate(click2);
                            if(x2==0)continue;
                            int y2=get_ycoordinate(click2);
                            bool k = checkvalidity5(colorarray,numarray,x2,y2,count);
                            if(k==false)
                            {
                                continue;
                            }
                            colorarray[((x2)-27)/100][((y2)-27)/100]=2;
                            numarray[((x2)-27)/100][((y2)-27)/100]++;
                            if(numarray[(x2-27)/100][(y2-27)/100]>=max_no_of_orbs((x2-27)/100,(y2-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//

                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++) //inside boxes//
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }

                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite2++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite2>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle5(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle51(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                    }
                                    endFrame();
                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle51(x2,y2,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc3[i][j]=colorarray[i][j];
                                    un3[i][j]=numarray[i][j];
                                }
                            }
                        }//player 2 end
                        if(count>6)
                        {
                            bool alpha = checkgameover2(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {

                                Text t2(802,203,"CONGRATULATIONS PLAYER2 WON");
                                t2.imprint();

                                int newg=getClick();
                                for(;;)
                                {
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game5(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4,uc5,un5);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }//player2 checkgameover





                             if((count%5)==3)//new player3
                        {
                            lines5(count);
                            Text t2(803,302,"Player3's turn:");
                            int click3=getClick();
                            if(((click3/65536)<852)&&((click3/65536)>752)&&((click3%65536)<528)&&((click3%65536)>478)&&(count>1))
                            {
                                if(undo5_var==0)
                                {
                                    undo5(uc4,un4,count);
                                    undo5_var=1;
                                    for(int i=0; i<6; i++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            colorarray[i][j]=uc4[i][j];
                                            numarray[i][j]=un4[i][j];
                                        }
                                    }
                                }
                                else continue;
                            }
                            if(((click3/65536)<852)&&((click3/65536)>752)&&((click3%65536)<78)&&((click3%65536)>28))
                            {
                                new_game5(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4,uc5,un5);
                            }
                            if(((click3/65536)<852)&&((click3/65536)>752)&&((click3%65536)<578)&&((click3%65536)>528))
                            {
                                return 0;
                            }
                            int x3=get_xcoordinate(click3);
                            if(x3==0)continue;
                            int y3=get_ycoordinate(click3);
                            bool k = checkvalidity5(colorarray,numarray,x3,y3,count);
                            if(k==false)
                            {
                                continue;
                            }
                            colorarray[((x3)-27)/100][((y3)-27)/100]=3;
                            numarray[((x3)-27)/100][((y3)-27)/100]++;
                            if(numarray[(x3-27)/100][(y3-27)/100]>=max_no_of_orbs((x3-27)/100,(y3-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//

                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++) //inside boxes//
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }

                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite3++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite3>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle5(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle51(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                    }
                                    endFrame();
                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle51(x3,y3,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc4[i][j]=colorarray[i][j];
                                    un4[i][j]=numarray[i][j];
                                }
                            }






                        }//player 3 end
                        if(count>6)
                        {
                            bool alpha = checkgameover3(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {

                                Text t2(802,203,"CONGRATULATIONS PLAYER3 WON");
                                t2.imprint();

                                int newg=getClick();
                                for(;;)
                                {
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game5(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4,uc5,un5);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }//player3 checkgameover




                     if((count%5)==4)//new player4
                        {
                            lines5(count);
                            Text t2(803,302,"Player4's turn:");
                            int click4=getClick();
                            if(((click4/65536)<852)&&((click4/65536)>752)&&((click4%65536)<528)&&((click4%65536)>478)&&(count>1))
                            {
                                if(undo5_var==0)
                                {
                                    undo5(uc5,un5,count);
                                    undo5_var=1;
                                    for(int i=0; i<6; i++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            colorarray[i][j]=uc5[i][j];
                                            numarray[i][j]=un5[i][j];
                                        }
                                    }
                                }
                                else continue;
                            }
                            if(((click4/65536)<852)&&((click4/65536)>752)&&((click4%65536)<78)&&((click4%65536)>28))
                            {
                                new_game5(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4,uc5,un5);
                            }
                            if(((click4/65536)<852)&&((click4/65536)>752)&&((click4%65536)<578)&&((click4%65536)>528))
                            {
                                return 0;
                            }
                            int x4=get_xcoordinate(click4);
                            if(x4==0)continue;
                            int y4=get_ycoordinate(click4);
                            bool k = checkvalidity5(colorarray,numarray,x4,y4,count);
                            if(k==false)
                            {
                                continue;
                            }
                            colorarray[((x4)-27)/100][((y4)-27)/100]=4;
                            numarray[((x4)-27)/100][((y4)-27)/100]++;
                            if(numarray[(x4-27)/100][(y4-27)/100]>=max_no_of_orbs((x4-27)/100,(y4-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//

                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++) //inside boxes//
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }

                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite4++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite4>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle5(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle51(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                    }
                                    endFrame();
                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle51(x4,y4,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc5[i][j]=colorarray[i][j];
                                    un5[i][j]=numarray[i][j];
                                }
                            }






                        }//player 4 end
                        if(count>6)
                        {
                            bool alpha = checkgameover4(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {

                                Text t2(802,203,"CONGRATULATIONS PLAYER4 WON");
                                t2.imprint();

                                int newg=getClick();
                                for(;;)
                                {
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game5(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4,uc5,un5);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }//player4 checkgameover




                if((count%5)==0)//new player5
                        {
                            lines5(count);
                            Text t2(803,302,"Player5's turn:");
                            int click5=getClick();
                            if(((click5/65536)<852)&&((click5/65536)>752)&&((click5%65536)<528)&&((click5%65536)>478)&&(count>1))
                            {
                                if(undo5_var==0)
                                {
                                    undo5(uc1,un1,count);
                                    undo5_var=1;
                                    for(int i=0; i<6; i++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            colorarray[i][j]=uc1[i][j];
                                            numarray[i][j]=un1[i][j];
                                        }
                                    }
                                }
                                else continue;
                            }
                            if(((click5/65536)<852)&&((click5/65536)>752)&&((click5%65536)<78)&&((click5%65536)>28))
                            {
                                new_game5(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4,uc5,un5);
                            }
                            if(((click5/65536)<852)&&((click5/65536)>752)&&((click5%65536)<578)&&((click5%65536)>528))
                            {
                                return 0;
                            }
                            int x5=get_xcoordinate(click5);
                            if(x5==0)continue;
                            int y5=get_ycoordinate(click5);
                            bool k = checkvalidity5(colorarray,numarray,x5,y5,count);
                            if(k==false)
                            {
                                continue;
                            }
                            colorarray[((x5)-27)/100][((y5)-27)/100]=5;
                            numarray[((x5)-27)/100][((y5)-27)/100]++;
                            if(numarray[(x5-27)/100][(y5-27)/100]>=max_no_of_orbs((x5-27)/100,(y5-27)/100))
                            {
                                for(int i=0; i<6; i++)
                                {
                                    for(int j=0; j<6; j++)
                                    {
                                        na[i][j]=numarray[i][j];
                                        ca[i][j]=colorarray[i][j];
                                    }
                                }//update the na,ca arrays//

                                for(;;)
                                {

                                    int cntrl=0,cntrl1=0;//checks and updates the number,colour arrays for boxes of type 1//
                                    for(int i=1; i<5; i++) //inside boxes//
                                    {
                                        for(int j=1; j<5; j++)
                                        {
                                            if(numarray[i][j]>3)
                                            {
                                                numarray[i-1][j]++;
                                                colorarray[i-1][j]=colorarray[i][j];
                                                numarray[i][j-1]++;
                                                colorarray[i][j-1]=colorarray[i][j];
                                                numarray[i+1][j]++;
                                                colorarray[i+1][j]=colorarray[i][j];
                                                numarray[i][j+1]++;
                                                colorarray[i][j+1]=colorarray[i][j];
                                                numarray[i][j]=numarray[i][j]%4;
                                                if(numarray[i][j]==0)
                                                {
                                                    colorarray[i][j]=0;
                                                }
                                            }
                                        }
                                    }
                                    for(int i=0,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//top left corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=0; j==0; j++)
                                    {
                                        if(numarray[i][j]>1)//bottom left corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }

                                    for(int i=0,j=5; i==0; i++)
                                    {
                                        if(numarray[i][j]>1)//top right corner//
                                        {
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=5,j=5; i==5; i++)
                                    {
                                        if(numarray[i][j]>1)//bottom right corner//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%2;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=0,j=1; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//top row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int i=1,j=0; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//left column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=1,i=5; j<5; j++)
                                    {
                                        if(numarray[i][j]>2)//bottom row//
                                        {
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j+1]++;
                                            colorarray[i][j+1]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }
                                    for(int j=5,i=1; i<5; i++)
                                    {
                                        if(numarray[i][j]>2)//right column//
                                        {
                                            numarray[i-1][j]++;
                                            colorarray[i-1][j]=colorarray[i][j];
                                            numarray[i][j-1]++;
                                            colorarray[i][j-1]=colorarray[i][j];
                                            numarray[i+1][j]++;
                                            colorarray[i+1][j]=colorarray[i][j];
                                            numarray[i][j]=numarray[i][j]%3;
                                            if(numarray[i][j]==0)
                                            {
                                                colorarray[i][j]=0;
                                            }
                                        }
                                    }//checks if all splittings are over or not//
                                    beginFrame();
                                    for(int i=0; i<6; i++,cntrl1++)
                                    {
                                        for(int j=0; j<6; j++)
                                        {
                                            if((i!=0&&i!=5)&&(j!=0&&j!=5))
                                            {
                                                if(numarray[i][j]<4)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            if(((i==0)||(i==5))&&((j==0)||(j==5)))
                                            {
                                                if(numarray[i][j]<2)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                if(numarray[i][j]<3)continue;
                                                else
                                                {
                                                    cntrl=7;
                                                    break;
                                                }
                                            }
                                        }
                                        infinite5++;
                                        if(cntrl==7)
                                        {
                                            break;
                                        }
                                    }
                                    endFrame();
                                    if(cntrl1==6)
                                    {
                                        cntrl=77;
                                    }
                                    if(infinite5>999)
                                    {
                                        cntrl=77;
                                    }
                                    if(cntrl==77)
                                    {
                                        beginFrame();
                                        for(int i=0; i<6; i++)
                                        {
                                            for(int j=0; j<6; j++)
                                            {
                                                int a=100*i+27;
                                                int b=100*j+27;
                                                if((na[i][j]!=numarray[i][j])||(ca[i][j]!=colorarray[i][j]))
                                                {
                                                    outputthecircle5(a,b,colorarray,numarray);
                                                }
                                                else
                                                {
                                                    outputthecircle51(a,b,colorarray,numarray);
                                                }
                                            }
                                        }
                                    }
                                    endFrame();
                                    if(cntrl==77)
                                    {
                                        break;
                                    }
                                }
                            }
                            else outputthecircle51(x5,y5,colorarray,numarray);
                            count++;
                            for(int i=0; i<6; i++)
                            {
                                for(int j=0; j<6; j++)
                                {
                                    uc1[i][j]=colorarray[i][j];
                                    un1[i][j]=numarray[i][j];
                                }
                            }






                        }//player 4 end
                        if(count>6)
                        {
                            bool alpha = checkgameover5(colorarray);//ensures if game is over or not//
                            if(alpha==true)
                            {

                                Text t2(802,203,"CONGRATULATIONS PLAYER5 WON");
                                t2.imprint();

                                int newg=getClick();
                                for(;;)
                                {
                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<78)&&((newg%65536)>28))
                                    {
                                        new_game5(count,colorarray,numarray,ca,na,uc1,un1,uc2,un2,uc3,un3,uc4,un4,uc5,un5);
                                        break;
                                    }

                                    if(((newg/65536)<852)&&((newg/65536)>752)&&((newg%65536)<578)&&((newg%65536)>528))
                                    {
                                        return 0;
                                    }
                                }
                            }
                        }//player5 checkgameover





                        break;
                    }//second for loop

                }//first for loop
            }


}

            if(((initial/65536)<595)&&((initial/65536)>405)&&((initial%65536)<428)&&((initial%65536)>372))
            {
                playgame.hide();
                instr.hide();
                bkgrd.hide();
                play.hide();
                inst.hide();
                exit.hide();
                Rectangle bkgd(505,305,1010,610);
                bkgd.setFill();
                bkgd.setColor(COLOR(90,100,150));
                Rectangle bk(100,150,100,50);
                bk.setFill();
                bk.setColor(COLOR(150,175,150));
                Text bak(100,150,"BACK");
                Rectangle ins(500,100,100,50);
                ins.setColor(COLOR("white"));
                ins.setFill();
                Text l1(500,100,"INSTRUCTIONS");
                l1.setColor(COLOR("red"));
                Rectangle lines3(500,285,450,300);
                lines3.setColor(COLOR("white"));
                lines3.setFill();
                Text l2(500,205,"The objective of Chain Reaction is to take control");
                Text l3(500,225,"of the board by eliminating your opponents orbs.");
                Text l4(500,245,"Players take turns to place their orb in a cell.");
                Text l5(500,265,"Once the cell has reached critical mass the orbs");
                Text l6(500,285,"explode into the surrounding cells adding an extra");
                Text l7(500,305,"orb and claiming the cell for the player.A player may");
                Text l8(500,325,"only place their orbs in an empty cell or a cell that");
                Text l9(500,345,"contains orbs of their own colour.As soon as a player");
                Text l10(500,365,"looses all their orbs they are out of the game.");
                int clickPos=getClick();
                int co=clickPos/65536;
                int cp=clickPos%65536;
                if(co>50&&co<150&&cp>125&&cp<175)
                {
                    break;
                }

            }
            else
            {
                return 0;
            }
        }
    }
}

