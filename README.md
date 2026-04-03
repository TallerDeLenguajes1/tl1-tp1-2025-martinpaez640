# tp1
# TP1 - Git y Gitignore
Este trabajo práctico tiene como objetivo entender el uso de Git y el archivo .gitignore
## Comenzando 
Estas instrucciones permiten obtener una copia del proyecto en la maquina local para su uso y analisis.
## Pre-requisitos 
* Tener Git instalado
* Tener acceso a GitHub
## Instalacion 
Clonar el repositorio:
git clone https://github.com/TallerDeLenguajes1/tl1-tp1-2025-martinpaez640.git
Ingresar a la carpeta del proyecto:
cd tl1-tp1-2025-martinpaez640
## Gitignore
#### ¿Que es .gitignore?
El archivo .gitignore se utiliza en Git para indicar que archivos o carpetas deben ser ignorados y no incluidos en el repositorio.
#### ¿Por que es conveniente incluirlo?
* Evita subir archivos innecesarios (temporales o de sistema)
* Mantiene el repositorio limpio y organizado
* Reduce el tamaño del proyecto
#### ¿Cuando se debe hacer?
Se recomienda crearlo al inicio del proyecto, antes de comenzar a subir archivos.
Sin embargo, tambien puede agregarse en cualquier momento si no se hizo previamente.
#### ¿Como se configura?
* Paso 1: Navegar hasta la raiz del repositorio.
* Paso 2: Crear el archivo .gitignore.
* Paso 3: Añadir patrones al archivo, donde cada linea representa un archivo o carpeta a ignorar.
* Paso 4: Agregar el archivo al repositorio para mantener consistencia.
#### Ejemplo de uso
Para ignorar un archivo especifico, se puede escribir su nombre dentro del archivo .gitignore:
ignorado.txt
Esto indica que el archivo "ignorado.txt" sera ignorado por Git y no se incluira en los commits.
## Autores 
Martin Paez
## Fuente
https://www.datacamp.com/es/tutorial/gitignore

## Sobre el codigo misterioso
* La funcion f_alpha, es una funcion en la cual sus parametros se pasan por referencia, usa operaciones como suma, divicion entera y optiene el resto con el operador "%". Finalmente la funcion tiene como finalidad recibir un numero para luego invertirlo, se elegieron nombres de variables convenientes num representa el número original que se va procesando, e inverso_num deja claro que almacena el resultado final invertido.
* La función f_beta recibe un puntero a un entero, por lo que trabaja por referencia y modifica directamente el valor original. Su finalidad es dividir el número almacenado en la dirección apuntada por 2, utilizando división entera
* La función f_gamma recibe un puntero a un entero y trabaja por referencia, modificando el valor original. Su finalidad es sumar al número inicial la suma de sus propios dígitos. Para ello, calcula dicha suma usando % y /, y luego la agrega al valor original. Los nombres numero y suma son descriptivos, ya que representan el valor a procesar y la acumulación de sus dígitos, respectivamente.
* La función procesar_enigma recibe un puntero a un entero, por lo que trabaja por referencia y modifica directamente el valor original. Su finalidad es aplicar una secuencia de transformaciones sobre el número: primero lo invierte mediante f_alpha, luego lo divide por 2 con f_beta, y finalmente le suma la suma de sus dígitos usando f_gamma. El nombre valor_referencia es descriptivo, ya que indica que se está trabajando directamente sobre el valor original a través de su dirección de memoria.
## Sobre el código sin funcionar
* En este código se encontraron los siguientes errores:

- Falta de inclusión de la biblioteca stdio.h, necesaria para usar printf y scanf; se solucionó agregándola al inicio.
- En la lectura de valor1 con scanf faltaba el operador de dirección (&), por lo que no se almacenaba correctamente el valor; se corrigió agregándolo.
- En la línea donde se calcula suma faltaba un punto y coma al final de la instrucción; se solucionó añadiéndolo.
- En la sentencia return 0 también faltaba el punto y coma; se corrigió agregándolo.
- La función duplicar_numero no modifica el valor original porque recibe el parámetro por valor; para que funcione correctamente debería recibir un puntero (pasaje por referencia).
