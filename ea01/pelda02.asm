Pelda02	Segment		            	;Szegmensdefinicio.
        assume cs:Pelda02,ds:Pelda02	;Cs es ds regiszterek beallitasa a szegmens elejere.
Start:  mov	ax,Pelda02	    	;A ds regiszter beallitasa.
        mov	ds,ax
        mov	ax,0b800h		;A kepernyomemoria szegmens-
        mov	es,ax			;cimet es regiszterbe tolti.
        mov	di,1146			;A di indexregiszterbe beallitja az offsetcimet.
        mov	al,"A"			;Al regiszterbe az "A" betu ascii kodjat tolti.
        mov	ah,7			;A betu szinet fekete alapon feher szinure allitja.
        mov	es:[di],ax		;Az es:di altal mutatott cimre irja ax tartalmat azaz
                			;a fekete alapon feher "A" betut.
        mov	ax,4c00h		;Kilepes a DOS-ba.
        int	21h
Pelda02	Ends				;A szegmens vege.
        End	Start			;A program vege