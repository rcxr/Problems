¡Acaba de terminar el **1er Concurso de Programación del Instituto Tecnológico de Pachuca** y los resultados ya están listos!

Sin embargo por ser la primer vez que se hace el concurso los resultados salieron en desorden. En vez de salir los nombres del primer lugar al último lugar, los resultados salieron revueltos.

¡Afortunadamente tú nos puedes ayudar! Lee la entrada, reconstruye la tabla de posiciones e imprímela en orden.

# Input

 - Un entero, $N$, indicando el número de concursantes
 - $N$ renglones. Cada renglón seguirá el formato `C P` donde:
   - $C$ representa el nombre del concursante (una sola palabra)
   - $P$ el nombre de quien quedó **un lugar arriba** en la tabla de posiciones, o `null` si el concursante quedó en primer lugar

## Notas

 - $1 \le N \le 100$
 - No hay concursantes con nombres repetidos
 - La entrada siempre generará una lista válida, no hay necesidad de validar la entrada

# Output

Los nombres de los $N$ concursantes del primer lugar al último separados por espacios.

# Ejemplos

||input
3
Luis Paco
Hugo null
Paco Hugo
||output
Hugo Paco Luis
||description
Hugo quedó en primer lugar por el renglón `Hugo null`. Paco va después por el renglón `Paco Hugo`. Luis va al final por el renglón `Luis Paco`
||input
3
Burbuja null
Bombon Bellota
Bellota Burbuja
||output
Burbuja Bellota Bombon
||description
Burbuja quedó en primer lugar por el renglón `Burbuja null`. Bellota va después por el renglón `Bellota Burbuja`. Bombon va al final por el renglón `Bombon Bellota`
||end
