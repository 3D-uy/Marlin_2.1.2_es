<p align="center"><img src="buildroot/share/pixmaps/logo/marlin-outrun-nf-500.png" height="250" alt="MarlinFirmware's logo" /></p>

<h1 align="center">Marlin 3D Printer Firmware</h1>

<p align="center">
    <a href="/LICENSE"><img alt="GPL-V3.0 License" src="https://img.shields.io/github/license/marlinfirmware/marlin.svg"></a>
    <a href="https://github.com/MarlinFirmware/Marlin/graphs/contributors"><img alt="Contributors" src="https://img.shields.io/github/contributors/marlinfirmware/marlin.svg"></a>
    <a href="https://github.com/MarlinFirmware/Marlin/releases"><img alt="Last Release Date" src="https://img.shields.io/github/release-date/MarlinFirmware/Marlin"></a>
    <a href="https://github.com/MarlinFirmware/Marlin/actions"><img alt="CI Status" src="https://github.com/MarlinFirmware/Marlin/actions/workflows/test-builds.yml/badge.svg"></a>
    <a href="https://github.com/sponsors/thinkyhead"><img alt="GitHub Sponsors" src="https://img.shields.io/github/sponsors/thinkyhead?color=db61a2"></a>
    <br />
    <a href="https://fosstodon.org/@marlinfirmware"><img alt="Follow MarlinFirmware on Mastodon" src="https://img.shields.io/mastodon/follow/109450200866020466?domain=https%3A%2F%2Ffosstodon.org&logoColor=%2300B&style=social"></a>
</p>

ATENCION!! LEER POR FAVOR.
ESTE MARLIN ES UNA COPIA DEL ORIGINAL 2.1.2 TRADUCIDO AL ESPAÑOL PARA TODOS/AS AQUELLOS/AS COLABORADORES/AS HISPANO HABLANTES.

Documentación adicional se puede encontrar en la [Página de inicio de Marlin](https://marlinfw.org/).
Por favor, prueba este firmware y avísanos si se comporta de alguna manera incorrecta. ¡Voluntarios están disponibles!

## Rama de correcciones de errores de Marlin 2.1

__No apto para uso en producción. ¡Usar con precaución!__

Marlin 2.1 lleva este popular firmware de RepRap al siguiente nivel al agregar soporte para placas de 32 bits y basadas en ARM mucho más rápidas, al tiempo que mejora el soporte para placas AVR de 8 bits. Lee sobre la decisión de Marlin de utilizar una "Capa de Abstracción de Hardware" a continuación.

Esta rama es para parches de la última versión de lanzamiento 2.1.x. Periódicamente, esta rama será la base para la próxima versión menor de 2.1.x.

Descarga versiones anteriores de Marlin en la [página de versiones](https://github.com/MarlinFirmware/Marlin/releases).

## Configuraciones de ejemplo

Antes de poder compilar Marlin para tu máquina, necesitarás una configuración específica para tu hardware. A petición, tu proveedor estará encantado de proporcionarte el código fuente completo y las configuraciones de tu máquina, pero deberás obtener archivos de configuración actualizados si deseas instalar una versión más reciente de Marlin. Afortunadamente, los usuarios de Marlin han contribuido con docenas de configuraciones probadas para ayudarte a comenzar. Visita el repositorio [MarlinFirmware/Configurations](https://github.com/MarlinFirmware/Configurations) para encontrar la configuración correcta para tu hardware.

## Compilando Marlin 2.1

Para compilar y cargar Marlin, puedes utilizar una de estas herramientas:

- El gratuito [Visual Studio Code](https://code.visualstudio.com/download) con la extensión [Auto Build Marlin](https://marlinfw.org/docs/basics/auto_build_marlin.html).
- El gratuito [Arduino IDE](https://www.arduino.cc/en/main/software): consulta [Compilar Marlin con Arduino](https://marlinfw.org/docs/basics/install_arduino.html).
- También puedes usar VSCode con devcontainer: consulta [Instalación de Marlin (VSCode devcontainer)](http://marlinfw.org/docs/basics/install_devcontainer_vscode.html).

Marlin está optimizado para compilar con la extensión **PlatformIO IDE** para **Visual Studio Code**. Aún puedes compilar Marlin con **Arduino IDE**, y esperamos mejorar la experiencia de compilación de Arduino, pero en este momento PlatformIO es la mejor opción.

## Capa de Abstracción de Hardware (HAL)

Marlin incluye una capa de abstracción para proporcionar una API común para todas las plataformas a las que se dirige. Esto permite que el código de Marlin aborde los detalles de los movimientos y las tareas de interfaz de usuario en los niveles más bajos y más altos sin ningún sobrecosto del sistema, vinculando todos los eventos directamente al reloj de hardware.

Cada nueva HAL abre un mundo de hardware. En este momento, necesitamos HALs para RP2040 y la familia de placas Duet3D. Una HAL que envuelva un sistema operativo en tiempo real (RTOS) es un concepto interesante que se podría explorar. ¿Sabías que Marlin incluye un simulador que se puede ejecutar en Windows, macOS y Linux? ¡Únete a Discord para ayudar a avanzar en estos subproyectos!

## Placas AVR de 8 bits

Un principio fundamental de este proyecto es seguir dando soporte a las placas AVR de 8 bits, al tiempo que se mantiene una única base de código que se aplica por igual a todas las máquinas. Queremos que los aficionados ocasionales se beneficien de las innovaciones de la comunidad tanto como aquellos con máquinas más avanzadas. ¡Además, esas viejas máquinas basadas en AVR a menudo son las mejores para realizar pruebas y recibir comentarios!

// Plataformas compatibles

  Plataforma | MCU | Placas de ejemplo
  -----------|-----|----------------
  [Arduino AVR](https://www.arduino.cc/) | ATmega | RAMPS, Melzi, RAMBo
  [Teensy++ 2.0](https://www.microchip.com/en-us/product/AT90USB1286) | AT90USB1286 | Printrboard
  [Arduino Due](https://www.arduino.cc/en/Guide/ArduinoDue) | SAM3X8E | RAMPS-FD, RADDS, RAMPS4DUE
  [ESP32](https://github.com/espressif/arduino-esp32) | ESP32 | FYSETC E4, E4d@BOX, MRR
  [LPC1768](https://www.nxp.com/products/processors-and-microcontrollers/arm-microcontrollers/general-purpose-mcus/lpc1700-cortex-m3/512-kb-flash-64-kb-sram-ethernet-usb-lqfp100-package:LPC1768FBD100) | ARM® Cortex-M3 | MKS SBASE, Re-ARM, Selena Compact
  [LPC1769](https://www.nxp.com/products/processors-and-microcontrollers/arm-microcontrollers/general-purpose-mcus/lpc1700-cortex-m3/512-kb-flash-64-kb-sram-ethernet-usb-lqfp100-package:LPC1769FBD100) | ARM® Cortex-M3 | Smoothieboard, Azteeg X5 mini, TH3D EZBoard
  [STM32F103](https://www.st.com/en/microcontrollers-microprocessors/stm32f103.html) | ARM® Cortex-M3 | Malyan M200, GTM32 Pro, MKS Robin, BTT SKR Mini
  [STM32F401](https://www.st.com/en/microcontrollers-microprocessors/stm32f401.html) | ARM® Cortex-M4 | ARMED, Rumba32, SKR Pro, Lerdge, FYSETC S6, Artillery Ruby
  [STM32F7x6](https://www.st.com/en/microcontrollers-microprocessors/stm32f7x6.html) | ARM® Cortex-M7 | The Borg, RemRam V1
  [STM32G0B1RET6](https://www.st.com/en/microcontrollers-microprocessors/stm32g0x1.html) | ARM® Cortex-M0+ | BigTreeTech SKR mini E3 V3.0
  [STM32H743xIT6](https://www.st.com/en/microcontrollers-microprocessors/stm32h743-753.html) | ARM® Cortex-M7 | BigTreeTech SKR V3.0, SKR EZ V3.0, SKR SE BX V2.0/V3.0
  [SAMD51P20A](https://www.adafruit.com/product/4064) | ARM® Cortex-M4 | Adafruit Grand Central M4
  [Teensy 3.5](https://www.pjrc.com/store/teensy35.html) | ARM® Cortex-M4 |
  [Teensy 3.6](https://www.pjrc.com/store/teensy36.html) | ARM® Cortex-M4 |
  [Teensy 4.0](https://www.pjrc.com/store/teensy40.html) | ARM® Cortex-M7 |
  [Teensy 4.1](https://www.pjrc.com/store/teensy41.html) | ARM® Cortex-M7 |
  Linux nativo | x86/ARM/etc. | Raspberry Pi


## Presentación de Parches

Los parches propuestos deben ser enviados como Pull Request contra la rama ([bugfix-2.1.x](https://github.com/MarlinFirmware/Marlin/tree/bugfix-2.1.x)).

- Esta rama se utiliza para corregir errores e integrar nuevas características durante el ciclo de vida de Marlin 2.1.x.
- Sigue las [Normas de Codificación](https://marlinfw.org/docs/development/coding_standards.html) para ganar reconocimiento con los mantenedores.
- Por favor, envía solicitudes de características e informes de errores a la [Cola de Problemas](https://github.com/MarlinFirmware/Marlin/issues/new/choose). También se enumeran recursos de soporte.
- Siempre que agregues nuevas características, asegúrate de agregar pruebas en `buildroot/tests` y ejecuta las pruebas localmente, si es posible.
  - Es opcional: Ejecutar todas las pruebas en Windows puede llevar mucho tiempo, y de todos modos se ejecutarán en GitHub.
  - Si estás ejecutando las pruebas en Linux (o en WSL con el código en un volumen de Linux), la velocidad es mucho más rápida.
  - Puedes utilizar `make tests-all-local` o `make tests-single-local TEST_TARGET=...`.
  - Si prefieres Docker, puedes usar `make tests-all-local-docker` o `make tests-all-local-docker TEST_TARGET=...`.

## Soporte de Marlin

La Cola de Problemas está reservada para informes de errores y solicitudes de características. Para obtener ayuda con la configuración y solución de problemas, utiliza los siguientes recursos:

- [Documentación de Marlin](https://marlinfw.org) - Documentación oficial de Marlin.
- [Marlin Discord](https://discord.gg/n5NJ59y) - Discute problemas con usuarios y desarrolladores de Marlin.
- Grupo de Facebook ["Marlin Firmware"](https://www.facebook.com/groups/1049718498464482/)
- Foro de RepRap.org [Marlin](https://forums.reprap.org/list.php?415)
- Grupo de Facebook ["Marlin Firmware for 3D Printers"](https://www.facebook.com/groups/3Dtechtalk/)
- [Configuración de Marlin](https://www.youtube.com/results?search_query=marlin+configuration) en YouTube

## Colaboradores

Marlin mejora constantemente gracias a un gran número de colaboradores de todo el mundo que aportan sus especialidades y talentos. Un enorme agradecimiento a [todos los colaboradores](https://github.com/MarlinFirmware/Marlin/graphs/contributors) que regularmente solucionan errores, ayudan a dirigir el tráfico y, básicamente, evitan que Marlin se desmorone. La existencia continua de Marlin no sería posible sin ellos.

## Administración

Los usuarios regulares pueden abrir y cerrar sus propios problemas, pero solo los administradores pueden realizar tareas relacionadas con el proyecto, como agregar etiquetas, fusionar cambios, establecer hitos y eliminar trolls. El equipo actual de administradores de Marlin consiste en:


<table align="center">
<tr><td>Project Maintainer</td></tr>
<tr><td>

 🇺🇸  **Scott Lahteine**
       [@thinkyhead](https://github.com/thinkyhead)
       [<kbd>  Donate 💸  </kbd>](https://www.thinkyhead.com/donate-to-marlin)

</td><td>

 🇺🇸  **Roxanne Neufeld**
       [@Roxy-3D](https://github.com/Roxy-3D)

 🇺🇸  **Keith Bennett**
       [@thisiskeithb](https://github.com/thisiskeithb)
       [<kbd>  Donate 💸  </kbd>](https://github.com/sponsors/thisiskeithb)

 🇺🇸  **Jason Smith**
       [@sjasonsmith](https://github.com/sjasonsmith)

</td><td>

 🇧🇷  **Victor Oliveira**
       [@rhapsodyv](https://github.com/rhapsodyv)

 🇬🇧  **Chris Pepper**
       [@p3p](https://github.com/p3p)

🇳🇿  **Peter Ellens**
       [@ellensp](https://github.com/ellensp)
       [<kbd>  Donate 💸  </kbd>](https://ko-fi.com/ellensp)

</td><td>

 🇺🇸  **Bob Kuhn**
       [@Bob-the-Kuhn](https://github.com/Bob-the-Kuhn)

 🇳🇱  **Erik van der Zalm**
       [@ErikZalm](https://github.com/ErikZalm)
       [<kbd>  Donate 💸  </kbd>](https://flattr.com/submit/auto?user_id=ErikZalm&url=https://github.com/MarlinFirmware/Marlin&title=Marlin&language=&tags=github&category=software)

</td></tr>
</table>

## License

Marlin se publica bajo la [licencia GPL](/LICENSE) porque creemos en el desarrollo abierto. La GPL viene con derechos y obligaciones. Ya sea que utilices el firmware Marlin como controlador para tu producto de código abierto o cerrado, debes mantener Marlin abierto y proporcionar el código fuente compatible de Marlin a los usuarios finales cuando lo soliciten. La forma más sencilla de cumplir con la licencia de Marlin es hacer un fork de Marlin en GitHub, realizar tus modificaciones y dirigir a los usuarios a tu fork modificado.

Si bien no podemos evitar el uso de este código en productos (impresoras 3D, CNC, etc.) que sean de código cerrado o limitados por una patente, preferiríamos que elijas otro firmware o, mejor aún, que hagas el tuyo propio.
