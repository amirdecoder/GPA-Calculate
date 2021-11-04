// by     amirdecoder

#include <iostream.h>
#include <conio.h>

struct s
{
    char name[10];
    int d1,d2,d3;
    int vd1,vd2,vd3;
    float avg;
};
int main()
{

    s p[10];
    s d[2];
    int i,j,l=0,P=0,K=0,mx=0,mn=0;
    for(i=0;i<4;i++)
        {
            cout<<"Enter a Name";
            cin>>p[i].name;
            cout<<"Enter  Nomreh Dars 1 And Vahed Dars1";
            cin>>p[i].d1>>p[i].vd1;
            cout<<"Enter  Nomreh Dars 2 And Vahed Dars2";
            cin>>p[i].d2>>p[i].vd2;
            cout<<"Enter  Nomreh Dars 3 And Vahed Dars3";
            cin>>p[i].d3>>p[i].vd3;
            l=(p[i].vd1)+(p[i].vd2)+(p[i].vd3);
             p[i].avg=((p[i].d1*p[i].vd1)+(p[i].d2*p[i].vd2)+(p[i].d3*p[i].vd3))/l;

        }



       for(i=0;i<4;++i)
            for(j=i+1;j<4;++j)
         {
          if(p[i].avg>mx)
            K=i;
            mx=p[i].avg;
         }
          for(i=0;i<4;++i)
            for(j=i+1;j<4;++j)
         {
          if(p[i].avg<mn)
            P=i;
            mn=p[i].avg;
         }
         cout<<"Max:";
         cout<<p[K].name;
         cout<<p[K].avg<<"\n";
         cout<<"Min:"<<"\n";
         cout<<p[P].name;
	 cout<<p[P].avg<<"\n";
	 getch();
    return 0;
}
