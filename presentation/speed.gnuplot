#set terminal png font 'Helvetica,20' linewidth 2
set terminal pngcairo transparent size 1024,512 enhanced font 'Verdana,20' linewidth 1
set output "dev_speed.png"

f(x) = exp(-x**2 / 2)
g(x) = 0.8


# change a color of border.
set border lw 3 lc rgb "white"

# change text colors of  tics
set xtics textcolor rgb "white"
set ytics textcolor rgb "white"

# change text colors of labels
set xlabel "X" textcolor rgb "white"
set ylabel "Y" textcolor rgb "white"

# change a text color of key
set key textcolor rgb "white"

#set title "Cost of owning a mess"
set xlabel "Time" offset 0,3.5
set ylabel "Development speed"
set xtics format " " 
set ytics format " " 

set style line 1 linecolor rgb '#0060ad' linetype 1 linewidth 2
set style line 2 linecolor rgb '#f060ad' linetype 1 linewidth 2

plot [t=0:4] f(t) with lines linestyle 1 notitle, g(t) with lines linestyle 2 notitle
