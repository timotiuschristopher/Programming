#include <stdio.h>
#include <math.h>

int main(){
	int prc;
	int p;
	int chg;
	int a, b, c, d, e, f, g;
	int mona, monb, monc, mond, mone, monf, mong;
	

	printf("Price (Rp): ");
	scanf("%d", &prc);
	printf("Pay (Rp): ");
	scanf("%d", &p);

	chg=p-prc;

	printf("Change (Rp): %d", chg);
	printf("\n");

	mona = chg/100000; //to know how many sheets

	b = chg-(mona*100000); //total change left after subtract with 100k sheets
	monb = b/50000;	

	c = b-(monb*50000);
	monc = c/20000;

	d = c-(monc*20000);
	mond = d/10000;

	e = d-(mond*10000);
	mone = e/5000;

	f = e-(mone*5000);
	monf = f/2000;

	g = f-(monf*2000);
	mong = g/1000;

	  	
	if(chg%100000 == 0){
		printf("%d of Rp 100k", mona);
	}
		else{
		if(b%50000 == 0){
		printf("%d of Rp 100k\n%d of Rp 50k", mona, monb);
		}
			else{
			if(c%20000 == 0){
			printf("%d Rp 100k\n%d of Rp 50k\n%d of Rp 20k", mona, monb, monc);
			}
				else{
				if(d%10000 == 0){
				printf("%d of Rp 100k\n%d of Rp 50k\n%d of Rp 20k\n%d of Rp 10k", mona, monb, monc, mond);
				}
					else{
					if(e%5000 == 0){
					printf("%d of Rp 100k\n%d of Rp 50k\n%d of Rp 20k\n%d of Rp 10k\n%d of Rp 5k", mona, monb, monc, mond, mone);
					}
						else{
						if(f%2000 == 0){						
						printf("%d of Rp 100k\n%d of Rp 50k\n%d of Rp 20k\n%d of Rp 10k\n%d of Rp 5k\n%d of Rp 2k", mona, monb, monc, mond, mone, monf);
						}
						else{
							printf("%d of Rp 100k\n%d of Rp 50k\n%d of Rp 20k\n%d of Rp 10k\n%d of Rp 5k\n%d of Rp 2k\n%d of Rp 1k", mona, monb, monc, mond, mone, monf, mong);
						}
					}
				}
			}
		}
	}

return 0;
}