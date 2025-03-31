# Ejercicio 2 - Repaso de punteros

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
