# Ejercicio 2

## Respuestas sobre el archivo .gitignore

### ¿Por qué es conveniente incluirlo?
El archivo .gitignore es útil porque permite definir qué archivos o directorios Git no debe rastrear. Esto evita que archivos innecesarios, como temporales, ejecutables o documentos de trabajo, se suban al repositorio, manteniéndolo limpio y seguro.

### ¿Cuándo se debe hacer?
Lo ideal es crear el .gitignore al inicio del proyecto, antes del primer commit, para que los archivos ignorados nunca entren al historial. Sin embargo, se puede modificar en cualquier momento si surgen nuevos tipos de archivos que ignorar.

### ¿Cómo configuraría el archivo .gitignore?
Se configura escribiendo reglas por línea, usando nombres de archivos, extensiones con comodines () o directorios. Ejemplos:
- archivo.txt ignora un archivo específico.
- *.exe ignora todos los ejecutables de Windows.
- docs/ ignora un directorio completo.

### Reglas añadidas
Se configuró el archivo .gitignore con las siguientes reglas:

ignorado.txt
# Archivos de Microsoft Office
.doc
*.docx
*.xls
*.xlsx
*.ppt
*.pptx
*.tmp   # Archivos temporales de Office
# Ejecutables y archivos binarios
*.exe
*.dll
*.o
*.out
*.bin

Estas reglas ignoran el archivo ignorado.txt, documentos de Microsoft Office (Word, Excel, PowerPoint) y ejecutables generados por compiladores o sistemas operativos.

# Ejercicio 3

## Apartado g

### ¿Por qué el resultado de 2 y 3 es el mismo?
El resultado de 2 (dirección almacenada por el puntero) y 3 (dirección de la variable) es el mismo porque el puntero está apuntando directamente a la dirección de memoria de la variable. Cuando se asigna &variable al puntero, este almacena esa dirección, por lo que *puntero y &variable son idénticos.

### ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?
En el punto 4 se obtiene la dirección de memoria del puntero mismo (&puntero), que es diferente a las de 2 y 3. Esto se debe a que el puntero es una variable distinta que ocupa su propio espacio en memoria, mientras que 2 y 3 se refieren a la dirección de la variable apuntada. La dirección del puntero depende de dónde lo coloque el compilador en la pila (stack).
