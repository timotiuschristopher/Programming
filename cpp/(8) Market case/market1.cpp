#include <stdio.h>
#include <math.h>

int main(){
	int prc;
	int p;
	int chg;
	int b, c, d, e, f, g;
	int mona, monb, monc, mond, mone, monf, mong;
	

	printf("Price (Rp): ");
	scanf("%d", &prc);			//price input
	printf("Pay (Rp): ");
	scanf("%d", &p);			//pay input

	chg=p-prc;					//finding change value

	printf("Change (Rp): %d", chg);		//total change
	printf("\n");

	mona = chg/100000; 		//to know how many 100k sheets

	b = chg-(mona*100000); 	//total change left after subtract with 100k sheets
	monb = b/50000;			//how many 50k sheets

	c = b-(monb*50000); 	//total change left after subtract with 50k sheets
	monc = c/20000;			//how many 20k sheets

	d = c-(monc*20000); 	//total change left after subtract with 20k sheets
	mond = d/10000;			//how many 10k sheets

	e = d-(mond*10000); 	//total change left after subtract with 10k sheets
	mone = e/5000;			//how many 5k sheets

	f = e-(mone*5000); 		//total change left after subtract with 5k sheets
	monf = f/2000;			//how many 2k sheets

	g = f-(monf*2000); 		//total change left after subtract with 2k sheets
	mong = g/1000;			//how many 1k sheets

	  	
	if(chg%100000 == 0){					//if there isn't any value left, will directly stop here
	printf("%d of Rp 100k", mona);
	}
	
	else if(b%50000 == 0){									//if there isn't any value left, will directly stop here			
	printf("%d of Rp 100k\n%d of Rp 50k", mona, monb);		
	}

	else if(c%20000 == 0){													//if there isn't any value left, will directly stop here
	printf("%d Rp 100k\n%d of Rp 50k\n%d of Rp 20k", mona, monb, monc);
	}
	
	else if(d%10000 == 0){																			//if there isn't any value left, will directly stop here
	printf("%d of Rp 100k\n%d of Rp 50k\n%d of Rp 20k\n%d of Rp 10k", mona, monb, monc, mond);
	}
	
	else if(e%5000 == 0){																								//if there isn't any value left, will directly stop here
	printf("%d of Rp 100k\n%d of Rp 50k\n%d of Rp 20k\n%d of Rp 10k\n%d of Rp 5k", mona, monb, monc, mond, mone);
	}

	else if(f%2000 == 0){																													//if there isn't any value left, will directly stop here
	printf("%d of Rp 100k\n%d of Rp 50k\n%d of Rp 20k\n%d of Rp 10k\n%d of Rp 5k\n%d of Rp 2k", mona, monb, monc, mond, mone, monf);
	}

	else{																																					//if there isn't any value left, will directly stop here
	printf("%d of Rp 100k\n%d of Rp 50k\n%d of Rp 20k\n%d of Rp 10k\n%d of Rp 5k\n%d of Rp 2k\n%d of Rp 1k", mona, monb, monc, mond, mone, monf, mong);
	}
					
return 0;
}