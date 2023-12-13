// Este directorio está destinado para las bibliotecas específicas del proyecto (privadas).
// PlatformIO las compilará como bibliotecas estáticas y las vinculará al archivo ejecutable.

// El código fuente de cada biblioteca debe ubicarse en un directorio separado, por ejemplo,
// "lib/private_lib/[aquí van los archivos fuente]".

// Por ejemplo, vea cómo pueden organizarse las bibliotecas `Foo` y `Bar`:

|--lib
|  |--Bar
|  |  |--docs
|  |  |--ejemplos
|  |  |--src
|  |     |- Bar.c
|  |     |- Bar.h
|  |--Foo
|  |  |- Foo.c
|  |  |- Foo.h
|  |- readme.txt --> ESTE ARCHIVO
|- platformio.ini
|--src
   |- main.c

// Luego, en `src/main.c` deberías usar:

#include <Foo.h>
#include <Bar.h>

// resto del código H/C/CPP

// PlatformIO encontrará tus bibliotecas automáticamente, configurará las rutas de inclusión del preprocesador
// y las compilará.

// Más información sobre el Localizador de Dependencias de Bibliotecas de PlatformIO
// - https://docs.platformio.org/page/librarymanager/ldf.html
