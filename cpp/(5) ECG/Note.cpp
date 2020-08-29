

//            			(Col 1:col 2)             			:($ = to blok the column)
  plot 'samples800LPF.csv' u 0:1 w l, 'samples800RR.csv' u 1:($2*10) with impulses


// to touch the peak
//                  					(to make line as the peak):
  plot 'samples800LPF.csv' u 0:1 w l, 'samples800RR.csv' u ($1-16):($2*10) with impulses

//set y range [1100:1500] replot
// HR=60/(R-R Interval)
// R-R Interval = one peak to another peak of R

//set yrange [1100:1500]    to restraint the y value