# The Abstraction: Address Spaces #

En esta tarea, aprenderemos sobre unas herramientas utiles para examinar el uso de memoria virtual de sistemas basados en linux. 
Esto solo serÃ¡ una breve pista de lo que es posible; será necesario sumergirse más profundamente para convertirte verdaderamente 
en un experto (¡Como siempre!).

## Preguntas ##

1. La primera herramienta que analizaremos se una herramienta muy simple, ```free```. Primero, abra una terminal de linux y 
teclee ```man free```, lea su manual entero; es breve, no se preocupe! ¿Para que sirve este comando?. **Nota**: Puede apoyarse en 
material web para entender la herramienta mediante ejemplos.

2. Ahora, ejecute ```free``` usando algunos argumentos que podrían ser útiles (por ejemplo, ```-m```, para mostrar 
la cantidad total de memoria en megabytes). Cuanta memoria hay en su sistema?, ¿Cuanta esta libre? 
¿Son estos valores los que usted esperaba?

3. A continuación, cree un pequeño programa que use cierta cantidad de memoria, llamado ```memory-user.c```. 
Este programa debe tomar un argumento por linea de comandos: el número de megabytes de memoria que usted usará. 
Cuando lo ejecute, el programa debe separar memoria para un arreglo (vector) y recorrer el arreglo, 
accediendo consecutivamente a cada entrada. El programa deberá hacer esto indefinidamente o, 
por lo menos, por una cierta cantidad de tiempo especificada tambien por línea de comandos.

4. Ahora, mientras corra su programa ```memory-user.c```, ejecute la herramienta ```free``` (en una terminal diferente, 
pero en la misma máquina). ¿Cómo cambia el uso total de memoria cuando su programa está corriendo?,
¿Qué pasa cuando se finaliza el programa memory-user (comando kill)?, ¿coinciden los valores con lo que usted esperaba? 
Intente esto para diferentes cantidades de uso de memoria. ¿Qué pasa cuando usted usa cantidades de memoria realmente grandes?

5. Ahora veremos una herramienta más conocida como ```pmap```. Invierta algo de tiempo para leer el manual de ```pmap``` 
en detalle. ¿Cual es la diferencia de ```pmap``` con ```free```?

6. Para usar pmap, usted tiene que conocer el identificador de proceso (PID) del proceso en el que usted está intereado. 
Por lo tanto, primero ejecute ```ps auxw``` para ver una lista con todos lo procesos; entonces, 
seleccione alguno de su interés tal como un browser. Usted también puede usar su programa memory-user en este caso 
(de hecho, usted puede hacer que ese programa llame a ```getpid()``` para imprimir su PID para su conveniencia).

7. Ahora ejecute ```pmap``` en alguno de estos procesos usando varias flags (como ```-X```) para revelar más detalles 
acerca del proceso. ¿Qué puede ver? ¿Cuantas entidades diferentes conforman un espacio de direcciones moderno, a diferencia de 
nuestra simple concepción de code/stack/heap?

8. Finalmente, ejecute ```pmap``` para su programa memory-user, con diferentes cantidades de memoria usada. ¿Qué puede ver en este caso? 
¿La salida de ```pmap``` es siempre la que usted espera?

## Referencias ##

1. http://u.cs.biu.ac.il/~linraz/os/OS3.pdf
2. https://www.ostechnix.com/run-command-specific-time-linux/
3. http://u.cs.biu.ac.il/~linraz/os/OS4.pdf
4. http://u.cs.biu.ac.il/~linraz/os/OS5.pdf
