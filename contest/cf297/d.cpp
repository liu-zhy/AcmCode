/*codeforces 525 D Arthur and Walls
  ���⣺
  ����һ��n*m�ı���������'*'��'.'��������ٵ�'*'�Ƴ�����ʹ��'.'���ڵ���ͨ���Ǿ��Ρ�
  ���ƣ�
  1 <= n,m <= 2000
  ˼·��
  2*2�ؿ��ǣ����2*2�ĸ�����ֻ��һ��'*'��˵�����'*'Ҫȥ�����������������ȥ����Ȼ��ȥ�����'*'���ֻ�������ĸ�������Ӱ�졣
  ���ӶȺ��ѹ��ơ�
 */
#include<iostream>
#include<cstdio>
using namespace std;
const int N=2005;
char str[N][N];
int n,m;
void gao(int x,int y){
	if(x==n-1 || y==m-1 || x<0 || y<0) return ;
	int tx,ty,s=0;
	for(int i=0;i<2;++i)
		for(int j=0;j<2;++j)
			if(str[x+i][y+j]=='*'){
				++s;
				tx=x+i;
				ty=y+j;
			}
	if(s==1){
		str[tx][ty]='.';
		for(int i=-1;i<1;++i)
			for(int j=-1;j<1;++j){
				gao(tx+i,ty+j);
			}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i)
		scanf("%s",str[i]);
	for(int i=0;i<n-1;++i)
		for(int j=0;j<m-1;++j){
			gao(i,j);
		}
	for(int i=0;i<n;++i)
		puts(str[i]);
	return 0;
}