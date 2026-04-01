# tp1
##### Gitignore 
#### ¿Que es .gitignore?
El archivo .gitignore se utiliza en Git para indicar que archivos o carpetas deben ser ignorados y no incluidos en el repositorio.
#### ¿Por que es conveniente incluirlo?
- Evita subir archivos innecesarios (temporales o de sistema)
- Mantiene el repositorio limpio y organizado
- Reduce el tamaño del proyecto
#### ¿Cuando se debe hacer?
Se recomienda crearlo al inicio del proyecto, antes de comenzar a subir archivos.
Sin embargo, también puede agregarse en cualquier momento si no se hizo previamente.
#### ¿Cómo se configura?
*Paso 1:* Navega hasta la raíz de tu repositorio. El archivo .gitignore suele colocarse en el directorio raíz de un proyecto Git. Abre tu terminal o línea de comandos y navega hasta el directorio raíz de tu repositorio Git
*Paso 2:* Crea el archivo .gitignore. Una vez en el directorio raíz, crea el archivo .gitignore utilizando cualquier editor de texto o ejecutando un comando en el terminal, como por ejemplo
*Paso 3:* Añade patrones al archivo. Abre el archivo .gitignore en un editor de texto y añade los patrones necesarios para ignorar archivos o directorios. Cada línea representa un patrón diferente.
*Paso 4:* Consigna el archivo en el repositorio. Es importante enviar el archivo .gitignore al repositorio para que todos los colaboradores utilicen las mismas reglas de ignorar. Esto garantiza la coherencia en todo el proyecto para todos los implicados.
#### Ejemplo de uso

Para ignorar un archivo específico, se puede escribir su nombre dentro del archivo .gitignore. Por ejemplo:

ignorado.txt

Esto indica que el archivo "ignorado.txt" será ignorado por Git y no se incluirá en los commits.
#### fuente
https://www.datacamp.com/es/tutorial/gitignore