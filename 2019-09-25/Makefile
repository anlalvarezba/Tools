CXXFLAGS=-0.2 #avtivate optimization level 2

all: suma.x datos.txt fig.pdf

suma.x: suma.cpp
	g++ $(CXXFLAGS) $< -o $@ #($ <)  lee suma.cpp "primera dependencia" pero ($ ^) toma todas las dependencias y ($ @)toma el suma.x

datos.txt : suma.x
	./suma.x > datos.txt

fig.pdf : plot.gp datos.txt
	gnuplot $<

.PHONY: clean
clean:
	rm -f suma.x datos.txt fig.pdf 

