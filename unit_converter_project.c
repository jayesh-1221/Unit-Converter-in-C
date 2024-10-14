#include<stdio.h>
#include<conio.h>
#include <math.h>

int length();            // Declaration of function 
int area();              // Declaration of function 
int speed();             // Declaration of function 
int weight();            // Declaration of function 
int temperature();       // Declaration of function 
int power();             // Declaration of function 
int pressure();          // Declaration of function 


int main(){
	int ans,n;
	printf("***** Unit Converter *****\n\n");
    do{
	printf("Enter The number of unit conversion which you want:\n1.Length\n2.Area\n3.Speed\n4.Weight\n5.Temperature\n6.Power\n7.Pressure\n");
	scanf("%d",&n);
	switch (n){
		
		case 1:  length();                // Calling length function
			break;
		case 2:	 area();                 // Calling area function
		    break;
	    case 3:  speed();                // Calling  speed function
			break;
	    case 4:  weight();               // Calling weight function
			break;
		case 5:  temperature();         // Calling temperature function
			break;
		case 6:  power();               // Calling power function
			break;
		case 7:  pressure();            // Calling pressure function
			break;
		default: printf("Invalid Choice"); 
		    
	}
    printf("\nDo you want to continue ( Yes=1 & No=Any other Number) ");
    scanf("%d",&ans);
    }while (ans==1);
    if (ans!=1)
    {
        printf("-----THANK YOU-----");
    }

	
	return 0;
}

  // definition of length function
int length(){
	int num;
	printf("Choose any conversion from the following:\n1.Meter to Kilometer\n2.Kilometer to Meter\n3.Meter to Centimeter\n4.Centimeter to meter\n5.Centimeter to Milimeter\n6.Milimeter to Centimeter\n7.Meter to Foot \n8.Foot to Meter\n9.Centimeter to inch\n10.Inch to centimeter\n\n");
	scanf("%d",&num);
		switch (num){
		
		case 1:
             float a,b;
             printf("Enter the value(in m):");
             scanf("%f",&a);
             b=a/1000;
             printf("Correponding value is %.3f km\n",b);
            break;
		case 2:
            float c,d;
            printf("Enter the value(in km):");
             scanf("%f",&c);
             d=c*1000;
             printf("Correponding value is %.3f m\n",d);	
		    break;
	    case 3:
              float e,f;
            printf("Enter the value(in m):");
             scanf("%f",&e);
             f=e*100;
             printf("Correponding value is %.3f cm\n",f);
              
			break;
	    case 4:
             float g,h;
            printf("Enter the value(in cm):");
             scanf("%f",&g);
             h=g/100;
             printf("Correponding value is %.3f m\n",h);

			break;
		case 5:  
            float i,j;
            printf("Enter the value(in cm):");
             scanf("%f",&i);
             j=i*10;
             printf("Correponding value is %.3f mm\n",j);
			break;
		case 6:
             float k,l;
            printf("Enter the value(in mm):");
             scanf("%f",&k);
             l=k/10;
             printf("Correponding value is %.3f cm\n",l);  
			break;
		case 7: 
             float m,n;
             printf("Enter the value(in m):");
             scanf("%f",&m);
             n=m*3.28;
             printf("Correponding value is %.3f feet\n",n); 
			break;
		case 8:
             float o,p;
            printf("Enter the value(in feet):");
             scanf("%f",&o);
             p=o/3.28;
             printf("Correponding value is %.3f m\n",p); 
			break;
		case 9:
              float q,r;
             printf("Enter the value(in cm):");
             scanf("%f",&q);
             r=q*0.4;
             printf("Correponding value is %.3f inch\n",r); 
			break;
		case 10:
             float s,t;
            printf("Enter the value(in inch):");
             scanf("%f",&s);
             t=s*2.54;
             printf("Correponding value is %.3f cm\n",t);
			break;
		default: printf("Invalid Choice"); 
		    
		    
	}
	return 0;
}                                   

// definition of area function
int area(){
		int n;
	printf("Choose any conversion from the following:\n1.Square Meter to Square Centimeter \n2.Square Centimeter to Square Meter\n3.Square Meter to Square Kilometer\n4.Square Kilometer to Square Meter\n5.Square Meter to Square Foot\n6.Square Foot to Square Meter\n7.Square Centimeter to Square Inch \n8.Square Inch to Square Meter\n9.Square Kilometer to Acre\n10.Acre to Kilometer\n\n");
	scanf("%d",&n);
		switch (n){
		
		case 1:  
		     float a,b;
             printf("Enter the value(in Sq.m):");
             scanf("%f",&a);
             b=a*10000;
             printf("Correponding value is %.3f Sq.Cm\n",b);
			break;
		case 2:	
		     float c,d;
             printf("Enter the value(in Sq.Cm):");
             scanf("%f",&c);
             d=c/10000;
             printf("Correponding value is %f Sq.m\n",d);
		    break;
	    case 3:  
		     float e,f;
             printf("Enter the value(in Sq.m):");
             scanf("%f",&e);
             f=e/(pow(1000,2));
             printf("Correponding value is %f Sq.Km\n",f);
			break;
	    case 4:  
		    float g,h;
             printf("Enter the value(in Sq.Km):");
             scanf("%f",&g);
             h=g*(pow(1000,2));
             printf("Correponding value is %.3f Sq.m\n",h);
			break;
		case 5:  
		     float i,j;
             printf("Enter the value(in Sq.m):");
             scanf("%f",&i);
             j=i*10.76;
             printf("Correponding value is %.3f Sq.Ft\n",j);
			break;
		case 6:  
		     float k,l;
             printf("Enter the value(in Sq.Ft):");
             scanf("%f",&k);
             l=k/10.7639;
             printf("Correponding value is %f Sq.m\n",l);
			break;
		case 7:  
		     float m,n;
             printf("Enter the value(in Sq.m):");
             scanf("%f",&m);
             n=m*0.155;
             printf("Correponding value is %.3f Sq.Inch\n",n);
			break;
		case 8:
		 float o,p;
             printf("Enter the value(in Sq.Inch):");
             scanf("%f",&o);
             p=o/0.155;
             printf("Correponding value is %f Sq.Cm\n",p);
			break;
		case 9:
		    float q,r;
             printf("Enter the value(in Sq.Km):");
             scanf("%f",&q);
             r=q*247.1;
             printf("Correponding value is %.3f Acre\n",r);
		     
			break;
		case 10:
		    float s,t;
             printf("Enter the value(in Acre):");
             scanf("%f",&s);
             t=s/247.10;
             printf("Correponding value is %f Sq.Km\n",t);
			break;
		default: printf("Invalid Choice"); 
		    
		    
	}
	return 0;
}        

// definition of speed function
int speed(){
		int n;
	printf("Choose any conversion from the following:\n1.Meter/Second to Kilometer/Hour\n2.Kilometer/Hour to Meter/Second\n3.Meter/Second to Inch/Second\n4.Inch/Second to Meter/Second\n5.Meter/Second to Mile/Hour\n6.Mile/Hour to Meter/Second\n\n");
	scanf("%d",&n);
		switch (n){
		
		case 1:
		     float a,b;
             printf("Enter the value of speed(in m/s):");
             scanf("%f",&a);
             b=(a*18)/5;
             printf("Correponding value of speed is %.3f km/Hr\n",b);
			break;
		case 2:	
		     float c,d;
             printf("Enter the value of speed(in Km/Hr):");
             scanf("%f",&c);
             d=(c*5)/18;
             printf("Correponding value of speed is %.3f m/s\n",d);
		    break;
	    case 3:  
		     float e,f;
             printf("Enter the value of speed(in m/s):");
             scanf("%f",&e);
             f=e*39.37;
             printf("Correponding value of speed is %.3f Inch/s\n",f);
			break;
	    case 4:  
		     float g,h;
             printf("Enter the value of speed(in Inch/s):");
             scanf("%f",&g);
             h=g/39.37;
             printf("Correponding value of speed is %.3f m/s\n",h);
			break;
		case 5:  
		    float i,j;
             printf("Enter the value of speed(in m/s):");
             scanf("%f",&i);
             j=i*2.237;
             printf("Correponding value of speed is %.3f Mile/Hr\n",j);
			break;
		case 6:  
		    float k,l;
             printf("Enter the value of speed(in Mile/Hr):");
             scanf("%f",&k);
             l=k/2.237;
             printf("Correponding value of speed is %.3f m/s\n",l);
			break;
	
		default: printf("Invalid Choice"); 
		    
		    
	}
	return 0;
}    

// definition of weight function
int weight(){
		int n;
	printf("Choose any conversion from the following:\n1.Gram to Kilogram\n2.Kilogram to Gram\n3.Quintal to Kilogram\n4.Kilogram to Quintal\n5.Gram to Carat\n6.Carat to Gram\n7.Kilogram To Ton\n8.Ton to Kilogram\n9.Gram to Miligram\n10.Miligram to Gram\n\n");
	scanf("%d",&n);
		switch (n){
		
		case 1:  
		    float a,b;
            printf("Enter the weight(In gm):");
            scanf("%f",&a);
            b=a/1000;
            printf("Correnponding weight %.3f kg\n",b); 
			break;
		case 2:	
		    float c,d;
            printf("Enter the weight(In Kg):");
            scanf("%f",&c);
            d=c*1000;
            printf("Correnponding weight %.3f gm\n",d); 
		    break;
	    case 3:  
		    float e,f;
            printf("Enter the weight(In Quintal):");
            scanf("%f",&e);
            f=e*100;
            printf("Correnponding weight %.3f Kg\n",f); 
			break;
	    case 4: 
		    float g,h;
            printf("Enter the weight(In Kg):");
            scanf("%f",&g);
            h=g/100;
            printf("Correnponding weight %.3f Quintal\n",h);  
			break;
		case 5:  
		    float i,j;
            printf("Enter the weight(In gm):");
            scanf("%f",&i);
            j=i*5;
            printf("Correnponding weight %.3f Carat\n",j); 
			break;
		case 6:  
		    float k,l;
            printf("Enter the weight(In Carat):");
            scanf("%f",&k);
            l=k/5;;
            printf("Correnponding weight %.3f gm\n",l); 
			break;
		case 7:  
		    float m,n;
            printf("Enter the weight(In Kg):");
            scanf("%f",&m);
            n=m/1000;
            printf("Correnponding weight %.3f Ton\n",n); 
			break;
		case 8:
		    float o,p;
            printf("Enter the weight(In Ton):");
            scanf("%f",&o);
            p=o*1000;
            printf("Correnponding weight %.3f Kg\n",p); 
			break;
		case 9:
		    float q,r;
            printf("Enter the weight(In gm):");
            scanf("%f",&q);
            r=q*1000;
            printf("Correnponding weight %.3f mg\n",r); 
			break;
		case 10:
		float s,t;
            printf("Enter the weight(In mg):");
            scanf("%f",&s);
            t=s/1000;
            printf("Correnponding weight %.3f gm\n",t); 
			break;
		default: printf("Invalid Choice"); 
		    
		    
	}
	return 0;
}                               

// definition of temperature function
int temperature(){
		int n;
	printf("Choose any conversion from the following:\n1.Degree Celsius to Fahrenheit\n2.Fahrenheit to Degree Celsius\n3.Degree Celsius to Kelvin\n4.Kelvin to Degree Celsius\n5.Kelvin to Fahrenheit\n6.Fahrenheit to Kelvin\n\n");
	scanf("%d",&n);
		switch (n){
		
		case 1: 
            float a,b;
            printf("Enter the temperature(Degree Celsius):");
            scanf("%f",&a);
            b=(1.8*a)+32;
            printf("Corresponding value of temperature %.3f Fahrenheit\n",b); 
			break;
		case 2:	
            float c,d;
            printf("Enter the temperature(Fahrenheit):");
            scanf("%f",&c);
            d=5*(c-32)/9;
            printf("Corresponding value of temperature %.3f Degree Celsius\n",d);
		    break;
	    case 3:
             float e,f;
            printf("Enter the temperature(Degree Celsius):");
            scanf("%f",&e);
            f=273.15+e;
            printf("Corresponding value of temperature %.3f kelvin\n",f);  
			break;
	    case 4:
            float g,h;
            printf("Enter the temperature(kelvin):");
            scanf("%f",&g);
            h=g-273.15;
            printf("Corresponding value of temperature %.3f degree Celsius\n ",h);  
			break;
		case 5: 
            float i,j;
            printf("Enter the temperature(kelvin):");
            scanf("%f",&i);
            j=1.8*(i-273.15)+32;
            printf("Corresponding value of temperature %.3f Fahrenheit\n ",j);  
			break;
		case 6:
             float k,l;
            printf("Enter the temperature(Fahrenheit):");
            scanf("%f",&k);
            l=5*(k-32)/9+273.15;
            printf("Corresponding value of temperature %.3f kelvin\n ",l);  
			break;  
			
	
		default: printf("Invalid Choice"); 
		    
		    
	}
	return 0;
}  

// definition of power function
int power(){
		int n;
	printf("Choose any conversion from the following:\n1.Watt to Kilowatt\n2.Kilowatt to Watt\n3.KiloCalorie/Second to Kilowatt \n4.Kilowatt to Kilocalorie\n\n");
	scanf("%d",&n);
		switch (n){
		
		case 1: 
            float a,b;
            printf("Enter the power(In watt):");
            scanf("%f",&a);
            b=a/1000;
            printf("Correnponding power %.3f kw\n",b); 
			break;
		case 2:
            float c,d;
            printf("Enter the power(In kw):");
            scanf("%f",&c);
            d=c*1000;
            printf("Correnponding power %.3f watt\n",d); 	
		    break;
	    case 3:  
            float e,f;
            printf("Enter the power(In kcal per second):");
            scanf("%f",&e);
            f=4.184*e;
            printf("Correnponding power %.3f kw\n",f); 
			break;
	    case 4:  
            float g,h;
            printf("Enter the power(kw):");
            scanf("%f",&g);
            h=g/4.184;
            printf("Correnponding power %.3f kw\n",h); 
			break;
		
		default: printf("Invalid Choice"); 
		    
	}
	return 0;
}   

// definition of pressure function
int pressure(){
	int n;
	printf("Choose any conversion from the following:\n1.Bar To Standard Atmosphere\n2.Standard Atmosphere to Bar\n3.Bar to Milimeter of Mercury\n4.Milimeter of Mercury to Bar\n5.Bar to Kilopascal\n6.Kilopascal to Bar\n7.Bar to PSI\n8.PSI to Bar\n\n");
	scanf("%d",&n);
		switch (n){
		
		case 1:  
		    float a,b;
            printf("Enter the pressure(In Bar):");
            scanf("%f",&a);
            b=a*0.9869;
            printf("Correnponding pressure %.3f atm\n",b);
			break;
		case 2:	
		    float c,d;
            printf("Enter the pressure(In atm):");
            scanf("%f",&c);
            d=c/0.9869;
            printf("Correnponding pressure %.3f Bar\n",d);
		    break;
	    case 3:  
		    float e,f;
            printf("Enter the pressure(In Bar):");
            scanf("%f",&e);
            f=e*750.06;
            printf("Correnponding pressure %.3f mm of Hg\n",f);
			break;
	    case 4:  
			float g,h;
            printf("Enter the pressure(In mm of Hg):");
            scanf("%f",&g);
            h=g/750.06;
            printf("Correnponding pressure %f Bar\n",h);
			break;
		case 5:  
		    float i,j;
            printf("Enter the pressure(In Bar):");
            scanf("%f",&i);
            j=i*100;
            printf("Correnponding pressure %.3f Kpa\n",j);
			break;
		case 6:  
		    float k,l;
            printf("Enter the pressure(In Kpa):");
            scanf("%f",&k);
            l=k/100;
            printf("Correnponding pressure %.3f Bar\n",l);
			break;
		case 7:  
		    float m,n;
            printf("Enter the pressure(In Bar):");
            scanf("%f",&m);
            n=m*14.5;
            printf("Correnponding pressure %.3f PSI\n",n);
			break;
		case 8:
		    float o,p;
            printf("Enter the pressure(In Bar):");
            scanf("%f",&o);
            p=o/14.5;
            printf("Correnponding pressure %.3f PSI\n",p);
			break;
		default: printf("Invalid Choice"); 
		    
	}
	return 0;

}                                
