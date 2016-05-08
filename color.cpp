#include<iostream>
#include<queue>
#include<cstdlib>
#include<list>
using namespace std;
queue<int>value;
class ColouringGraph
{
public:
    list<int >*vertex;
    list<int>::iterator i;
    int numvertex;
    int colour;
    int *setcolour;
    int *mark;
    ColouringGraph(int n)
    {
        numvertex=n;
        colour=0;
        mark=new int[numvertex+1];
        setcolour=new int[numvertex+1];

        for(int i=1;i<=numvertex;i++)
        {
            mark[i]=0;
            setcolour[i]=-1;
        }
        vertex=new list<int>[numvertex+1];
    }

    void setedge(int t)
    {
        int p=t,r,s;
        while(p--)
        {
            cin>>r>>s;
             vertex[r].push_back(s);
             vertex[s].push_back(r);

        }
    }

    void DoColour(int m)
    {
        value.push(m);
        while(!value.empty())
        {
            int v,j;
            v=value.front();
            value.pop();
            mark[v]=1;
      for(i =vertex[v].begin(); i != vertex[v].end(); ++i)
        {
                if(mark[*i]==0)
                {
                value.push(*i);
                mark[*i]=1;
                }
            }

            for(j=0;j<=colour;j++)
            {
                if(iscolour(v,j))
                {
                    setcolour[v]=j;
                    break;
                }
                       }
            if(j==colour)
            {
                colour++;
               // cout<<"colour is increasing in "<<v<<endl;
            }

        }
                }

     void isallcoloured()
     {
         for(int i=1;i<=numvertex;i++)
         {
             if(mark[i]==0)DoColour(i);
          }

         // cout<<"number of colour is "<<colour<<endl;
     }



    bool iscolour(int v,int k)
    {
      for(i =vertex[v].begin(); i != vertex[v].end(); ++i)
        {
            if(setcolour[*i]==k)return false;
        }

        return true;
    }

    void result()
    {
        if(colour<=2)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    };

    int main()
    {

    int m,n;
    cin>>m>>n;
    ColouringGraph ob(m);
    ob.setedge(n);
    ob.DoColour(1);
    ob.isallcoloured();
    ob.result();


    return 0;
    }
