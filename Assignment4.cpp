#include<iostream>
using namespace std;
class operation
{
    int ad[20][20],visited[20],i,j,a,b,c=0,w,k,l,s=0;
public:

    void inser()
    {
        cout<<"Enter the no of vertices & edges\n";
        cin>>a>>b;
        if(a>b)
        {
            cout<<"Error\n";
        }
        else
        {
        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
            {
                ad[i][j]=0;
            }
        }
         for(i=0;i<b;i++)
         {
            cout<<"Enter edge\t Weight\n";
            cin>>k>>l>>w;
            ad[k][l]=w;
         }
         prims();
        }
    }
    void prims()
    {
        visited[0]=1;
        for(i=1;i<a;i++)
            visited[i]=0;
    while (c<a-1)
    {
       int min=9999,x=0,y=0;
       //for(i=0;i<a;i++)
        //{visited[i]=0;}
      for (int i = 0; i<a; i++)
        {
        if (visited[i]==1)
        {
            for (int j = 0; j <a; j++)
            {
                if (visited[j]==0 && ad[i][j])
                {
                  if (min > ad[i][j])
                    {
                      min = ad[i][j];
                      x = i;
                      y = j;
                    }
                }
            }
        }
      }
       s=s+ad[x][y];
      cout << x <<  " - " << y << " :  " << ad[x][y];
      cout << endl;
      visited[y]=1;
      c++;
    }
    cout<<"The total weight of Minimum spanning tree is "<<s<<endl;
    }
};
int main()
{
    operation op;
    op.inser();
}
