# Contribuyendo a Marlin

¡Gracias por tu interés en contribuir a Marlin Firmware!

Lo siguiente es un conjunto de pautas para contribuir a Marlin, alojado por la [Organización MarlinFirmware](https://github.com/MarlinFirmware) en GitHub. Estas son principalmente pautas, no reglas. Usa tu mejor criterio y siéntete libre de proponer cambios a este documento a través de una solicitud de extracción (Pull Request).

#### Tabla de Contenidos

[Código de Conducta](#código-de-conducta)

[¡No quiero leer todo esto, solo tengo una pregunta!!!](#no-quiero-leer-todo-esto-solo-tengo-una-pregunta)

[¿Cómo puedo contribuir?](#cómo-puedo-contribuir)
  * [Reportar Errores](#reportar-errores)
  * [Sugerir Funcionalidades o Cambios](#sugerir-funcionalidades-o-cambios)
  * [Tu Primera Contribución de Código](#tu-primera-contribución-de-código)
  * [Solicitudes de Extracción (Pull Requests)](#solicitudes-de-extracción-pull-requests)

[Guías de Estilo](#guías-de-estilo)
  * [Mensajes de Confirmación en Git](#mensajes-de-confirmación-en-git)
  * [Estándares de Codificación en C++](#estándares-de-codificación-en-c++)
  * [Guía de Estilo de Documentación](#documentación)

[Notas Adicionales](#notas-adicionales)
  * [Etiquetas de Problemas y Solicitudes de Extracción (Pull Requests)](#etiquetas-de-problemas-y-solicitudes-de-extracción-pull-requests)

## Código de Conducta

Este proyecto y todos los participantes en él están sujetos al [Código de Conducta de Marlin](code_of_conduct.md). Al participar, se espera que cumplas con este código. Por favor, reporta cualquier comportamiento inaceptable a [marlinfirmware@github.com](mailto:marlinfirmware@github.com).

## ¡No quiero leer todo esto, solo tengo una pregunta!!!

> **Nota:** Por favor, no abras un problema solo para hacer una pregunta. Obtendrás resultados más rápidos utilizando los recursos a continuación.

Tenemos un Tablón de Mensajes y un grupo de Facebook donde nuestra comunidad de usuarios expertos puede brindar consejos útiles si tienes preguntas.

- [Documentación de Marlin](https://marlinfw.org) - Documentación oficial de Marlin
- Grupo de Facebook ["Marlin Firmware"](https://www.facebook.com/groups/1049718498464482/)
- Foro [Marlin en RepRap.org](https://forums.reprap.org/list.php?415)
- Grupo de Facebook ["Marlin Firmware for 3D Printers"](https://www.facebook.com/groups/3Dtechtalk/)
- [Configuración de Marlin](https://www.youtube.com/results?search_query=marlin+configuration) en YouTube

Si prefieres el chat, puedes unirte al servidor de Discord de MarlinFirmware:

* Usa el enlace https://discord.gg/n5NJ59y para unirte como Usuario General.
* Aunque nuestro Discord es bastante activo, puede llevar tiempo obtener respuestas de los miembros de la comunidad, ¡ten paciencia!
* Utiliza el canal `#general` para preguntas generales o discusiones sobre Marlin.
* Hay otros canales para temas específicos o limitados a Patrocinadores. Revisa la lista de canales.

## ¿Cómo puedo contribuir?

### Reportar Errores

Esta sección te guiará en cómo enviar un informe de error (Bug Report) para Marlin. Seguir estas pautas ayuda a los mantenedores y a la comunidad a entender tu informe, reproducir el comportamiento y encontrar informes relacionados.

Antes de crear un informe de error, por favor prueba la rama de desarrollo "nightly", ya que podrías descubrir que no necesitas crear uno. Cuando crees un informe de error, por favor [incluye tantos detalles como sea posible](#cómo-presentar-un-buen-informe-de-error). Rellena [la plantilla requerida](ISSUE_TEMPLATE/bug_report.yml), la información que solicita nos ayuda a resolver los problemas más rápido.

> **Nota:** Las regresiones pueden ocurrir. Si encuentras un problema **cerrado** que parece ser similar al tuyo, adelante y abre un nuevo problema e incluye un enlace al problema original en el cuerpo del nuevo. Todo lo que necesitas para crear un enlace es el número de problema, precedido por #. Por ejemplo, #8888.

#### ¿Cómo Presento un Buen Informe de Error?

Los errores se rastrean como [problemas de GitHub](https://guides.github.com/features/issues/). Utiliza el botón "New Issue" para crear un problema y proporciona la siguiente información completando [la plantilla](ISSUE_TEMPLATE/bug_report.yml).

Explica el problema e incluye detalles adicionales para ayudar a los mantenedores a reproducir el problema:

* **Utiliza un título claro y descriptivo** para identificar el problema.
* **Describe los pasos exactos que reproducen el problema** con tantos detalles como sea posible. Por ejemplo, comienza explicando cómo iniciaste Marlin, por ejemplo, qué comando exacto usaste en la terminal, o cómo iniciaste Marlin de otra manera. Al enumerar los pasos, **no te limites a decir qué hiciste, sino explica cómo lo hiciste**. Por ejemplo, si moviste el cursor al final de una línea, explica si usaste el ratón, un atajo de teclado o un comando de Marlin, y en caso afirmativo, cuál.
* **Proporciona ejemplos específicos para demostrar los pasos**. Incluye enlaces a archivos o proyectos de GitHub, o fragmentos de código que se puedan copiar y pegar, que utilices en esos ejemplos. Si proporcionas fragmentos de código o registros en el problema, utiliza [bloques de código en formato Markdown](https://help.github.com/articles/markdown-basics/#multiple-lines).
* **Describe el comportamiento que observaste después de seguir los pasos** y señala cuál es exactamente el problema con ese comportamiento.
* **Explica qué comportamiento esperabas ver en su lugar y por qué**.
* **Incluye un registro detallado de salida**, especialmente para la exploración y nivelación. Consulta a continuación el uso de `DEBUG_LEVELING_FEATURE`.
* **Incluye capturas de pantalla, enlaces a videos, etc.** que muestren claramente el problema.
* **Incluye G-code** (si corresponde) que provoque de manera confiable la aparición del problema.
* **Si el problema no se desencadenó por una acción específica**, describe qué estabas haciendo antes de que ocurriera el problema y comparte más información siguiendo las pautas a continuación.

Proporciona más contexto:

* **¿Puedes reproducir el problema con un mínimo de opciones habilitadas?**
* **¿El problema comenzó a ocurrir recientemente** (por ejemplo, después de actualizar a una nueva versión de Marlin) o siempre ha sido un problema?
* Si el problema comenzó a ocurrir recientemente, **¿puedes reproducir el problema en una versión anterior de Marlin?** ¿En qué versión más reciente no ocurre el problema? Puedes descargar versiones anteriores de Marlin desde [la página de lanzamientos](https://github.com/MarlinFirmware/Marlin/releases).
* **¿Puedes reproducir el problema de manera confiable?** Si no es así, proporciona detalles sobre qué tan a menudo ocurre el problema y en qué condiciones suele ocurrir.

Incluye detalles sobre tu configuración y entorno:

* **¿Qué versión de Marlin estás utilizando?** Puedes ver la versión exacta y la fecha de compilación de Marlin en el mensaje de inicio cuando se conecta un host a Marlin, o en el menú de información LCD (si está habilitado).
* **¿Qué tipo de impresora 3D y electrónica estás utilizando?**
* **¿Qué complementos (sonda, sensor de filamento) tienes?**
* **Incluye tus archivos de configuración**. Haz un archivo

 ZIP que contenga `Configuration.h` y `Configuration_adv.h` y adjúntalo en tu respuesta.

### Sugerir características o cambios

Esta sección te guía para enviar una sugerencia para Marlin, incluyendo nuevas funciones completamente y mejoras menores a la funcionalidad existente. Seguir estas pautas ayuda a los mantenedores y a la comunidad a comprender tu sugerencia y encontrar sugerencias relacionadas.

Antes de crear una sugerencia, por favor verifica [esta lista](https://github.com/MarlinFirmware/Marlin/issues?q=is%3Aopen+is%3Aissue+label%3A%22T%3A+Feature+Request%22), ya que es posible que descubras que no necesitas crear una nueva. Cuando estés creando una sugerencia de mejora, por favor [incluye tantos detalles como sea posible](#cómo-puedo-enviar-una-solicitud-de-función-buena). Completa [la plantilla](ISSUE_TEMPLATE/feature_request.yml), incluyendo los pasos que imaginas que tomarías si la función que estás solicitando existiera.

#### Antes de enviar una solicitud de función

* **Verifica el [sitio web de Marlin](https://marlinfw.org/)** para obtener consejos; es posible que descubras que la función ya está incluida. Lo más importante es verificar si estás utilizando [la última versión de Marlin](https://github.com/MarlinFirmware/Marlin/releases) y si puedes obtener el comportamiento deseado cambiando [la configuración de Marlin](https://marlinfw.org/docs/configuration/configuration.html).
* **Realiza una [búsqueda superficial](https://github.com/MarlinFirmware/Marlin/issues?q=is%3Aopen+is%3Aissue+label%3A%22T%3A+Feature+Request%22)** para ver si la mejora ya ha sido sugerida. Si es así, agrega un comentario al problema existente en lugar de abrir uno nuevo.

#### ¿Cómo puedo enviar una solicitud de función (buena)?

Las solicitudes de funciones se registran como [problemas en GitHub](https://guides.github.com/features/issues/). Por favor, sigue estas pautas en tu solicitud:

* **Utiliza un título claro y descriptivo** para identificar la sugerencia.
* **Proporciona una descripción paso a paso de la función solicitada** con todos los detalles posibles.
* **Proporciona ejemplos específicos para demostrar los pasos**.
* **Describe el comportamiento actual** y **explica qué comportamiento esperabas ver en su lugar** y por qué.
* **Incluye capturas de pantalla y enlaces a videos** que demuestren la función o señalen la parte de Marlin a la que se refiere la solicitud.
* **Explica por qué esta función sería útil** para la mayoría de los usuarios de Marlin.
* **Menciona otros firmware que tengan esta función, si los hay**.

### Tu primera contribución de código

¿No estás seguro por dónde empezar a contribuir a Marlin? Puedes comenzar revisando estos problemas etiquetados como `good-first-issue` y `help-wanted`:

* [Problemas para principiantes][good-first-issue] - problemas que solo requieren unas pocas líneas de código y un par de pruebas.
* [Problemas que necesitan ayuda][help-wanted] - problemas que requieren un poco más de trabajo que los problemas para principiantes.

### Pull Requests

Las Pull Requests siempre deben dirigirse a ramas de trabajo (por ejemplo, `bugfix-2.1.x` y/o `bugfix-1.1.x`) y nunca a ramas de lanzamiento (por ejemplo, `2.0.x` y/o `1.1.x`). Si esta es tu primera Pull Request, por favor lee nuestra [Guía para Pull Requests](https://marlinfw.org/docs/development/getting_started_pull_requests.html) y la documentación de [Pull Request](https://help.github.com/articles/creating-a-pull-request/) de Github.

* Completa [la plantilla requerida](pull_request_template.md).
* No incluyas números de problemas en el título de la PR.
* Incluye imágenes, diagramas y enlaces a videos en tu Pull Request para demostrar tus cambios, si es necesario.
* Sigue los [Estándares de Codificación](https://marlinfw.org/docs/development/coding_standards.html) publicados en nuestro sitio web.
* Documenta el código nuevo con comentarios claros y concisos.
* Finaliza todos los archivos con una nueva línea.

## Guías de estilo

### Mensajes de Commit de Git

* Usa el tiempo presente ("Agregar característica" en lugar de "Agregada característica").
* Usa el modo imperativo ("Mover cursor a..." en lugar de "Mueve cursor a...").
* Limita la primera línea a 72 caracteres o menos.
* Hace referencia a problemas y Pull Requests de manera liberal después de la primera línea.

### Estándares de Codificación en C++

* Por favor, lee y sigue los [Estándares de Codificación](https://marlinfw.org/docs/development/coding_standards.html) publicados en nuestro sitio web. El no seguir estas pautas retrasará la evaluación y aceptación de las Pull Requests.

### Documentación

* Las directrices para la documentación aún están en desarrollo. En general, sé claro, conciso y al punto.
