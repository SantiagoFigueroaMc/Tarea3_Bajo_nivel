Cosas que funcionan:
	1. Leer instrucciones por consola y texto.
	2. Turnar a los jugadores.
	3. Comprobar que la pieza seleccionada sea valida:
		a. No sea un espacio el blanco el principio.
		b. Que el espacio final no sea una pieza del mismo equipo.
		c. La pieza seleccionada corresponde al jugador de turno.
	4. Comprobar que el movimiento sea valido:
		a. Que no hayan piezas del mismo equipo en el camino de los peones, torres, reina y alfiles.
		b. Que la posicion final se pueda alcanzar siguiendo las reglas clasicas del ajedrez.
			i.	
			ii.	Alfil.
			iii.Torre.
			iv.	Caballo.
			v.	Reina.
			vi.	Rey.
	5. Es robusto ante las siguientes entradas:
		a. Por consola:
			i.	Cualquier input. (incluyendo "hola mundo").
		b. Por texto:
			i.	Cualquier entrada tambien. +Indica la linea donde esta el error.
	6. Flags.
	7. Makefile.
	
Cosas que no funcionan:
	1. Reglas como Jaque Mate, jaque y enroque no estan programadas.
	2. El rey puede ir a una posicion en la que se encuentra en riesgo. Puede ponerse en jaque.
	3. 
