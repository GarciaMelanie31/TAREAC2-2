# 🗂 PROYECTO FINAL
Se refleja una detalla documentaciòn de la ACTIVIDAD C2-2 en la cual se muestra un pequeño programa en C++ que nos permite recopilar los datos de una determinada persona implemantando el uso de clases y objetos.

### PARTICIPANTES 📝
El programa esta compuesto por dos archivos uno de extension .cpp (PRINCIPALC2-2) y otro de extension .h (SECUNDARIO).
- Garcìa Wila Melanie

_Cree el archivo .cpp (PRINCIPALC2-2) donde declare las variables a utilizar, el menù de opciones y la funciòn para llamar a las  funciones del archivo .h (SECUNDARIO). Luego en el archivo .h declare las lìneas de còdigo que permiten la ejecuciòn de la primera opciòn 1 del menù la cual nos indica que se debe ingresar y mostrar los datos de una persona._
- Contreras Montaño Luis 

_En el archivo .cpp declare la funciòn que permite llamar a la funciòn del archivo .h la cual contiene el debido proceso para realizar la ejecuciòn de la opciòn 2 la cual nos indica que se debe mostrar la edad de la persona._ 
- Manzaba Escalante Moisès

_En el archivo .cpp declare la funciòn que permite llamar a la funciòn del archivo .h la cual contiene el proceso para que se realice la ejecuciòn de la opciòn 3 la cual nos indica que se debe mostrar el ìndice corporal de la persona y mostrar un mensaje de acuero al resultado obtenido._
- Muzo Llumiquinga Cesar

_En el archivo .cpp declare la funciòn que permite llamar a la funciòn del archivo .h la cual contiene el proceso para que se realice la ejecuciòn de la opciòn 4 la cual nos indica que se debe guardar los datos de la persona en un archivo.txt._ 
- Ramirez Perea Jonathan

_En el archivo .cpp declare la funciòn que permite llamar a la funciòn del archivo .h la cual contiene el proceso para que se realice la ejecuciòn de la opciòn 5 la cual nos indica que se debe recuperar los datos de la persona desde el archivo.txt._ 

### COMPOSICIÒN 📖

La ACTIVIDAD C2-2 está compuesta por dos archivos uno de extensión .cpp al cual lo denominamos  PRINCIPALC2-2.cpp y otro de extensión .h al cual lo denominamos SECUNDARIO.h.

- Un archivo **.cpp** es un archivo de código fuente escrito en C++ que  agrega características como la programación orientada objetos a C. puede ser un programa independiente o un implemento de archivos en un proyecto de desarrollo. Loa archivos CPP deben ser compilados por un compilador C++, existen programas que abren archivos CPP como:
![image](https://user-images.githubusercontent.com/86171662/126726263-78f5ba1b-a2c8-418c-b2be-1264d8014915.png) ![image](https://user-images.githubusercontent.com/86171662/126726275-3f9bebb1-c604-41fe-bbfa-0ff387403d8b.png) ![image](https://user-images.githubusercontent.com/86171662/126726285-ccfee5ee-d25c-4b72-8d8a-08a6552ab779.png)

- Un archivo **.h** es aquel que contribuye un buen método para externalizar las funciones utilizadas a menudo. Algunos programas que admiten la extensión de archivo .h son:
![image](https://user-images.githubusercontent.com/86171662/126726410-4b942e37-0ca5-4a7b-b5ec-1d5e0c809cb2.png) ![image](https://user-images.githubusercontent.com/86171662/126726424-8ff6bd01-f2a0-4a5c-9b99-992b2fa9bb9c.png) ![image](https://user-images.githubusercontent.com/86171662/126726436-18c4e836-66b9-4ebc-bad0-25ca6ff551ad.png)

**DESCRIPCIÒN DE CADA ARCHIVO** 

**Nombre del archivo:** PRINCIPALC2-2.cpp
**Nombre de la clase:** Persona (class person)
**FUNCIÒN IMPLEMENTADA:** 
**1. int main**
La función **int main** es la función principal del programa ya que es el punto de partida para la ejecución del programa. Esta función controla la ejecución del programa dirigiendo las llamadas a otras funciones del mismo. 
**2. system**
La funciòn **system** ejecuta subprocesos o comandos del sistema operativo.

**Nombre del archivo:** SECUNDARIO.h
**Nombre de la clase:** Persona (class person)
**FUNCIÒN IMPLEMENTADA:**
**1. void**
La función **void** es una función nula que indica que no retorna valores 

### DESCRIPCIÒN 📋

**Nombre del archivo:** PRINCIPALC2-2.cpp
**Nombre de la clase:** Persona

**EVENTOS O FUNCIONES IMPLEMENTADAS**

**LIBRERÌAS**
**iostream.-** Sirve para tener acceso a los dispositivos estándar entrada/salida (cin, cout, getline...)
**stdlib.h.-** Tienes los prototipos de las funciones para gestionar la memoria dinámica, contralar procesos, etc.
**string.h.-** Manipula cadenas: copiar, cambiar caracteres, comparar cadenas, etc.
**malloc.h.-** Sirve para solicitar un bloque de memoria del tamaño requerido como parámetro.
**fstream.-** Librería requerida para abrir y cerrar archivos.txt también para realizar operaciones de lectura y escritura de datos en archivos.txt.
**using namespace std; .-** Da acceso al espacio de nombres std, es donde se encuentra encerrada toda la librería. 
**include "SECUNDARIO.h”.-** Sirve para hacer el llamado al archivo de extensión .h (SECUNDARIO.h)
  
**FUNCIONES**
**int main.-** es la función principal del programa ya que es el punto de partida para la ejecución del programa. Esta función controla la ejecución del programa dirigiendo las llamadas a otras funciones del mismo. 
**system.-** Ejecuta subprocesos o comandos del sistema operativo.
  
**ESTRADAS/SALIDAS STÀNDAR**
**cout.-** Permite mostrar por pantalla cualquier tipo de dato o mensaje con el operador <<.
**cin.-** Se utiliza para introducir datos con el operador >>.
**endl.-** Significa salto de línea es utilizado para dar más estaca o presentación de los datos que se imprimen.
  
**TIPOS DE DATOS O VARIABLES**
**int.-** Se utiliza para declarar números enteros ya sean positivo o negativo (-1, 2, 3, 9, 56,100…)
**float.-** Sirve para declarar números decimales (1.20, 5.3, 8.5, 65.2…)
  
**CONDICIONALES**
**switch.-** Permite declarar múltiples casos que llegan a cumplir una variable cualquiera.
**if.-** Posibilita definir las acciones a ejecutarse si se cumple una condición determinada.
  
**SENTENCIAS** 
**return.-** Se utiliza para una salida inmediata o para devolver un valor.
**case.-** Crea una etiqueta para evaluar un caso que se compara con la expresión que recibe switch.
**break.-** Detiene la ejecución de un bucle y salirse de él.
  
**Nombre del archivo:** SECUNDARIO.h
**Nombre de la clase:** Persona
**EVENTOS O FUNCIONES IMPLEMENTADAS**

**class.-** es la colección de variables (atributos) y funciones (métodos) que permiten un conjunto de datos y especificar sus procesos que permiten manipular dichos datos.
**private.-** Los métodos y campos de una clase declarados en private no son accesibles fuera de la unidad donde se declare dicha clase.
**public.-** Los métodos y campos de una clase declarados en public son libre de acceso desde cualquier otro lugar de un programa.
  
**TIPOS DE DATOS O VARIABLES**
**string.-** Se utiliza para declarar una cadena de caracteres alfabéticos (nombres, frases, etc)
**int.-** Se utiliza para declarar números enteros ya sean positivo o negativo (-1, 2, 3, 9, 56,100…)
**float.-** Sirve para declarar números decimales (1.20, 5.3, 8.5, 65.2…)
  
**FUNCIONES**
**void.-** es una función nula que indica que no retorna valores 
**system.-** Ejecuta subprocesos o comandos del sistema operativo.
  
**CONDICIONALES**
**else.-** Permite determinar qué acción tomar expuesta una condición.
**if.-** Posibilita definir las acciones a ejecutarse si se cumple una condición determinada.
  
**ESTRADAS/SALIDAS STÀNDAR**
**cout.-** Permite mostrar por pantalla cualquier tipo de dato o mensaje con el operador <<.
**cin.-** Se utiliza para introducir datos con el operador >>.
**endl.-** Significa salto de línea es utilizado para dar más estaca o presentación de los datos que se imprimen. 
**getline.-** Permite dar un salto de lineo o un espacio entre dos caracteres.
  
**SENTENCIAS** 
**break.-** Detiene la ejecución de un bucle y salirse de él.
**return.-** Se utiliza para una salida inmediata o para devolver un valor.

### INSTALACIÒN 🔧

### EJECUCIÒN ⚙️
