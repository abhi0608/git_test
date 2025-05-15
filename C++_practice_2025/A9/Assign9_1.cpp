#include<iostream>
using namespace std;

class Matrix
{
    private:
        int A[3][3];
    public:
        void input()
        {
            cout<<"Enter 9 matrix elements row wise";
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    cin>>A[i][j];
                }
            }
        }
        void display()
        {
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    cout<<A[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix add(Matrix M)
        {
            Matrix temp;
            temp.A[i][j]=A[i][j]+M.A[i][j];
            return temp;
        }
        Matrix sub(Matrix M)
        {
            temp.A[i][j]=A[i][j]-M.A[i][j];
        }
        Matrix multiply(Matrix M)
        {
            Matrix temp;
            int sum;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    for(int k=0,sum=0;k<=2;k++)
                        sum+=A[i][k]*M.A[k][j];
                    temp.A[i][j]=sum;
                }
            }
            return temp;
        }
        Matrix transpose()
        {
            Matrix temp;
            int t;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    temp.A[j][i]=A[i][j];
                }
            }
            return temp;
        }
        
}
int main()
{

    return 0;
}
