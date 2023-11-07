#include <iostream>

using namespace std;

int main()
{
    cout<<"*****"<<endl;
    cout<<"SGPA CALCULATOR CREATED BY Swapnadeep Chakraborty"<<endl;
int ele,phy,mech,eng,evs,math,lb,pb,wsp,y,x,z,a,b,c,d,e,f,eng2,bee,cp,ec,ed,math2,beelab,clab,cplab,y1,z1,x1,b1,a1,c1,d1,e1,f1;
int i;
float g,g1;
cout<<"Group 1 for branches:"<<endl<<"1.Chemical 2.Mechanical 3.Civil 4.Mettalurgy"<<endl<<"Group 2 for branches:"<<endl<<"1.CSE 2.IT 3.ECE 4.ELE"<<endl;

cout<<"Enter you group no."<<endl;
cin>>i;
switch(i)
{case 1:
cout<<"Enter marks in Elements of Mechanical Engg "<<endl;
cin>>ele;
cout<<"Enter marks in Engineering Physics "<<endl;
cin>>phy;
cout<<"Enter marks in Engineering Mechanics "<<endl;
cin>>mech;
cout<<"Enter marks in English "<<endl;
cin>>eng;
cout<<"Enter marks in Environmental Studies "<<endl;
cin>>evs;
cout<<"Enter marks in Math "<<endl;
cin>>math;
cout<<"Enter marks in Language lab "<<endl;
cin>>lb;
cout<<"Enter marks in Physics lab "<<endl;
cin>>pb;
cout<<"Enter marks in Workshop practice "<<endl;
cin>>wsp;
if(ele>=91)
 y=10*3;
else if(ele>=81 && ele<91)
y=9*3;
else if(ele>=71 && ele<81)
y=8*3;
else if(ele>=61 && ele<71)
y=7*3;
else if(ele>=51 && ele<61)
y=6*3;
else if(ele>=41 && ele<51)
y=5*3;
else
y=0;
if(phy>=91)
 x=10*4;
else if(phy>=81 && phy<91)
x=9*4;
else if(phy>=71 && phy<81)
x=8*4;
else if(phy>=61 && phy<71)
x=7*4;
else if(phy>=51 && phy<61)
x=6*4;
else if(phy>=41 && phy<51)
x=5*4;
else
x=0;
if(mech>=91)
 z=10*4;
else if(mech>=81 && mech<91)
z=9*4;
else if(mech>=71 && mech<81)
z=8*4;
else if(mech>=61 && mech<71)
z=7*4;
else if(mech>=51 && mech<61)
z=6*4;
else if(mech>=41 && mech<51)
z=5*4;
else
z=0;
if(evs>=91)
 b=10*3;
else if(evs>=81 &&evs<91)
b=9*3;
else if(evs>=71 && evs<81)
b=8*3;
else if(evs>=61 && evs<71)
b=7*3;
else if(evs>=51 && evs<61)
b=6*3;
else if(evs>=41 && evs<51)
b=5*3;
else
b=0;
if(eng>=91)
 a=10*3;
else if(eng>=81 && eng<91)
a=9*3;
else if(eng>=71 && eng<81)
a=8*3;
else if(eng>=61 && eng<71)
a=7*3;
else if(eng>=51 && eng<61)
a=6*3;
else if(eng>=41 && eng<51)
a=5*3;
else
a=0;
if(math>=91)
 c=10*4;
else if(math>=81 && math<91)
c=9*4;
else if(math>=71 && math<81)
c=8*4;
else if(math>=61 && math<71)
c=7*4;
else if(math>=51 && math<61)
d=6*4;
else if(math>=41 && math<51)
c=5*4;
else
c=0;
if(pb>=91)
 d=10*1;
else if(pb>=81 && pb<91)
d=9*1;
else if(pb>=71 && pb<81)
d=8*1;
else if(pb>=61 && pb<71)
d=7*1;
else if(pb>=51 && pb<61)
d=6*1;
else if(pb>=41 && pb<51)
d=5*1;
else
d=0;
if(lb>=91)
 e=10*1;
else if(lb>=81 && lb<91)
e=9*1;
else if(lb>=71 && lb<81)
e=8*1;
else if(lb>=61 && lb<71)
e=7*1;
else if(lb>=51 && lb<61)
e=6*1;
else if(lb>=41 && lb<51)
e=5*1;
else
e=0;
if(wsp>=91)
 f=10*2;
else if(wsp>=81 &&wsp<91)
f=9*2;
else if(wsp>=71 && wsp<81)
f=8*2;
else if(wsp>=61 && wsp<71)
f=7*2;
else if(wsp>=51 && wsp<61)
f=6*2;
else if(wsp>=41 && wsp<51)
f=5*2;
else
f=0;
g= (float)(x+y+z+a+b+c+d+e+f)/25;
cout<<"Your SGPA in 2nd sem is "<<g<<endl;
break;


case 2:
cout<<"Enter marks in English "<<endl;
cin>>eng2;
cout<<"Enter marks in BEE "<<endl;
cin>>bee;
cout<<"Enter marks in Computer Programming "<<endl;
cin>>cp;
cout<<"Enter marks in Engineering Chemistry "<<endl;
cin>>ec;
cout<<"Enter marks in Engineering Drawing "<<endl;
cin>>ed;
cout<<"Enter marks in Mathematics "<<endl;
cin>>math2;
cout<<"Enter marks in Bee Lab "<<endl;
cin>>beelab;
cout<<"Enter marks in Chemistry lab "<<endl;
cin>>clab;
cout<<"Enter marks in Computer programming lab "<<endl;
cin>>cplab;
if(eng2>=91)
 y1=10*3;
else if(eng2>=81 && eng2<91)
y1=9*3;
else if(eng2>=71 && eng2<81)
y1=8*3;
else if(eng2>=61 && eng2<71)
y1=7*3;
else if(eng2>=51 && eng2<61)
y1=6*3;
else if(eng2>=41 && eng2<51)
y1=5*3;
else
y1=0;
if(bee>=91)
 x1=10*4;
else if(bee>=81 && bee<91)
x1=9*4;
else if(bee>=71 && bee<81)
x1=8*4;
else if(bee>=61 && bee<71)
x1=7*4;
else if(bee>=51 && bee<61)
x1=6*4;
else if(bee>=41 && bee<51)
x1=5*4;
else
x1=0;
if(ec>=91)
 z1=10*4;
else if(ec>=81 && ec<91)
z1=9*4;
else if(ec>=71 && ec<81)
z1=8*4;
else if(ec>=61 && ec<71)
z1=7*4;
else if(ec>=51 && ec<61)
z1=6*4;
else if(ec>=41 && ec<51)
z1=5*4;
else
z1=0;
if(cp>=91)
 b1=10*3;
else if(cp>=81 && cp<91)
b1=9*3;
else if(cp>=71 && cp<81)
b1=8*3;
else if(cp>=61 && cp<71)
b1=7*3;
else if(cp>=51 && cp<61)
b1=6*3;
else if(cp>=41 && cp<51)
b1=5*3;
else
b1=0;
if(ed>=91)
 a1=10*4;
else if(ed>=81 && ed<91)
a1=9*4;
else if(ed>=71 && ed<81)
a1=8*4;
else if(ed>=61 && ed<71)
a1=7*4;
else if(ed>=51 && ed<61)
a1=6*4;
else if(ed>=41 && ed<51)
a1=5*4;
else
a1=0;
if(math2>=91)
 c1=10*4;
else if(math2>=81 && math2<91)
c1=9*4;
else if(math2>=71 && math2<81)
c1=8*4;
else if(math2>=61 && math2<71)
c1=7*4;
else if(math2>=51 && math2<61)
c1=6*4;
else if(math2>=41 && math2<51)
c1=5*4;
else
c1=0;
if(beelab>=91)
 d1=10*1;
else if(beelab>=81 && beelab<91)
d1=9*1;
else if(beelab>=71 && beelab<81)
d1=8*1;
else if(beelab>=61 && beelab<71)
d1=7*1;
else if(beelab>=51 && beelab<61)
d1=6*1;
else if(beelab>=41 && beelab<51)
d1=5*1;
else
d1=0;
if(clab>=91)
 e1=10*1;
else if(clab>=81 && clab<91)
e1=9*1;
else if (clab>=71 && clab<81)
e1=8*1;
else if(clab>=61 && clab<71)
e1=7*1;
else if(clab>=51 && clab<61)
e1=6*1;
else if(clab>=41 && clab<51)
e1=5*1;
else
e1=0;
if(cplab>=91)
 f1=10*1;
else if(cplab>=81 && cplab<91)
f1=9*1;
else if(cplab>=71 && cplab<81)
f1=8*1;
else if( cplab>=61 && cplab<71)
f1=7*2;
else if(cplab>=51 && cplab<61)
f1=6*2;
else if(cplab>=41 && cplab<51)
f1=5*2;
else
f1=0;
g1= (float)(x1+y1+z1+a1+b1+c1+d1+e1+f1)/25;
cout<<"Your SGPA in Second sem is "<<g1<<endl;
break;
    default:cout<<"Wrong group no."<<endl;
}
float h;
cout<<"Enter SGPA of Ist sem"<<endl;
cin>>h;
cout<<"Your overall CGPA for Ist year is"<<endl;
if(g>0)
{cout<< float (g+h)/2;}
else
cout<<(float) (g1+h)/2;
cout<<"Press any key to exit";

    return 0;
}
