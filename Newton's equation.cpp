#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
void inertia();
void equcation1();
void equcation2();
void equcation3();
int main(){
	int d;
	cout<<"what do you want\n"
       "press 1  moment of inertia\n"
       "press 2  equation of motion\n ";
        cout<<"what do you want to find\n";
        cin>>d;
        if(d==1){
		    inertia();
		}
		else if(d==2){
			int n;
			cout<<"Select one equation from  the equations of motions\n";
            cout<<"Press 1 for first equation of motion\n";
            cout<<"Press 2 for second equation of motion\n";
			cout<<"Press 3 for third equation of motion\n";
			cin>>n;
			if(n==1){
				equcation1();}
			else if(n==2){
				equcation2();	}
			else if(n==3){
				equcation3();	}	
			else
			cout<<"Invalide input\n";		
		}
		else
		    cout<<"Invalid input\n";
			return 0;}
	void inertia(){
		int r,h,b,l,y;
		char v;
		m:
        cout<<"Enter serial number of your choice.\n"
		<<"1.Circle.\n"
		<<"2.Triangle.\n"
		<<"3.Square.\n"
		<<"4.Rectangle.\n";
		cin>>y;
		if(y==1){
			cout<<"Please enter radius of circle.\n";
            cin>>r;
            cout<<"Moment of inertia for given circle is:"<<(3.14*r*r*r*r)/4<<" mm^4.\n";	
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>v;
			if(v=='n')
			goto m;	}
		else if(y==2){
			cout<<"Please enter height of right angle triangle.\n";
			cin>>h;
			cout<<"Please enter base of right angle triangle.\n";
			cin>>b;
			cout<<"Moment of inertia for given triangle is:"<<(b*h*h*h)/36<<" mm^4.\n";	
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>v;
			if(v=='n')
			goto m;}
		else if(y==3){
			cout<<"Please enter length of square.\n";
		    cin>>l;
		    cout<<"Moment of inertia of given square is:"<<(l*l*l*l)/12<<" mm^4.\n";	
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>v;
			if(v=='n')
			goto m;	}
		else if(y==4){
			cout<<"Please enter base of rectangle\n";
		    cin>>b;
		    cout<<"Please enter height of rectangle\n";
		    cin>>h;
		    cout<<"Moment of inertia of given rectangle is:"<<(b*h*h*h)/12<<" mm^4.\n";   
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>v;
			if(v=='n')
			goto m;	}		
		else{
		    cout<<"Invalid input\n";
		    cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>v;
			if(v=='n')
			goto m;    }	}
	void equcation1(){
		int n;
		Y:
		cout << "You choose first equation of motion\n"  
        "Vf=Vi+at\n"
        "Know what you want to find in first equation of motion\n"
        "press   0 for final velocity\n" 
        "press   1 for initial velocity\n"
        "press   2 for acceleration\n"   
        "press   3 for time \n";
		cin>>n;	
		int vi,a,t,vf;
		char q;
		if (n == 0){
            cout <<  " you want to find final velocity" << endl;
			cout <<  "Enter value of initial velocity\n ";
			cin >> vi;
			cout << "Enter value for acceleration\n";
			cin >> a;
			cout << "Enter value for  time\n";
			cin >> t;
			vf = vi + a*t;
			cout << "Final velocity=\n" << vf << endl;
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
			goto Y;  }
        else if (n == 1) {
		    cout << "you want to find initial velocity" << endl;
			cout << "Enter value of final velocity\n";
			cin >> vf;
			cout << "Enter value of acceleration\n";
			cin >> a;
			cout << "Enter value of time\n";
			cin >> t;
			vi = vf - a*t;                      
			cout << "initial velocity  =" << vi << endl;
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
			goto Y;    }
        else if (n == 2)  {
		    cout << "you want to find acceleration\n";
			cout << "Enter value of final velocity\n";
			cin >> vf;
			cout << "Enter value of initial velocity\n";
			cin >> vi;
			cout << "Enter value of time\n";
			cin >> t;
			a = (vf - vi) / t;        
			cout << " Acceleration is =" << a << endl;
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
			goto Y;     }
        else if (n == 3)  {
            cout << "you want to find time" << endl;
			cout << " enter value of final velocity\n";
			cin >> vf;
			cout << "enter value of initial velocity\n";
			cin >> vi;
			cout << "enter value of acceleration\n";
			cin >> a;
			t = (vf - vi) / a;          
			cout << " your time is=\n" << t << endl;
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
			goto Y;	}	  
		else{
		    cout<<"Invalid Input\n"; 
		    cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
			goto Y;	} }
	void equcation2(){
		char q;
		int vi,a,t,s,p,disc,n;
		z:
        cout << "you choose second equation of motion\n"
		" S=vi*t +(1/2)*a*t*t" << endl;
		cout << " What you want to find in second equation of motion\n";
		cout << "Press     0 for Distance\n"
                "          1 for initial velocity\n"  
                "          2 for time\n"  
                "          3 for acceleration\n";
		cin >> n;
		if (n == 0)  {
            cout << "You want to find distance\n";
			cout << "enter value of initial velocity\n";
			cin >> vi;
			cout << "enter value of time\n";
			cin >> t;
			cout << "enter value of acceleration\n";
			cin >> a;
			s = (vi*t) + ((1/2)*a*t*t);  
			cout << "your distance=" << s << endl;
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
				goto z;     }
        else if (n == 1) {
            cout << "You want to find initial velocity\n";
			cout << "enter value of distance\n";
			cin >> s;
			cout << "enter value of time\n";
			cin >> t;
			cout << "enter value of acceleration\n";
			cin >> a;
			vi = (s - (0.5*a*t*t))/ t;              
			cout << "your initial velocity=" << vi << endl;
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
				if(q=='n')
				goto z;  }
        else if (n == 2) {
            cout << "you want to find time\n";
            cout << "enter value of distance\n";
			cin >> s;
			cout << "enter value of initial velocity\n";
			cin >> vi;
			cout << "enter value of acceleration\n";
			cin >> a;
			disc = (vi*vi - 2*a*s);     
			if (disc < 0)   {
                t = (-vi) / 2 * 0.5*a;
				p = sqrt(-disc) / 2 * 0.5*a;
                cout << "your time=" << t << "+" << p<<"i"<<endl;  }
            else if (disc >= 0)  {
                t = (-vi - sqrt(disc)) / 2 * 0.5*a;
                cout << t << endl;  }
            cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
				if(q=='n')
				goto z;  }
		else if (n == 3) {
            cout << "you want to find accelration\n";
			cout << "enter value of distance\n";
			cin >> s;
			cout << "enter value of initial velocity\n";
			cin >> vi;
			cout << "enter value of time\n";
			cin >> t;
			a = ((s - vi*t) * 2) / t*t;        
			cout << "acceleration=" << a << endl;
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
				goto z;	}
		else{
			cout<<"Invalid input\n";
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
				goto z;		}			}	
		    
	void equcation3()	{
		int s,n,vi,vf,a,w;
		char q;
		x:
		cout << "\n" << "you choose third equation of motion\n" << endl;
		cout << "what do you want to find in third equation of motion???\n";
		cout << "press 0 for acceleration\n"   
	    "      1 for distance\n" 
	    "      2 for final velocity\n" 
	    "      3 for initial velocity\n";
		cin >> n;
		if (n == 0) {
            cout << "you want to find acceleration\n";
			cout << "enter value of distance\n";
			cin >> s;
			cout << "enter value of initial velocity\n";
			cin >> vi;
			cout << "enter value of final velocity\n";
			cin >> vf;
			a = (vf*vf - vi*vi) / 2 * s;                  
			cout << "acceleration=" << a << endl;
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
				goto x;  }
        else if (n == 1) {
            cout << "you want to find distance\n";
			cout << "enter value of acceleration\n";
			cin >> a;
			cout << "enter value of initial velocity\n";
			cin >> vi;
			cout << "enter value of final velocity\n";
			cin >> vf;
			s = (vf*vf - vi*vi) / 2 * a;        
			cout << "distance=" << s << endl;
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
				goto x;  }
        else if (n == 2)  {
            cout << "you want to find final velocity\n";
			cout << "enter value of acceleration\n";
			cin >> a;
			cout << "enter value of distane\n";
			cin >> s;
			cout << "enter value of initial velocity\n";
			cin >> vi;
			w = 2 * a*s - vi*vi;             
			if (w < 0)  {
                cout << "answer is imaginary calculator cant find put less value for vi";   }
            else   {
			   vf = sqrt(w);
			       cout << "final velocity=" << vf << endl;   }
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
				goto x;   }
        else if (n == 3)  {
            cout << "you want to find initial velocity\n";
			cout << "enter value of acceleration\n";
			cin >> a;
			cout << "enter value of distance\n";
			cin >> s;
			cout << "enter value of final velocity\n";
			cin >> vf;
			w = 2 * a*s - vf*vf;                          
			if (w < 0)   {
			    cout << "the roots are imaginary \n ";  }
            else  {
			    vi = sqrt(w);
				cout << "initial velocity=" << vi << endl;   }
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
				goto x;    }
		else{
			cout<<"Invalid input\n";
			cout<<"Do you wish to exit? 'Y' or 'N'.\n";
			cin>>q;
			if(q=='n')
				goto x;	}			}    
		    
		    
		    
		    
		    
		    
		    
		    
		    
		    
		    
		    
		    
