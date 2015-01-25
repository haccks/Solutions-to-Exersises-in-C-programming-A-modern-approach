#include <stdio.h>

int main(void)
{
 	int h,m,t,temp1,temp2,
	    a1,a2,d1,d2;      //a1,a2 & d1,d2 are ariival & dep. time res.
	char ch1,ch2;
	    
 	//Departure times
 	// dt1 = 480, dt2 = 583, dt3 = 679, dt = 767, 
	// dt5 = 840, dt6 = 945, dt = 1140, dt = 1305;
	
	//Arrival times    
	// at1 = 616, at2 = 712, at3 = 811, at4 = 900, 
	// at5 = 968, at6 = 1075, at7 = 1280, at8 = 1438;
	   
 	printf("Enter a 12-hour time(hh:mm am/pm): ");
 	scanf("%d:%d %c%c",&h,&m,&ch1,&ch2);
 	
 	if((ch1=='A'|| ch1=='a')||(ch1=='A'&&ch2=='M'||ch1=='a'&&ch2=='m')) 	  
       t = h*60 + m;
    else if((ch1=='P'|| ch1=='p')||(ch1=='P'&&ch2=='M'||ch1=='p'&&ch2=='m'))    
       t = (h+12)*60 + m;  
    printf("Closest departure time is ");
    
    //CONDITIONS FOR CLOSEST DEPARTURE TIME.
    if(t <= 480)
    {
	 	temp1 = 480 - t;
	 	temp2 = t - 0;
	 	d1 = 480; d2 = 1305;
	 	a1 = 616; a2 = 1438;
    }
    else if(t >=480 && t <= 583) 
	{
	 	 temp1 = 583 - t;
		 temp2 = t - 480;
		 d1 = 583; d2 = 480;
		 a1 = 712; a2 = 616;
    }
	else if(t <= 679)
	{
	 	 temp1 = 679 - t;
		 temp2 = t - 582;
		 d1 = 679; d2 = 582;
		 a1 = 811; a2 = 712;
    }
	else if(t <= 767)
	{
	 	 temp1 = 767 - t;
		 temp2 = t - 679;
		 d1 = 767; d2 = 679;
		 a1 = 900; a2 = 811;
    }
	else if(t <= 840)
	{
	 	 temp1 = 840 - t;
	 	 temp2 = t - 767;
	 	 d1 = 840; d2 = 767;
	 	 a1 = 968; a2 = 900;
    }
	else if(t <= 945)
	{
	 	 temp1 = 945 - t;
		 temp2 = t - 840;
		 d1 = 945; d2 = 840;
		 a1 = 1075; a2 = 968;
    } 
	else if(t <= 1140)
	{
	 	 temp1 = 1140 - t;
		 temp2 = t - 945;
		 d1 = 1140; d2 = 945;
		 a1 = 1280; a2 = 1075;
    }
	else if(t <= 1305 || t >= 1305)
	{
	 	 temp1 = 1305 - t;
		 temp2 = t - 1140;
		 d1 = 1305; d2 = 1140;
		 a1 = 1438; a2 = 1280;
    }
    
	// COMPUTING CLOSEST DEPARTURE TIME.
	if(temp1 < temp2)
	{
	 	 h = d1/60;//using h & m here because there is no
         m = d1%60;//use of values stored to them!	 
    }
	else
	{
	 	h = d2/60;
        m = d2%60;
	}
	
	//PRINTING CLOSEST DEPARTURE TIME.
	if(h < 12)
		 printf("%.2d:%.2d a.m.",h,m);
	else
	{
		if(h == 12)
			 printf("%.2d:%.2d p.m.",h,m);
	    else		 
	 		printf("%.2d:%.2d p.m.",h - 12,m);
    }
    
	//COMPUTING CORRESPONDING ARRIVAL TIME.
	printf(", arriving at ");
	if(temp1 < temp2)
	{
	 	 h = a1/60;
		 m = a1%60;
    }
	else
	{
	 	h = a2/60;
        m = a2%60;
	}
	
	//PRINTING CORRESPONDING ARRIVAL TIME.
	 if(h < 12)
		 printf("%.2d:%.2d a.m.",h,m);
	else
	{
		if(h == 12)
			 printf("%.2d:%.2d p.m.",h,m);
	    else		 
	 		printf("%.2d:%.2d p.m.",h - 12,m);
    }		      	  	      
}
