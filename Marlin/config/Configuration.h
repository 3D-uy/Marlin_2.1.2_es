/**
 * Firmware de impresora 3D Marlin
 * Derechos de autor (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Basado en Sprinter y grbl.
 * Derechos de autor (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * Este programa es software libre: puede redistribuirlo y / o modificarlo
 * bajo los términos de la Licencia Pública General de GNU publicada por
 * la Free Software Foundation, ya sea la versión 3 de la Licencia, o
 * (a su elección) cualquier versión posterior.
 *
 * Este programa se distribuye con la esperanza de que sea útil,
 * pero SIN NINGUNA GARANTÍA; sin siquiera la garantía implícita de
 * COMERCIABILIDAD o APTITUD PARA UN PROPÓSITO PARTICULAR. Consulte la
 * Licencia Pública General de GNU para obtener más detalles.
 *
 * Debería haber recibido una copia de la Licencia Pública General de GNU
 * junto con este programa. Si no, consulte <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Configuration.h
 *
 * Configuraciones básicas tales como:
 *
 * - Tipo de electrónica
 * - Tipo de sensor de temperatura
 * - Geometría de la impresora
 * - Configuración de los endstops
 * - Controlador LCD
 * - Características adicionales
 *
 * Las configuraciones avanzadas se encuentran en Configuration_adv.h
 */
#define CONFIGURATION_H_VERSION 02010300

//===========================================================================
//============================= Empezando ===================================
//===========================================================================

/**
 * Aquí tienes algunos enlaces útiles para ayudarte a configurar y calibrar tu máquina:
 *
 * Ejemplos de configuraciones:    https://github.com/MarlinFirmware/Configurations/branches/all
 *
 * Calculadora Průša:              https://blog.prusaprinters.org/calculator_3416/
 *
 * Guías de calibración:           https://reprap.org/wiki/Calibration
 *                                 https://reprap.org/wiki/Triffid_Hunter%27s_Calibration_Guide
 *                                 https://sites.google.com/site/repraplogphase/calibration-of-your-reprap
 *                                 https://youtu.be/wAL9d7FgInk
 *
 * Objetos de calibración:         https://www.thingiverse.com/thing:5573
 *                                 https://www.thingiverse.com/thing:1278865
 */

// @section info

// Información del autor de esta configuración impresa en la terminal al iniciar y al usar el comando M115
#define STRING_CONFIG_H_AUTHOR "(ninguno, configuración predeterminada)" // Quién hizo los cambios.
//#define CUSTOM_VERSION_FILE Version.h // Ruta desde el directorio raíz (sin comillas)

// @section machine

// Elige el nombre de boards.h que coincida con tu configuración
#ifndef MOTHERBOARD
  #define MOTHERBOARD BOARD_RAMPS_14_EFB
#endif

/**
 * Selecciona el puerto serie en la placa que se utilizará para la comunicación con el host.
 * Esto permite la conexión de adaptadores inalámbricos, por ejemplo, a pines de puerto no predeterminados.
 * El puerto serie -1 es el puerto serie emulado por USB, si está disponible.
 * Nota: El primer puerto serie (-1 o 0) siempre será utilizado por el gestor de arranque de Arduino.
 *
 * :[-1, 0, 1, 2, 3, 4, 5, 6, 7]
 */
#define SERIAL_PORT 0

/**
 * Tasa de baudios del puerto serie
 * Esta es la velocidad de comunicación predeterminada para todos los puertos serie.
 * Configura las tasas de baudios predeterminadas para puertos serie adicionales a continuación.
 *
 * 250000 funciona en la mayoría de los casos, pero puedes intentar una velocidad más baja si
 * experimentas frecuentes interrupciones durante la impresión desde el host.
 * Puedes probar hasta 1000000 para acelerar la transferencia de archivos desde la tarjeta SD.
 *
 * :[2400, 9600, 19200, 38400, 57600, 115200, 250000, 500000, 1000000]
 */
#define BAUDRATE 250000

//#define BAUD_RATE_GCODE     // Habilita el código G M575 para configurar la tasa de baudios

/**
 * Selecciona un puerto serie secundario en la placa para la comunicación con el host.
 * Actualmente, Ethernet (-2) solo es compatible con placas Teensy 4.1.
 * :[-2, -1, 0, 1, 2, 3, 4, 5, 6, 7]
 */
//#define SERIAL_PORT_2 -1
//#define BAUDRATE_2 250000   // :[2400, 9600, 19200, 38400, 57600, 115200, 250000, 500000, 1000000] Habilitar para anular BAUDRATE

/**
 * Selecciona un tercer puerto serie en la placa para la comunicación con el host.
 * Actualmente, solo es compatible con AVR, DUE, LPC1768/9 y STM32/STM32F1.
 * :[-1, 0, 1, 2, 3, 4, 5, 6, 7]
 */
//#define SERIAL_PORT_3 1
//#define BAUDRATE_3 250000   // :[2400, 9600, 19200, 38400, 57600, 115200, 250000, 500000, 1000000] Habilitar para anular BAUDRATE

// Habilitar la interfaz de serie Bluetooth en dispositivos AT90USB
//#define BLUETOOTH

// Nombre que se muestra en el mensaje LCD "Ready" y en el menú de información
//#define CUSTOM_MACHINE_NAME "Impresora 3D"

// ID único de la impresora, utilizado por algunos programas para diferenciar entre máquinas.
// Elige uno propio o utiliza un servicio como https://www.uuidgenerator.net/version4
//#define MACHINE_UUID "00000000-0000-0000-0000-000000000000"

// @section controladores de motores paso a paso

/**
 * Controladores de Motores Paso a Paso
 *
 * Estas configuraciones permiten a Marlin ajustar el temporizado de los controladores de motores paso a paso
 * y habilitar opciones avanzadas para aquellos controladores que las admitan. También puedes anular las opciones de temporizado en Configuration_adv.h.
 *
 * Utiliza TMC2208/TMC2208_STANDALONE para los controladores TMC2225 y TMC2209/TMC2209_STANDALONE para los controladores TMC2226.
 *
 * Opciones: A4988, A5984, DRV8825, LV8729, TB6560, TB6600, TMC2100,
 *           TMC2130, TMC2130_STANDALONE, TMC2160, TMC2160_STANDALONE,
 *           TMC2208, TMC2208_STANDALONE, TMC2209, TMC2209_STANDALONE,
 *           TMC26X,  TMC26X_STANDALONE,  TMC2660, TMC2660_STANDALONE,
 *           TMC5130, TMC5130_STANDALONE, TMC5160, TMC5160_STANDALONE
 * :['A4988', 'A5984', 'DRV8825', 'LV8729', 'TB6560', 'TB6600', 'TMC2100', 'TMC2130', 'TMC2130_STANDALONE', 'TMC2160', 'TMC2160_STANDALONE', 'TMC2208', 'TMC2208_STANDALONE', 'TMC2209', 'TMC2209_STANDALONE', 'TMC26X', 'TMC26X_STANDALONE', 'TMC2660', 'TMC2660_STANDALONE', 'TMC5130', 'TMC5130_STANDALONE', 'TMC5160', 'TMC5160_STANDALONE']
 */
#define X_DRIVER_TYPE  A4988
#define Y_DRIVER_TYPE  A4988
#define Z_DRIVER_TYPE  A4988
//#define X2_DRIVER_TYPE A4988
//#define Y2_DRIVER_TYPE A4988
//#define Z2_DRIVER_TYPE A4988
//#define Z3_DRIVER_TYPE A4988
//#define Z4_DRIVER_TYPE A4988
//#define I_DRIVER_TYPE  A4988
//#define J_DRIVER_TYPE  A4988
//#define K_DRIVER_TYPE  A4988
//#define U_DRIVER_TYPE  A4988
//#define V_DRIVER_TYPE  A4988
//#define W_DRIVER_TYPE  A4988
#define E0_DRIVER_TYPE A4988
//#define E1_DRIVER_TYPE A4988
//#define E2_DRIVER_TYPE A4988
//#define E3_DRIVER_TYPE A4988
//#define E4_DRIVER_TYPE A4988
//#define E5_DRIVER_TYPE A4988
//#define E6_DRIVER_TYPE A4988
//#define E7_DRIVER_TYPE A4988

/**
 * Configuraciones Adicionales de Ejes
 *
 * Define AXISn_ROTATES para todos los ejes que giran o pivotan.
 * Las coordenadas de los ejes de rotación se expresan en grados.
 *
 * AXISn_NAME define la letra utilizada para referirse al eje en la mayoría de los comandos G.
 * Por convención, los nombres y roles son típicamente:
 *   'A' : Eje de rotación paralelo a X
 *   'B' : Eje de rotación paralelo a Y
 *   'C' : Eje de rotación paralelo a Z
 *   'U' : Eje lineal secundario paralelo a X
 *   'V' : Eje lineal secundario paralelo a Y
 *   'W' : Eje lineal secundario paralelo a Z
 *
 * Independientemente de estas configuraciones, los ejes se denominan internamente I, J, K, U, V, W.
 */
#ifdef I_DRIVER_TYPE
  #define AXIS4_NAME 'A' // :['A', 'B', 'C', 'U', 'V', 'W']
  #define AXIS4_ROTATES
#endif
#ifdef J_DRIVER_TYPE
  #define AXIS5_NAME 'B' // :['B', 'C', 'U', 'V', 'W']
  #define AXIS5_ROTATES
#endif
#ifdef K_DRIVER_TYPE
  #define AXIS6_NAME 'C' // :['C', 'U', 'V', 'W']
  #define AXIS6_ROTATES
#endif
#ifdef U_DRIVER_TYPE
  #define AXIS7_NAME 'U' // :['U', 'V', 'W']
  //#define AXIS7_ROTATES
#endif
#ifdef V_DRIVER_TYPE
  #define AXIS8_NAME 'V' // :['V', 'W']
  //#define AXIS8_ROTATES
#endif
#ifdef W_DRIVER_TYPE
  #define AXIS9_NAME 'W' // :['W']
  //#define AXIS9_ROTATES
#endif

// @section extruder

// Esta opción define el número de extrusores
// :[0, 1, 2, 3, 4, 5, 6, 7, 8]
#define EXTRUDERS 1

// Diámetro nominal del filamento esperado de forma general (1.75, 2.85, 3.0, ...). Se utiliza para Volumétrico, Sensor de Ancho de Filamento, etc.
#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75

// Para Cyclops o cualquier "multi-extrusor" que comparte una sola boquilla.
//#define SINGLENOZZLE

// Guardar y restaurar la temperatura y la velocidad del ventilador al cambiar de herramienta.
// Establecer el standby para la herramienta no seleccionada con M104/106/109 T...
#if ENABLED(SINGLENOZZLE)
  //#define SINGLENOZZLE_STANDBY_TEMP
  //#define SINGLENOZZLE_STANDBY_FAN
#endif

// Un extrusor doble que utiliza un solo motor paso a paso
//#define SWITCHING_EXTRUDER
#if ENABLED(SWITCHING_EXTRUDER)
  #define SWITCHING_EXTRUDER_SERVO_NR 0
  #define SWITCHING_EXTRUDER_SERVO_ANGLES { 0, 90 } // Ángulos para E0, E1[, E2, E3]
  #if EXTRUDERS > 3
    #define SWITCHING_EXTRUDER_E23_SERVO_NR 1
  #endif
#endif

// Cambiar de extrusor golpeando el cabezal de la herramienta. Requiere EVENT_GCODE_TOOLCHANGE_#.
//#define MECHANICAL_SWITCHING_EXTRUDER

/**
 * Un doble boquilla que utiliza un servomotor para subir/bajar una (o ambas) boquillas.
 * Se puede combinar con SWITCHING_EXTRUDER.
 */
//#define SWITCHING_NOZZLE
#if ENABLED(SWITCHING_NOZZLE)
  #define SWITCHING_NOZZLE_SERVO_NR 0
  //#define SWITCHING_NOZZLE_E1_SERVO_NR 1          // Si se utilizan dos servomotores, se especifica el índice del segundo
  #define SWITCHING_NOZZLE_SERVO_ANGLES { 0, 90 }   // Ángulos para E0, E1 (un solo servomotor) o bajada/subida (doble servomotor)
  #define SWITCHING_NOZZLE_SERVO_DWELL 2500         // Tiempo de espera para que el servomotor realice el movimiento físico
#endif

// Cambiar de boquillas golpeando el cabezal de la herramienta. Requiere EVENT_GCODE_TOOLCHANGE_#.
//#define MECHANICAL_SWITCHING_NOZZLE

/**
 * Dos carros X separados con extrusores que se conectan a una pieza móvil
 * mediante un mecanismo de acoplamiento con solenoide. Requiere SOL1_PIN y SOL2_PIN.
 */
//#define PARKING_EXTRUDER

/**
 * Dos carros X separados con extrusores que se conectan a una pieza móvil
 * mediante un mecanismo de acoplamiento magnético utilizando movimientos y sin solenoide.
 *
 * proyecto   : https://www.thingiverse.com/thing:3080893
 * movimientos : https://youtu.be/0xCEiG
 *               https://youtu.be/Bqbcs0CU2FE
 */
//#define MAGNETIC_PARKING_EXTRUDER

#if ANY(PARKING_EXTRUDER, MAGNETIC_PARKING_EXTRUDER)

  #define PARKING_EXTRUDER_PARKING_X { -78, 184 }     // Posiciones X para estacionar los extrusores
  #define PARKING_EXTRUDER_GRAB_DISTANCE 1            // (mm) Distancia para moverse más allá del punto de estacionamiento para agarrar el extrusor

  #if ENABLED(PARKING_EXTRUDER)

    #define PARKING_EXTRUDER_SOLENOIDS_INVERT           // Si está activado, el solenoide NO se magnetiza con voltaje aplicado
    #define PARKING_EXTRUDER_SOLENOIDS_PINS_ACTIVE LOW  // Señal de pin LOW o HIGH que energiza la bobina
    #define PARKING_EXTRUDER_SOLENOIDS_DELAY 250        // (ms) Retardo para el campo magnético. Sin retardo si es 0 o no está definido.
    //#define MANUAL_SOLENOID_CONTROL                   // Control manual de los solenoides de acoplamiento con M380 S / M381

  #elif ENABLED(MAGNETIC_PARKING_EXTRUDER)

    #define MPE_FAST_SPEED      9000      // (mm/min) Velocidad para el movimiento antes del último punto de distancia
    #define MPE_SLOW_SPEED      4500      // (mm/min) Velocidad para el último viaje de distancia para estacionar y acoplar
    #define MPE_TRAVEL_DISTANCE   10      // (mm) Último punto de distancia
    #define MPE_COMPENSATION       0      // Compensación de desplazamiento -1, 0, 1 (multiplicador) solo para acoplamiento

  #endif

#endif

/**
 * Cabezal de cambio
 *
 * Soporte para cabezales intercambiables y acoplables, como
 * el E3D Tool Changer. Los cabezales se bloquean con un servo.
 */
//#define SWITCHING_TOOLHEAD

/**
 * Cabezal de cambio magnético
 *
 * Soporte para cabezales intercambiables y acoplables con un mecanismo
 * de acoplamiento magnético que utiliza movimiento sin servo.
 */
//#define MAGNETIC_SWITCHING_TOOLHEAD

/**
 * Cabezal de cambio electromagnético
 *
 * Estacionamiento para cinemática CoreXY / HBot.
 * Los cabezales se estacionan en un borde y se mantienen con un electroimán.
 * Admite más de 2 cabezales. Consulta https://youtu.be/JolbsAKTKf4
 */
//#define ELECTROMAGNETIC_SWITCHING_TOOLHEAD

#if ANY(SWITCHING_TOOLHEAD, MAGNETIC_SWITCHING_TOOLHEAD, ELECTROMAGNETIC_SWITCHING_TOOLHEAD)
  #define SWITCHING_TOOLHEAD_Y_POS          235         // (mm) Posición Y del acople del cabezal
  #define SWITCHING_TOOLHEAD_Y_SECURITY      10         // (mm) Distancia de seguridad en el eje Y
  #define SWITCHING_TOOLHEAD_Y_CLEAR         60         // (mm) Distancia mínima desde el acople para un eje X despejado
  #define SWITCHING_TOOLHEAD_X_POS          { 215, 0 }  // (mm) Posiciones X para estacionar los extrusores
  #if ENABLED(SWITCHING_TOOLHEAD)
    #define SWITCHING_TOOLHEAD_SERVO_NR       2         // Índice del conector del servo
    #define SWITCHING_TOOLHEAD_SERVO_ANGLES { 0, 180 }  // (grados) Ángulos para Bloquear, Desbloquear
  #elif ENABLED(MAGNETIC_SWITCHING_TOOLHEAD)
    #define SWITCHING_TOOLHEAD_Y_RELEASE      5         // (mm) Distancia de seguridad en el eje Y
    #define SWITCHING_TOOLHEAD_X_SECURITY   { 90, 150 } // (mm) Distancia de seguridad en el eje X (T0, T1)
    //#define PRIME_BEFORE_REMOVE                       // Realizar purga antes de liberar el cabezal del acople
    #if ENABLED(PRIME_BEFORE_REMOVE)
      #define SWITCHING_TOOLHEAD_PRIME_MM           20  // (mm)   Longitud de purga del extrusor
      #define SWITCHING_TOOLHEAD_RETRACT_MM         10  // (mm)   Longitud de retracción después de la purga
      #define SWITCHING_TOOLHEAD_PRIME_FEEDRATE    300  // (mm/min) Velocidad de purga del extrusor
      #define SWITCHING_TOOLHEAD_RETRACT_FEEDRATE 2400  // (mm/min) Velocidad de retracción del extrusor
    #endif
  #elif ENABLED(ELECTROMAGNETIC_SWITCHING_TOOLHEAD)
    #define SWITCHING_TOOLHEAD_Z_HOP          2         // (mm) Elevación en Z para el cambio
  #endif
#endif

/**
 * "Extrusor de Mezcla"
 *   - Agrega los códigos G M163 y M164 para establecer y "confirmar" los factores de mezcla actuales.
 *   - Extiende los procedimientos de paso para mover varios motores paso a paso en proporción a la mezcla.
 *   - Soporte opcional para la función 'M164 S<índice>' de Repetier Firmware que admite herramientas virtuales.
 *   - Esta implementación admite hasta dos extrusores de mezcla.
 *   - Habilitar DIRECT_MIXING_IN_G1 para M165 y mezcla en G1 (según la implementación de referencia de Pia Taubert).
 */
//#define MIXING_EXTRUDER
#if ENABLED(MIXING_EXTRUDER)
  #define MIXING_STEPPERS 2        // Número de motores paso a paso en tu extrusor de mezcla
  #define MIXING_VIRTUAL_TOOLS 16  // Utilizar el método de herramientas virtuales con M163 y M164
  //#define DIRECT_MIXING_IN_G1    // Permitir factores de mezcla ABCDHI en comandos de movimiento G1
  //#define GRADIENT_MIX           // Soporte para mezcla gradual con M166 y LCD
  //#define MIXING_PRESETS         // Asignar 8 ajustes preestablecidos de herramientas virtuales para 2 o 3 MIXING_STEPPERS
  #if ENABLED(GRADIENT_MIX)
    //#define GRADIENT_VTOOL       // Agregar M166 T para usar un índice de herramienta virtual como un alias de gradiente
  #endif
#endif

// Desplazamiento de los extrusores (descomenta si usas más de uno y te basas en el firmware para posicionar al cambiar).
// El desplazamiento debe ser X=0, Y=0 para la boquilla 0 del extrusor (boquilla predeterminada).
// Para las otras boquillas, es su distancia desde la boquilla 0 del extrusor.
//#define HOTEND_OFFSET_X { 0.0, 20.00 } // (mm) desplazamiento relativo en el eje X para cada boquilla
//#define HOTEND_OFFSET_Y { 0.0, 5.00 }  // (mm) desplazamiento relativo en el eje Y para cada boquilla
//#define HOTEND_OFFSET_Z { 0.0, 0.00 }  // (mm) desplazamiento relativo en el eje Z para cada boquilla

// @section multi-material

/**
 * Unidad de Multi-Material
 * Establecer uno de estos modelos predefinidos:
 *
 *   PRUSA_MMU1           : Průša MMU1 (versión "multiplexor")
 *   PRUSA_MMU2           : Průša MMU2
 *   PRUSA_MMU2S          : Průša MMU2S (requiere un extrusor MK3S con sensor de movimiento, EXTRUDERS = 5)
 *   EXTENDABLE_EMU_MMU2  : MMU con número configurable de filamentos (ERCF, SMuFF u otro con firmware compatible con Průša MMU2)
 *   EXTENDABLE_EMU_MMU2S : MMUS con número configurable de filamentos (ERCF, SMuFF u otro con firmware compatible con Průša MMU2)
 *
 * Requiere NOZZLE_PARK_FEATURE para estacionar la cabeza de impresión en caso de fallo de la unidad MMU.
 * Ver opciones adicionales en Configuration_adv.h.
 * :["PRUSA_MMU1", "PRUSA_MMU2", "PRUSA_MMU2S", "EXTENDABLE_EMU_MMU2", "EXTENDABLE_EMU_MMU2S"]
 */
//#define MMU_MODEL PRUSA_MMU2

// @section psu control

/**
 * Control de la Fuente de Alimentación
 *
 * Habilitar y conectar la fuente de alimentación al pin PS_ON_PIN.
 * Especificar si la fuente de alimentación es activa en estado ALTO (HIGH) o activa en estado BAJO (LOW).
 */
//#define PSU_CONTROL
//#define PSU_NAME "Power Supply"

#if ENABLED(PSU_CONTROL)
  //#define MKS_PWC                 // Usar el complemento MKS PWC
  //#define PS_OFF_CONFIRM          // Diálogo de confirmación al apagar la fuente de alimentación
  //#define PS_OFF_SOUND            // Pitido de 1s al apagar la fuente de alimentación
  #define PSU_ACTIVE_STATE LOW      // Establecer 'LOW' para ATX, 'HIGH' para X-Box

  //#define PSU_DEFAULT_OFF               // Mantener la fuente de alimentación apagada hasta que se habilite directamente con M80
  //#define PSU_POWERUP_DELAY      250    // (ms) Retardo para que la fuente de alimentación se caliente a plena potencia
  //#define LED_POWEROFF_TIMEOUT 10000    // (ms) Apagar LEDs después de apagar la fuente de alimentación, con este tiempo de retardo

  //#define POWER_OFF_TIMER               // Habilitar M81 D<segundos> para apagar después de un retardo
  //#define POWER_OFF_WAIT_FOR_COOLDOWN   // Habilitar M81 S para apagar solo después del enfriamiento

  //#define PSU_POWERUP_GCODE  "M355 S1"  // Código G para ejecutar después de encender la fuente de alimentación (por ejemplo, encender la luz de la carcasa)
  //#define PSU_POWEROFF_GCODE "M355 S0"  // Código G para ejecutar antes de apagar la fuente de alimentación (por ejemplo, apagar la luz de la carcasa)

  //#define AUTO_POWER_CONTROL      // Habilitar el control automático del pin PS_ON
  #if ENABLED(AUTO_POWER_CONTROL)
    #define AUTO_POWER_FANS         // Encender la fuente de alimentación si los ventiladores necesitan alimentación
    #define AUTO_POWER_E_FANS
    #define AUTO_POWER_CONTROLLERFAN
    #define AUTO_POWER_CHAMBER_FAN
    #define AUTO_POWER_COOLER_FAN
    #define POWER_TIMEOUT              30 // (s) Apagar la fuente de alimentación si la máquina está inactiva durante esta duración
    //#define POWER_OFF_DELAY          60 // (s) Retardo de apagado después del comando M81. Útil para dejar que los ventiladores funcionen durante más tiempo.
  #endif
  #if ANY(AUTO_POWER_CONTROL, POWER_OFF_WAIT_FOR_COOLDOWN)
    //#define AUTO_POWER_E_TEMP        50 // (°C) Encender la fuente de alimentación si cualquier extrusora está por encima de esta temperatura
    //#define AUTO_POWER_CHAMBER_TEMP  30 // (°C) Encender la fuente de alimentación si la cámara está por encima de esta temperatura
    //#define AUTO_POWER_COOLER_TEMP   26 // (°C) Encender la fuente de alimentación si el enfriador está por encima de esta temperatura
      #endif
#endif

//===========================================================================
//========================== Configuración Térmica ==========================
//===========================================================================
// @section temperatura

/**
 * Sensores de Temperatura:
 *
 * ¡NORMAL ES UNA RESISTENCIA DE PULLUP DE 4.7kΩ! Los sensores de Hotend pueden usar una resistencia de pullup de 1kΩ con la tabla y la resistencia correctas.
 *
 * ================================================================
 * Termistores Analógicos - Pullup de 4.7kΩ - Normal
 * ================================================================
 *     1 : 100kΩ EPCOS - La mejor opción para termistores EPCOS
 *   331 : 100kΩ Igual que el #1, pero escalado a 3.3V para MEGA
 *   332 : 100kΩ Igual que el #1, pero escalado a 3.3V para DUE
 *     2 : 200kΩ ATC Semitec 204GT-2
 *   202 : 200kΩ Copymaster 3D
 *     3 : ???Ω Termistor de Mendel-parts
 *     4 : 10kΩ Termistor genérico !! NO usar para un Hotend, tiene una resolución deficiente a altas temperaturas. !!
 *     5 : 100kΩ ATC Semitec 104GT-2/104NT-4-R025H42G - Utilizado en ParCan, J-Head, E3D y SliceEngineering hasta 300°C
 *   501 : 100kΩ Zonestar - Tronxy X3A
 *   502 : 100kΩ Zonestar - utilizado por la cama caliente en Zonestar Průša P802M
 *   503 : 100kΩ Zonestar (Z8XM2) Termistor de la cama caliente
 *   504 : 100kΩ Zonestar P802QR2 (N.º de parte: QWG-104F-B3950) Termistor del Hotend
 *   505 : 100kΩ Zonestar P802QR2 (N.º de parte: QWG-104F-3950) Termistor de la cama caliente
 *   512 : 100kΩ Hotend RPW-Ultra
 *     6 : 100kΩ EPCOS - No tan preciso como la tabla #1 (creado utilizando un termopar Fluke)
 *     7 : 100kΩ Honeywell 135-104LAG-J01
 *    71 : 100kΩ Honeywell 135-104LAF-J01
 *     8 : 100kΩ Vishay 0603 SMD NTCS0603E3104FXT
 *     9 : 100kΩ GE Sensing AL03006-58.2K-97-G1
 *    10 : 100kΩ RS PRO 198-961
 *    11 : 100kΩ Alfombrillas de silicona AC de Keenovo, la mayoría de las impresoras Wanhao i3 - beta 3950, 1%
 *    12 : 100kΩ Vishay 0603 SMD NTCS0603E3104FXT (#8) - calibrado para la cama caliente de Makibox
 *    13 : 100kΩ Hisens hasta 300°C - para hotend "
 *    14: 100kΩ (R25), 4092K (beta25), 4.7kΩ pull-up, termistor de cama utilizado en Ender-5 S1
 *    15: 100kΩ Calibrado para hotend JGAurora A5
 *    18: 200kΩ ATC Semitec 204GT-2 Dagoma.Fr - MKS_Base_DKU001327
 *    22: 100kΩ GTM32 Pro vB - hotend - pull-up de 4.7kΩ a 3.3V y 220Ω a la entrada analógica
 *    23: 100kΩ GTM32 Pro vB - cama - pull-up de 4.7kΩ a 3.3V y 220Ω a la entrada analógica
 *    30: 100kΩ Kis3d Silicona calefactora de 200W/300W con placa de fundición de precisión de 6 mm (EN AW 5083) NTC100K - beta 3950
 *    60: 100kΩ Maker's Tool Works Kapton Bed Thermistor - beta 3950
 *    61: 100kΩ Formbot/Vivedino 350°C Thermistor - beta 3950
 *    66: 4.7MΩ Dyze Design / Trianglelab T-D500 500°C High Temperature Thermistor
 *    67: 500kΩ SliceEngineering 450°C Thermistor
 *    68: Placa amplificadora PT100 de Dyze Design
 *    70: 100kΩ bq Hephestos 2
 *    75: 100kΩ Almohadilla térmica de silicona genérica con NTC100K MGB18-104F39050L32
 *  2000: 100kΩ Ultimachine Rambo TDK NTCG104LH104KT1 NTC100K motherboard Thermistor
 *   
 * ================================================================
 *   Termistores Analógicos - Resistencia de pull-up de 1kΩ
 *   Atípico, requiere cambiar la resistencia de pull-up de 4.7kΩ por 1kΩ.
 *   (pero ofrece una mayor precisión y un PID más estable)
 * ================================================================
 *    51 : 100kΩ EPCOS (1kΩ pull-up)
 *    52 : 200kΩ ATC Semitec 204GT-2 (1kΩ pull-up)
 *    55 : 100kΩ ATC Semitec 104GT-2 - Utilizado en ParCan y J-Head (1kΩ pull-up)

 * ================================================================
 * Termistores Analógicos - Resistencia de pull-up de 10kΩ - Atípico
 * ================================================================
 *    99 : 100kΩ Presente en algunas impresoras Wanhao i3 con una resistencia de pull-up de 10kΩ
 *
 * ================================================================
 * RTDs Analógicos (Pt100/Pt1000)
 * ================================================================
 *   110 : Pt100 con resistencia de pull-up de 1kΩ (atípico)
 *   147 : Pt100 con resistencia de pull-up de 4.7kΩ
 *  1010 : Pt1000 con resistencia de pull-up de 1kΩ (atípico)
 *  1022 : Pt1000 con resistencia de pull-up de 2.2kΩ
 *  1047 : Pt1000 con resistencia de pull-up de 4.7kΩ (E3D)
 *    20 : Pt100 con circuito en Ultimainboard V2.x con voltaje de referencia del ADC = voltaje de suministro de la placa amplificadora INA826.
 *              NOTA: (1) Debe utilizar una entrada ADC sin resistencia de pull-up. (2) Algunos amplificadores INA826 no son fiables a 3.3V, considere utilizar el sensor 147, 110 o 21.
 *    21 : Pt100 con circuito en Ultimainboard V2.x con voltaje de referencia del ADC de 3.3V (STM32, LPC176x....) y suministro de placa amplificadora INA826 de 5V.
 *              NOTA: Los pines ADC no son tolerantes a 5V. No se recomienda ya que es posible dañar la CPU si se superan los 500°C.
 *   201 : Pt100 con circuito en Overlord, similar a Ultimainboard V2.x
 * 
 * ================================================================
 * Placas de RTD/Termopar SPI
 * ================================================================
 *    -5 : MAX31865 con Pt100/Pt1000, 2, 3 o 4 hilos (solo para sensores 0-1)
 *                  NOTA: Debe descomentar/establecer las definiciones MAX31865_*_OHMS_n a continuación.
 *    -3 : MAX31855 con termopar, -200°C a +700°C (solo para sensores 0-1)
 *    -2 : MAX6675 con termopar, 0°C a +700°C (solo para sensores 0-1)
 *  
 * NOTA: Asegúrese de establecer TEMP_n_CS_PIN en su archivo de pines para cada TEMP_SENSOR_n que utilice un termopar SPI. De forma predeterminada,
 * se utiliza SPI de hardware en el bus serie predeterminado. Si también ha configurado TEMP_n_SCK_PIN y TEMP_n_MISO_PIN,
 * se utilizará SPI de software en esos puertos en su lugar. Puede forzar SPI de hardware en el bus predeterminado en el
 * archivo Configuration_adv.h. En este momento, no se admiten buses SPI de hardware separados para los sensores.
 *
 * ================================================================
 * Placas de Termopar Analógicas
 * ================================================================
 *    -4 : AD8495 con termopar
 *    -1 : AD595 con termopar
 *
 * ================================================================
 * Sensor interno del SoC
 * ================================================================
 *   100 : Sensor interno del SoC
 *
 * ================================================================
 * Sensores Térmicos Personalizados/Ficticios/Otros
 * ================================================================
 *     0 : no utilizado
 *  1000 : Personalizado - Especifica los parámetros en Configuration_adv.h
 * 
 *   !!! Utiliza estos fines de prueba o desarrollo. NUNCA para máquinas de producción. !!!
 *   998 : Tabla Ficticia que SIEMPRE lee 25°C o la temperatura definida a continuación.
 *   999 : Tabla Ficticia que SIEMPRE lee 100°C o la temperatura definida a continuación.
*/
#define TEMP_SENSOR_0 1
#define TEMP_SENSOR_1 0
#define TEMP_SENSOR_2 0
#define TEMP_SENSOR_3 0
#define TEMP_SENSOR_4 0
#define TEMP_SENSOR_5 0
#define TEMP_SENSOR_6 0
#define TEMP_SENSOR_7 0
#define TEMP_SENSOR_BED 1
#define TEMP_SENSOR_PROBE 0
#define TEMP_SENSOR_CHAMBER 0
#define TEMP_SENSOR_COOLER 0
#define TEMP_SENSOR_BOARD 0
#define TEMP_SENSOR_SOC 0
#define TEMP_SENSOR_REDUNDANT 0

// Lecturas de temperatura constante para termistores ficticios, para usar con 998 y 999
#define DUMMY_THERMISTOR_998_VALUE  25
#define DUMMY_THERMISTOR_999_VALUE 100

// Valores de resistencia al utilizar sensores MAX31865 (-5) en TEMP_SENSOR_0 / 1
#if TEMP_SENSOR_IS_MAX_TC(0)
  #define MAX31865_SENSOR_OHMS_0      100 // (Ω) Normalmente 100 o 1000 (PT100 o PT1000)
  #define MAX31865_CALIBRATION_OHMS_0 430 // (Ω) Normalmente 430 para Adafruit PT100; 4300 para Adafruit PT1000
#endif
#if TEMP_SENSOR_IS_MAX_TC(1)
  #define MAX31865_SENSOR_OHMS_1      100
  #define MAX31865_CALIBRATION_OHMS_1 430
#endif
#if TEMP_SENSOR_IS_MAX_TC(2)
  #define MAX31865_SENSOR_OHMS_2      100
  #define MAX31865_CALIBRATION_OHMS_2 430
#endif

#if HAS_E_TEMP_SENSOR
  #define TEMP_RESIDENCY_TIME         10  // (segundos) Tiempo de espera para que el hotend se "estabilice" en M109
  #define TEMP_WINDOW                  1  // (°C) Proximidad de temperatura para el temporizador de "temperatura alcanzada"
  #define TEMP_HYSTERESIS              3  // (°C) Proximidad de temperatura considerada "suficientemente cerca" al objetivo
#endif

#if TEMP_SENSOR_BED
  #define TEMP_BED_RESIDENCY_TIME     10  // (segundos) Tiempo de espera para que la cama se "estabilice" en M190
  #define TEMP_BED_WINDOW              1  // (°C) Proximidad de temperatura para el temporizador de "temperatura alcanzada"
  #define TEMP_BED_HYSTERESIS          3  // (°C) Proximidad de temperatura considerada "suficientemente cerca" al objetivo
#endif

#if TEMP_SENSOR_CHAMBER
  #define TEMP_CHAMBER_RESIDENCY_TIME 10  // (segundos) Tiempo de espera para que la cámara se "estabilice" en M191
  #define TEMP_CHAMBER_WINDOW          1  // (°C) Proximidad de temperatura para el temporizador de "temperatura alcanzada"
  #define TEMP_CHAMBER_HYSTERESIS      3  // (°C) Proximidad de temperatura considerada "suficientemente cerca" al objetivo
#endif

/**
 * Sensor de temperatura redundante (TEMP_SENSOR_REDUNDANT)
 *
 * Utiliza un sensor de temperatura como sensor redundante para otra lectura. Selecciona un sensor de temperatura no utilizado
 * y otro sensor para el que deseas que sea redundante. Si los dos termistores difieren en TEMP_SENSOR_REDUNDANT_MAX_DIFF (°C),
 * la impresión se abortará. El sensor seleccionado tendrá sus funciones normales desactivadas; es decir, seleccionar el sensor
 * de la cama (-1) desactivará la calefacción/monitorización de la cama.
 * 
 * Para seleccionar la fuente/destino, utiliza: COOLER, PROBE, BOARD, CHAMBER, BED, E0, E1, E2, E3, E4, E5, E6, E7
 */
#if TEMP_SENSOR_REDUNDANT
  #define TEMP_SENSOR_REDUNDANT_SOURCE    E1  // El sensor que proporcionará la lectura redundante.
  #define TEMP_SENSOR_REDUNDANT_TARGET    E0  // El sensor para el que estamos proporcionando una lectura redundante.
  #define TEMP_SENSOR_REDUNDANT_MAX_DIFF  10  // (°C) Diferencia de temperatura que provocará la interrupción de la impresión.
#endif

// Por debajo de esta temperatura, se apagará el calentador
// porque probablemente indica un cable de termistor roto.
#define HEATER_0_MINTEMP   5
#define HEATER_1_MINTEMP   5
#define HEATER_2_MINTEMP   5
#define HEATER_3_MINTEMP   5
#define HEATER_4_MINTEMP   5
#define HEATER_5_MINTEMP   5
#define HEATER_6_MINTEMP   5
#define HEATER_7_MINTEMP   5
#define BED_MINTEMP        5
#define CHAMBER_MINTEMP    5

// Por encima de esta temperatura, se apagará el calentador.
// Esto puede proteger los componentes del sobrecalentamiento, pero NO de cortocircuitos y fallos.
// (Utiliza MINTEMP para protección contra cortocircuitos/fallos del termistor).
#define HEATER_0_MAXTEMP 275
#define HEATER_1_MAXTEMP 275
#define HEATER_2_MAXTEMP 275
#define HEATER_3_MAXTEMP 275
#define HEATER_4_MAXTEMP 275
#define HEATER_5_MAXTEMP 275
#define HEATER_6_MAXTEMP 275
#define HEATER_7_MAXTEMP 275
#define BED_MAXTEMP      150
#define CHAMBER_MAXTEMP  60

/**
 * Sobrepaso térmico
 * Durante el calentamiento (y la impresión), la temperatura a menudo puede "sobrepasarse" varios grados
 * (especialmente antes de la calibración del PID). Configurar la temperatura objetivo demasiado cerca de MAXTEMP garantiza
 * un apagado de MAXTEMP. Utiliza estos valores para prohibir que se establezcan temperaturas demasiado cerca de MAXTEMP.
 */
#define HOTEND_OVERSHOOT 15   // (°C) Prohibir temperaturas por encima de MAXTEMP - SOBREPASO
#define BED_OVERSHOOT    10   // (°C) Prohibir temperaturas por encima de MAXTEMP - SOBREPASO
#define COOLER_OVERSHOOT  2   // (°C) Prohibir temperaturas más cercanas que SOBREPASO

//===========================================================================
//========================= Configuración de PID ============================
//===========================================================================

// @section hotend temp

/**
 * Control de temperatura
 *
 *  (NONE) : Calefacción en todo o nada
 * PIDTEMP : Control de temperatura PID (~4.1K)
 * MPCTEMP : Control de temperatura del modelo predictivo. (~1.8K sin ajuste automático)
 */
#define PIDTEMP           // Consulta la guía de ajuste del PID en https://reprap.org/wiki/PID_Tuning
//#define MPCTEMP         // ** EXPERIMENTAL ** Consulta https://marlinfw.org/docs/features/model_predictive_control.html

#define PID_MAX  255      // Limita la corriente del hotend mientras el PID está activo (consulta PID_FUNCTIONAL_RANGE a continuación); 255=corriente máxima
#define PID_K1 0.95       // Factor de suavizado dentro de cualquier bucle PID

#if ENABLED(PIDTEMP)
  //#define PID_DEBUG             // Imprimir datos de depuración del PID en el puerto serie. Utiliza 'M303 D' para alternar la activación.
  //#define PID_PARAMS_PER_HOTEND // Utiliza parámetros PID separados para cada extrusor (útil para extrusores desparejados)
                                  // Establecer/obtener con código G: M301 E[número del extrusor, 0-2]

  #if ENABLED(PID_PARAMS_PER_HOTEND)
    // Especifica hasta un valor por hotend aquí, según tu configuración.
    // Si hay menos valores, el último se aplica a los hotends restantes.
    #define DEFAULT_Kp_LIST {  22.20,  22.20 }
    #define DEFAULT_Ki_LIST {   1.08,   1.08 }
    #define DEFAULT_Kd_LIST { 114.00, 114.00 }
  #else
    #define DEFAULT_Kp  22.20
    #define DEFAULT_Ki   1.08
    #define DEFAULT_Kd 114.00
  #endif
#else
  #define BANG_MAX 255    // Limita la corriente del hotend mientras está en modo de calefacción en todo o nada; 255=corriente máxima
#endif

/**
 * Control de modelo predictivo para el hotend
 *
 * Utiliza un modelo físico del hotend para controlar la temperatura. Cuando está configurado correctamente,
 * proporciona una mejor capacidad de respuesta y estabilidad que el PID, y también elimina la necesidad de 
 * PID_EXTRUSION_SCALING y PID_FAN_SCALING. Utiliza M306 T para ajustar automáticamente el modelo.
 * @section mpctemp
 */
#if ENABLED(MPCTEMP)
  //#define MPC_AUTOTUNE                              // Incluye un método para realizar el ajuste automático del MPC (~6.3K bytes de flash)
  //#define MPC_EDIT_MENU                             // Añade la edición del MPC al menú "Configuración avanzada". (~1.3K bytes de flash)
  //#define MPC_AUTOTUNE_MENU                         // Añade el ajuste automático del MPC al menú "Configuración avanzada". (~350 bytes de flash)

  #define MPC_MAX 255                                 // (0..255) Corriente al nozzle mientras el MPC está activo.
  #define MPC_HEATER_POWER { 40.0f }                  // (W) Potencia de calentamiento del cartucho.

  #define MPC_INCLUDE_FAN                             // ¿Modelar la velocidad del ventilador?

  // Constantes físicas medidas con M306
  #define MPC_BLOCK_HEAT_CAPACITY { 16.7f }           // (J/K) Capacidad térmica del bloque de calor.
  #define MPC_SENSOR_RESPONSIVENESS { 0.22f }         // (K/s por ∆K) Tasa de cambio de la temperatura del sensor desde el bloque de calor.
  #define MPC_AMBIENT_XFER_COEFF { 0.068f }           // (W/K) Coeficiente de transferencia de calor del bloque de calor al aire de la habitación sin ventilador encendido.
  #if ENABLED(MPC_INCLUDE_FAN)
    #define MPC_AMBIENT_XFER_COEFF_FAN255 { 0.097f }  // (W/K) Coeficiente de transferencia de calor del bloque de calor al aire de la habitación con ventilador encendido al máximo.
  #endif

  // Para un ventilador y múltiples hotends, el MPC necesita saber cómo aplicar el efecto de enfriamiento del ventilador.
  #if ENABLED(MPC_INCLUDE_FAN)
    //#define MPC_FAN_0_ALL_HOTENDS
    //#define MPC_FAN_0_ACTIVE_HOTEND
  #endif

  #define FILAMENT_HEAT_CAPACITY_PERMM { 5.6e-3f }    // 0.0056 J/K/mm para PLA de 1.75mm (0.0149 J/K/mm para PLA de 2.85mm).
  //#define FILAMENT_HEAT_CAPACITY_PERMM { 3.6e-3f }  // 0.0036 J/K/mm para PETG de 1.75mm (0.0094 J/K/mm para PETG de 2.85mm).

  // Opciones avanzadas
  #define MPC_SMOOTHING_FACTOR 0.5f                   // (0.0...1.0) Los sensores de temperatura ruidosos pueden necesitar un valor más bajo para la estabilización.
  #define MPC_MIN_AMBIENT_CHANGE 1.0f                 // (K/s) Tasa de cambio de la temperatura ambiente del modelo, cuando se corrigen inexactitudes del modelo.
  #define MPC_STEADYSTATE 0.5f                        // (K/s) Tasa de cambio de temperatura para hacer cumplir la lógica de estado estacionario.

  #define MPC_TUNING_POS { X_CENTER, Y_CENTER, 1.0f } // (mm) Posición de ajuste automático M306, idealmente centro de la cama a la altura de la primera capa.
  #define MPC_TUNING_END_Z 10.0f                      // (mm) Posición final Z de ajuste automático M306.
#endif

//===========================================================================
//====================== PID > Control de temperatura de la cama ======================
//===========================================================================

// @section temperatura de la cama

/**
 * Potencia máxima de la cama
 * Se aplica a todas las formas de control de la cama (PID, bang-bang y bang-bang con histéresis).
 * Cuando se establece en cualquier valor por debajo de 255, habilita una forma de modulación por ancho de pulso (PWM) en la cama
 * por lo que no lo uses a menos que estés de acuerdo con el uso de PWM en tu cama. (Ver comentario sobre habilitar PIDTEMPBED)
 */
#define MAX_BED_POWER 255 // limita el ciclo de trabajo de la cama; 255 = corriente máxima

/**
 * Calefacción PID de la cama
 *
 * La frecuencia del PID será la misma que la del PWM del extrusor.
 * Si PID_dT es el valor predeterminado y correcto para el hardware/configuración, esto significa 7,689 Hz,
 * lo cual es adecuado para generar una onda cuadrada en una carga resistiva y no afecta significativamente
 * el calentamiento del FET. Esto también funciona bien con un relé de estado sólido Fotek SSR-10DA en un calentador de 250 W.
 * Si tu configuración es significativamente diferente y no entiendes los problemas involucrados, no uses el PID de la cama hasta que alguien más
 * verifique que tu hardware funcione correctamente.
 *
 * Con esta opción deshabilitada, se utilizará el método bang-bang. BED_LIMIT_SWITCHING habilita la histéresis.
 */
//#define PIDTEMPBED

#if ENABLED(PIDTEMPBED)
  //#define MIN_BED_POWER 0
  //#define PID_BED_DEBUG // Imprime datos de depuración del PID de la cama en el puerto serie.

  // Calentador de silicona de 120V y 250W en una superficie de vidrio borosilicato de 4 mm (MendelMax 1.5+)
  // del modelo FOPDT - kp = 0.39 Tp = 405 Tdead = 66, Tc ajustado a 79.2, factor agresivo de 0.15 (vs 0.1, 1, 10)
  #define DEFAULT_bedKp 10.00
  #define DEFAULT_bedKi 0.023
  #define DEFAULT_bedKd 305.4

  // ENCUENTRA EL TUYO: "M303 E-1 C8 S90" para ejecutar la auto-tarificación de la cama a 90 gradosC durante 8 ciclos.
#else
  //#define BED_LIMIT_SWITCHING   // Mantiene la temperatura de la cama dentro de BED_HYSTERESIS del objetivo
#endif

//===========================================================================
//================ PID > Control de temperatura de la cámara ================
//===========================================================================

/**
 * Calefacción PID de la cámara
 *
 * Si esta opción está habilitada, establece las constantes del PID a continuación.
 * Si esta opción está deshabilitada, se utilizará el método bang-bang y CHAMBER_LIMIT_SWITCHING habilitará la histéresis.
 *
 * La frecuencia del PID será la misma que la del PWM del extrusor.
 * Si PID_dT es el valor predeterminado y correcto para el hardware/configuración, esto significa 7,689 Hz,
 * lo cual es adecuado para generar una onda cuadrada en una carga resistiva y no afecta significativamente
 * el calentamiento del FET. Esto también funciona bien con un relé de estado sólido Fotek SSR-10DA en un calentador de 200 W.
 * Si tu configuración es significativamente diferente y no entiendes los problemas involucrados, no uses el PID de la cámara hasta que alguien más
 * verifique que tu hardware funcione correctamente.
 * @section temperatura de la cámara
 */
//#define PIDTEMPCHAMBER
//#define CHAMBER_LIMIT_SWITCHING

/**
 * Potencia máxima de la cámara
 * Se aplica a todas las formas de control de la cámara (PID, bang-bang y bang-bang con histéresis).
 * Cuando se establece en cualquier valor por debajo de 255, habilita una forma de modulación por ancho de pulso (PWM) en el calentador de la cámara
 * por lo que no lo uses a menos que estés de acuerdo con el uso de PWM en tu calentador. (Ver comentario sobre habilitar PIDTEMPCHAMBER)
 */
#define MAX_CHAMBER_POWER 255 // limita el ciclo de trabajo del calentador de la cámara; 255 = corriente máxima

#if ENABLED(PIDTEMPCHAMBER)
  #define MIN_CHAMBER_POWER 0
  //#define PID_CHAMBER_DEBUG // Imprime datos de depuración del PID de la cámara en el puerto serie.

  // Calentador "MyHeat Personal Heater" de Lasko (200W) modificado con un relé de estado sólido Fotek SSR-10DA para controlar solo el elemento calefactor
  // y colocado dentro de la pequeña carpa de la impresora Creality.
  //
  #define DEFAULT_chamberKp 37.04
  #define DEFAULT_chamberKi 1.40
  #define DEFAULT_chamberKd 655.17
  // M309 P37.04 I1.04 D655.17

  // ENCUENTRA EL TUYO: "M303 E-2 C8 S50" para ejecutar la auto-tarificación de la cámara a 50 gradosC durante 8 ciclos.
#endif // PIDTEMPCHAMBER

#if ANY(PIDTEMP, PIDTEMPBED, PIDTEMPCHAMBER)
  //#define PID_OPENLOOP          // Pone el PID en bucle abierto. M104/M140 establece la potencia de salida de 0 a PID_MAX
  //#define SLOW_PWM_HEATERS      // PWM con una frecuencia muy baja (aproximadamente 0.125Hz = 8s) y un tiempo de estado mínimo de aproximadamente 1s, útil para calentadores controlados por un relé
  #define PID_FUNCTIONAL_RANGE 10 // Si la diferencia de temperatura entre la temperatura objetivo y la temperatura actual
                                  // es mayor que PID_FUNCTIONAL_RANGE, el PID se apagará y el calentador se establecerá en el mínimo/máximo.

  //#define PID_EDIT_MENU         // Agrega la edición del PID al menú "Configuración avanzada". (~700 bytes de memoria flash)
  //#define PID_AUTOTUNE_MENU     // Agrega la auto-tarificación del PID al menú "Configuración avanzada". (~250 bytes de memoria flash)
#endif

// @section safety

/**
 * Evita la extrusión si la temperatura está por debajo de EXTRUDE_MINTEMP.
 * Agrega M302 para establecer la temperatura mínima de extrusión y/o activar y desactivar
 * la prevención de extrusión en frío.
 *
 * *** SE RECOMIENDA ENCARECIDAMENTE DEJAR ACTIVADA ESTA OPCIÓN. ***
 */
#define PREVENT_COLD_EXTRUSION
#define EXTRUDE_MINTEMP 170

/**
 * Evita una única extrusión más larga que EXTRUDE_MAXLENGTH.
 * Nota: Para los extrusores Bowden, haz que este valor sea lo suficientemente grande como para permitir cargar/descargar.
 */
#define PREVENT_LENGTHY_EXTRUDE
#define EXTRUDE_MAXLENGTH 200

//===========================================================================
//================= Protección contra Sobrecalentamiento ====================
//===========================================================================

/**
 * La Protección Térmica proporciona protección adicional a tu impresora contra daños
 * e incendios. Marlin siempre incluye rangos de temperatura mínima y máxima seguros
 * que protegen contra un cable de termistor roto o desconectado.
 *
 * El problema: Si un termistor se desprende, reportará la temperatura mucho más baja
 * del aire en la habitación, y el firmware mantendrá
 * el calentador encendido.
 *
 * Si recibes errores de "Thermal Runaway" o "Heating failed",
 * los detalles se pueden ajustar en Configuration_adv.h
 */

#define THERMAL_PROTECTION_HOTENDS // Activar la protección térmica para todos los extrusores
#define THERMAL_PROTECTION_BED     // Activar la protección térmica para la cama caliente
#define THERMAL_PROTECTION_CHAMBER // Activar la protección térmica para la cámara caliente
#define THERMAL_PROTECTION_COOLER  // Activar la protección térmica para la refrigeración láser

//===========================================================================
//============================== Ajustes Mecánicos ==========================
//===========================================================================

// @section machine

// Habilitar una de las opciones a continuación para la cinemática CoreXY, CoreXZ o CoreYZ,
// ya sea en el orden habitual o invertido.
//#define COREXY
//#define COREXZ
//#define COREYZ
//#define COREYX
//#define COREZX
//#define COREZY
//#define MARKFORGED_XY  // MarkForged. Ver https://reprap.org/forum/read.php?152,504042
//#define MARKFORGED_YX

// Habilitar para una impresora de estilo de correa con movimiento "Z" infinito.
//#define BELTPRINTER

// Habilitar para cinemática Polargraph
//#define POLARGRAPH
#if ENABLED(POLARGRAPH)
  #define POLARGRAPH_MAX_BELT_LEN  1035.0 // (mm) Longitud de la correa en extensión completa. Anular con M665 H.
  #define DEFAULT_SEGMENTS_PER_SECOND 5   // Segmentación del movimiento basada en la duración
  #define PEN_UP_DOWN_MENU                // Agregar "Pluma arriba" y "Pluma abajo" al menú MarlinUI
#endif

// @section delta

// Habilitar para cinemática DELTA y configurar a continuación
//#define DELTA
#if ENABLED(DELTA)

  // Crear curvas delta a partir de muchas líneas rectas (interpolación lineal).
  // Esto es un equilibrio entre esquinas visibles (pocas segmentos)
  // y sobrecarga del procesador (muchas llamadas sqrt costosas).
  #define DEFAULT_SEGMENTS_PER_SECOND 200

  // Después del homing, mover hacia abajo a una altura donde el movimiento XY no esté restringido
  //#define DELTA_HOME_TO_SAFE_ZONE

  // Menú de calibración delta
  // Agregar calibración de tres puntos al menú MarlinUI.
  // Ver http://minow.blogspot.com/index.html#4918805519571907051
  //#define DELTA_CALIBRATION_MENU

  // Autocalibración delta G33. Habilitar EEPROM_SETTINGS para almacenar los resultados.
  //#define DELTA_AUTO_CALIBRATION

  #if ENABLED(DELTA_AUTO_CALIBRATION)
    // Número predeterminado de puntos de prueba: n*n (1 -> 7)
    #define DELTA_CALIBRATION_DEFAULT_POINTS 4
  #endif

  #if ANY(DELTA_AUTO_CALIBRATION, DELTA_CALIBRATION_MENU)
    // Tamaño de paso para la prueba de papel
    #define PROBE_MANUALLY_STEP 0.05      // (mm)
  #endif

  // Diámetro de la superficie de impresión/2 menos el espacio inaccesible (evitar colisiones con las torres verticales).
  #define PRINTABLE_RADIUS       140.0    // (mm)

  // Área máxima alcanzable
  #define DELTA_MAX_RADIUS       140.0    // (mm)

  // Distancia de centro a centro de los agujeros en las barras diagonales.
  #define DELTA_DIAGONAL_ROD 250.0        // (mm)

  // Distancia entre la cama y la posición de inicio de la boquilla en el eje Z
  #define DELTA_HEIGHT 250.00             // (mm) Obtener este valor de G33 auto calibrate

  #define DELTA_ENDSTOP_ADJ { 0.0, 0.0, 0.0 } // Obtener estos valores de G33 auto calibrate

  // Distancia horizontal cubierta por las barras diagonales cuando el efector está centrado.
  #define DELTA_RADIUS 124.0              // (mm) Obtener este valor de G33 auto calibrate

  // Ajustes de recorte para torres individuales
  // correcciones de ángulo de torre para torre X e Y / rotar XYZ para que el ángulo de la torre Z = 0
  // medido en grados en sentido antihorario al mirar desde arriba de la impresora
  #define DELTA_TOWER_ANGLE_TRIM { 0.0, 0.0, 0.0 } // Obtener estos valores de G33 auto calibrate

  // Ajustes de recorte de radio delta y barra diagonal (mm)
  //#define DELTA_RADIUS_TRIM_TOWER { 0.0, 0.0, 0.0 }
  //#define DELTA_DIAGONAL_ROD_TRIM_TOWER { 0.0, 0.0, 0.0 }
#endif

// @section scara

/**
 * MORGAN_SCARA fue desarrollado por QHARLEY en Sudáfrica en 2012-2013.
 * Implementado y ligeramente modificado por JCERNY en junio de 2014.
 *
 * Mostly Printed SCARA es un diseño de código abierto creado por Tyler Williams. Ver:
 *   https://www.thingiverse.com/thing:2487048
 *   https://www.thingiverse.com/thing:1241491
 */
//#define MORGAN_SCARA
//#define MP_SCARA

#if ANY(MORGAN_SCARA, MP_SCARA)
  // Si el movimiento es entrecortado, intenta reducir este valor
  #define DEFAULT_SEGMENTS_PER_SECOND 200

  // Longitud de los brazos de soporte interno y externo. Mide las longitudes de los brazos con precisión.
  #define SCARA_LINKAGE_1 150       // (mm)
  #define SCARA_LINKAGE_2 150       // (mm)

  // Desplazamiento de la torre SCARA (posición de la torre en relación a la posición cero de la cama)
  // Esto debe ser lo suficientemente preciso, ya que define la posición de la cama de impresión en el espacio SCARA.
  #define SCARA_OFFSET_X  100       // (mm)
  #define SCARA_OFFSET_Y  -56       // (mm)

  #if ENABLED(MORGAN_SCARA)

    //#define DEBUG_SCARA_KINEMATICS
    #define FEEDRATE_SCALING        // Convertir la velocidad de avance XY de mm/s a grados/s sobre la marcha

    // Radio alrededor del centro donde el brazo no puede alcanzar
    #define MIDDLE_DEAD_ZONE_R   0  // (mm)

    #define THETA_HOMING_OFFSET  0  // Calculado a partir de la Guía de Calibración y M360 / M114. Ver http://reprap.harleystudio.co.za/?page_id=1073
    #define PSI_HOMING_OFFSET    0  // Calculado a partir de la Guía de Calibración y M364 / M114. Ver http://reprap.harleystudio.co.za/?page_id=1073

  #elif ENABLED(MP_SCARA)

    #define SCARA_OFFSET_THETA1  12 // grados
    #define SCARA_OFFSET_THETA2 131 // grados

  #endif

#endif

// @section tpara

// Habilitar para cinemática TPARA y configurar a continuación
//#define AXEL_TPARA
#if ENABLED(AXEL_TPARA)
  #define DEBUG_TPARA_KINEMATICS
  #define DEFAULT_SEGMENTS_PER_SECOND 200

  // Longitud de los brazos de soporte interno y externo. Medir las longitudes de los brazos con precisión.
  #define TPARA_LINKAGE_1 120       // (mm)
  #define TPARA_LINKAGE_2 120       // (mm)

  // Compensación de la torre TPARA (posición de la torre en relación con la posición cero de la cama)
  // Esto debe ser bastante preciso ya que define la posición de la cama de impresión en el espacio SCARA.
  #define TPARA_OFFSET_X    0       // (mm)
  #define TPARA_OFFSET_Y    0       // (mm)
  #define TPARA_OFFSET_Z    0       // (mm)

  #define FEEDRATE_SCALING        // Convertir la velocidad de avance XY de mm/s a grados/s sobre la marcha

  // Radio alrededor del centro donde el brazo no puede llegar
  #define MIDDLE_DEAD_ZONE_R   0  // (mm)

  // Calculado a partir de la Guía de calibración y M360 / M114. Consulta http://reprap.harleystudio.co.za/?page_id=1073
  #define THETA_HOMING_OFFSET  0
  #define PSI_HOMING_OFFSET    0
#endif

// @section polar

/**
 * Cinemática POLAR
 * Desarrollado por Kadir ilkimen para PolarBear CNC y babyBear
 * https://github.com/kadirilkimen/Polar-Bear-Cnc-Machine
 * https://github.com/kadirilkimen/babyBear-3D-printer
 *
 * Una máquina polar puede tener diferentes configuraciones.
 * Esta cinemática solo es compatible con la siguiente configuración:
 *        X : Lineal independiente
 *   Y o B : Polar
 *        Z : Lineal independiente
 *
 * Por ejemplo, PolarBear tiene CoreXZ más Polar Y o B.
 *
 * Problema de movimiento para el eje Polar cerca del centro / origen:
 *
 * Impresión 3D:
 * Los movimientos muy cerca del centro del eje polar tardan más tiempo que otros.
 * Esta breve demora resulta en una mayor deposición de material debido a la presión en la boquilla.
 *
 * La cinemática actual y la escala de velocidad de avance tratan esto haciendo que el movimiento sea lo más rápido posible.
 * Funciona para movimientos lentos, pero no funciona bien con movimientos rápidos. Se debe implementar una compensación de extrusión más complicada.
 *
 * Idealmente, debería estimar que hay una rotación larga cerca del centro y que causará una deposición no deseada.
 * Por lo tanto, puede compensar la extrusión de antemano.
 *
 * Corte láser:
 * Lo mismo sería un problema para el grabado láser también. A medida que pasa tiempo girando en el punto central,
 * es más probable que queme más material de lo que debería. Por lo tanto, se implementaría una compensación similar para las operaciones de corte láser.
 *
 * Fresado:
 * Esto no debería ser un problema para operaciones de corte / fresado.
 */
//#define POLAR
#if ENABLED(POLAR)
  #define DEFAULT_SEGMENTS_PER_SECOND 180   // Si el movimiento es irregular, intenta reducir este valor
  #define PRINTABLE_RADIUS 82.0f            // (mm) Recorrido máximo del eje X
  
  // Los movimientos que se encuentran dentro de POLAR_FAST_RADIUS se les asigna la máxima velocidad de avance posible
  // para compensar la deposición no deseada relacionada con el problema del movimiento cercano al origen.
  #define POLAR_FAST_RADIUS 3.0f            // (mm)

  // Radio al que no se puede llegar con la herramienta.
  // Es necesario si la herramienta no está perfectamente alineada con el centro del eje polar.
  #define POLAR_CENTER_OFFSET 0.0f          // (mm)

  #define FEEDRATE_SCALING                  // Convertir la velocidad de avance XY de mm/s a grados/s sobre la marcha
#endif

// @section machine

// Robot articulado (brazo). Las articulaciones se asignan directamente a los ejes sin cinemática.
//#define ARTICULATED_ROBOT_ARM

// Para un cortador de alambre caliente con ejes paralelos horizontales (X, I) donde las alturas de los dos extremos del alambre
// se controlan mediante ejes paralelos (Y, J). Las articulaciones se asignan directamente a los ejes (sin cinemática).
//#define FOAMCUTTER_XYUV

//===========================================================================
//================== Configuración de los finales de carrera ================
//===========================================================================

// @section endstops

// Habilitar resistencias pull-up para todos los finales de carrera para evitar un estado flotante
#define ENDSTOPPULLUPS
#if DISABLED(ENDSTOPPULLUPS)
  // Deshabilitar ENDSTOPPULLUPS para establecer las resistencias pull-up individualmente
  //#define ENDSTOPPULLUP_XMIN
  //#define ENDSTOPPULLUP_YMIN
  //#define ENDSTOPPULLUP_ZMIN
  //#define ENDSTOPPULLUP_IMIN
  //#define ENDSTOPPULLUP_JMIN
  //#define ENDSTOPPULLUP_KMIN
  //#define ENDSTOPPULLUP_UMIN
  //#define ENDSTOPPULLUP_VMIN
  //#define ENDSTOPPULLUP_WMIN
  //#define ENDSTOPPULLUP_XMAX
  //#define ENDSTOPPULLUP_YMAX
  //#define ENDSTOPPULLUP_ZMAX
  //#define ENDSTOPPULLUP_IMAX
  //#define ENDSTOPPULLUP_JMAX
  //#define ENDSTOPPULLUP_KMAX
  //#define ENDSTOPPULLUP_UMAX
  //#define ENDSTOPPULLUP_VMAX
  //#define ENDSTOPPULLUP_WMAX
  //#define ENDSTOPPULLUP_ZMIN_PROBE
#endif

// Habilitar resistencias pulldown para todos los finales de carrera para evitar un estado flotante
//#define ENDSTOPPULLDOWNS
#if DISABLED(ENDSTOPPULLDOWNS)
  // Deshabilitar ENDSTOPPULLDOWNS para establecer las resistencias pulldown individualmente
  //#define ENDSTOPPULLDOWN_XMIN
  //#define ENDSTOPPULLDOWN_YMIN
  //#define ENDSTOPPULLDOWN_ZMIN
  //#define ENDSTOPPULLDOWN_IMIN
  //#define ENDSTOPPULLDOWN_JMIN
  //#define ENDSTOPPULLDOWN_KMIN
  //#define ENDSTOPPULLDOWN_UMIN
  //#define ENDSTOPPULLDOWN_VMIN
  //#define ENDSTOPPULLDOWN_WMIN
  //#define ENDSTOPPULLDOWN_XMAX
  //#define ENDSTOPPULLDOWN_YMAX
  //#define ENDSTOPPULLDOWN_ZMAX
  //#define ENDSTOPPULLDOWN_IMAX
  //#define ENDSTOPPULLDOWN_JMAX
  //#define ENDSTOPPULLDOWN_KMAX
  //#define ENDSTOPPULLDOWN_UMAX
  //#define ENDSTOPPULLDOWN_VMAX
  //#define ENDSTOPPULLDOWN_WMAX
  //#define ENDSTOPPULLDOWN_ZMIN_PROBE
#endif

/**
 * Estado de "Hit" de los finales de carrera
 * Establece el estado (HIGH o LOW) que se aplica a cada final de carrera.
 */
#define X_MIN_ENDSTOP_HIT_STATE HIGH
#define X_MAX_ENDSTOP_HIT_STATE HIGH
#define Y_MIN_ENDSTOP_HIT_STATE HIGH
#define Y_MAX_ENDSTOP_HIT_STATE HIGH
#define Z_MIN_ENDSTOP_HIT_STATE HIGH
#define Z_MAX_ENDSTOP_HIT_STATE HIGH
#define I_MIN_ENDSTOP_HIT_STATE HIGH
#define I_MAX_ENDSTOP_HIT_STATE HIGH
#define J_MIN_ENDSTOP_HIT_STATE HIGH
#define J_MAX_ENDSTOP_HIT_STATE HIGH
#define K_MIN_ENDSTOP_HIT_STATE HIGH
#define K_MAX_ENDSTOP_HIT_STATE HIGH
#define U_MIN_ENDSTOP_HIT_STATE HIGH
#define U_MAX_ENDSTOP_HIT_STATE HIGH
#define V_MIN_ENDSTOP_HIT_STATE HIGH
#define V_MAX_ENDSTOP_HIT_STATE HIGH
#define W_MIN_ENDSTOP_HIT_STATE HIGH
#define W_MAX_ENDSTOP_HIT_STATE HIGH
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE HIGH

// Habilitar esta función si todos los pines de los finales de carrera habilitados admiten interrupciones.
// Esto eliminará la necesidad de comprobar los pines de interrupción, ahorrando muchos ciclos de CPU.
//#define ENDSTOP_INTERRUPTS_FEATURE

/**
 * Umbral de ruido de los finales de carrera
 *
 * Habilitar si su sonda o finales de carrera se activan falsamente debido al ruido.
 *
 * - Valores más altos pueden afectar la repetibilidad o precisión de algunas sondas de cama.
 * - Para solucionar el ruido, instale un condensador cerámico de 100nF en paralelo con el interruptor.
 * - Esta función no es necesaria para los microinterruptores comunes montados en PCB
 *   basados en el diseño de Makerbot, que ya tienen el condensador de 100nF.
 *
 * :[2,3,4,5,6,7]
 */
//#define ENDSTOP_NOISE_THRESHOLD 2

// Comprobar si los finales de carrera están bloqueados o desconectados durante los movimientos de homing.
//#define DETECT_BROKEN_ENDSTOP

//=============================================================================
//======================== Configuración de Movimiento ========================
//=============================================================================
// Sección: motion

/**
 * Configuración predeterminada
 *
 * Estas configuraciones pueden restablecerse mediante M502
 *
 * Tenga en cuenta que si se habilita la EEPROM, los valores guardados anularán estos.
 */

/**
 * Con esta opción, cada motor paso a paso E puede tener sus propios factores para las
 * siguientes configuraciones de movimiento. Si se proporcionan menos factores que
 * el número total de extrusoras, el último valor se aplica al resto.
 */
//#define DISTINCT_E_FACTORS

/**
 * Pasos por unidad predeterminados del eje (lineal=pasos/mm, rotacional=pasos/°)
 * Anular con M92
 *                                      X, Y, Z [, I [, J [, K...]]], E0 [, E1[, E2...]]
 */
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 500 }

/**
 * Velocidad máxima de avance predeterminada (lineal=mm/s, rotacional=°/s)
 * Anular con M203
 *                                      X, Y, Z [, I [, J [, K...]]], E0 [, E1[, E2...]]
 */
#define DEFAULT_MAX_FEEDRATE          { 300, 300, 5, 25 }

//#define LIMITED_MAX_FR_EDITING        // Limitar la edición a través de M203 o LCD a DEFAULT_MAX_FEEDRATE * 2
#if ENABLED(LIMITED_MAX_FR_EDITING)
  #define MAX_FEEDRATE_EDIT_VALUES    { 600, 600, 10, 50 } // ...o establecer tus propios límites de edición
#endif

/**
 * Aceleración máxima predeterminada (cambio de velocidad con el tiempo) (lineal=mm/(s^2), rotacional=°/(s^2))
 * (Velocidad máxima de inicio para movimientos acelerados)
 * Anular con M201
 *                                      X, Y, Z [, I [, J [, K...]]], E0 [, E1[, E2...]]
 */
#define DEFAULT_MAX_ACCELERATION      { 3000, 3000, 100, 10000 }

//#define LIMITED_MAX_ACCEL_EDITING     // Limitar la edición a través de M201 o LCD a DEFAULT_MAX_ACCELERATION * 2
#if ENABLED(LIMITED_MAX_ACCEL_EDITING)
  #define MAX_ACCEL_EDIT_VALUES       { 6000, 6000, 200, 20000 } // ...o establecer tus propios límites de edición
#endif

/**
 * Aceleración predeterminada (cambio de velocidad con el tiempo) (lineal=mm/(s^2), rotacional=°/(s^2))
 * Anular con M204
 *
 *   M204 P    Aceleración
 *   M204 R    Aceleración de retracción
 *   M204 T    Aceleración de movimiento
 */
#define DEFAULT_ACCELERATION          3000    // Aceleración X, Y, Z y E para movimientos de impresión
#define DEFAULT_RETRACT_ACCELERATION  3000    // Aceleración E para retracciones
#define DEFAULT_TRAVEL_ACCELERATION   3000    // Aceleración X, Y, Z para movimientos de desplazamiento (no impresión)

/**
 * Límites de jerk predeterminados (mm/s)
 * Anular con M205 X Y Z . . . E
 *
 * "Jerk" especifica la velocidad mínima de cambio que requiere aceleración.
 * Al cambiar la velocidad y la dirección, si la diferencia es menor que
 * el valor establecido aquí, puede ocurrir instantáneamente.
 */
//#define CLASSIC_JERK
#if ENABLED(CLASSIC_JERK)
  #define DEFAULT_XJERK 10.0
  #define DEFAULT_YJERK 10.0
  #define DEFAULT_ZJERK  0.3
  //#define DEFAULT_IJERK  0.3
  //#define DEFAULT_JJERK  0.3
  //#define DEFAULT_KJERK  0.3
  //#define DEFAULT_UJERK  0.3
  //#define DEFAULT_VJERK  0.3
  //#define DEFAULT_WJERK  0.3

//#define TRAVEL_EXTRA_XYJERK 0.0     // Permitir aceleración adicional para todos los movimientos de desplazamiento

//#define LIMITED_JERK_EDITING        // Limitar la edición a través de M205 o LCD a DEFAULT_aJERK * 2
#if ENABLED(LIMITED_JERK_EDITING)
  #define MAX_JERK_EDIT_VALUES { 20, 20, 0.6, 10 } // ...o establece tus propios límites de edición
#endif
#endif

#define DEFAULT_EJERK    5.0  // Puede ser utilizado por Linear Advance

/**
 * Factor de Desviación de la Unión
 *
 * Ver:
 *   https://reprap.org/forum/read.php?1,739819
 *   https://blog.kyneticcnc.com/2018/10/computing-junction-deviation-for-marlin.html
 */
#if DISABLED(CLASSIC_JERK)
  #define JUNCTION_DEVIATION_MM 0.013 // (mm) Distancia desde el borde real de la unión
  #define JD_HANDLE_SMALL_SEGMENTS    // Utilizar estimación de curvatura en lugar del ángulo de la unión
                                      // para segmentos pequeños (< 1mm) con ángulos de unión grandes (> 135°).
#endif

/**
 * Aceleración S-Curve
 *
 * Esta opción elimina la vibración durante la impresión ajustando una curva de Bézier
 * para la aceleración del movimiento, lo que produce cambios de dirección mucho más suaves.
 *
 * Ver https://github.com/synthetos/TinyG/wiki/Jerk-Controlled-Motion-Explained
 */
//#define S_CURVE_ACCELERATION

//===========================================================================
//============================ Opciones de Sonda Z ==========================
//===========================================================================
// @section sondas

//
// Ver https://marlinfw.org/docs/configuration/probes.html
//

/**
 * Habilita esta opción para una sonda conectada al pin Z-MIN.
 * La sonda reemplaza el fin de carrera Z-MIN y se utiliza para el homing en Z.
 * (Habilita automáticamente USE_PROBE_FOR_Z_HOMING.)
 */
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

// Forzar el uso de la sonda para el homing en el eje Z
//#define USE_PROBE_FOR_Z_HOMING

/**
 * Z_MIN_PROBE_PIN
 *
 * Sobrescribe este pin solo si la sonda no puede conectarse a
 * el pin Z_MIN_PROBE_PIN predeterminado para la placa base seleccionada.
 *
 *  - La opción más sencilla es utilizar un conector de fin de carrera libre.
 *  - Utiliza 5V para sensores alimentados (generalmente inductivos).
 *
 *  - Para interruptores simples...
 *    - Normalmente cerrado (NC) también se conecta a GND.
 *    - Normalmente abierto (NO) también se conecta a 5V.
 */
//#define Z_MIN_PROBE_PIN -1

/**
 * Tipo de Sonda
 *
 * Sondas de llave Allen, sondas de servo, sondas con trineo Z, FIX_MOUNTED_PROBE, etc.
 * Activa una de ellas para utilizar el nivelado automático de la cama a continuación.
 */

/**
 * La "Sonda Manual" proporciona un método para realizar el nivelado de cama "automático" sin una sonda.
 * Utiliza G29 repetidamente, ajustando la altura Z en cada punto con comandos de movimiento
 * o (con LCD_BED_LEVELING) el controlador LCD.
 */
//#define PROBE_MANUALLY

/**
 * Una sonda fija no se despliega o necesita despliegue manual.
 *   (por ejemplo, una sonda inductiva o un interruptor basado en la boquilla).
 */
//#define FIX_MOUNTED_PROBE

/**
 * Utiliza la boquilla como sonda, como con un
 * sistema de boquilla conductora o un efector inteligente piezoeléctrico.
 */
//#define NOZZLE_AS_PROBE

/**
 * Sonda de Servo Z, como un interruptor de fin de carrera en un brazo giratorio.
 */
//#define Z_PROBE_SERVO_NR 0
#ifdef Z_PROBE_SERVO_NR
  //#define Z_SERVO_ANGLES { 70, 0 }      // Ángulos de despliegue y guardado del servo Z
  //#define Z_SERVO_MEASURE_ANGLE 45      // Utilizar si el servo debe moverse a una posición "libre" para medir después del despliegue
  //#define Z_SERVO_INTERMEDIATE_STOW     // Guardar la sonda entre puntos
  //#define Z_SERVO_DEACTIVATE_AFTER_STOW // Desactivar el servo cuando la sonda esté guardada
#endif

/**
 * La sonda BLTouch utiliza un sensor de efecto Hall y emula un servo.
 */
//#define BLTOUCH

/**
 * Sonda MagLev V4 por MDD
 *
 * Esta sonda se despliega y activa mediante la alimentación de un electroimán incorporado.
 */
//#define MAGLEV4
#if ENABLED(MAGLEV4)
  //#define MAGLEV_TRIGGER_PIN 11     // Establecer en la salida digital conectada
  #define MAGLEV_TRIGGER_DELAY 15     // Cambiar esto podría provocar el sobrecalentamiento de la bobina
#endif

/**
 * Sonda Touch-MI por hotends.fr
 *
 * Esta sonda se despliega y activa moviendo el eje X hacia un imán en el borde de la cama.
 * De forma predeterminada, se asume que el imán está a la izquierda y se activa con un homing.
 * Si el imán está a la derecha, habilita y establece TOUCH_MI_DEPLOY_XPOS en la posición de despliegue.
 *
 * También requiere: BABYSTEPPING, BABYSTEP_ZPROBE_OFFSET, Z_SAFE_HOMING,
 * y una Z_CLEARANCE_FOR_HOMING mínima de 10.
 */
//#define TOUCH_MI_PROBE
#if ENABLED(TOUCH_MI_PROBE)
  #define TOUCH_MI_RETRACT_Z 0.5                  // Altura a la que se retrae la sonda
  //#define TOUCH_MI_DEPLOY_XPOS (X_MAX_BED + 2)  // Para un imán en el lado derecho de la cama
  //#define TOUCH_MI_MANUAL_DEPLOY                // Para despliegue manual (menú LCD)
#endif

// Una sonda que se despliega y guarda con un pin solenoide (SOL1_PIN)
//#define SOLENOID_PROBE

// Una sonda montada en un trineo, como las diseñadas por Charles Bell.
//#define Z_PROBE_SLED
//#define SLED_DOCKING_OFFSET 5  // La distancia adicional que debe recorrer el eje X para recoger el trineo. 0 debería estar bien, pero puedes aumentarlo si lo deseas.

// Una sonda desplegada moviendo el eje x, como la sonda de cremallera y piñón diseñada por Marty Rice.
//#define RACK_AND_PINION_PROBE
#if ENABLED(RACK_AND_PINION_PROBE)
  #define Z_PROBE_DEPLOY_X  X_MIN_POS
  #define Z_PROBE_RETRACT_X X_MAX_POS
#endif

/**
 * Sonda Magnética Montada
 * Para sondas como Euclid, Klicky, Klackender, etc.
 */
//#define MAG_MOUNTED_PROBE
#if ENABLED(MAG_MOUNTED_PROBE)
  #define PROBE_DEPLOY_FEEDRATE (133*60)  // (mm/min) Velocidad de despliegue de la sonda
  #define PROBE_STOW_FEEDRATE   (133*60)  // (mm/min) Velocidad de guardado de la sonda

  #define MAG_MOUNTED_DEPLOY_1 { PROBE_DEPLOY_FEEDRATE, { 245, 114, 30 } }  // Mover al lateral, acoplar y sujetar la sonda
  #define MAG_MOUNTED_DEPLOY_2 { PROBE_DEPLOY_FEEDRATE, { 210, 114, 30 } }  // Mover la sonda fuera del acoplador
  #define MAG_MOUNTED_DEPLOY_3 { PROBE_DEPLOY_FEEDRATE, {   0,   0,  0 } }  // Movimiento adicional si es necesario
  #define MAG_MOUNTED_DEPLOY_4 { PROBE_DEPLOY_FEEDRATE, {   0,   0,  0 } }  // Movimiento adicional si es necesario
  #define MAG_MOUNTED_DEPLOY_5 { PROBE_DEPLOY_FEEDRATE, {   0,   0,  0 } }  // Movimiento adicional si es necesario
  #define MAG_MOUNTED_STOW_1   { PROBE_STOW_FEEDRATE,   { 245, 114, 20 } }  // Mover al acoplador
  #define MAG_MOUNTED_STOW_2   { PROBE_STOW_FEEDRATE,   { 245, 114,  0 } }  // Colocar la sonda al lado del retirador
  #define MAG_MOUNTED_STOW_3   { PROBE_STOW_FEEDRATE,   { 230, 114,  0 } }  // Movimiento lateral para retirar la sonda
  #define MAG_MOUNTED_STOW_4   { PROBE_STOW_FEEDRATE,   { 210, 114, 20 } }  // Movimiento lateral para retirar la sonda
  #define MAG_MOUNTED_STOW_5   { PROBE_STOW_FEEDRATE,   {   0,   0,  0 } }  // Movimiento adicional si es necesario
#endif

// Duet Smart Effector (para impresoras delta) - https://bit.ly/2ul5U7J
// Cuando se define el pin, se puede usar M672 para establecer/restablecer la sensibilidad de la sonda.
//#define DUET_SMART_EFFECTOR
#if ENABLED(DUET_SMART_EFFECTOR)
  #define SMART_EFFECTOR_MOD_PIN  -1  // Conecta un pin GPIO al pin MOD del Smart Effector
#endif

/**
 * Utilizar StallGuard2 para sondear la cama con la boquilla.
 * Requiere controladores de motor paso a paso Trinamic con capacidad StallGuard.
 * PRECAUCIÓN: Esto puede dañar las máquinas con husillos de avance en Z.
 *             Ten mucho cuidado al configurar esta función.
 */
//#define SENSORLESS_PROBING

/**
 * Sonda Allen Key retráctil para z, como se ve en muchas impresoras delta Kossel - https://reprap.org/wiki/Kossel#Automatic_bed_leveling_probe
 * Se despliega tocando la correa del eje Z. Se retrae empujando la sonda hacia abajo.
 */
//#define Z_PROBE_ALLEN_KEY
#if ENABLED(Z_PROBE_ALLEN_KEY)
  // 2 o 3 juegos de coordenadas para desplegar y retraer la sonda de contacto de resorte en G29,
  // si no se define una sonda de contacto accionada por servo. Descomenta según corresponda para tu impresora/sonda.

  #define Z_PROBE_ALLEN_KEY_DEPLOY_1 { 30.0, PRINTABLE_RADIUS, 100.0 }
  #define Z_PROBE_ALLEN_KEY_DEPLOY_1_FEEDRATE XY_PROBE_FEEDRATE

  #define Z_PROBE_ALLEN_KEY_DEPLOY_2 { 0.0, PRINTABLE_RADIUS, 100.0 }
  #define Z_PROBE_ALLEN_KEY_DEPLOY_2_FEEDRATE (XY_PROBE_FEEDRATE)/10

  #define Z_PROBE_ALLEN_KEY_DEPLOY_3 { 0.0, (PRINTABLE_RADIUS) * 0.75, 100.0 }
  #define Z_PROBE_ALLEN_KEY_DEPLOY_3_FEEDRATE XY_PROBE_FEEDRATE

  #define Z_PROBE_ALLEN_KEY_STOW_1 { -64.0, 56.0, 23.0 } // Mover la sonda a la posición
  #define Z_PROBE_ALLEN_KEY_STOW_1_FEEDRATE XY_PROBE_FEEDRATE

  #define Z_PROBE_ALLEN_KEY_STOW_2 { -64.0, 56.0, 3.0 } // Presionarlo hacia abajo
  #define Z_PROBE_ALLEN_KEY_STOW_2_FEEDRATE (XY_PROBE_FEEDRATE)/10

  #define Z_PROBE_ALLEN_KEY_STOW_3 { -64.0, 56.0, 50.0 } // Mover hacia arriba para despejar
  #define Z_PROBE_ALLEN_KEY_STOW_3_FEEDRATE XY_PROBE_FEEDRATE

  #define Z_PROBE_ALLEN_KEY_STOW_4 { 0.0, 0.0, 50.0 }
  #define Z_PROBE_ALLEN_KEY_STOW_4_FEEDRATE XY_PROBE_FEEDRATE

#endif // Z_PROBE_ALLEN_KEY

/**
 * Desplazamientos de la boquilla a la sonda { X, Y, Z }
 *
 * Desplazamiento X e Y:
 *   Utiliza un calibrador o regla para medir la distancia desde la punta de la boquilla
 *   hasta el punto central de la sonda en los ejes X e Y.
 *
 * Desplazamiento Z:
 * - Para el desplazamiento Z, utiliza el valor conocido y ajústalo durante la ejecución.
 * - Las sondas comunes se activan por debajo de la altura de la boquilla y tienen valores negativos para el desplazamiento Z.
 * - Las sondas que se activan por encima de la altura de la boquilla son poco comunes pero existen.
 *   Cuando utilices sondas de este tipo, configura cuidadosamente Z_CLEARANCE_DEPLOY_PROBE y Z_CLEARANCE_BETWEEN_PROBES
 *   para evitar colisiones durante el sondeo.
 *
 * Ajuste y ajuste:
 * - Los desplazamientos de la sonda se pueden ajustar durante la ejecución con 'M851', menús LCD, babystepping, etc.
 * - PROBE_OFFSET_WIZARD (configuration_adv.h) se puede utilizar para establecer el desplazamiento Z.
 *
 * Suponiendo la orientación típica del área de trabajo:
 *  - La sonda a la DERECHA de la boquilla tiene un desplazamiento X positivo.
 *  - La sonda a la IZQUIERDA de la boquilla tiene un desplazamiento X negativo.
 *  - La sonda en la parte TRASERA de la boquilla tiene un desplazamiento Y positivo.
 *  - La sonda en la parte FRONTAL de la boquilla tiene un desplazamiento Y negativo.
 *
 * Algunos ejemplos:
 *   #define NOZZLE_TO_PROBE_OFFSET { 10, 10, -1 }   // Ejemplo "1"
 *   #define NOZZLE_TO_PROBE_OFFSET {-10,  5, -1 }   // Ejemplo "2"
 *   #define NOZZLE_TO_PROBE_OFFSET {  5, -5, -1 }   // Ejemplo "3"
 *   #define NOZZLE_TO_PROBE_OFFSET {-15,-10, -1 }   // Ejemplo "4"
 *
 *     +-- TRASERA --+
 *     |    [+]    |
 *   I |        1  | D <-- Ejemplo "1" (derecha+, trasera+)
 *   Z |  2        | E <-- Ejemplo "2" (izquierda-, trasera+)
 *   Q |[-]  N  [+]| R <-- Boquilla
 *   R |       3   | E <-- Ejemplo "3" (derecha+, frontal-)
 *     | 4         | C <-- Ejemplo "4" (izquierda-, frontal-)
 *     |    [-]    |
 *     O-- FRONTAL -+
 */
#define NOZZLE_TO_PROBE_OFFSET { 10, 10, 0 }

// Habilitar y establecer el uso de una sonda específica para el sondeo. Deshabilita para permitir cualquier sonda.
#define PROBING_TOOL 0
#ifdef PROBING_TOOL
  //#define PROBE_TOOLCHANGE_NO_MOVE  // Suprimir el movimiento en el cambio de herramienta de sonda
#endif

// La mayoría de las sondas deben mantenerse alejadas de los bordes de la cama, pero
// con NOZZLE_AS_PROBE esto puede ser negativo para obtener una mayor área de sondeo.
#define PROBING_MARGIN 10

// Velocidad de desplazamiento en los ejes X e Y (mm/min) entre sondas
#define XY_PROBE_FEEDRATE (133*60)

// Velocidad de avance (mm/min) para el primer acercamiento al sondear dos veces (MULTIPLE_PROBING == 2)
#define Z_PROBE_FEEDRATE_FAST (4*60)

// Velocidad de avance (mm/min) para el sondeo "preciso" de cada punto
#define Z_PROBE_FEEDRATE_SLOW (Z_PROBE_FEEDRATE_FAST / 2)

/**
 * Interruptor de activación de la sonda
 * Un interruptor que indica el despliegue adecuado, o un interruptor óptico
 * que se activa cuando el cabezal está cerca de la cama.
 */
//#define PROBE_ACTIVATION_SWITCH
#if ENABLED(PROBE_ACTIVATION_SWITCH)
  #define PROBE_ACTIVATION_SWITCH_STATE LOW // Estado que indica que la sonda está activa
  //#define PROBE_ACTIVATION_SWITCH_PIN PC6 // Sustituir el pin predeterminado
#endif

/**
 * Tare Probe (determinar el punto cero) antes de cada sonda.
 * Útil para un sensor de tensión o piezoeléctrico que necesita descontar
 * elementos como los cables que tiran del cabezal.
 */
//#define PROBE_TARE
#if ENABLED(PROBE_TARE)
  #define PROBE_TARE_TIME  200    // (ms) Tiempo para mantener el pin de tare
  #define PROBE_TARE_DELAY 200    // (ms) Retraso después de la tare antes de
  #define PROBE_TARE_STATE HIGH   // Estado para escribir el pin de tare
  //#define PROBE_TARE_PIN PA5    // Sustituir el pin predeterminado
  #if ENABLED(PROBE_ACTIVATION_SWITCH)
    //#define PROBE_TARE_ONLY_WHILE_INACTIVE  // Fallar al ajustar/sondear si PROBE_ACTIVATION_SWITCH está activo
  #endif
#endif

/**
 * Habilitar/deshabilitar la sonda
 * La sonda solo proporciona una señal activada cuando está habilitada.
 */
//#define PROBE_ENABLE_DISABLE
#if ENABLED(PROBE_ENABLE_DISABLE)
  //#define PROBE_ENABLE_PIN -1   // Sustituir el pin predeterminado aquí
#endif

/**
 * Sondeo múltiple
 *
 * Puedes obtener mejores resultados al sondear 2 o más veces.
 * Con EXTRA_PROBING, se desestimará la lectura más atípica.
 *
 * Un total de 2 realiza sondeos rápidos/lentos con un promedio ponderado.
 * Un total de 3 o más agrega más sondeos lentos, tomando el promedio.
 */
//#define MULTIPLE_PROBING 2
//#define EXTRA_PROBING    1

/**
 * Las sondas Z requieren espacio libre al desplegar, guardar y moverse entre
 * puntos de sondeo para evitar golpear la cama y otros componentes.
 * Las sondas montadas en servos requieren espacio adicional para que el brazo pueda girar.
 * Las sondas inductivas necesitan espacio para evitar activarse prematuramente.
 *
 * Utiliza estos ajustes para especificar la distancia (mm) a la que se levanta la sonda (o
 * se baja la cama). Los valores establecidos aquí se aplican además de cualquier compensación de Z (negativa)
 * establecida con NOZZLE_TO_PROBE_OFFSET, M851 o el LCD.
 * Solo se admiten valores enteros >= 1 aquí.
 *
 * Ejemplo: `M851 Z-5` con un CLEARANCE de 4  =>  9 mm desde la cama hasta la boquilla.
 *     Pero: `M851 Z+1` con un CLEARANCE de 2  =>  2 mm desde la cama hasta la boquilla.
 */
#define Z_CLEARANCE_DEPLOY_PROBE   10 // Espacio libre Z para desplegar/guardar
#define Z_CLEARANCE_BETWEEN_PROBES  5 // Espacio libre Z entre puntos de sondeo
#define Z_CLEARANCE_MULTI_PROBE     5 // Espacio libre Z entre sondas múltiples
#define Z_PROBE_ERROR_TOLERANCE     3 // (mm) Tolerancia para activación anticipada (<= -probe.offset.z + ZPET)
//#define Z_AFTER_PROBING           5 // Posición Z después del sondeo

#define Z_PROBE_LOW_POINT          -2 // Distancia más lejana por debajo del punto de activación para detenerse

// For M851 provide ranges for adjusting the X, Y, and Z probe offsets
//#define PROBE_OFFSET_XMIN -50   // (mm)
//#define PROBE_OFFSET_XMAX  50   // (mm)
//#define PROBE_OFFSET_YMIN -50   // (mm)
//#define PROBE_OFFSET_YMAX  50   // (mm)
//#define PROBE_OFFSET_ZMIN -20   // (mm)
//#define PROBE_OFFSET_ZMAX  20   // (mm)

// Enable the M48 repeatability test to test probe accuracy
//#define Z_MIN_PROBE_REPEATABILITY_TEST

// Antes de desplegar/guardar, pausa para confirmación del usuario
//#define PAUSE_BEFORE_DEPLOY_STOW
#if ENABLED(PAUSE_BEFORE_DEPLOY_STOW)
  //#define PAUSE_PROBE_DEPLOY_WHEN_TRIGGERED // Para desplegar manualmente la sonda con llave Allen
#endif

/**
 * Habilita una o más de las siguientes opciones si el sondeo parece poco confiable.
 * Se pueden desactivar los calentadores y/o ventiladores durante el sondeo para minimizar el ruido eléctrico.
 * También se puede agregar un retraso para permitir que el ruido y la vibración se estabilicen.
 * Estas opciones son más útiles para la sonda BLTouch, pero también pueden mejorar
 * las lecturas con sondas inductivas y sensores de piezo.
 */
//#define PROBING_HEATERS_OFF       // Apagar los calentadores durante el sondeo
#if ENABLED(PROBING_HEATERS_OFF)
  //#define WAIT_FOR_BED_HEATER     // Esperar a que la cama se caliente nuevamente entre sondeos (para mejorar la precisión)
  //#define WAIT_FOR_HOTEND         // Esperar a que el hotend se caliente nuevamente entre sondeos (para mejorar la precisión y evitar la extrusión en frío)
#endif
//#define PROBING_FANS_OFF          // Apagar los ventiladores durante el sondeo
//#define PROBING_ESTEPPERS_OFF     // Apagar todos los motores de extrusión durante el sondeo
//#define PROBING_STEPPERS_OFF      // Apagar todos los motores (a menos que sea necesario para mantener la posición) durante el sondeo (incluyendo los de extrusión)
//#define DELAY_BEFORE_PROBING 200  // (ms) Para evitar que las vibraciones activen los sensores de piezo

// Requiere una temperatura mínima de la boquilla y/o cama para el sondeo
//#define PREHEAT_BEFORE_PROBING
#if ENABLED(PREHEAT_BEFORE_PROBING)
  #define PROBING_NOZZLE_TEMP 120   // (°C) Solo se aplica a E0 en este momento
  #define PROBING_BED_TEMP     50
#endif

// Para inversión de pines de habilitación de motor paso a paso (activo bajo) usa 0, no inversión (activo alto) usa 1
// :{ 0:'Bajo', 1:'Alto' }
#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0 // Para todos los extrusores
//#define I_ENABLE_ON 0
//#define J_ENABLE_ON 0
//#define K_ENABLE_ON 0
//#define U_ENABLE_ON 0
//#define V_ENABLE_ON 0
//#define W_ENABLE_ON 0

// Desactiva inmediatamente los motores de los ejes cuando no se están activando.
// ADVERTENCIA: ¡Cuando los motores se apagan, existe la posibilidad de perder precisión de posición!
//#define DISABLE_X
//#define DISABLE_Y
//#define DISABLE_Z
//#define DISABLE_I
//#define DISABLE_J
//#define DISABLE_K
//#define DISABLE_U
//#define DISABLE_V
//#define DISABLE_W

// Desactivar el parpadeo de la pantalla que advierte sobre una posible reducción de precisión
//#define DISABLE_REDUCED_ACCURACY_WARNING

// @section extrusor

//#define DISABLE_E               // Desactivar el extrusor cuando no está en funcionamiento
#define DISABLE_OTHER_EXTRUDERS   // Mantener solo el extrusor activo habilitado

// @section movimiento

// Invertir la dirección del motor paso a paso. Cambiar (o invertir el conector del motor) si un eje se mueve en la dirección incorrecta.
#define INVERT_X_DIR false
#define INVERT_Y_DIR true
#define INVERT_Z_DIR false
//#define INVERT_I_DIR false
//#define INVERT_J_DIR false
//#define INVERT_K_DIR false
//#define INVERT_U_DIR false
//#define INVERT_V_DIR false
//#define INVERT_W_DIR false

// @section extrusor

// Para un extrusor de transmisión directa v9, establecer en true; para un extrusor de engranajes, establecer en false.
#define INVERT_E0_DIR false
#define INVERT_E1_DIR false
#define INVERT_E2_DIR false
#define INVERT_E3_DIR false
#define INVERT_E4_DIR false
#define INVERT_E5_DIR false
#define INVERT_E6_DIR false
#define INVERT_E7_DIR false

// @section homing

//#define NO_MOTION_BEFORE_HOMING // Inhibir el movimiento hasta que se hayan realizado las homing de todos los ejes. También habilitar HOME_AFTER_DEACTIVATE para mayor seguridad.
//#define HOME_AFTER_DEACTIVATE   // Requiere realizar homing después de desactivar los motores paso a paso. También habilitar NO_MOTION_BEFORE_HOMING para mayor seguridad.

/**
 * Establece Z_IDLE_HEIGHT si el eje Z se mueve por sí mismo cuando los motores están desactivados.
 *  - Utiliza un valor bajo (es decir, Z_MIN_POS) si la boquilla cae hacia la cama.
 *  - Utiliza un valor grande (es decir, Z_MAX_POS) si la cama cae, alejándose de la boquilla.
 */
//#define Z_IDLE_HEIGHT Z_HOME_POS

//#define Z_CLEARANCE_FOR_HOMING  4 // (mm) Altura mínima de Z antes de homing (G28) para permitir espacio libre por encima de la cama, abrazaderas, ...
                                    // Asegúrate de tener suficiente espacio libre sobre Z_MAX_POS para evitar rozamientos.

//#define Z_AFTER_HOMING         10 // (mm) Altura a la que moverse después de homing (si Z fue homed)
// #define XY_AFTER_HOMING { 10, 10 }  // (mm) Mover a una posición XY después de homing (y elevar Z)

// #define EVENT_GCODE_AFTER_HOMING "M300 P440 S200"  // Comandos a ejecutar después de G28 (y mover a XY_AFTER_HOMING)

// Dirección de los finales de carrera al realizar homing; 1=MAX, -1=MIN
// :[-1,1]
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1
//#define I_HOME_DIR -1
//#define J_HOME_DIR -1
//#define K_HOME_DIR -1
//#define U_HOME_DIR -1
//#define V_HOME_DIR -1
//#define W_HOME_DIR -1

/**
 * Paradas de seguridad
 * Si un eje tiene finales de carrera en ambos extremos, el especificado anteriormente se utiliza para
 * homing, mientras que el otro se puede usar para cosas como SD_ABORT_ON_ENDSTOP_HIT.
 */
//#define X_SAFETY_STOP
//#define Y_SAFETY_STOP
//#define Z_SAFETY_STOP
//#define I_SAFETY_STOP
//#define J_SAFETY_STOP
//#define K_SAFETY_STOP
//#define U_SAFETY_STOP
//#define V_SAFETY_STOP
//#define W_SAFETY_STOP

// @section geometría

// Tamaño del área imprimible
#define X_BED_SIZE 200
#define Y_BED_SIZE 200

// Límites de recorrido (lineal=mm, rotacional=°) después del homing, correspondientes a las posiciones de los finales de carrera.
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 200
//#define I_MIN_POS 0
//#define I_MAX_POS 50
//#define J_MIN_POS 0
//#define J_MAX_POS 50
//#define K_MIN_POS 0
//#define K_MAX_POS 50
//#define U_MIN_POS 0
//#define U_MAX_POS 50
//#define V_MIN_POS 0
//#define V_MAX_POS 50
//#define W_MIN_POS 0
//#define W_MAX_POS 50

/**
 * Endstops de software
 *
 * - Evitan movimientos fuera de los límites establecidos de la máquina.
 * - Los ejes individuales pueden ser deshabilitados, si se desea.
 * - X e Y solo se aplican a robots cartesianos.
 * - Usa 'M211' para activar/desactivar los endstops de software o para informar sobre su estado actual.
 */

// Los endstops de software mínimos limitan el movimiento dentro de los límites mínimos de coordenadas
#define MIN_SOFTWARE_ENDSTOPS
#if ENABLED(MIN_SOFTWARE_ENDSTOPS)
  #define MIN_SOFTWARE_ENDSTOP_X
  #define MIN_SOFTWARE_ENDSTOP_Y
  #define MIN_SOFTWARE_ENDSTOP_Z
  #define MIN_SOFTWARE_ENDSTOP_I
  #define MIN_SOFTWARE_ENDSTOP_J
  #define MIN_SOFTWARE_ENDSTOP_K
  #define MIN_SOFTWARE_ENDSTOP_U
  #define MIN_SOFTWARE_ENDSTOP_V
  #define MIN_SOFTWARE_ENDSTOP_W
#endif

// Los endstops de software máximos restringen el movimiento dentro de los límites máximos de coordenadas
#define MAX_SOFTWARE_ENDSTOPS
#if ENABLED(MAX_SOFTWARE_ENDSTOPS)
  #define MAX_SOFTWARE_ENDSTOP_X
  #define MAX_SOFTWARE_ENDSTOP_Y
  #define MAX_SOFTWARE_ENDSTOP_Z
  #define MAX_SOFTWARE_ENDSTOP_I
  #define MAX_SOFTWARE_ENDSTOP_J
  #define MAX_SOFTWARE_ENDSTOP_K
  #define MAX_SOFTWARE_ENDSTOP_U
  #define MAX_SOFTWARE_ENDSTOP_V
  #define MAX_SOFTWARE_ENDSTOP_W
#endif

#if ANY(MIN_SOFTWARE_ENDSTOPS, MAX_SOFTWARE_ENDSTOPS)
  //#define SOFT_ENDSTOPS_MENU_ITEM  // Habilitar/Deshabilitar los endstops de software desde el LCD
#endif

/**
 * Sensores de agotamiento de filamento
 * Se utilizan endstops mecánicos u ópticos para verificar la presencia de filamento.
 *
 * IMPORTANTE: El agotamiento se activará solo si Marlin está consciente de que se está ejecutando una impresión.
 * Marlin sabe que se está ejecutando una impresión cuando:
 *  1. Se está ejecutando una impresión desde un medio iniciado con M24.
 *  2. El temporizador de la impresión se ha iniciado con M75.
 *  3. Se encendieron los calentadores y PRINTJOB_TIMER_AUTOSTART está habilitado.
 *
 * Las placas basadas en RAMPS utilizan SERVO3_PIN para el primer sensor de agotamiento.
 * Para otras placas, es posible que debas definir FIL_RUNOUT_PIN, FIL_RUNOUT2_PIN, etc.
 */
//#define FILAMENT_RUNOUT_SENSOR
#if ENABLED(FILAMENT_RUNOUT_SENSOR)
  #define FIL_RUNOUT_ENABLED_DEFAULT true // Habilitar el sensor al iniciar. Sobrescribir con M412 seguido de M500.
  #define NUM_RUNOUT_SENSORS   1          // Número de sensores, hasta uno por extrusor. Define un FIL_RUNOUT#_PIN para cada uno.

  #define FIL_RUNOUT_STATE     LOW        // Estado del pin que indica que NO hay filamento presente.
  #define FIL_RUNOUT_PULLUP               // Usar pull-up interno para los pines de agotamiento de filamento.
  //#define FIL_RUNOUT_PULLDOWN           // Usar pull-down interno para los pines de agotamiento de filamento.
  //#define WATCH_ALL_RUNOUT_SENSORS      // Ejecutar el script de agotamiento en cualquier sensor que se active, no solo para el extrusor activo.
                                          // Esto se habilita automáticamente para EXTRUSOR_MIXTO (MIXING_EXTRUDER).

  // Sobrescribir individualmente si los sensores de agotamiento varían
  //#define FIL_RUNOUT1_STATE LOW
  //#define FIL_RUNOUT1_PULLUP
  //#define FIL_RUNOUT1_PULLDOWN

  //#define FIL_RUNOUT2_STATE LOW
  //#define FIL_RUNOUT2_PULLUP
  //#define FIL_RUNOUT2_PULLDOWN

  //#define FIL_RUNOUT3_STATE LOW
  //#define FIL_RUNOUT3_PULLUP
  //#define FIL_RUNOUT3_PULLDOWN

  //#define FIL_RUNOUT4_STATE LOW
  //#define FIL_RUNOUT4_PULLUP
  //#define FIL_RUNOUT4_PULLDOWN

  //#define FIL_RUNOUT5_STATE LOW
  //#define FIL_RUNOUT5_PULLUP
  //#define FIL_RUNOUT5_PULLDOWN

  //#define FIL_RUNOUT6_STATE LOW
  //#define FIL_RUNOUT6_PULLUP
  //#define FIL_RUNOUT6_PULLDOWN

  //#define FIL_RUNOUT7_STATE LOW
  //#define FIL_RUNOUT7_PULLUP
  //#define FIL_RUNOUT7_PULLDOWN

  //#define FIL_RUNOUT8_STATE LOW
  //#define FIL_RUNOUT8_PULLUP
  //#define FIL_RUNOUT8_PULLDOWN

  // Comandos para ejecutar en caso de agotamiento de filamento.
  // Con varios sensores de agotamiento, usa el marcador %c para la herramienta actual en los comandos (por ejemplo, "M600 T%c")
  // NOTA: Después de 'M412 H1', el host se encarga del agotamiento de filamento y este script no se aplica.
  #define FILAMENT_RUNOUT_SCRIPT "M600"

  // Después de detectar un agotamiento, continúa imprimiendo esta cantidad de filamento
  // antes de ejecutar el script de agotamiento. Útil para un sensor en el extremo
  // de un tubo de alimentación. Requiere 4 bytes de SRAM por sensor, más 4 bytes adicionales.
  //#define FILAMENT_RUNOUT_DISTANCE_MM 25

  #ifdef FILAMENT_RUNOUT_DISTANCE_MM
    // Habilita esta opción para usar un disco codificador que active el pin de agotamiento
    // a medida que el filamento se mueve. (Asegúrate de configurar FILAMENT_RUNOUT_DISTANCE_MM
    // con un valor lo suficientemente grande para evitar falsos positivos).
    //#define FILAMENT_MOTION_SENSOR

    #if ENABLED(FILAMENT_MOTION_SENSOR)
      //#define FILAMENT_SWITCH_AND_MOTION
      #if ENABLED(FILAMENT_SWITCH_AND_MOTION)
        #define NUM_MOTION_SENSORS   1          // Número de sensores, hasta uno por extrusor. Define un FIL_MOTION#_PIN para cada uno.
        //#define FIL_MOTION1_PIN    -1

        // Sobrescribir individualmente si los sensores de movimiento varían
        //#define FIL_MOTION1_STATE LOW
        //#define FIL_MOTION1_PULLUP
        //#define FIL_MOTION1_PULLDOWN

        //#define FIL_MOTION2_STATE LOW
        //#define FIL_MOTION2_PULLUP
        //#define FIL_MOTION2_PULLDOWN

        //#define FIL_MOTION3_STATE LOW
        //#define FIL_MOTION3_PULLUP
        //#define FIL_MOTION3_PULLDOWN

        //#define FIL_MOTION4_STATE LOW
        //#define FIL_MOTION4_PULLUP
        //#define FIL_MOTION4_PULLDOWN

        //#define FIL_MOTION5_STATE LOW
        //#define FIL_MOTION5_PULLUP
        //#define FIL_MOTION5_PULLDOWN

        //#define FIL_MOTION6_STATE LOW
        //#define FIL_MOTION6_PULLUP
        //#define FIL_MOTION6_PULLDOWN

        //#define FIL_MOTION7_STATE LOW
        //#define FIL_MOTION7_PULLUP
        //#define FIL_MOTION7_PULLDOWN

        //#define FIL_MOTION8_STATE LOW
        //#define FIL_MOTION8_PULLUP
        //#define FIL_MOTION8_PULLDOWN
      #endif
    #endif
  #endif
#endif

//===========================================================================
//============================= Nivelado de Cama ============================
//===========================================================================
// @section calibrate

/**
 * Elige una de las opciones a continuación para habilitar el nivelado de cama con G29. Los parámetros
 * y el comportamiento de G29 cambiarán según tu selección.
 *
 *  Si usas una sonda para el Z Homing, ¡habilita también Z_SAFE_HOMING!
 *
 * - AUTO_BED_LEVELING_3POINT
 *   Sonda 3 puntos arbitrarios en la cama (que no sean colineales).
 *   Especificas las coordenadas XY de los 3 puntos.
 *   El resultado es un plano inclinado único. Ideal para una cama plana.
 *
 * - AUTO_BED_LEVELING_LINEAR
 *   Sonda varios puntos en una cuadrícula.
 *   Especificas el rectángulo y la densidad de puntos de muestra.
 *   El resultado es un plano inclinado único. Ideal para una cama plana.
 *
 * - AUTO_BED_LEVELING_BILINEAR
 *   Sonda varios puntos en una cuadrícula.
 *   Especificas el rectángulo y la densidad de puntos de muestra.
 *   El resultado es una malla, ideal para camas grandes o irregulares.
 *
 * - AUTO_BED_LEVELING_UBL (Unified Bed Leveling)
 *   Un sistema completo de nivelación de cama que combina las características y beneficios
 *   de otros sistemas. UBL también incluye generación de malla integrada
 *   validación de malla y sistemas de edición de malla.
 *
 * - MESH_BED_LEVELING
 *   Sonda una cuadrícula manualmente.
 *   El resultado es una malla, adecuada para camas grandes o irregulares. (Ver BILINEAR).
 *   Para máquinas sin sonda, Mesh Bed Leveling proporciona un método para realizar
 *   el nivelado en pasos para ajustar manualmente la altura Z en cada punto de la cuadrícula.
 *   Con un controlador LCD, el proceso se guía paso a paso.
 */
//#define AUTO_BED_LEVELING_3POINT
//#define AUTO_BED_LEVELING_LINEAR
//#define AUTO_BED_LEVELING_BILINEAR
//#define AUTO_BED_LEVELING_UBL
//#define MESH_BED_LEVELING

/**
 * Comandos a ejecutar al final del probing G29.
 * Útiles para retraer o mover la sonda Z fuera del camino.
 */
//#define Z_PROBE_END_SCRIPT "G1 Z10 F12000\nG1 X15 Y330\nG1 Z0.5\nG1 Z10"

/**
 * Normalmente, G28 deshabilita el nivelado al completarse. Habilita una de
 * estas opciones para restaurar el estado de nivelado anterior o para habilitar siempre
 * el nivelado inmediatamente después de G28.
 */

//#define RESTORE_LEVELING_AFTER_G28
//#define ENABLE_LEVELING_AFTER_G28

/**
 * El autonivelado necesita precalentamiento
 */
//#define PREHEAT_BEFORE_LEVELING
#if ENABLED(PREHEAT_BEFORE_LEVELING)
  #define LEVELING_NOZZLE_TEMP 120   // (°C) Se aplica solo a E0 en este momento
  #define LEVELING_BED_TEMP     50
#endif

/**
 * Habilita el registro detallado de G28, G29, M48, etc.
 * Actívalo con el comando 'M111 S32'.
 * NOTA: ¡Requiere mucha PROGMEM!
 */
//#define DEBUG_LEVELING_FEATURE

#if ANY(MESH_BED_LEVELING, AUTO_BED_LEVELING_UBL, PROBE_MANUALLY)
  // Establece una altura para el inicio del ajuste manual
  #define MANUAL_PROBE_START_Z 0.2  // (mm) Comenta para utilizar la altura medida por última vez
#endif

#if ANY(MESH_BED_LEVELING, AUTO_BED_LEVELING_BILINEAR, AUTO_BED_LEVELING_UBL)
  /**
   * Reduce gradualmente la corrección de nivelado hasta alcanzar una altura establecida,
   * momento en el cual el movimiento estará nivelado con el plano XY de la máquina.
   * La altura se puede establecer con M420 Z<altura>
   */
  #define ENABLE_LEVELING_FADE_HEIGHT
  #if ENABLED(ENABLE_LEVELING_FADE_HEIGHT)
    #define DEFAULT_LEVELING_FADE_HEIGHT 10.0 // (mm) Altura de desvanecimiento predeterminada.
  #endif

  /**
   * Para máquinas cartesianas, en lugar de dividir los movimientos en los límites de la malla,
   * se dividen los movimientos en segmentos cortos como en una Delta. Esto sigue
   * los contornos de la cama más de cerca que los movimientos rectos de borde a borde.
   */
  #define SEGMENT_LEVELED_MOVES
  #define LEVELED_SEGMENT_LENGTH 5.0 // (mm) Longitud de todos los segmentos (excepto el último)

  /**
   * Habilita la herramienta de patrón de validación de malla G26.
   */
  //#define G26_MESH_VALIDATION
  #if ENABLED(G26_MESH_VALIDATION)
    #define MESH_TEST_NOZZLE_SIZE    0.4  // (mm) Diámetro de la boquilla principal.
    #define MESH_TEST_LAYER_HEIGHT   0.2  // (mm) Altura de capa predeterminada para G26.
    #define MESH_TEST_HOTEND_TEMP  205    // (°C) Temperatura de la boquilla predeterminada para G26.
    #define MESH_TEST_BED_TEMP      60    // (°C) Temperatura de la cama predeterminada para G26.
    #define G26_XY_FEEDRATE         20    // (mm/s) Velocidad de avance para los movimientos XY de G26.
    #define G26_XY_FEEDRATE_TRAVEL 100    // (mm/s) Velocidad de avance para los movimientos de desplazamiento XY de G26.
    #define G26_RETRACT_MULTIPLIER   1.0  // G26 Q (retracción) utilizado de forma predeterminada entre los elementos de prueba de la malla.
  #endif

#endif

#if ANY(AUTO_BED_LEVELING_LINEAR, AUTO_BED_LEVELING_BILINEAR)

  // Establece el número de puntos de la cuadrícula por dimensión.
  #define GRID_MAX_POINTS_X 3
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

  // Sonda a lo largo del eje Y, avanzando X después de cada columna
  //#define PROBE_Y_FIRST

  #if ENABLED(AUTO_BED_LEVELING_BILINEAR)

    // ¿Continuar la inclinación implícita más allá de la cuadrícula probada?
    // El valor predeterminado es mantener la altura del borde más cercano.
    //#define EXTRAPOLATE_BEYOND_GRID

    //
    // Subdivisión de la cuadrícula mediante el método Catmull-Rom.
    // Sintetiza puntos intermedios para producir una malla más detallada.
    //
    //#define ABL_BILINEAR_SUBDIVISION
    #if ENABLED(ABL_BILINEAR_SUBDIVISION)
      // Número de subdivisiones entre puntos de prueba
      #define BILINEAR_SUBDIVISIONS 3
    #endif

  #endif

#elif ENABLED(AUTO_BED_LEVELING_UBL)

  //===========================================================================
  //========================= Nivelación de cama unificada ====================
  //===========================================================================

  //#define MESH_EDIT_GFX_OVERLAY   // Mostrar una superposición gráfica al editar la malla

  #define MESH_INSET 1              // Establecer los límites de la malla como una región desplazada de la cama
  #define GRID_MAX_POINTS_X 10      // No utilices más de 15 puntos por eje, implementación limitada.
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

  //#define UBL_HILBERT_CURVE       // Utilizar distribución de Hilbert para reducir el recorrido al probar varios puntos

  //#define UBL_TILT_ON_MESH_POINTS         // Utilizar los puntos de malla más cercanos con G29 J para una mejor referencia de Z
  //#define UBL_TILT_ON_MESH_POINTS_3POINT  // Utilizar los puntos de malla más cercanos con G29 J0 (3 puntos)

  #define UBL_MESH_EDIT_MOVES_Z     // A los usuarios sofisticados no les gusta el movimiento de la boquilla
  #define UBL_SAVE_ACTIVE_ON_M500   // Guardar la malla activa actual en la ranura actual en M500

  //#define UBL_Z_RAISE_WHEN_OFF_MESH 2.5 // Cuando la boquilla está fuera de la malla, se utiliza este valor
                                          // como valor de corrección de altura Z.

  //#define UBL_MESH_WIZARD         // Ejecutar varios comandos seguidos para obtener una malla completa

  /**
   * No se permite el sondeo dentro de la posición de un obstáculo.
   */
  //#define AVOID_OBSTACLES
  #if ENABLED(AVOID_OBSTACLES)
    #define CLIP_W  23  // Ancho del clip de cama, debe tener un poco de espacio extra sobre su tamaño físico
    #define CLIP_H  14  // Altura del clip de cama, debe tener un poco de espacio extra sobre su tamaño físico

    // Rectángulos de obstáculos definidos como { X1, Y1, X2, Y2 }
     #define OBSTACLE1 { (X_BED_SIZE) / 4     - (CLIP_W) / 2,                       0, (X_BED_SIZE) / 4     + (CLIP_W) / 2, CLIP_H }
     #define OBSTACLE2 { (X_BED_SIZE) * 3 / 4 - (CLIP_W) / 2,                       0, (X_BED_SIZE) * 3 / 4 + (CLIP_W) / 2, CLIP_H }
     #define OBSTACLE3 { (X_BED_SIZE) / 4     - (CLIP_W) / 2, (Y_BED_SIZE) - (CLIP_H), (X_BED_SIZE) / 4     + (CLIP_W) / 2, Y_BED_SIZE }
     #define OBSTACLE4 { (X_BED_SIZE) * 3 / 4 - (CLIP_W) / 2, (Y_BED_SIZE) - (CLIP_H), (X_BED_SIZE) * 3 / 4 + (CLIP_W) / 2, Y_BED_SIZE }

    // La cuadrícula probada debe estar desplazada para G29 J. 
    // Esto está bien, ya que solo se utiliza para calcular una transformación lineal para la malla en sí misma.
    #define G29J_MESH_TILT_MARGIN ((CLIP_H) + 1)
  #endif

#elif ENABLED(MESH_BED_LEVELING)

  //===========================================================================
  //================================== Malla ==================================
  //===========================================================================

  #define MESH_INSET 10          // Establecer los límites de la malla como una región desplazada de la cama
  #define GRID_MAX_POINTS_X 3    // No utilices más de 7 puntos por eje, implementación limitada.
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

  //#define MESH_G28_REST_ORIGIN // Después de alinear todos los ejes ('G28' o 'G28 XYZ') reposicionar Z en Z_MIN_POS

#endif // BED_LEVELING

/**
 * Agrega un submenú de nivelación de cama para ABL o MBL.
 * Incluye un procedimiento guiado si la sonda manual está habilitada.
 */
//#define LCD_BED_LEVELING

#if ENABLED(LCD_BED_LEVELING)
  #define MESH_EDIT_Z_STEP  0.025 // (mm) Tamaño del paso al sondear manualmente el eje Z.
  #define LCD_PROBE_Z_RANGE 4     // (mm) Rango Z centrado en Z_MIN_POS para el ajuste de Z en la pantalla LCD
  //#define MESH_EDIT_MENU        // Agregar un menú para editar los puntos de la malla
#endif

// Agregar un elemento de menú para moverse entre las esquinas de la cama para ajustarla manualmente
//#define LCD_BED_TRAMMING

#if ENABLED(LCD_BED_TRAMMING)
  #define BED_TRAMMING_INSET_LFRB { 30, 30, 30, 30 } // (mm) Desplazamientos izquierdo, frontal, derecho, trasero
  #define BED_TRAMMING_HEIGHT      0.0        // (mm) Altura Z de la boquilla en los puntos de ajuste
  #define BED_TRAMMING_Z_HOP       4.0        // (mm) Altura Z de la boquilla entre los puntos de ajuste
  //#define BED_TRAMMING_INCLUDE_CENTER       // Mover al centro después de la última esquina
  //#define BED_TRAMMING_USE_PROBE
  #if ENABLED(BED_TRAMMING_USE_PROBE)
    #define BED_TRAMMING_PROBE_TOLERANCE 0.1  // (mm)
    #define BED_TRAMMING_VERIFY_RAISED        // Después de ajustar, activa la sonda nuevamente para verificar
    //#define BED_TRAMMING_AUDIO_FEEDBACK
  #endif

  /**
   * Orden de nivelación de las esquinas
   *
   * Establece 2 o 4 puntos. Cuando se dan 2 puntos, el tercero es el centro del borde opuesto.
   *
   *  LF  Izquierda-Frontal    RF  Derecha-Frontal
   *  LB  Izquierda-Trasera     RB  Derecha-Trasera
   *
   * Ejemplos:
   *
   *      Predeterminado        {LF,RB,LB,RF}         {LF,RF}           {LB,LF}
   *  LB --------- RB   LB --------- RB    LB --------- RB   LB --------- RB
   *  |  4       3  |   | 3         2 |    |     <3>     |   | 1           |
   *  |             |   |             |    |             |   |          <3>|
   *  |  1       2  |   | 1         4 |    | 1         2 |   | 2           |
   *  LF --------- RF   LF --------- RF    LF --------- RF   LF --------- RF
   */
  #define BED_TRAMMING_LEVELING_ORDER { LF, RF, RB, LB }
#endif

// @section homing

// El centro de la cama está en (X=0, Y=0)
//#define BED_CENTER_AT_0_0

// Establecer manualmente la posición de origen. Dejar sin definir para configuraciones automáticas.
// Para DELTA, esto es la parte superior central del volumen de impresión cartesiano.
//#define MANUAL_X_HOME_POS 0
//#define MANUAL_Y_HOME_POS 0
//#define MANUAL_Z_HOME_POS 0
//#define MANUAL_I_HOME_POS 0
//#define MANUAL_J_HOME_POS 0
//#define MANUAL_K_HOME_POS 0
//#define MANUAL_U_HOME_POS 0
//#define MANUAL_V_HOME_POS 0
//#define MANUAL_W_HOME_POS 0

/**
 * Utilizar "Z Safe Homing" para evitar la homing con una sonda Z fuera del área de la cama.
 *
 * - Mueve la sonda Z (o la boquilla) a un punto XY definido antes de la homing en Z.
 * - Permite la homing en Z solo cuando las posiciones XY son conocidas y confiables.
 * - Si los controladores de los motores están en reposo, puede ser necesario hacer la homing en XY nuevamente antes de la homing en Z.
 */
//#define Z_SAFE_HOMING

#if ENABLED(Z_SAFE_HOMING)
  #define Z_SAFE_HOMING_X_POINT X_CENTER  // Punto X para la homing en Z
  #define Z_SAFE_HOMING_Y_POINT Y_CENTER  // Punto Y para la homing en Z
  //#define Z_SAFE_HOMING_POINT_ABSOLUTE  // Ignorar compensaciones de origen (M206) para la posición de homing en Z
#endif

// Velocidades de homing (lineal=mm/min, rotacional=°/min)
#define HOMING_FEEDRATE_MM_M { (50*60), (50*60), (4*60) }

// Validar que los finales de carrera se activen en los movimientos de homing
#define VALIDATE_HOMING_ENDSTOPS

// @section calibrate

/**
 * Compensación de desalineación de la cama
 *
 * Esta función corrige la desalineación en los ejes XYZ.
 *
 * Sigue estos pasos para obtener la desalineación de la cama en el plano XY:
 *  1. Imprime un cuadrado de prueba (por ejemplo, https://www.thingiverse.com/thing:2563185)
 *  2. Para XY_DIAG_AC, mide la diagonal A a C
 *  3. Para XY_DIAG_BD, mide la diagonal B a D
 *  4. Para XY_SIDE_AD, mide el lado A a D
 *
 * Marlin calcula automáticamente los factores de desalineación a partir de estas mediciones.
 * También se pueden calcular y establecer manualmente los factores de desalineación:
 *
 *  - Calcular AB: SQRT(2*AC*AC+2*BD*BD-4*AD*AD)/2
 *  - XY_SKEW_FACTOR: TAN(PI/2-ACOS((AC*AC-AB*AB-AD*AD)/(2*AB*AD)))
 *
 * Si lo deseas, puedes seguir el mismo procedimiento para XZ e YZ.
 * Utiliza estos diagramas como referencia:
 *
 *    Y                     Z                     Z
 *    ^     B-------C       ^     B-------C       ^     B-------C
 *    |    /       /        |    /       /        |    /       /
 *    |   /       /         |   /       /         |   /       /
 *    |  A-------D          |  A-------D          |  A-------D
 *    +-------------->X     +-------------->X     +-------------->Y
 *     XY_SKEW_FACTOR        XZ_SKEW_FACTOR        YZ_SKEW_FACTOR
 */
//#define SKEW_CORRECTION

#if ENABLED(SKEW_CORRECTION)
  // Ingresa todas las mediciones de longitud aquí:
  #define XY_DIAG_AC 282.8427124746
  #define XY_DIAG_BD 282.8427124746
  #define XY_SIDE_AD 200

  // O, establece directamente el factor de desalineación XY:
  //#define XY_SKEW_FACTOR 0.0

  //#define SKEW_CORRECTION_FOR_Z
  #if ENABLED(SKEW_CORRECTION_FOR_Z)
    #define XZ_DIAG_AC 282.8427124746
    #define XZ_DIAG_BD 282.8427124746
    #define YZ_DIAG_AC 282.8427124746
    #define YZ_DIAG_BD 282.8427124746
    #define YZ_SIDE_AD 200

    // O, establece directamente los factores de desalineación Z:
    //#define XZ_SKEW_FACTOR 0.0
    //#define YZ_SKEW_FACTOR 0.0
  #endif

  // Habilita esta opción para M852 y establece la desalineación en tiempo de ejecución
  //#define SKEW_CORRECTION_GCODE
#endif

//=============================================================================
//========================= Funcionalidades Adicionales =======================
//=============================================================================

// @section eeprom

/**
 * EEPROM
 *
 * Almacenamiento persistente para preservar configuraciones personalizadas entre reinicios.
 *
 *   M500 - Guardar las configuraciones en la EEPROM.
 *   M501 - Leer las configuraciones desde la EEPROM (descartando los cambios no guardados).
 *   M502 - Restaurar las configuraciones a los valores predeterminados de fábrica (se debe seguir con M500 para inicializar la EEPROM).
 */
//#define EEPROM_SETTINGS     // Almacenamiento persistente con M500 y M501
//#define DISABLE_M503        // Ahorra ~2700 bytes de memoria flash. Deshabilitar para la versión final.
#define EEPROM_CHITCHAT       // Proporcionar comentarios sobre los comandos EEPROM. Deshabilitar para ahorrar espacio en la memoria flash.
#define EEPROM_BOOT_SILENT    // Mantener M503 en silencio y solo mostrar errores durante el primer inicio
#if ENABLED(EEPROM_SETTINGS)
  //#define EEPROM_AUTO_INIT  // Inicializar automáticamente la EEPROM en caso de errores.
  //#define EEPROM_INIT_NOW   // Inicializar la EEPROM en el primer inicio después de una nueva compilación.
#endif

// @section host

//
// Keepalive del host
//
// Cuando está habilitado, Marlin enviará mensajes de estado "ocupado" al host
// cada ciertos segundos cuando no pueda aceptar comandos.
//
#define HOST_KEEPALIVE_FEATURE        // Deshabilitar esto si tu host no admite mensajes de keepalive
#define DEFAULT_KEEPALIVE_INTERVAL 2  // Número de segundos entre mensajes de "ocupado". Establecer con M113.
#define BUSY_WHILE_HEATING            // Algunos hosts requieren mensajes de "ocupado" incluso durante el calentamiento

// @section units

//
// Soporte para modo pulgadas G20/G21
//
//#define INCH_MODE_SUPPORT

//
// Soporte para unidades de temperatura con M149
//
//#define TEMPERATURE_UNITS_SUPPORT

// @section temperature

//
// Constantes de precalentamiento: se admiten hasta 10 sin cambios
//
#define PREHEAT_1_LABEL       "PLA"
#define PREHEAT_1_TEMP_HOTEND 180
#define PREHEAT_1_TEMP_BED     70
#define PREHEAT_1_TEMP_CHAMBER 35
#define PREHEAT_1_FAN_SPEED     0 // Valor de 0 a 255

#define PREHEAT_2_LABEL       "ABS"
#define PREHEAT_2_TEMP_HOTEND 240
#define PREHEAT_2_TEMP_BED    110
#define PREHEAT_2_TEMP_CHAMBER 35
#define PREHEAT_2_FAN_SPEED     0 // Valor de 0 a 255

// @section motion

/**
 * Característica de Estacionamiento de Boquilla
 *
 * Estaciona la boquilla en la posición XYZ especificada cuando está inactiva o se utiliza el comando G27.
 *
 * El parámetro "P" controla la acción aplicada al eje Z:
 *
 *    P0  (Por defecto) Si Z está por debajo de la altura de estacionamiento, levanta la boquilla.
 *    P1  Siempre levanta la boquilla a la altura de estacionamiento especificada.
 *    P2  Levanta la boquilla la cantidad especificada por Z-park, limitada a Z_MAX_POS.
 */
//#define NOZZLE_PARK_FEATURE

#if ENABLED(NOZZLE_PARK_FEATURE)
  // Especifica una posición de estacionamiento como { X, Y, Z_elevar }
  #define NOZZLE_PARK_POINT { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
  #define NOZZLE_PARK_MOVE          0   // Movimiento de estacionamiento: 0 = Movimiento XY, 1 = Solo X, 2 = Solo Y, 3 = X antes de Y, 4 = Y antes de X
  #define NOZZLE_PARK_Z_RAISE_MIN   2   // (mm) Elevar siempre Z por al menos esta distancia
  #define NOZZLE_PARK_XY_FEEDRATE 100   // (mm/s) Velocidad de avance de los ejes X e Y (también se usa para el eje Z en impresoras delta)
  #define NOZZLE_PARK_Z_FEEDRATE     5   // (mm/s) Velocidad de avance del eje Z (no se usa en impresoras delta)
#endif

/**
 * Característica de Limpieza de Boquilla
 *
 * Añade el comando G12 para realizar un proceso de limpieza de boquilla.
 *
 * Parámetros:
 *   P  Patrón
 *   S  Carreras / Repeticiones
 *   T  Triángulos (solo para P1)
 *
 * Patrones:
 *   P0  Línea recta (por defecto). Este proceso requiere un material tipo esponja
 *       en una ubicación fija de la cama. "S" especifica las carreras (es decir, movimientos de ida y vuelta)
 *       entre los puntos de inicio / fin.
 *
 *   P1  Patrón de zigzag entre (X0, Y0) y (X1, Y1), "T" especifica el número de triángulos de zigzag a realizar.
 *       "S" define el número de carreras.
 *       Los zigzags se realizan en la dimensión más estrecha.
 *       Por ejemplo, "G12 P1 S1 T3" ejecutará:
 *
 *          --
 *         |  (X0, Y1) |     /\        /\        /\     | (X1, Y1)
 *         |           |    /  \      /  \      /  \    |
 *       A |           |   /    \    /    \    /    \   |
 *         |           |  /      \  /      \  /      \  |
 *         |  (X0, Y0) | /        \/        \/        \ | (X1, Y0)
 *          --         +--------------------------------+
 *                       |________|_________|_________|
 *                           T1        T2        T3
 *
 *   P2  Patrón circular con centro en NOZZLE_CLEAN_CIRCLE_MIDDLE.
 *       "R" especifica el radio. "S" especifica el número de carreras.
 *       Antes de comenzar, la boquilla se mueve a NOZZLE_CLEAN_START_POINT.
 *
 *   Notas: La altura final (Z) debe ser la misma que la altura inicial.
 */
//#define NOZZLE_CLEAN_FEATURE

#if ENABLED(NOZZLE_CLEAN_FEATURE)
  #define NOZZLE_CLEAN_PATTERN_LINE     // Proporciona 'G12 P0' - un patrón de limpieza lineal simple
  #define NOZZLE_CLEAN_PATTERN_ZIGZAG   // Proporciona 'G12 P1' - un patrón de limpieza en zigzag
  #define NOZZLE_CLEAN_PATTERN_CIRCLE   // Proporciona 'G12 P2' - un patrón de limpieza circular

  // Patrón predeterminado a utilizar cuando no se proporciona 'P' a G12. Una de las opciones habilitadas anteriores.
  #define NOZZLE_CLEAN_DEFAULT_PATTERN 0

//#define NOZZLE_CLEAN_STROKES     12   // Número predeterminado de repeticiones del patrón

#if ENABLED(NOZZLE_CLEAN_PATTERN_ZIGZAG)
  #define NOZZLE_CLEAN_TRIANGLES  3   // Número predeterminado de triángulos
#endif

// Especifica las posiciones de cada herramienta como { {X, Y, Z}, {X, Y, Z} }
// El sistema de extrusión doble puede usar { { -20, (Y_BED_SIZE / 2), (Z_MIN_POS + 1) }, { 420, (Y_BED_SIZE / 2), (Z_MIN_POS + 1) }}
#define NOZZLE_CLEAN_START_POINT { { 30, 30, (Z_MIN_POS + 1) } }
#define NOZZLE_CLEAN_END_POINT   { { 100, 60, (Z_MIN_POS + 1) } }

#if ENABLED(NOZZLE_CLEAN_PATTERN_CIRCLE)
  #define NOZZLE_CLEAN_CIRCLE_RADIUS 6.5                      // (mm) Radio del patrón circular
  #define NOZZLE_CLEAN_CIRCLE_FN 10                           // Número de segmentos del círculo en el patrón circular
  #define NOZZLE_CLEAN_CIRCLE_MIDDLE NOZZLE_CLEAN_START_POINT // Punto medio del círculo
#endif

// Mueve la boquilla a la posición inicial después de la limpieza
#define NOZZLE_CLEAN_GOBACK

// Para una estación de purga/limpieza que siempre esté a la altura del pórtico (sin movimiento en Z)
//#define NOZZLE_CLEAN_NO_Z

// Para una estación de purga/limpieza montada en el eje X
//#define NOZZLE_CLEAN_NO_Y

// Requiere una temperatura mínima del hotend para la limpieza
#define NOZZLE_CLEAN_MIN_TEMP 170
//#define NOZZLE_CLEAN_HEATUP       // Calentar la boquilla en lugar de omitir el limpiado

// Secuencia explícita de comandos G-code para el limpiado, se aplica a G12 sin argumentos.
//#define WIPE_SEQUENCE_COMMANDS "G1 X-17 Y25 Z10 F4000\nG1 Z1\nM114\nG1 X-17 Y25\nG1 X-17 Y95\nG1 X-17 Y25\nG1 X-17 Y95\nG1 X-17 Y25\nG1 X-17 Y95\nG1 X-17 Y25\nG1 X-17 Y95\nG1 X-17 Y25\nG1 X-17 Y95\nG1 X-17 Y25\nG1 X-17 Y95\nG1 Z15\nM400\nG0 X-10.0 Y-9.0"

#endif

// @section host

/**
 * Temporizador de trabajo de impresión (Print Job Timer)
 *
 * Inicia y detiene automáticamente el temporizador de trabajo de impresión en M104/M109/M140/M190/M141/M191.
 * El temporizador de trabajo de impresión solo se detendrá si la temperatura
 * objetivo de la cama/cámara está por debajo de BED_MINTEMP/CHAMBER_MINTEMP.
 *
 *   M104 (hotend, sin espera)  - alta temperatura = ninguna,       baja temperatura = detener temporizador
 *   M109 (hotend,espera)      - alta temperatura = iniciar temporizador, baja temperatura = detener temporizador
 *   M140 (cama, sin espera)    - alta temperatura = ninguna,       baja temperatura = detener temporizador
 *   M190 (cama, espera)        - alta temperatura = iniciar temporizador, baja temperatura = ninguna
 *   M141 (cámara, sin espera)  - alta temperatura = ninguna,       baja temperatura = detener temporizador
 *   M191 (cámara, espera)     - alta temperatura = iniciar temporizador, baja temperatura = ninguna
 *
 * Para M104/M109, alta temperatura es cualquier valor por encima de EXTRUDE_MINTEMP / 2.
 * Para M140/M190, alta temperatura es cualquier valor por encima de BED_MINTEMP.
 * Para M141/M191, alta temperatura es cualquier valor por encima de CHAMBER_MINTEMP.
 *
 * El temporizador también se puede controlar con los siguientes comandos:
 *
 *   M75 - Iniciar el temporizador de trabajo de impresión
 *   M76 - Pausar el temporizador de trabajo de impresión
 *   M77 - Detener el temporizador de trabajo de impresión
 */
#define PRINTJOB_TIMER_AUTOSTART

// @section stats

/**
 * Contador de impresiones (Print Counter)
 *
 * Realiza un seguimiento de datos estadísticos como:
 *
 *  - Total de trabajos de impresión
 *  - Total de trabajos de impresión exitosos
 *  - Total de trabajos de impresión fallidos
 *  - Tiempo total de impresión
 *
 * Ver las estadísticas actuales con M78.
 */
//#define PRINTCOUNTER
#if ENABLED(PRINTCOUNTER)
  #define PRINTCOUNTER_SAVE_INTERVAL 60 // (minutos) Intervalo de guardado de EEPROM durante la impresión. Un valor de 0 guardará las estadísticas al final de la impresión.
#endif

// @section security

/**
 * Contraseña
 *
 * Establece una contraseña numérica para la impresora que se puede solicitar:
 *
 *  - Cuando la impresora se enciende
 *  - Al abrir el menú 'Imprimir desde el medio'
 *  - Cuando se completa o se aborta la impresión desde la tarjeta SD
 *
 * Se pueden utilizar los siguientes códigos G:
 *
 *  M510 - Bloquear impresora. Bloquea todos los comandos excepto M511.
 *  M511 - Desbloquear impresora.
 *  M512 - Establecer, cambiar y eliminar contraseña.
 *
 * Si olvidas la contraseña y te quedas bloqueado, deberás volver a cargar
 * el firmware con la función desactivada, restablecer la EEPROM y
 * (opcionalmente) volver a cargar el firmware con esta función habilitada.
 */
//#define PASSWORD_FEATURE
#if ENABLED(PASSWORD_FEATURE)
  #define PASSWORD_LENGTH 4                 // (#) Número de dígitos (1-9). Se recomienda 3 o 4
  #define PASSWORD_ON_STARTUP
  #define PASSWORD_UNLOCK_GCODE             // Desbloquear con el comando M511 P<contraseña>. Desactivar para evitar ataques de fuerza bruta.
  #define PASSWORD_CHANGE_GCODE             // Cambiar la contraseña con M512 P<antigua> S<nueva>.
  //#define PASSWORD_ON_SD_PRINT_MENU       // Esto no evita que se ejecuten los códigos G
  //#define PASSWORD_AFTER_SD_PRINT_END
  //#define PASSWORD_AFTER_SD_PRINT_ABORT
  //#include "Configuration_Secure.h"       // Archivo externo con PASSWORD_DEFAULT_VALUE
#endif

//=============================================================================
//============================= LCD y soporte SD ==============================
//=============================================================================

// @section interface

/**
 * IDIOMA DEL LCD
 *
 * Selecciona el idioma para mostrar en el LCD. Estos idiomas están disponibles:
 *
 *   en, an, bg, ca, cz, da, de, el, el_CY, es, eu, fi, fr, gl, hr, hu, it,
 *   jp_kana, ko_KR, nl, pl, pt, pt_br, ro, ru, sk, sv, tr, uk, vi, zh_CN, zh_TW
 *
 * :{ 'en':'Inglés', 'an':'Aragonés', 'bg':'Búlgaro', 'ca':'Catalán', 'cz':'Checo', 'da':'Danés', 'de':'Alemán', 'el':'Griego (Grecia)', 'el_CY':'Griego (Chipre)', 'es':'Español', 'eu':'Vasco-Euskera', 'fi':'Finlandés', 'fr':'Francés', 'gl':'Gallego', 'hr':'Croata', 'hu':'Húngaro', 'it':'Italiano', 'jp_kana':'Japonés', 'ko_KR':'Coreano (Corea del Sur)', 'nl':'Holandés', 'pl':'Polaco', 'pt':'Portugués', 'pt_br':'Portugués (brasileño)', 'ro':'Rumano', 'ru':'Ruso', 'sk':'Eslovaco', 'sv':'Sueco', 'tr':'Turco', 'uk':'Ucraniano', 'vi':'Vietnamita', 'zh_CN':'Chino (Simplificado)', 'zh_TW':'Chino (Tradicional)'}
 */
#define LCD_LANGUAGE es

/**
 * Juego de caracteres del LCD
 *
 * Nota: Esta opción NO es aplicable a pantallas gráficas.
 *
 * Todas las pantallas LCD basadas en caracteres proporcionan ASCII más una de estas
 * extensiones de idioma:
 *
 *  - JAPANESE ... la más común
 *  - WESTERN  ... con más caracteres acentuados
 *  - CYRILLIC ... para el idioma ruso
 *
 * Para determinar la extensión de idioma instalada en tu controlador:
 *
 *  - Compila y carga con LCD_LANGUAGE configurado como 'test'
 *  - Haz clic en el controlador para ver el menú del LCD
 *  - El LCD mostrará texto en japonés, occidental o cirílico
 *
 * Consulta https://marlinfw.org/docs/development/lcd_language.html
 *
 * :['JAPANESE', 'WESTERN', 'CYRILLIC']
 */
#define DISPLAY_CHARSET_HD44780 WESTERN

/**
 * Estilo de pantalla de información (0: Clásico, 1: Průša)
 *
 * :[0:'Clásico', 1:'Průša']
 */
#define LCD_INFO_SCREEN_STYLE 0

/**
 * TARJETA SD
 *
 * El soporte para tarjetas SD está desactivado de forma predeterminada. Si tu controlador tiene una ranura SD,
 * debes descomentar la siguiente opción o no funcionará.
 */
//#define SDSUPPORT

/**
 * TARJETA SD: HABILITAR CRC
 *
 * Utilizar comprobaciones de CRC y reintentos en la comunicación con la tarjeta SD.
 */
//#define SD_CHECK_AND_RETRY

/**
 * Elementos del menú LCD
 *
 * Desactiva todos los menús y muestra solo la pantalla de estado, o
 * elimina algunos elementos de menú innecesarios para ahorrar espacio.
 */
//#define NO_LCD_MENUS
//#define SLIM_LCD_MENUS

//
// CONFIGURACIÓN DEL ENCODER
//
// Esta opción anula el número predeterminado de pulsos del encoder necesarios para
// producir un paso. Debe aumentarse para encoders de alta resolución.
//
//#define ENCODER_PULSES_PER_STEP 4

//
// Utiliza esta opción para anular el número de señales de paso requeridas para
// moverse entre los elementos de menú siguientes/anteriores.
//
//#define ENCODER_STEPS_PER_MENU_ITEM 1

/**
 * Opciones de dirección del encoder
 *
 * Prueba el comportamiento de tu encoder primero con ambas opciones desactivadas.
 *
 * ¿Editar el valor y la navegación del menú invertidos? Habilita REVERSE_ENCODER_DIRECTION.
 * ¿Solo navegación del menú invertida? Habilita REVERSE_MENU_DIRECTION.
 * ¿Solo edición del valor invertida? Habilita AMBAS opciones.
 */

//
// Esta opción invierte la dirección del encoder en todas partes.
//
// Activa esta opción si el SENTIDO DE LAS AGUJAS DEL RELOJ hace que los valores DISMINUYAN.
//
//#define REVERSE_ENCODER_DIRECTION

//
// Esta opción invierte la dirección del encoder para navegar por los menús del LCD.
//
// Si el SENTIDO DE LAS AGUJAS DEL RELOJ normalmente se mueve hacia ABAJO, esto lo hará ir hacia ARRIBA.
// Si el SENTIDO DE LAS AGUJAS DEL RELOJ normalmente se mueve hacia ARRIBA, esto lo hará ir hacia ABAJO.
//
//#define REVERSE_MENU_DIRECTION

//
// Esta opción invierte la dirección del encoder para la pantalla de selección.
//
// Si el SENTIDO DE LAS AGUJAS DEL RELOJ normalmente se mueve hacia la IZQUIERDA, esto lo hará ir hacia la DERECHA.
// Si el SENTIDO DE LAS AGUJAS DEL RELOJ normalmente se mueve hacia la DERECHA, esto lo hará ir hacia la IZQUIERDA.
//
//#define REVERSE_SELECT_DIRECTION

//
// Filtro de ruido del encoder EMI
//
// Esta opción aumenta las muestras del encoder para filtrar los clics fantasma del encoder causados por el ruido EMI.
//
//#define ENCODER_NOISE_FILTER
#if ENABLED(ENCODER_NOISE_FILTER)
  #define ENCODER_SAMPLES 10
#endif

//
// Homing Individual de Ejes
//
// Agrega elementos de homing individuales de ejes (Home X, Home Y y Home Z) al menú LCD.
//
//#define INDIVIDUAL_AXIS_HOMING_MENU
//#define INDIVIDUAL_AXIS_HOMING_SUBMENU

//
// ALTAVOZ/ZUMBADOR
//
// Si tienes un altavoz que puede producir tonos, actívalo aquí.
// Por defecto, Marlin asume que tienes un zumbador con una frecuencia fija.
//
//#define SPEAKER

//
// Duración y frecuencia para el sonido de retroalimentación de la interfaz de usuario.
// Establece estos valores en 0 para desactivar el sonido de retroalimentación en los menús LCD.
//
// Nota: Prueba la salida de audio con el código G:
//  M300 S<frecuencia en Hz> P<duración en ms>
//
//#define LCD_FEEDBACK_FREQUENCY_DURATION_MS 2
//#define LCD_FEEDBACK_FREQUENCY_HZ 5000

//
// Tamaño de la cola de tonos, utilizada para evitar que los pitidos bloqueen la ejecución.
// El valor predeterminado es 4, puedes modificarlo aquí. Cada entrada consume 4 bytes de SRAM.
//
//#define TONE_QUEUE_LENGTH 4

//
// Una secuencia de tonos que se reproducirán al iniciar, en pares de tono (Hz), duración (ms).
// Silencio entre los tonos.
//
//#define STARTUP_TUNE { 698, 300, 0, 50, 523, 50, 0, 25, 494, 50, 0, 25, 523, 100, 0, 50, 554, 300, 0, 100, 523, 300 }

//=============================================================================
//======================= Selección de LCD / Controlador ======================
//====================     (LCD basados en caracteres)   ======================
//=============================================================================
// @section lcd

//
// RepRapDiscount Smart Controller.
// https://reprap.org/wiki/RepRapDiscount_Smart_Controller
//
// Nota: Por lo general, se vende con una PCB blanca.
//
//#define REPRAP_DISCOUNT_SMART_CONTROLLER

//
// Pantalla GT2560 (YHCB2004)
//
// Requiere la biblioteca Testato, Koepel softwarewire y
// la biblioteca LiquidCrystal_AIP31068 de Andriy Golovnya.
//
//#define YHCB2004

//
// Pantalla y Encoder original de RADDS con lector de tarjetas SD
// http://doku.radds.org/dokumentation/lcd-display/
//
//#define RADDS_DISPLAY

//
// Controlador ULTIMAKER.
//
//#define ULTIMAKERCONTROLLER

//
// ULTIPANEL como se ve en Thingiverse.
//
//#define ULTIPANEL

//
// PanelOne de T3P3 (a través de RAMPS 1.4 AUX2/AUX3)
// https://reprap.org/wiki/PanelOne
//
//#define PANEL_ONE

//
// GADGETS3D G3D LCD/SD Controller
// https://reprap.org/wiki/RAMPS_1.3/1.4_GADGETS3D_Shield_with_Panel
//
// Nota: Por lo general, se vende con una PCB azul.
//
//#define G3D_PANEL

//
// Panel RigidBotV1.0
// http://www.inventapart.com/
//
//#define RIGIDBOT_PANEL

//
// Makeboard 3D Printer Parts 3D Printer Mini Display 1602 Mini Controller
// https://www.aliexpress.com/item/32765887917.html
//
//#define MAKEBOARD_MINI_2_LINE_DISPLAY_1602

//
// Controlador ANET y Tronxy 20x4
//
//#define ZONESTAR_LCD            // Requiere que ADC_KEYPAD_PIN se asigne a un pin analógico.
                                  // Se sabe que este LCD es susceptible a interferencias eléctricas
                                  // que distorsionan la pantalla. Presionar cualquier botón lo soluciona.
                                  // Este es un display LCD2004 con 5 botones analógicos.

//
// LCD genérico de 16x2, 16x4, 20x2 o 20x4 basado en caracteres.
//
//#define ULTRA_LCD

//=============================================================================
//======================== Selección de LCD/Controlador ========================
//================== (LCDs I2C y de registro de desplazamiento) =================
//=============================================================================

//
// TIPO DE CONTROLADOR: I2C
//
// Nota: Estos controladores requieren la instalación de la biblioteca LiquidCrystal_I2C de Arduino.
// Para obtener más información: https://github.com/kiyoshigawa/LiquidCrystal_I2C
//

//
// Panel de control Elefu RA Board
// https://web.archive.org/web/20140823033947/http://www.elefu.com/index.php?route=product/product&product_id=53
//
//#define RA_CONTROL_PANEL

//
// Pantallas LCD Sainsmart (YwRobot)
//
// Estas requieren la biblioteca LiquidCrystal_I2C de F.Malpartida
// https://bitbucket.org/fmalpartida/new-liquidcrystal/wiki/Home
//
//#define LCD_SAINSMART_I2C_1602
//#define LCD_SAINSMART_I2C_2004

//
// Adaptador genérico de LCD LCM1602
//
//#define LCM1602

//
// PANELOLU2 LCD con LED de estado,
// entradas de codificador y clic separadas.
//
// Nota: Este controlador requiere la biblioteca LiquidTWI2 de Arduino v1.2.3 o posterior.
// Para obtener más información: https://github.com/lincomatic/LiquidTWI2
//
// Nota: La entrada de clic del codificador PANELOLU2 se puede conectar directamente a un pin
// (si se define BTN_ENC como != -1) o leer a través de I2C (cuando BTN_ENC == -1).
//
//#define LCD_I2C_PANELOLU2

//
// LCD Panucatt VIKI con LED de estado,
// botones integrados L/R/U/D/codificador separados.
//
//#define LCD_I2C_VIKI

//
// TIPO DE CONTROLADOR: Paneles de registro de desplazamiento
//

//
// LCD SR sin bloqueo de 2 cables de https://goo.gl/aJJ4sH
// Configuración del LCD: https://reprap.org/wiki/SAV_3D_LCD
//
//#define SAV_3DLCD

//
// LCD SR de 3 cables con sincronización mediante 74HC4094
// https://github.com/mikeshub/SailfishLCD
// Utiliza el código directamente de Sailfish
//
//#define FF_INTERFACEBOARD

//
// Panel TFT GLCD con interfaz de Marlin
// El panel se conecta a la placa principal mediante interfaz SPI o I2C.
// Consulta https://github.com/Serhiy-K/TFTGLCDAdapter
//
//#define TFTGLCD_PANEL_SPI
//#define TFTGLCD_PANEL_I2C

//=============================================================================
//======================= Selección de LCD/Controlador ========================
//======================== (LCDs gráficos) ====================================
//=============================================================================

//
// TIPO DE CONTROLADOR: Gráfico 128x64 (DOGM)
//
// IMPORTANTE: ¡Se requiere la biblioteca U8glib para la pantalla gráfica!
//            https://github.com/olikraus/U8glib_Arduino
//
// NOTA: Si el LCD no responde, es posible que debas invertir los cables.
//

//
// RepRapDiscount FULL GRAPHIC Smart Controller
// https://reprap.org/wiki/RepRapDiscount_Full_Graphic_Smart_Controller
//
//#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

//
// K.3D Full Graphic Smart Controller
//
//#define K3D_FULL_GRAPHIC_SMART_CONTROLLER

//
// ReprapWorld Graphical LCD
// https://reprapworld.com/electronics/3d-printer-modules/autonomous-printing/graphical-lcd-screen-v1-0/
//
//#define REPRAPWORLD_GRAPHICAL_LCD

//
// Activa uno de estos si tienes un dispositivo Panucatt
// Viki 2.0 o mini Viki con pantalla gráfica LCD
// https://www.panucatt.com
//
//#define VIKI2
//#define miniVIKI

//
// Pantalla LCD de la impresora Alfawise Ex8 marcada como WYH L12864 COG
//
//#define WYH_L12864

//
// Panel Mini Lab con controlador 
//gráfico y soporte SD - https://reprap.org/wiki/Mini_panel
//
//#define MINIPANEL

//
// MaKr3d Makr-Panel con controlador gráfico y soporte SD.
// https://reprap.org/wiki/MaKr3d_MaKrPanel
//
//#define MAKRPANEL

//
// Controlador gráfico completo ST7565 de Adafruit.
// https://github.com/eboston/Adafruit-ST7565-Full-Graphic-Controller/
//
//#define ELB_FULL_GRAPHIC_CONTROLLER

//
// BQ LCD Smart Controller incluido por defecto 
// en la BQ Hephestos 2 y Witbox 2.
//
//#define BQ_LCD_SMART_CONTROLLER

//
// Interfaz de usuario Cartesio
// http://mauk.cc/webshop/cartesio-shop/electronics/user-interface
//
//#define CARTESIO_UI

//
// LCD para tarjeta Melzi con pantalla gráfica LCD
//
//#define LCD_FOR_MELZI

//
// Ulticontroller original de la impresora Ultimaker 2 con pantalla I2C SSD1309 y codificador
// https://github.com/Ultimaker/Ultimaker2/tree/master/1249_Ulticontroller_Board_(x1)
//
//#define ULTI_CONTROLLER

//
// MKS MINI12864 con controlador gráfico y soporte SD
// https://reprap.org/wiki/MKS_MINI_12864
//
//#define MKS_MINI_12864

//
// MKS MINI12864 V3 es un alias de FYSETC_MINI_12864_2_1. Tipo A/B. Retroiluminación RGB NeoPixel.
//
//#define MKS_MINI_12864_V3

//
// MKS LCD12864A/B con controlador gráfico y soporte SD. Sigue el diseño de pines de MKS_MINI_12864.
// https://www.aliexpress.com/item/33018110072.html
//
//#define MKS_LCD12864A
//#define MKS_LCD12864B

//
// Variante FYSETC del controlador gráfico MINI12864 con soporte SD
// https://wiki.fysetc.com/Mini12864_Panel/
//
//#define FYSETC_MINI_12864_X_X    // Tipo C/D/E/F. Sin retroiluminación RGB ajustable por defecto
//#define FYSETC_MINI_12864_1_2    // Tipo C/D/E/F. Retroiluminación RGB simple (siempre encendida)
//#define FYSETC_MINI_12864_2_0    // Tipo A/B. Retroiluminación RGB discreta
//#define FYSETC_MINI_12864_2_1    // Tipo A/B. Retroiluminación RGB NeoPixel
//#define FYSETC_GENERIC_12864_1_1 // Pantalla más grande con retroiluminación básica ON/OFF.

//
// BigTreeTech Mini 12864 V1.0 es un alias de FYSETC_MINI_12864_2_1. Tipo A/B. Retroiluminación RGB NeoPixel.
//
//#define BTT_MINI_12864_V1

//
// Pantalla de fábrica para Creality CR-10
// https://www.aliexpress.com/item/32833148327.html
//
// Compatible con RAMPS utilizando un único conector de 10 pines.
// (Para los propietarios de CR-10 que deseen reemplazar la placa Melzi de Creality pero conservar la pantalla)
//
//#define CR10_STOCKDISPLAY

//
// Pantalla OEM de Ender-2, una variante de MKS_MINI_12864
//
//#define ENDER2_STOCKDISPLAY

//
// Controlador gráfico ANET y Tronxy
//
// LCD gráfico completo ANET 128x64 con codificador rotatorio como se utiliza en la Anet A6
// Un clon de la pantalla gráfica completa de RepRapDiscount pero con
// pines/cableado diferentes (ver pins_ANET_10.h). Habilitar una de estas opciones.
//
//#define ANET_FULL_GRAPHICS_LCD
//#define ANET_FULL_GRAPHICS_LCD_ALT_WIRING

//
// LCD AZSMZ 12864 con SD
// https://www.aliexpress.com/item/32837222770.html
//
//#define AZSMZ_12864

//
// Controlador Silvergate GLCD
// https://github.com/android444/Silvergate
//
//#define SILVER_GATE_GLCD_CONTROLLER

//
// LCD eMotion Tech con SD
// https://www.reprap-france.com/produit/1234568748-ecran-graphique-128-x-64-points-2-1
//
//#define EMOTION_TECH_LCD

//=============================================================================
//==============================  Pantallas OLED  ==============================
//=============================================================================

//
// Pantalla OLED gráfica completa SSD1306 genérica
//
//#define U8GLIB_SSD1306

//
// Soporte de módulo de pantalla OLED SAV utilizando módulos de pantalla basados en SSD1306 o SH1106
//
//#define SAV_3DGLCD
#if ENABLED(SAV_3DGLCD)
  #define U8GLIB_SSD1306
  //#define U8GLIB_SH1106
#endif

//
// Panel OLED TinyBoy2 128x64 / Encoder
//
//#define OLED_PANEL_TINYBOY2

//
// Controlador gráfico completo MKS OLED 1.3" 128×64
// https://reprap.org/wiki/MKS_12864OLED
//
// Pantalla OLED pequeña pero muy nítida
//
//#define MKS_12864OLED          // Utiliza el controlador SH1106 (por defecto)
//#define MKS_12864OLED_SSD1306  // Utiliza el controlador SSD1306

//
// Controlador gráfico completo Zonestar OLED 128×64
//
//#define ZONESTAR_12864LCD           // Gráfico (DOGM) con controlador ST7920
//#define ZONESTAR_12864OLED          // 1.3" OLED con controlador SH1106 (por defecto)
//#define ZONESTAR_12864OLED_SSD1306  // 0.96" OLED con controlador SSD1306

//
// Einstart S OLED SSD1306
//
//#define U8GLIB_SH1106_EINSTART

//
// Pantalla/controlador OLED Overlord con zumbador i2c y LED
//
//#define OVERLORD_OLED

//
// Controlador gráfico completo FYSETC OLED 2.42" 128×64 con RGB WS2812
// Dónde encontrarlo: https://www.aliexpress.com/item/4000345255731.html
//#define FYSETC_242_OLED_12864   // Utiliza el controlador SSD1309

//
// Controlador gráfico completo K.3D OLED 2.42" 128×64 con SSD1309
//
//#define K3D_242_OLED_CONTROLLER   // Software SPI

//=============================================================================
//========================= Pantallas UI extensibles ==========================
//=============================================================================

/**
 * Pantalla táctil DGUS con DWIN OS. (Elige una.)
 *
 * ORIGIN (Marlin DWIN_SET)
 *  - Descarga https://github.com/coldtobi/Marlin_DGUS_Resources
 *  - Copia la carpeta descargada DWIN_SET en la tarjeta SD.
 *  - Producto: https://www.aliexpress.com/item/32993409517.html
 *
 * FYSETC (Proveedor predeterminado)
 *  - Descarga https://github.com/FYSETC/FYSTLCD-2.0
 *  - Copia la carpeta descargada SCREEN en la tarjeta SD.
 *  - Producto: https://www.aliexpress.com/item/32961471929.html
 *
 * HIPRECY (Proveedor predeterminado)
 *  - Descarga https://github.com/HiPrecy/Touch-Lcd-LEO
 *  - Copia la carpeta descargada DWIN_SET en la tarjeta SD.
 *
 * MKS (MKS-H43) (Proveedor predeterminado)
 *  - Descarga https://github.com/makerbase-mks/MKS-H43
 *  - Copia la carpeta descargada DWIN_SET en la tarjeta SD.
 *  - Producto: https://www.aliexpress.com/item/1005002008179262.html
 *
 * RELOADED (T5UID1)
 *  - Descarga https://github.com/Neo2003/DGUS-reloaded/releases
 *  - Copia la carpeta descargada DWIN_SET en la tarjeta SD.
 *
 * IA_CREALITY (T5UID1)
 *  - Descarga https://github.com/InsanityAutomation/Marlin/raw/CrealityDwin_2.0/TM3D_Combined480272_Landscape_V7.7z
 *  - Copia la carpeta descargada DWIN_SET en la tarjeta SD.
 *
 * E3S1PRO (T5L)
 *  - Descargar https://github.com/CrealityOfficial/Ender-3S1/archive/3S1_Plus_Screen.zip
 *  - Copiar la carpeta DWIN_SET descargada en la tarjeta SD.
 *
 * Flashear una pantalla DGUS en Marlin:
 *  - Formatea la tarjeta SD en FAT32 con un tamaño de asignación de 4 KB.
 *  - Descarga los archivos según se especifique para tu tipo de pantalla.
 *  - Conecta la tarjeta microSD en la parte trasera de la pantalla.
 *  - Inicia la pantalla y espera a que se complete la actualización.
 * 
 * :[ 'ORIGIN', 'FYSETC', 'HYPRECY', 'MKS', 'RELOADED', 'IA_CREALITY' ]
 */
//#define DGUS_LCD_UI ORIGIN
#if DGUS_UI_IS(MKS)
  #define USE_MKS_GREEN_UI
#elif DGUS_UI_IS(IA_CREALITY)
  //#define LCD_SCREEN_ROTATE 90          // Modo retrato o pantallas de 800x480
  //#define IA_CREALITY_BOOT_DELAY 1500   // (ms)
#endif

//
// Pantalla táctil LCD para impresoras Malyan M200/M300
//
//#define MALYAN_LCD

//
// Interfaz táctil para pantallas FTDI EVE (FT800/FT810)
// Consulta Configuration_adv.h para ver todas las opciones de configuración.
//
//#define TOUCH_UI_FTDI_EVE

//
// Pantalla táctil LCD para Anycubic Chiron
//
//#define ANYCUBIC_LCD_CHIRON

//
// Pantalla táctil LCD para Anycubic i3 Mega
//
//#define ANYCUBIC_LCD_I3MEGA
#if ENABLED(ANYCUBIC_LCD_I3MEGA)
  //#define ANYCUBIC_LCD_GCODE_EXT  // Agrega ".gcode" a las entradas del menú para compatibilidad con clones DGUS
#endif

//
// Pantalla táctil LCD para Anycubic Vyper
//
//#define ANYCUBIC_LCD_VYPER

//
// 320x240 Nextion 2.8" pantalla táctil resistiva en serie NX3224T028
//
//#define NEXTION_TFT

//
// Interfaces de controlador de terceros o personalizadas por el proveedor.
// Las fuentes deben instalarse en 'src/lcd/extui'.
//
//#define EXTENSIBLE_UI

#if ENABLED(EXTENSIBLE_UI)
  //#define EXTUI_LOCAL_BEEPER // Habilita el uso del pin de Beeper local con la pantalla externa
#endif

//=============================================================================
//============================== TFTs gráficos ================================
//=============================================================================

/**
 * Presets de modelos TFT específicos. Habilita una de las siguientes opciones
 * o habilita TFT_GENERIC y establece las subopciones.
 */

//
// 480x320, 3.5", Pantalla SPI con codificador rotatorio de MKS
// Generalmente emparejado con MKS Robin Nano V2 y V3
//
//#define MKS_TS35_V2_0

//
// 320x240, 2.4", Pantalla FSMC de MKS
// Generalmente emparejado con MKS Robin Nano V1.2
//
//#define MKS_ROBIN_TFT24

//
// 320x240, 2.8", Pantalla FSMC de MKS
// Generalmente emparejado con MKS Robin Nano V1.2
//
//#define MKS_ROBIN_TFT28

//
// 320x240, 3.2", Pantalla FSMC de MKS
// Generalmente emparejado con MKS Robin Nano V1.2
//
//#define MKS_ROBIN_TFT32

//
// 480x320, 3.5", Pantalla FSMC de MKS
// Generalmente emparejado con MKS Robin Nano V1.2
//
//#define MKS_ROBIN_TFT35

//
// 480x272, 4.3", Pantalla FSMC de MKS
//
//#define MKS_ROBIN_TFT43

//
// 320x240, 3.2", Pantalla FSMC de MKS
// Generalmente emparejado con MKS Robin
//
//#define MKS_ROBIN_TFT_V1_1R

//
// 480x320, 3.5", Pantalla FSMC de stock de Tronxy
//
//#define TFT_TRONXY_X5SA

//
// 480x320, 3.5", Pantalla FSMC de stock de AnyCubic
//
//#define ANYCUBIC_TFT35

//
// 320x240, 2.8", Pantalla FSMC de stock de Longer/Alfawise
//
//#define LONGER_LK_TFT28

//
// 320x240, 2.8", Pantalla FSMC de stock de ET4
//
//#define ANET_ET4_TFT28

//
// 480x320, 3.5", Pantalla FSMC de stock de ET5
//
//#define ANET_ET5_TFT35

//
// 1024x600, 7", Pantalla de stock RGB con codificador rotatorio de BIQU-BX
// https://github.com/bigtreetech/BIQU-BX/tree/master/Hardware
//
//#define BIQU_BX_TFT70

//
// 480x320, 3.5", Pantalla de stock SPI con codificador rotatorio de la serie BIQU B1 SE
// https://github.com/bigtreetech/TFT35-SPI/tree/master/v1
//
//#define BTT_TFT35_SPI_V1_0

//
// TFT genérico con opciones detalladas
//
//#define TFT_GENERIC
#if ENABLED(TFT_GENERIC)
  // :[ 'AUTO', 'ST7735', 'ST7789', 'ST7796', 'R61505', 'ILI9328', 'ILI9341', 'ILI9488' ]
  #define TFT_DRIVER AUTO

  // Interfaz. Habilita una de las siguientes opciones:
  //#define TFT_INTERFACE_FSMC
  //#define TFT_INTERFACE_SPI

  // Resolución TFT. Habilita una de las siguientes opciones:
  //#define TFT_RES_320x240
  //#define TFT_RES_480x272
  //#define TFT_RES_480x320
  //#define TFT_RES_1024x600
#endif

/**
 * Selección de interfaz de usuario TFT. Habilita una de las siguientes opciones:
 *
 *   TFT_CLASSIC_UI - Emulación de DOGM - 128x64 ampliada
 *   TFT_COLOR_UI   - Menús predeterminados de Marlin, fácil de usar con pantalla táctil, utilizando todas las capacidades del TFT
 *   TFT_LVGL_UI    - Una interfaz moderna utilizando LVGL
 *
 *   Para LVGL_UI también copia la carpeta 'assets' del directorio de compilación a la
 *   raíz de tu tarjeta SD, junto con el firmware compilado.
 */
//#define TFT_CLASSIC_UI
//#define TFT_COLOR_UI
//#define TFT_LVGL_UI

#if ENABLED(TFT_COLOR_UI)
  /**
   * Fuente TFT para Color_UI. Elige una de las siguientes:
   *    
   * NOTOSANS  - Fuente predeterminada con anti-aliasing. Admite caracteres latinos extendidos y no latinos.
   * UNIFONT   - Fuente ligera, sin anti-aliasing. Admite caracteres latinos extendidos y no latinos.
   * HELVETICA - Fuente ligera, sin anti-aliasing. Solo admite caracteres latinos básicos (0x0020-0x007F) y suplemento latino-1 (0x0080-0x00FF).
   */
  #define TFT_FONT  NOTOSANS

/**
 * Tema TFT para Color_UI. Elije uno de los siguientes o añade uno nuevo al directorio 'Marlin/src/lcd/tft/themes'
 *
 * BLUE_MARLIN  - Tema predeterminado con fondo 'azul medianoche'
 * BLACK_MARLIN - Tema con fondo 'negro'
 * ANET_BLACK   - Tema utilizado para Anet ET4/5
 */
#define TFT_THEME BLACK_MARLIN

//#define TFT_SHARED_IO   // La E/S se comparte entre la pantalla TFT y otros dispositivos. Desactiva la transferencia de datos asíncrona.

#define COMPACT_MARLIN_BOOT_LOGO  // Utiliza datos comprimidos para ahorrar espacio en Flash
#endif

#if ENABLED(TFT_LVGL_UI)
  //#define MKS_WIFI_MODULE // Módulo WiFi MKS
#endif

/**
 * Rotación de la pantalla TFT. Establece uno de los siguientes valores:
 *
 *   TFT_ROTATE_90,  TFT_ROTATE_90_MIRROR_X,  TFT_ROTATE_90_MIRROR_Y,
 *   TFT_ROTATE_180, TFT_ROTATE_180_MIRROR_X, TFT_ROTATE_180_MIRROR_Y,
 *   TFT_ROTATE_270, TFT_ROTATE_270_MIRROR_X, TFT_ROTATE_270_MIRROR_Y,
 *   TFT_MIRROR_X, TFT_MIRROR_Y, TFT_NO_ROTATION
 */
//#define TFT_ROTATION TFT_NO_ROTATION

//=============================================================================
//============================  Otras Controladoras  ==========================
//=============================================================================

//
// Pantalla OEM Ender-3 v2. Una pantalla DWIN con encoder rotatorio.
//
//#define DWIN_CREALITY_LCD           // Interfaz de Creality
//#define DWIN_LCD_PROUI              // Interfaz Pro por MRiscoC
//#define DWIN_CREALITY_LCD_JYERSUI   // Interfaz Jyers por Jacob Myers
//#define DWIN_MARLINUI_PORTRAIT      // Interfaz MarlinUI (orientación vertical)
//#define DWIN_MARLINUI_LANDSCAPE     // Interfaz MarlinUI (orientación horizontal)

//
// Configuración de Pantalla Táctil
//
//#define TOUCH_SCREEN
#if ENABLED(TOUCH_SCREEN)
  #define BUTTON_DELAY_EDIT      50 // (ms) Retraso de repetición de botón para pantallas de edición
  #define BUTTON_DELAY_MENU     250 // (ms) Retraso de repetición de botón para menús

  //#define DISABLE_ENCODER         // Desactivar el codificador de clics, si lo hay
  //#define TOUCH_IDLE_SLEEP_MINS 5 // (minutos) Dormir la pantalla después de un período de inactividad. Ajustar con M255 S.

  #define TOUCH_SCREEN_CALIBRATION

  //#define TOUCH_CALIBRATION_X 12316
  //#define TOUCH_CALIBRATION_Y -8981
  //#define TOUCH_OFFSET_X        -43
  //#define TOUCH_OFFSET_Y        257
  //#define TOUCH_ORIENTATION TOUCH_LANDSCAPE

  #if ALL(TOUCH_SCREEN_CALIBRATION, EEPROM_SETTINGS)
    #define TOUCH_CALIBRATION_AUTO_SAVE // Guardar automáticamente los valores de calibración exitosos en la EEPROM
  #endif

  #if ENABLED(TFT_COLOR_UI)
    //#define SINGLE_TOUCH_NAVIGATION
  #endif
#endif

//
// Teclado REPRAPWORLD_KEYPAD v1.1 de RepRapWorld
// https://reprapworld.com/products/electronics/ramps/keypad_v1_0_fully_assembled/
//
//#define REPRAPWORLD_KEYPAD
//#define REPRAPWORLD_KEYPAD_MOVE_STEP 10.0 // (mm) Distancia a mover por pulsación de tecla

//
// EasyThreeD ET-4000+ con entrada de botones y LED de estado
//
//#define EASYTHREED_UI

//=============================================================================
//=============================== Características Extra =======================
//=============================================================================

// @section ventiladores

// Establecer el número de ventiladores controlados por el usuario. Desactivar para usar todos los ventiladores definidos por la placa.
// :[1,2,3,4,5,6,7,8]
//#define NUM_M106_FANS 1

// Utilizar PWM por software para controlar el ventilador, al igual que se hace con los calentadores. Esto utiliza una frecuencia muy baja
// que no es tan molesta como con el PWM por hardware. Por otro lado, si esta frecuencia
// es demasiado baja, también debes incrementar SOFT_PWM_SCALE.
//#define FAN_SOFT_PWM

// Incrementar esto en 1 duplicará la frecuencia del PWM de software,
// afectando a los calentadores y al ventilador si FAN_SOFT_PWM está activado.
// Sin embargo, la resolución de control se reducirá a la mitad por cada incremento;
// con un valor de cero, hay 128 posiciones de control efectivas.
// :[0,1,2,3,4,5,6,7]
#define SOFT_PWM_SCALE 0

// Si SOFT_PWM_SCALE se establece en un valor mayor que 0, se puede
// utilizar el dithering para mitigar la pérdida de resolución asociada.
// Si está habilitado, algunos de los ciclos PWM se extienden para que, en promedio,
// se alcance el ciclo de trabajo deseado.
//#define SOFT_PWM_DITHER

// @section extras

// Soporte para el extrusor de pasta BariCUDA
//#define BARICUDA

// @section lights

// LEDs de estado de temperatura que muestran la temperatura del hotend y la cama.
// Si todos los hotends, la temperatura de la cama y la temperatura objetivo están por debajo de 54°C
// entonces el LED AZUL está encendido. De lo contrario, el LED ROJO está encendido. (histéresis de 1°C)
//#define TEMP_STAT_LEDS

// Soporte para BlinkM/CyzRgb
//#define BLINKM

// Soporte para controlador de LED PWM PCA9632
//#define PCA9632

// Soporte para controlador de LED PWM PCA9533
//#define PCA9533

/**
 * Control de LED RGB / Tira de LED
 *
 * Habilita el soporte para un LED RGB conectado a pines digitales de 5V, o
 * una tira de LED RGB conectada a MOSFET controlados por pines digitales.
 *
 * Agrega el comando M150 para establecer el color del LED (o tira de LED). 
 * Si los pines son compatibles con PWM (por ejemplo, 4, 5, 6, 11), se puede
 * establecer un rango de valores de luminancia de 0 a 255.
 * Para el LED NeoPixel, también está disponible un parámetro de brillo general.
 *
 *  === PRECAUCIÓN ===
 *  Las tiras de LED requieren un chip MOSFET entre las líneas PWM y los LED,
 *  ya que Arduino no puede manejar la corriente que los LED requerirán.
 *  ¡No seguir esta precaución puede dañar tu Arduino!
 *
 *  NOTA: ¡Se requiere una fuente de alimentación de 5V por separado! El LED NeoPixel necesita
 *  más corriente de la que el regulador lineal de 5V de Arduino puede proporcionar.
 *
 *  Requiere una frecuencia PWM entre 50 <> 100Hz (Verificar HAL o variante)
 *  Usa FAST_PWM_FAN, si es posible, para reducir el ruido del ventilador.
 */

// Tipo de LED. Habilita solo una de las dos siguientes opciones:
//#define RGB_LED
//#define RGBW_LED

#if ANY(RGB_LED, RGBW_LED)
  //#define RGB_LED_R_PIN 34
  //#define RGB_LED_G_PIN 43
  //#define RGB_LED_B_PIN 35
  //#define RGB_LED_W_PIN -1
#endif

#if ANY(RGB_LED, RGBW_LED, PCA9632)
  //#define RGB_STARTUP_TEST              // Para pines PWM, fundido entre todos los colores
  #if ENABLED(RGB_STARTUP_TEST)
    #define RGB_STARTUP_TEST_INNER_MS 10  // (ms) Reducir o aumentar la velocidad de fundido
  #endif
#endif

// Soporte para controlador de LED Adafruit NeoPixel
//#define NEOPIXEL_LED
#if ENABLED(NEOPIXEL_LED)
  #define NEOPIXEL_TYPE          NEO_GRBW // NEO_GRBW, NEO_RGBW, NEO_GRB, NEO_RBG, etc.
                                          // Ver https://github.com/adafruit/Adafruit_NeoPixel/blob/master/Adafruit_NeoPixel.h
  //#define NEOPIXEL_PIN                4 // Pin de conexión del LED
  //#define NEOPIXEL2_TYPE  NEOPIXEL_TYPE
  //#define NEOPIXEL2_PIN               5
  #define NEOPIXEL_PIXELS              30 // Número de LEDs en la tira. (Tira más larga cuando NEOPIXEL2_SEPARATE está desactivado)
  #define NEOPIXEL_IS_SEQUENTIAL          // Visualización secuencial para cambios de temperatura - LED por LED. Desactivar para cambiar todos los LEDs a la vez.
  #define NEOPIXEL_BRIGHTNESS         127 // Brillo inicial (0-255)
  //#define NEOPIXEL_STARTUP_TEST         // Ciclo de colores al inicio

  // Soporte para un segundo controlador de LED Adafruit NeoPixel controlado con M150 S1 ...
  //#define NEOPIXEL2_SEPARATE
  #if ENABLED(NEOPIXEL2_SEPARATE)
    #define NEOPIXEL2_PIXELS           15 // Número de LEDs en la segunda tira
    #define NEOPIXEL2_BRIGHTNESS      127 // Brillo inicial (0-255)
    #define NEOPIXEL2_STARTUP_TEST        // Ciclo de colores al inicio
    #define NEOPIXEL_M150_DEFAULT      -1 // Tira predeterminada para M150 sin 'S'. Usar -1 para establecer todas por defecto.
  #else
    //#define NEOPIXEL2_INSERIES          // El comportamiento predeterminado es NeoPixel 2 en paralelo
  #endif

// Utilizar algunos de los LEDs NeoPixel para iluminación estática (fondo)
//#define NEOPIXEL_BKGD_INDEX_FIRST   0 // Índice del primer LED de fondo
//#define NEOPIXEL_BKGD_INDEX_LAST    5 // Índice del último LED de fondo
//#define NEOPIXEL_BKGD_COLOR         { 255, 255, 255, 0 }  // R, G, B, W
//#define NEOPIXEL_BKGD_TIMEOUT_COLOR {  25,  25,  25, 0 }  // R, G, B, W
//#define NEOPIXEL_BKGD_ALWAYS_ON       // Mantener la retroiluminación encendida cuando los demás NeoPixels están apagados
#endif

/**
 * LEDs de eventos de la impresora
 *
 * Durante la impresión, los LEDs reflejarán el estado de la impresora:
 *
 *  - Cambiar gradualmente de azul a violeta a medida que la cama caliente alcanza la temperatura objetivo.
 *  - Cambiar gradualmente de violeta a rojo a medida que el hotend alcanza la temperatura.
 *  - Cambiar a blanco para iluminar la superficie de trabajo.
 *  - Cambiar a verde una vez que la impresión haya terminado.
 *  - Apagarse después de que la impresión haya terminado y el usuario haya presionado un botón.
 */
#if ANY(BLINKM, RGB_LED, RGBW_LED, PCA9632, PCA9533, NEOPIXEL_LED)
  #define PRINTER_EVENT_LEDS
#endif

// @section servos

/**
 * Número de servos
 *
 * Para algunas opciones relacionadas con servos, NUM_SERVOS se establecerá automáticamente.
 * Establézcalo manualmente si hay servos adicionales que requieren control manual.
 * Establezca en 0 para desactivar el soporte de servo.
 */
//#define NUM_SERVOS 3 // Nota: El índice del servo comienza con 0 para los comandos M280-M282

// (ms) Retardo antes de que comience el siguiente movimiento, para dar tiempo al servo a alcanzar su ángulo objetivo.
// 300 ms es un buen valor, pero se puede probar un retardo menor.
// Si el servo no puede alcanzar la posición solicitada, aumente este valor.
#define SERVO_DELAY { 300 }

// Solo alimentar los servos durante el movimiento, de lo contrario, dejarlo desactivado para evitar vibraciones
//#define DEACTIVATE_SERVOS_AFTER_MOVE

// Editar los ángulos de los servos con M281 y guardarlos en la EEPROM con M500
//#define EDITABLE_SERVO_ANGLES

// Desactivar el servo con M282 para reducir el consumo de energía, el ruido y el calor cuando no se esté utilizando
//#define SERVO_DETACH_GCODE
