#include <bits/stdc++.h>
using namespace std;
map <pair<double,double>,bool>visited;
int n=20,m=21,count;
int main(){
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
			for (int k=0;k<n;k++)
				for (int l=0;l<m;l++)
					if(i==k)
						if (!visited[make_pair(1e9,i)]){
							count++;
							visited[make_pair(1e9,i)]=1;
						}
						
					else{
						double o=(j-l)*1.0/(i-k),p=(k*j-i*l)*1.0/(k-i);
						if (!visited[make_pair(o,p)]){
							count++;
							visited[make_pair(o,p)]=1;
						}
					}
	cout<<count<<endl;
	return 0;
}
