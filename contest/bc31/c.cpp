#include<iostream>
#include<cstdio>
using namespace std;
int ans[15][16]={
	2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	5,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,
	35,72,36,6,0,0,0,0,0,0,0,0,0,0,0,0,
	314,940,702,192,24,0,0,0,0,0,0,0,0,0,0,0,
	6427,20953,18778,6528,1200,120,0,0,0,0,0,0,0,0,0,0,
	202841,724224,766278,310368,63000,8640,720,0,0,0,0,0,0,0,0,0,
	12727570,45687569,51049098,22486656,4751400,648000,70560,5040,0,0,0,0,0,0,0,0,
	355115594,736342192,480159099,593158322,564699600,71527200,7161840,645120,40320,0,0,0,0,0,0,0,
	718817248,766062498,551790315,804772379,958725252,916206996,91739593,85155840,6531840,362880,0,0,0,0,0,0,
	789281595,29367309,234810099,689850602,160354814,575223606,565338593,166965641,87551353,72576000,3628800,0,0,0,0,0,
	245046738,212490784,527909966,404618207,648188905,539918379,532542087,165451585,428944600,878079902,878169600,39916800,0,0,0,0,
	681555006,278546674,315035573,624869750,794507062,84429000,792648481,661448548,160683200,93278547,346974481,496038323,479001600,0,0,0,
	413451720,259920010,496775457,225920769,842092390,332550368,221710589,232620660,166171087,462729811,955852083,835265947,902539673,227020758,0,0,
	571703274,654602013,270251289,900887757,942422378,974702258,610771898,46596778,844659211,467836761,298284961,960033762,424915175,992136520,178290591,0,
	7017421,361818480,635021015,633194321,924790619,16861446,556906023,606568231,432184532,717658304,181068670,990596447,108561136,862468715,230765390,674358851};
int main(){
	int T;
	int n,k;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&n,&k);
		printf("%d\n",ans[n-1][k]);
	}
	return 0;
}