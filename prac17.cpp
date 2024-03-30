#include<iostream>
using namespace std;
class grades{
public:
    double marks[5][5];
    double average[5][1];
    void Grades()
    {
        for (int i = 0; i < 5; i++)
        {
            cout<<"Student:"<<i+1<<endl;
            for (int j = 0; j < 5; j++)
            {
                cout<<"Enter marks of subject:"<<j+1<<endl;
                cin>>marks[i][j];
            }
        }
    }
};
class cmarks:public grades {
public:
    void Calc(double score[5][5]) {
        for (int i = 0; i < 5; i++) {
            double student = 0;
            for (int j = 0; j < 5; j++) {
                student = student + marks[i][j];
            }
            average[i][0] = student / 5;
        }
    }
};
class smarks:public cmarks
{
public:
    void Average()
    {
        cout<<"average is :"<<endl;
        for (int k = 0; k < 5; k++)
        {
            cout<<"Student."<<k+1<<":\t"<<average[k][0]<<endl;
        }
        cout<<endl;
    }
};
class bmarks:public smarks
{
public:
    double sorted[5][1];
    void sort(double average[5][1])
    {
        for (int j = 0; j < 5; j++)
        {
            sorted[j][0] = average[j][0];
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (sorted[i][0] > sorted[j][0])
                {
                    double temp = sorted[i][0];
                    sorted[i][0] = sorted[j][0];
                    sorted[j][0] = temp;
                }
            }
        }
        cout<<endl<<"bad students:"<<endl;
     for(int k=0;k<3;k++)
     {
         cout<<"Student. "<<k+1<<" :\t"<<sorted[k][0];
     }
        cout<<endl<<"good students:"<<endl;
        for(int k=4;k>1;k--)
        {
            cout<<"Student. "<<k+1<<" :\t"<<sorted[k][0];
        }
    }
};
int main()
{
    bmarks avg;
    avg.Grades();
    avg.Calc(avg.marks);
    avg.Average();
    avg.sort(avg.average);
}