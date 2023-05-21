#include <iostream>
#include<cmath>
using namespace std;
class Point
{
private :
    int abscisse;
    int ordonnee;
public:
    Point();
    Point(int,int);
    void Affiche();
    int getAbscisse(){return abscisse;}
    int getOrdonne(){return ordonnee;}
    void setAbscisse(int x){abscisse=x;}
    void setOrdonne(int y){ordonnee=y;}
    Point Deplacer(int );
    Point Homothetie(int );
    double Distance(Point );
};
Point::Point()
{
    abscisse=0;
    ordonnee=0;
}
Point::Point(int x,int y)
{
    abscisse=x;
    ordonnee=y;
}
void Point::Affiche()
{
    cout<<"\n Abscisse= "<<abscisse<<" Ordonnee= "<<ordonnee;
}
Point Point::Deplacer(int n)
{
    int x,y;
    x=abscisse+n;
    y=ordonnee+n;
    Point p=Point(x,y);
    return p;
}
Point Point::Homothetie(int n)
{
    return (Point (abscisse*n, ordonnee*n));
}
double Point::Distance(Point v)
{
    int x,y;
    x = v.getAbscisse()-abscisse;
    y=v.getOrdonne()-ordonnee;
    return (sqrt(pow(x,2)+pow(y,2)));
}
int SaisirAbscisse()
{
    int a;
    cout<<"\n Entrer l'abscisse:";
    cin>>a;
    return a;
}
int SaisirOrdonne()
{
    int a;
    cout<<"\n Entrer l'ordonnee:";
    cin>>a;
    return a;
}
int SaisirDistance()
{
    int a;
    cout<<"\n Entrer la distance:";
    cin>>a;
    return a;
}
int main()
{
    cout << "Gestion d'un point!" << endl;
    int a,b;
    cout<<"\n Creation des points";
    a=SaisirAbscisse();
    b=SaisirOrdonne();
    Point p=Point(a,b);
    p.Affiche();
    cout<<"\n Deplacement d'un point";
    int c=SaisirDistance();
    Point p1 = p.Deplacer(c);p1.Affiche();
    cout<<"\n Homothethie d'un point";
    Point p2=p.Homothetie(c);p2.Affiche();
    cout<<"\n Distance entre deux points P1 et P2";
    double d=p1.Distance(p2);
    cout<<"\n La distance="<<d;
    return 0;
}
