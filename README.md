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
