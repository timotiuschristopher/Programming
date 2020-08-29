#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int prc;
	int pay;
	int amount1;
	int amount2;
	int amount3;
	int amount4;
	int amount5;
	int amount6;
	int amount7;
	int chg,chg2;
	int mon;
	int serat = 100000;
	int limap = 50000;
	int duap = 20000;
	int zehn = 10000;
	int funf = 5000;
	int zwei = 2000;
	int eins = 1000;

	printf("Price: ");
	scanf("%d", &prc);
	printf("Pay: ");
	scanf("%d", &pay);

	chg=pay-prc;

	printf("Total change: %d", chg);

if(chg > 100000)
{
	chg2 = chg;
	if(chg2 >100000)
	{	
		amount1 = chg2/100000;
		chg2 = chg2-100000;
	}
	if(chg2 > 50000 && chg2 < 100000)
	{
		amount2 = chg2/50000;
		chg2 = chg2 - 50000;
	}
	if(chg2 > 20000 && chg2 < 50000)
	{
		amount3 = chg2/20000;
		chg2 = chg2 - 20000;
	}
	if(chg2 > 10000 && chg2 < 20000)
	{
		amount4 = chg2/10000;
		chg2 = chg2 - 10000;
	}
	if(chg2 > 5000 && chg2 < 10000)
	{
		amount5 = chg2/5000;
		chg2=chg2-5000;
	}
	if(chg2 > 2000 && chg2 < 5000)
	{
		amount6 = chg2/2000;
		chg2=chg2-2000;
	}
		amount7 = chg2/1000;
	// for(int i= chg; i< 100000; i=i-100000)
	// {
	// 	chg = i;
	// }
}
else
{
	chg2 = chg;
	if(chg2 > 50000 && chg2 < 100000)
	{
		amount2 = chg2/50000;
		chg2 = chg2 - 50000;
	}
	if(chg2 > 20000 && chg2 < 50000)
	{
		amount3 = chg2/20000;
		chg2 = chg2 - 20000;
	}
	if(chg2 > 10000 && chg2 < 20000)
	{
		amount4 = chg2/10000;
		chg2 = chg2 - 10000;
	}
	if(chg2 > 5000 && chg2 < 10000)
	{
		amount5 = chg2/5000;
		chg2=chg2-5000;
	}
	if(chg2 > 2000 && chg2 < 5000)
	{
		amount6 = chg2/2000;
		chg2=chg2-2000;
	}
	if(chg2 > 0 && chg2 < 2000)
	{
		amount7 = chg2/1000;
		chg2 = chg2 - 1000;
	}
}

cout << "CHANGE: \n";
cout << amount1 << " of 100 ribu" <<  endl;
cout << amount2 << " of 50 ribu" << endl;
cout << amount3 << " of 20 ribu" << endl;
cout << amount4 << " of 10 ribu" << endl;
cout << amount5 << " of 5 ribu" << endl;
cout << amount6 << " of 2 ribu" << endl;
cout << amount7 << "of seribu" << endl;
 
return 0;
 }