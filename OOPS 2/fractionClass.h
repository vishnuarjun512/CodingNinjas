#include<iostream>
using namespace std;
class Fraction
{
    public:
        int num,den;
        

        Fraction(int a,int b){
            num=a;
            den=b;
        }

        void simplify(){
            int n=this->num;
            int d=this->den;

            int gcd=1;
            int m=min(n,d);
            for(int i=1;i<=m;i++)
            {
                if(n%i==0 && d%i==0)
                {
                    gcd=i;
                }
            }

            this->num=n/gcd;
            this->den=d/gcd;
        }
        
        Fraction operator*(Fraction f)
        {
            int n=this->num*f.num;
            int d=this->den*f.den;
            Fraction fNew(n,d);
            fNew.simplify();
            return fNew;
        }

        Fraction operator/(Fraction const &f)
        {
            Fraction fNew(this->num*f.den,this->den*f.num);
            fNew.simplify();
            return fNew;
        }

        Fraction operator+(Fraction const &f)
        {
            int d=this->den*f.den;
            int n=(this->num*f.den)+(this->den*f.num);
            Fraction fNew(n,d);
            fNew.simplify();
            return fNew;
        }

        bool operator==(Fraction const &f)
        {
            return (num==f.num && den==f.den);
        }

        //POST INCREMENT OPERATOR OVERLOADING
        // Normal increment
        // void operator++()
        // {
        //     this->num=(this->den*1)+this->num;
        //     simplify();
        // }
        Fraction& operator++()
        {
            num=num+den;
            simplify();
            return *this;
        }

        //PRE INCREMENT OPERATOR OVERLOADING
        Fraction operator++(int)
        {
            Fraction fNew(num,den);
            num=num+den;
            fNew.simplify();
            simplify();
            return fNew;
        }

        //+= Operator Overloading
        Fraction operator+=(Fraction const &f2){
            int d=this->den*f2.den;
            int n=(this->num*f2.den)+(this->den*f2.num);
            num=n;
            den=d;
            cout<<n<<" ";
            cout<<d<<" ";
            simplify();
            cout<<this->num<<" ";
            cout<<this->den<<" "<<endl;
            return *this;
            // Fraction fNew(n,d);
            // fNew.simplify();
            // return fNew;
        }

          Fraction operator*=(Fraction const &f2){
            this->den=this->den*f2.den;
            this->num=this->num*f2.num;
            cout<<this->num<<" ";
            cout<<this->den<<" ";
            simplify();
            return *this;
            // Fraction fNew(n,d);
            // fNew.simplify();
            // return fNew;
        }



        void display()
        { 
            cout<<num<<"/"<<den<<endl;
        }
};
