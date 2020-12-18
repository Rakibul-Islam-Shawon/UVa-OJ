#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;
int total,test=1;
bool find(int key,vector<int>save)
 {

    for(int i=0; i<save.size(); i++)
        if(save[i]==key)
            return 1;

    return 0;
}

void bfs(int src,map<int,vector<int> >graph) 
{

    queue<int>Q;
    Q.push(src);
    int visited[105]= {0},level[105];
    visited[src]=1;
    level[src]=0;
    while(!Q.empty())
	 {
        int u=Q.front();
        total += level[u];
        for(int i=0; i<graph[u].size(); i++) 
		{
            int v=graph[u][i];
            if(!visited[v]) {
                level[v]=level[u]+1;
                visited[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    return ;
}

int main() {

    int a,b;
    double count;
    map<int,vector<int> >graph;
    vector<int>save;
    while(scanf("%d %d",&a,&b)==2)
	 {
        if(a==0 and b==0)
            return 0;
        save.push_back(a);
        save.push_back(b);
        graph[a].push_back(b);

        while(scanf("%d %d",&a,&b)) 
		{

            if(a==0 and b==0)
                break;
            if(!find(a,save))
                save.push_back(a);
            if(!find(b,save))
                save.push_back(b);


            graph[a].push_back(b);

        }
        sort(save.begin(),(save.begin()+save.size()));
        total=0,count=0;
        for(int i=0; i<save.size(); i++)
		{
            bfs(save[i],graph);
        }
        count = (save.size() * (save.size() - 1)); 
        printf("Case %d: average length between pages = %0.3lf clicks\n",test++,total/(float)count);
        save.clear();
        graph.clear();
    }

    return 0;
}
