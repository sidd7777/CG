#include<stdio.h>
#include<graphics.h>

void display(int xc,int yc,int x,int y)
{
	putpixel(xc+x,yc+y,15);
	putpixel(xc-x,yc-y,15);
	putpixel(xc+x,yc-y,15);
	putpixel(xc-x,yc+y,15);
	putpixel(xc+y,yc+x,15);
	putpixel(xc+y,yc-x,15);
	putpixel(xc-y,yc-x,15);
	putpixel(xc-y,yc+x,15);
	
}
void main()
{
	int x,X,y,Y,p,r;
	
	printf("ENTER THE VALUES OF CENTRE : ");
	scanf("%d%d",&X,&Y);
	
	printf("ENTER RADIUS : ");
	scanf("%d",&r);
	
	int gd = DETECT , gm;
	x=0;y=r;
	p = 1-r;
	initgraph(&gd,&gm,"");
	
	while(x<=y)
	{
		if(p<0)
		{
			x++;
			p=p+2*x+1;
			display(X,Y,x,y);	
		}
		else
		{
			x++;
			y--;
			p=p+2*(x-y)+1;
			display(X,Y,x,y);
		}
	}
	getch();
}
