#Make


graph.pdf : Balondatos.dat plotsNicolasManriqueS10C2.py
	python plotsNicolasManrique_S10C2.py

Balondatos.dat : a.out classNicolasManriqueS10C2.cpp
	./a.out > Balondatos.dat

a.out : classNicolasManriqueS10C2.py
        g++ classNicolasManriqueS10C2.cpp
