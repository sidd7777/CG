#include<stdio.h>
#include<graphics.h>
void main()
{
	int p,dx,dy,x1,x2,y1,y2;
	
	printf("ENTER THE POINTS OF LINE : ");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	
	dx= x2-x1;
	dy=y2-y1;
	
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"");
	
	putpixel(x1,y1,15);	
	
	p = 2*dy - dx;
	
	while(x1!=x2) 
	{
		if(p<0)
		{
			x1++;
			putpixel(x1,y1,15);
			p=p+2*dy;					
		}	
		else
		{
			x1++;
			y1++;
			putpixel(x1,y1,15);
			p=p+2*dy-2*dx;
		}
	}
	getch();
}
