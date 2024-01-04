/**
 * Marlin 3D Printer Firmware
 * Derechos de autor (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Basado en Sprinter y grbl.
 * Derechos de autor (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * Este programa es software libre: puede redistribuirlo y / o modificarlo
 * bajo los términos de la Licencia Pública General de GNU publicada por
 * la Fundación de Software Libre, ya sea la versión 3 de la Licencia o
 * (a su elección) cualquier versión posterior.
 *
 * Este programa se distribuye con la esperanza de que sea útil,
 * pero SIN NINGUNA GARANTÍA; sin siquiera la garantía implícita de
 * COMERCIABILIDAD o APTITUD PARA UN PROPÓSITO PARTICULAR.  Vea la
 * Licencia Pública General de GNU para más detalles.
 *
 * Debería haber recibido una copia de la Licencia Pública General de GNU
 * junto con este programa.  Si no, consulte <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Configuration_adv.h
 *
 * Configuración avanzada.
 * Solo cambie esto si sabe exactamente lo que está haciendo.
 * ¡Algunas de estas configuraciones pueden dañar su impresora si se configuran incorrectamente!
 *
 * La configuración básica se puede encontrar en Configuration.h
 */
#define CONFIGURATION_ADV_H_VERSION 02010300

// @section develop

/**
 * Exportación de configuración
 *
 * Exporta la configuración como parte de la compilación. (Ver signature.py)
 * Los archivos de salida se guardan con la compilación (por ejemplo, .pio/build/mega2560).
 *
 * Ver `build_all_examples --ini` como ejemplo de archivo de configuración config.ini.
 *
 *  1 = marlin_config.json - Diccionario que contiene la configuración.
 *      Este archivo también se genera para CONFIGURATION_EMBEDDING.
 *  2 = config.ini - Formato de archivo para el preprocesamiento de PlatformIO.
 *  3 = schema.json - El esquema completo de configuración. (13 = grupos de patrones)
 *  4 = schema.yml - El esquema completo de configuración.
 */
//#define CONFIG_EXPORT 2 // :[1:'JSON', 2:'config.ini', 3:'schema.json', 4:'schema.yml']

//===========================================================================
//============================= Configuración Térmica =======================
//===========================================================================
// @section temperature

/**
 * Los sensores de termopar son bastante sensibles al ruido. Cualquier ruido inducido en
 * los cables del sensor, como los cables del motor paso a paso que se ejecutan en paralelo a ellos,
 * puede provocar que el sensor de termopar informe errores falsos. Este
 * valor es el número de errores que pueden ocurrir en fila antes de que se informe el error.
 * Esto nos permite ignorar las condiciones de error intermitentes mientras
 * detectamos una falla real, que debería resultar en una corriente
 * continua de errores del sensor.
 *
 * Establezca este valor en 0 para fallar en el primer error que ocurra.
 */
#define THERMOCOUPLE_MAX_ERRORS 15

//
// Parámetros personalizados de Termistor 1000
//
#if TEMP_SENSOR_0 == 1000
  #define HOTEND0_PULLUP_RESISTOR_OHMS    4700 // Resistencia de pullup
  #define HOTEND0_RESISTANCE_25C_OHMS   100000 // Resistencia a 25C
  #define HOTEND0_BETA                    3950 // Valor beta
  #define HOTEND0_SH_C_COEFF                 0 // Coeficiente de Steinhart-Hart C
#endif

#if TEMP_SENSOR_1 == 1000
  #define HOTEND1_PULLUP_RESISTOR_OHMS    4700 // Resistencia de pullup
  #define HOTEND1_RESISTANCE_25C_OHMS   100000 // Resistencia a 25C
  #define HOTEND1_BETA                    3950 // Valor beta
  #define HOTEND1_SH_C_COEFF                 0 // Coeficiente de Steinhart-Hart C
#endif

#if TEMP_SENSOR_2 == 1000
  #define HOTEND2_PULLUP_RESISTOR_OHMS    4700 // Resistencia de pullup
  #define HOTEND2_RESISTANCE_25C_OHMS   100000 // Resistencia a 25C
  #define HOTEND2_BETA                    3950 // Valor beta
  #define HOTEND2_SH_C_COEFF                 0 // Coeficiente de Steinhart-Hart C
#endif

#if TEMP_SENSOR_3 == 1000
  #define HOTEND3_PULLUP_RESISTOR_OHMS    4700 // Resistencia de pullup
  #define HOTEND3_RESISTANCE_25C_OHMS   100000 // Resistencia a 25C
  #define HOTEND3_BETA                    3950 // Valor beta
  #define HOTEND3_SH_C_COEFF                 0 // Coeficiente de Steinhart-Hart C
#endif

#if TEMP_SENSOR_4 == 1000
  #define HOTEND4_PULLUP_RESISTOR_OHMS    4700 // Resistencia de pullup
  #define HOTEND4_RESISTANCE_25C_OHMS   100000 // Resistencia a 25C
  #define HOTEND4_BETA                    3950 // Valor beta
  #define HOTEND4_SH_C_COEFF                 0 // Coeficiente de Steinhart-Hart C
#endif

#if TEMP_SENSOR_5 == 1000
  #define HOTEND5_PULLUP_RESISTOR_OHMS    4700 // Resistencia de pullup
  #define HOTEND5_RESISTANCE_25C_OHMS   100000 // Resistencia a 25C
  #define HOTEND5_BETA                    3950 // Valor beta
  #define HOTEND5_SH_C_COEFF                 0 // Coeficiente de Steinhart-Hart C
#endif

#if TEMP_SENSOR_6 == 1000
  #define HOTEND6_PULLUP_RESISTOR_OHMS    4700 // Resistencia de pullup
  #define HOTEND6_RESISTANCE_25C_OHMS   100000 // Resistencia a 25C
  #define HOTEND6_BETA                    3950 // Valor beta
  #define HOTEND6_SH_C_COEFF                 0 // Coeficiente de Steinhart-Hart C
#endif

#if TEMP_SENSOR_7 == 1000
  #define HOTEND7_PULLUP_RESISTOR_OHMS    4700 // Resistencia de pullup
  #define HOTEND7_RESISTANCE_25C_OHMS   100000 // Resistencia a 25C
  #define HOTEND7_BETA                    3950 // Valor beta
  #define HOTEND7_SH_C_COEFF                 0 // Coeficiente de Steinhart-Hart C
#endif

#if TEMP_SENSOR_BED == 1000
  #define BED_PULLUP_RESISTOR_OHMS        4700 // Resistencia pull-up
  #define BED_RESISTANCE_25C_OHMS       100000 // Resistencia a 25°C
  #define BED_BETA                        3950 // Valor Beta
  #define BED_SH_C_COEFF                     0 // Coeficiente C de Steinhart-Hart
#endif

#if TEMP_SENSOR_CHAMBER == 1000
  #define CHAMBER_PULLUP_RESISTOR_OHMS    4700 // Resistencia pull-up
  #define CHAMBER_RESISTANCE_25C_OHMS   100000 // Resistencia a 25°C
  #define CHAMBER_BETA                    3950 // Valor Beta
  #define CHAMBER_SH_C_COEFF                 0 // Coeficiente C de Steinhart-Hart
#endif

#if TEMP_SENSOR_COOLER == 1000
  #define COOLER_PULLUP_RESISTOR_OHMS     4700 // Resistencia pull-up
  #define COOLER_RESISTANCE_25C_OHMS    100000 // Resistencia a 25°C
  #define COOLER_BETA                     3950 // Valor Beta
  #define COOLER_SH_C_COEFF                  0 // Coeficiente C de Steinhart-Hart
#endif

#if TEMP_SENSOR_PROBE == 1000
  #define PROBE_PULLUP_RESISTOR_OHMS      4700 // Resistencia pull-up
  #define PROBE_RESISTANCE_25C_OHMS     100000 // Resistencia a 25°C
  #define PROBE_BETA                      3950 // Valor Beta
  #define PROBE_SH_C_COEFF                   0 // Coeficiente C de Steinhart-Hart
#endif

#if TEMP_SENSOR_BOARD == 1000
  #define BOARD_PULLUP_RESISTOR_OHMS      4700 // Resistencia pull-up
  #define BOARD_RESISTANCE_25C_OHMS     100000 // Resistencia a 25°C
  #define BOARD_BETA                      3950 // Valor Beta
  #define BOARD_SH_C_COEFF                   0 // Coeficiente C de Steinhart-Hart
#endif

#if TEMP_SENSOR_REDUNDANT == 1000
  #define REDUNDANT_PULLUP_RESISTOR_OHMS  4700 // Resistencia pull-up
  #define REDUNDANT_RESISTANCE_25C_OHMS 100000 // Resistencia a 25°C
  #define REDUNDANT_BETA                  3950 // Valor Beta
  #define REDUNDANT_SH_C_COEFF               0 // Coeficiente C de Steinhart-Hart
#endif

/**
 * Opciones de termopar - para MAX6675 (-2), MAX31855 (-3) y MAX31865 (-5).
 */
//#define TEMP_SENSOR_FORCE_HW_SPI                // Ignorar los pines SCK/MOSI/MISO; utilizar CS y el bus SPI predeterminado.
//#define MAX31865_SENSOR_WIRES_0 2               // (2-4) Número de cables para la sonda conectada a una placa MAX31865.
//#define MAX31865_SENSOR_WIRES_1 2
//#define MAX31865_SENSOR_WIRES_2 2

//#define MAX31865_50HZ_FILTER                    // Utilizar un filtro de 50 Hz en lugar del valor predeterminado de 60 Hz.
//#define MAX31865_USE_READ_ERROR_DETECTION       // Tratar las fluctuaciones de valor (delta de 20°C en menos de 1 s) como errores de lectura.

//#define MAX31865_USE_AUTO_MODE                  // Leer más rápido y con más frecuencia que con una sola lectura; el voltaje de polarización siempre está encendido; tiene un ligero efecto en la temperatura del RTD.
//#define MAX31865_MIN_SAMPLING_TIME_MSEC     100 // (ms) 1 sola lectura: intervalo mínimo de lectura. Reduce los efectos del voltaje de polarización dejando el sensor sin alimentación durante intervalos más largos.
//#define MAX31865_IGNORE_INITIAL_FAULTY_READS 10 // Ignorar algunas lecturas defectuosas (manteniendo la lectura de temperatura) para solucionar un posible problema (#23439).

//#define MAX31865_WIRE_OHMS_0              0.95f // Para 2 cables, establecer las resistencias de los cables para obtener lecturas más precisas.
//#define MAX31865_WIRE_OHMS_1              0.0f
//#define MAX31865_WIRE_OHMS_2              0.0f

/**
 * Kit de mejora de la cama caliente Hephestos 2 24V.
 * https://store.bq.com/en/heated-bed-kit-hephestos2
 */
//#define HEPHESTOS2_HEATED_BED_KIT
#if ENABLED(HEPHESTOS2_HEATED_BED_KIT)
  #define HEATER_BED_INVERTING true
#endif

//
// Opciones de control de la cama caliente (Bang-Bang)
//
#if DISABLED(PIDTEMPBED)
  #define BED_CHECK_INTERVAL 5000   // (ms) Intervalo entre comprobaciones en el control Bang-Bang
  #if ENABLED(BED_LIMIT_SWITCHING)
    #define BED_HYSTERESIS 2        // (°C) Establecer el estado relevante del calentador solo cuando ABS(T-target) > BED_HYSTERESIS
  #endif
#endif

//
// Opciones de control de la cámara caliente (Bang-Bang)
//
#if DISABLED(PIDTEMPCHAMBER)
  #define CHAMBER_CHECK_INTERVAL 5000   // (ms) Intervalo entre comprobaciones en el control Bang-Bang
  #if ENABLED(CHAMBER_LIMIT_SWITCHING)
    #define CHAMBER_HYSTERESIS 2        // (°C) Establecer el estado relevante del calentador solo cuando ABS(T-target) > CHAMBER_HYSTERESIS
  #endif
#endif

#if TEMP_SENSOR_CHAMBER
  //#define HEATER_CHAMBER_PIN      P2_04   // Pin requerido para encender/apagar el calentador (ejemplo: enchufe HE1 de SKR 1.4 Turbo)
  //#define HEATER_CHAMBER_INVERTING false
  //#define FAN1_PIN                   -1   // Elimina la señal del ventilador en el pin P2_04 (ejemplo: enchufe HE1 de SKR 1.4 Turbo)

  //#define CHAMBER_FAN               // Habilitar un ventilador en la cámara
  #if ENABLED(CHAMBER_FAN)
    //#define CHAMBER_FAN_INDEX   2   // Índice de un ventilador para reutilizar como ventilador de la cámara (valor predeterminado: primer ventilador no utilizado)
    #define CHAMBER_FAN_MODE      2   // Modo de control del ventilador: 0=Estático; 1=Aumento lineal cuando la temperatura es mayor que la objetivo; 2=Curva en forma de V; 3=similar a 1 pero el ventilador siempre está encendido.
    #if CHAMBER_FAN_MODE == 0
      #define CHAMBER_FAN_BASE  255   // PWM del ventilador de la cámara (0-255)
    #elif CHAMBER_FAN_MODE == 1
      #define CHAMBER_FAN_BASE  128   // PWM base del ventilador de la cámara (0-255); se enciende cuando la temperatura de la cámara está por encima de la objetivo
      #define CHAMBER_FAN_FACTOR 25   // Aumento de PWM por cada °C por encima de la objetivo
    #elif CHAMBER_FAN_MODE == 2
      #define CHAMBER_FAN_BASE  128   // PWM mínimo del ventilador de la cámara (0-255)
      #define CHAMBER_FAN_FACTOR 25   // Aumento de PWM por cada °C de diferencia con la objetivo
    #elif CHAMBER_FAN_MODE == 3
      #define CHAMBER_FAN_BASE  128   // PWM base del ventilador de la cámara (0-255)
      #define CHAMBER_FAN_FACTOR 25   // Aumento de PWM por cada °C por encima de la objetivo
    #endif
  #endif

  //#define CHAMBER_VENT              // Habilitar una ventilación controlada por servo en la cámara
  #if ENABLED(CHAMBER_VENT)
    #define CHAMBER_VENT_SERVO_NR  1  // Índice del servo de ventilación
    #define HIGH_EXCESS_HEAT_LIMIT 5  // Cuánto por encima de la temperatura objetivo se considera que hay un exceso de calor en la cámara
    #define LOW_EXCESS_HEAT_LIMIT  3
    #define MIN_COOLING_SLOPE_TIME_CHAMBER_VENT 20
    #define MIN_COOLING_SLOPE_DEG_CHAMBER_VENT 1.5
  #endif
#endif

//
// Opciones del enfriador láser
//
#if TEMP_SENSOR_COOLER
  #define COOLER_MINTEMP           8  // (°C)
  #define COOLER_MAXTEMP          26  // (°C)
  #define COOLER_DEFAULT_TEMP     16  // (°C)
  #define TEMP_COOLER_HYSTERESIS   1  // (°C) Proximidad de temperatura considerada "suficientemente cercana" al objetivo
  #define COOLER_PIN               8  // Pin de encendido/apagado del enfriador láser utilizado para controlar la alimentación al elemento de enfriamiento (por ejemplo, TEC, enfriador externo mediante relé)
  #define COOLER_INVERTING     false
  #define TEMP_COOLER_PIN         15  // Pin del sensor de temperatura del láser/enfriador. Se requiere ADC.
  #define COOLER_FAN                  // Habilitar un ventilador en el enfriador, número de ventilador 0,1,2,3, etc.
  #define COOLER_FAN_INDEX         0  // Número del ventilador 0, 1, 2, etc.
  #if ENABLED(COOLER_FAN)
    #define COOLER_FAN_BASE      100  // PWM base del ventilador del enfriador (0-255); se enciende cuando la temperatura del enfriador está por encima de la objetivo
    #define COOLER_FAN_FACTOR     25  // Aumento de PWM por cada °C por encima de la objetivo
  #endif
#endif

//
// Opciones del sensor de la placa base
//
#if TEMP_SENSOR_BOARD
  #define THERMAL_PROTECTION_BOARD   // Detiene la impresora si el sensor de la placa sale del rango de temperatura permitido.
  #define BOARD_MINTEMP           8  // (°C)
  #define BOARD_MAXTEMP          70  // (°C)
  //#define TEMP_BOARD_PIN -1        // Anulación del pin del sensor de temperatura de la placa.
#endif

//
// Opciones del sensor SoC
//
#if TEMP_SENSOR_SOC
  #define THERMAL_PROTECTION_SOC     // Detiene la impresora si el sensor SoC sale del rango de temperatura permitido.
  #define SOC_MAXTEMP            85  // (°C)
#endif

/**
 * La Protección Térmica proporciona protección adicional a tu impresora contra daños
 * e incendios. Marlin siempre incluye rangos de temperatura seguros mínimos y máximos que
 * protegen contra un cable de termistor roto o desconectado.
 *
 * El problema: Si un termistor se cae, informará de la temperatura mucho más baja
 * del aire en la habitación, y el firmware mantendrá
 * el calentador encendido.
 *
 * La solución: Una vez que la temperatura alcanza el objetivo, comienza a observar.
 * Si la temperatura se mantiene demasiado por debajo del objetivo (histéresis) durante demasiado
 * tiempo (periodo), el firmware detendrá la máquina como medida de seguridad.
 *
 * Si obtienes falsos positivos de "Thermal Runaway", aumenta
 * THERMAL_PROTECTION_HYSTERESIS y/o THERMAL_PROTECTION_PERIOD
 */
#if ENABLED(THERMAL_PROTECTION_HOTENDS)
  #define THERMAL_PROTECTION_PERIOD 40        // Segundos
  #define THERMAL_PROTECTION_HYSTERESIS 4     // Grados Celsius

  //#define ADAPTIVE_FAN_SLOWING              // Reducir la velocidad del ventilador de enfriamiento de la pieza si la temperatura desciende
  #if ENABLED(ADAPTIVE_FAN_SLOWING)
    //#define REPORT_ADAPTIVE_FAN_SLOWING     // Informar actividad de reducción de velocidad del ventilador a la consola
    #if ANY(MPCTEMP, PIDTEMP)
      //#define TEMP_TUNING_MAINTAIN_FAN      // No reducir la velocidad del ventilador durante M303 o M306 T
    #endif
  #endif

  /**
   * Cada vez que un M104, M109 o M303 aumenta la temperatura objetivo,
   * el firmware esperará a que expire WATCH_TEMP_PERIOD. Si la temperatura
   * no ha aumentado en WATCH_TEMP_INCREASE grados, la máquina se detendrá y
   * requerirá un reinicio completo. Esta prueba se reinicia con cualquier M104/M109/M303,
   * pero solo si la temperatura actual está lo suficientemente por debajo del objetivo para
   * una prueba confiable.
   *
   * Si obtienes falsos positivos de "Fallo de calentamiento", aumenta WATCH_TEMP_PERIOD
   * y/o disminuye WATCH_TEMP_INCREASE. WATCH_TEMP_INCREASE no debe establecerse por 
   * debajo de 2.
   */
  #define WATCH_TEMP_PERIOD  40               // Segundos
  #define WATCH_TEMP_INCREASE 2               // Grados Celsius
#endif

/**
 * Parámetros de protección térmica para la cama caliente son similares a los de los hotends.
 */
#if ENABLED(THERMAL_PROTECTION_BED)
  #define THERMAL_PROTECTION_BED_PERIOD        20 // Segundos
  #define THERMAL_PROTECTION_BED_HYSTERESIS     2 // Grados Celsius

  /**
   * Como se describió anteriormente, pero para la cama caliente (M140/M190/M303).
   */
  #define WATCH_BED_TEMP_PERIOD                60 // Segundos
  #define WATCH_BED_TEMP_INCREASE               2 // Grados Celsius
#endif

/**
 * Parámetros de protección térmica para la cámara caliente.
 */
#if ENABLED(THERMAL_PROTECTION_CHAMBER)
  #define THERMAL_PROTECTION_CHAMBER_PERIOD    20 // Segundos
  #define THERMAL_PROTECTION_CHAMBER_HYSTERESIS 2 // Grados Celsius

  /**
   * Configuraciones de monitoreo de temperatura para la cámara caliente (M141/M191).
   */
  #define WATCH_CHAMBER_TEMP_PERIOD            60 // Segundos
  #define WATCH_CHAMBER_TEMP_INCREASE           2 // Grados Celsius
#endif

/**
 * Parámetros de protección térmica para el enfriador láser.
 */
#if ENABLED(THERMAL_PROTECTION_COOLER)
  #define THERMAL_PROTECTION_COOLER_PERIOD     10 // Segundos
  #define THERMAL_PROTECTION_COOLER_HYSTERESIS  3 // Grados Celsius

  /**
   * Configuraciones de monitoreo de temperatura para el enfriador láser (M143/M193).
   */
  #define WATCH_COOLER_TEMP_PERIOD             60 // Segundos
  #define WATCH_COOLER_TEMP_INCREASE            3 // Grados Celsius
#endif

#if ANY(THERMAL_PROTECTION_HOTENDS, THERMAL_PROTECTION_BED, THERMAL_PROTECTION_CHAMBER, THERMAL_PROTECTION_COOLER)
  /**
   * Monitor de Variación de Protección Térmica - EXPERIMENTAL
   * Detiene la máquina en caso de un sensor de temperatura atascado.
   *
   * Esta característica puede causar que algunos sistemas térmicamente estables se detengan.
   * Asegúrate de probarla a fondo en una variedad de condiciones. Desactívala si obtienes falsos positivos.
   *
   * Esta característica garantiza que los sensores de temperatura se actualicen regularmente. Si los sensores se bloquean
   * o dejan de ser leídos por Marlin, las temperaturas permanecerán constantes mientras los calentadores aún pueden estar encendidos.
   * Esta característica solo monitorea cambios de temperatura, por lo que debería detectar cualquier problema, ya sea de hardware o software.
   *
   * De forma predeterminada, utiliza las constantes THERMAL_PROTECTION_*_PERIOD (arriba) como ventana de tiempo, dentro de la cual
   * debe ocurrir al menos un cambio de temperatura para indicar que el sondeo del sensor está funcionando. Si la temperatura de
   * cualquier calentador monitoreado permanece completamente constante (sin cambios ni siquiera fraccionales) durante este período,
   * se produce un error de mal funcionamiento térmico y se detiene la impresora.
   *
   * Un calentador muy estable podría generar un falso positivo y detener la impresora. En este caso, intenta aumentar
   * un poco la constante correspondiente THERMAL_PROTECTION_*_PERIOD. Ten en cuenta que no se debe permitir que el calentamiento
   * descontrolado persista durante más de uno o dos minutos.
   *
   * Ten cuidado de distinguir los falsos positivos de los problemas reales del sensor antes de desactivar esta característica.
   * Si la temperatura del calentador parece estar ligeramente más alta de lo esperado después de reiniciar, es posible que tengas un
   * mal funcionamiento térmico real. Verifica el gráfico de temperatura en tu software de control para detectar cualquier anomalía.
   */
  //#define THERMAL_PROTECTION_VARIANCE_MONITOR
  #if ENABLED(THERMAL_PROTECTION_VARIANCE_MONITOR)
    // Ventana de detección de variación para anular la configuración de THERMAL_PROTECTION...PERIOD anterior.
    // Ten en cuenta que algunos calentadores se calientan más rápido que otros.
    //#define THERMAL_PROTECTION_VARIANCE_MONITOR_PERIOD 30  // (s) Anular todos los períodos de monitoreo
  #endif
#endif

#if ENABLED(PIDTEMP)
  // Agrega un término adicional a la potencia del calentador, proporcional a la velocidad de extrusión.
  // Un valor Kc bien elegido debería agregar la potencia justa para fundir el volumen de material aumentado.
  //#define PID_EXTRUSION_SCALING
  #if ENABLED(PID_EXTRUSION_SCALING)
    #define DEFAULT_Kc (100) // potencia de calentamiento = Kc * e_speed
    #define LPQ_MAX_LEN 50
  #endif

  /**
   * Agrega un término adicional a la potencia del calentador, proporcional a la velocidad del ventilador.
   * Un valor Kf bien elegido debería agregar la potencia justa para compensar la pérdida de potencia del ventilador de enfriamiento.
   * Puedes agregar una compensación constante con el valor DEFAULT_Kf
   * o seguir las instrucciones a continuación para obtener una compensación dependiente de la velocidad.
   *
   * Compensación constante (usar solo con velocidades de ventilador del 0% y 100%)
   * ---------------------------------------------------------------------
   * Un buen punto de partida para el valor Kf se calcula de la siguiente manera:
   *   kf = (power_fan * eff_fan) / power_heater * 255
   * donde eff_fan está entre 0.0 y 1.0, basado en la eficiencia del ventilador y el flujo de aire hacia la boquilla/calentador.
   *
   * Ejemplo:
   *   Calentador: 40 W, Ventilador: 0.1 A * 24 V = 2.4 W, eff_fan = 0.8
   *   Kf = (2.4 W * 0.8) / 40 W * 255 = 12.24
   *
   * Compensación dependiente de la velocidad del ventilador
   * --------------------------------
   * 1. Para encontrar un buen valor Kf, establece la temperatura del hotend, espera a que se estabilice y habilita el ventilador (100%).
   *    Asegúrate de que PID_FAN_SCALING_LIN_FACTOR sea 0 y PID_FAN_SCALING_ALTERNATIVE_DEFINITION no esté habilitado.
   *    Si ves que la temperatura baja, repite la prueba aumentando lentamente el valor de Kf, hasta que la temperatura deje de bajar.
   *    Si la temperatura sube demasiado después de habilitar el ventilador, significa que el valor de Kf es demasiado grande.
   * 2. Anota el valor de Kf para la velocidad del ventilador al 100%.
   * 3. Determina un buen valor para PID_FAN_SCALING_MIN_SPEED, que está alrededor de la velocidad a la cual el ventilador comienza a moverse.
   * 4. Repite los pasos 1 y 2 para esta velocidad del ventilador.
   * 5. Habilita PID_FAN_SCALING_ALTERNATIVE_DEFINITION e ingresa los dos valores de Kf identificados en
   *    PID_FAN_SCALING_AT_FULL_SPEED y PID_FAN_SCALING_AT_MIN_SPEED. Ingresa la velocidad mínima en PID_FAN_SCALING_MIN_SPEED
   */
  //#define PID_FAN_SCALING
  #if ENABLED(PID_FAN_SCALING)
    //#define PID_FAN_SCALING_ALTERNATIVE_DEFINITION
    #if ENABLED(PID_FAN_SCALING_ALTERNATIVE_DEFINITION)
      // Se utiliza la definición alternativa para una configuración más sencilla.
      // Solo encuentra el valor Kf a máxima velocidad (255) y PID_FAN_SCALING_MIN_SPEED.
      // DEFAULT_Kf y PID_FAN_SCALING_LIN_FACTOR se calculan en consecuencia.

      #define PID_FAN_SCALING_AT_FULL_SPEED 13.0        //=PID_FAN_SCALING_LIN_FACTOR*255+DEFAULT_Kf
      #define PID_FAN_SCALING_AT_MIN_SPEED   6.0        //=PID_FAN_SCALING_LIN_FACTOR*PID_FAN_SCALING_MIN_SPEED+DEFAULT_Kf
      #define PID_FAN_SCALING_MIN_SPEED     10.0        // Velocidad mínima del ventilador para habilitar PID_FAN_SCALING

      #define DEFAULT_Kf (255.0*PID_FAN_SCALING_AT_MIN_SPEED-PID_FAN_SCALING_AT_FULL_SPEED*PID_FAN_SCALING_MIN_SPEED)/(255.0-PID_FAN_SCALING_MIN_SPEED)
      #define PID_FAN_SCALING_LIN_FACTOR (PID_FAN_SCALING_AT_FULL_SPEED-DEFAULT_Kf)/255.0

    #else
      #define PID_FAN_SCALING_LIN_FACTOR (0)             // Pérdida de potencia debido al enfriamiento = Kf * (fan_speed)
      #define DEFAULT_Kf 10                              // Un valor constante agregado al sintonizador PID
      #define PID_FAN_SCALING_MIN_SPEED 10               // Velocidad mínima del ventilador para habilitar PID_FAN_SCALING
    #endif
  #endif
#endif

/**
 * Modo Automático de Temperatura
 *
 * Ajusta dinámicamente la temperatura objetivo del hotend en función de los movimientos de extrusión planeados.
 *
 * (A diferencia de PID_EXTRUSION_SCALING, que sigue los movimientos de E y ajusta el comportamiento del PID
 *  usando un valor adicional kC).
 *
 * Autotemp se calcula como (mintemp + factor * mm_per_sec), limitado a maxtemp.
 *
 * Habilita el Modo Autotemp con M104/M109 F<factor> S<mintemp> B<maxtemp>.
 * Deshabilita enviando M104/M109 sin el parámetro F (o F0 con AUTOTEMP_PROPORTIONAL).
 */
#define AUTOTEMP
#if ENABLED(AUTOTEMP)
  #define AUTOTEMP_OLDWEIGHT    0.98  // Factor utilizado para ponderar las lecturas anteriores (0.0 < valor < 1.0)
  #define AUTOTEMP_MIN          210
  #define AUTOTEMP_MAX          250
  #define AUTOTEMP_FACTOR       0.1f
  // Activa AUTOTEMP en M104/M109 de forma predeterminada utilizando proporciones establecidas aquí
  //#define AUTOTEMP_PROPORTIONAL
  #if ENABLED(AUTOTEMP_PROPORTIONAL)
    #define AUTOTEMP_MIN_P      0 // (°C) Se agrega a la temperatura objetivo
    #define AUTOTEMP_MAX_P      5 // (°C) Se agrega a la temperatura objetivo
    #define AUTOTEMP_FACTOR_P   1 // Aplica este valor de F de forma predeterminada (anulado por M104/M109 F)
  #endif
#endif

// Mostrar el valor ADC de la temperatura
// Habilitar para M105 e incluir los valores ADC leídos de los sensores de temperatura.
//#define SHOW_TEMP_ADC_VALUES

/**
 * Soporte para Termistores de Alta Temperatura
 *
 * Los termistores capaces de soportar altas temperaturas suelen tener dificultades para obtener 
 * lecturas precisas a temperaturas ambiente y más bajas.
 * Esto significa que TEMP_SENSOR_X_RAW_LO_TEMP probablemente se detectará cuando el elemento calefactor 
 * se encienda durante el proceso de precalentamiento,
 * lo que activará un error MINTEMP como medida de seguridad y detendrá todo.
 * Para evitar esta limitación, permitimos un tiempo de precalentamiento 
 * (durante el cual no se activará el error MINTEMP)
 * y agregamos un búfer de min_temp para manejar lecturas aberrantes.
 *
 * Si deseas habilitar esta característica para los termistores de tu hotend,
 * descomenta y establece valores > 0 en las constantes a continuación.
 */

// El número de errores consecutivos de baja temperatura que pueden ocurrir
// antes de que se active un error de temperatura mínima (MINTEMP). (No debe ser más de 10.)
//#define MAX_CONSECUTIVE_LOW_TEMPERATURE_ERROR_ALLOWED 0

/**
 * El número de milisegundos que el hotend se precalentará antes de comenzar a verificar
 * la temperatura. Este valor NO debe establecerse en el tiempo que tarda el
 * hotend en alcanzar la temperatura objetivo, sino en el tiempo que tarda en alcanzar
 * la temperatura mínima que puede leer tu termistor. Cuanto menor, mejor/más seguro.
 * Esto no debería ser más de 30 segundos (30000).
 */
//#define PREHEAT_TIME_HOTEND_MS 0
//#define PREHEAT_TIME_BED_MS 0

// @section extruder

/**
 * Prevención de agotamiento de filamento (runout).
 * Si la máquina está inactiva y la temperatura está por encima de MINTEMP,
 * entonces extruye un poco de filamento cada varios SEGUNDOS.
 */
//#define EXTRUDER_RUNOUT_PREVENT
#if ENABLED(EXTRUDER_RUNOUT_PREVENT)
  #define EXTRUDER_RUNOUT_MINTEMP 190
  #define EXTRUDER_RUNOUT_SECONDS 30
  #define EXTRUDER_RUNOUT_SPEED 1500  // (mm/min)
  #define EXTRUDER_RUNOUT_EXTRUDE 5   // (mm)
#endif

/**
 * Tiempo de espera del hotend
 * Evita que el filamento en la boquilla se queme y cause un atasco crítico.
 */
//#define HOTEND_IDLE_TIMEOUT
#if ENABLED(HOTEND_IDLE_TIMEOUT)
  #define HOTEND_IDLE_TIMEOUT_SEC (5*60)    // (segundos) Tiempo sin movimiento del extrusor para activar la protección
  #define HOTEND_IDLE_MIN_TRIGGER   180     // (°C) Temperatura mínima para habilitar la protección del hotend
  #define HOTEND_IDLE_NOZZLE_TARGET   0     // (°C) Temperatura segura para la boquilla después del tiempo de espera
  #define HOTEND_IDLE_BED_TARGET      0     // (°C) Temperatura segura para la cama después del tiempo de espera
#endif

// @section temperature

// Calibración para sensor AD595 / AD8495 para ajustar las mediciones de temperatura.
// La temperatura final se calcula como (temperatura medida * GAIN) + OFFSET.
#define TEMP_SENSOR_AD595_OFFSET  0.0
#define TEMP_SENSOR_AD595_GAIN    1.0
#define TEMP_SENSOR_AD8495_OFFSET 0.0
#define TEMP_SENSOR_AD8495_GAIN   1.0

/**
 * Ventilador del controlador
 * Para enfriar los controladores de los motores paso a paso y los MOSFET.
 *
 * El ventilador se enciende automáticamente siempre que se habilita cualquier controlador
 * y se apaga (o se reduce a la velocidad de reposo) poco después de que se apaguen los controladores.
 */
//#define USE_CONTROLLER_FAN
#if ENABLED(USE_CONTROLLER_FAN)
  //#define CONTROLLER_FAN_PIN -1           // Establecer un pin personalizado para el ventilador del controlador
  //#define CONTROLLER_FAN2_PIN -1          // Establecer un pin personalizado para el segundo ventilador del controlador
  //#define CONTROLLER_FAN_USE_Z_ONLY       // Con esta opción, solo se considera el eje Z
  //#define CONTROLLER_FAN_IGNORE_Z         // Ignorar el motor del eje Z. Útil cuando se desactiva el tiempo de espera del motor paso a paso.
  #define CONTROLLERFAN_SPEED_MIN         0 // (0-255) Velocidad mínima. (Si se establece por debajo de este valor, el ventilador se apaga).
  #define CONTROLLERFAN_SPEED_ACTIVE    255 // (0-255) Velocidad activa, utilizada cuando se habilita cualquier motor
  #define CONTROLLERFAN_SPEED_IDLE        0 // (0-255) Velocidad en reposo, utilizada cuando los motores están desactivados
  #define CONTROLLERFAN_IDLE_TIME        60 // (segundos) Tiempo adicional para mantener el ventilador funcionando después de desactivar los motores

  // Utilizar TEMP_SENSOR_BOARD como disparador para habilitar el ventilador del controlador
  //#define CONTROLLER_FAN_MIN_BOARD_TEMP 40  // (°C) Encender el ventilador si la placa alcanza esta temperatura

  // Utilizar TEMP_SENSOR_SOC como disparador para habilitar el ventilador del controlador
  //#define CONTROLLER_FAN_MIN_SOC_TEMP 40  // (°C) Encender el ventilador si el SoC alcanza esta temperatura

  //#define CONTROLLER_FAN_EDITABLE         // Habilitar la configuración configurable M710
  #if ENABLED(CONTROLLER_FAN_EDITABLE)
    #define CONTROLLER_FAN_MENU             // Habilitar el submenú del ventilador del controlador
  #endif
#endif

/**
 * Inicio rápido del ventilador (Fan Kickstart)
 * Cuando los ventiladores de enfriamiento de la pieza o del controlador comienzan a funcionar,
 * se ejecutan a una velocidad que los hace girar de manera confiable durante un corto tiempoantes de establecer la velocidad solicitada.
 * (No funciona en Sanguinololu con FAN_SOFT_PWM.)
 */
//#define FAN_KICKSTART_TIME  100  // (ms)
//#define FAN_KICKSTART_POWER 180  // 64-255

// Algunos sistemas de enfriamiento pueden requerir un estado "apagado" no nulo.
//#define FAN_OFF_PWM  1

/**
 * Escalado de PWM del ventilador
 *
 * Define las velocidades mínimas/máximas para los ventiladores PWM (establecidas con M106).
 *
 * Con estas opciones, el rango de valores 0-255 de M106 se escala a un subconjunto
 * para asegurar que el ventilador tenga suficiente potencia para girar, o para ejecutar
 * ventiladores de corriente más baja con corriente más alta. (por ejemplo, ventiladores de 5V/12V con 12V/24V)
 * El valor 0 siempre apaga el ventilador.
 *
 * Define uno o ambos de estos para anular el rango predeterminado de 0-255.
 */
//#define FAN_MIN_PWM 50
//#define FAN_MAX_PWM 128

/**
 * Fan Fast PWM
 *
 * Se utilizan combinaciones de modos PWM, valores de prescalado y resoluciones TOP de manera interna
 * para producir una frecuencia lo más cercana posible a la frecuencia deseada.
 *
 * FAST_PWM_FAN_FREQUENCY
 *   Establece aquí la frecuencia deseada.
 *   Para AVR, si se deja sin definir, el valor predeterminado es F = F_CPU/(2*255*1)
 *            es decir, F = 31.4kHz en microcontroladores de 16MHz o F = 39.2kHz en microcontroladores de 20MHz.
 *   Para no-AVR, si se deja sin definir, el valor predeterminado es F = 1kHz.
 *   Este valor de F solo sirve para proteger el hardware en caso de falta de configuración
 *   y no debe completarse cuando los usuarios no sean conscientes de que la frecuencia debe establecerse específicamente para admitir la placa objetivo.
 *
 *   NOTA: Establecer frecuencias muy bajas (< 10 Hz) puede dar lugar a un comportamiento inesperado del temporizador.
 *         Establecer frecuencias muy altas puede dañar el hardware.
 *
 * USE_OCR2A_AS_TOP [sin definir de forma predeterminada]
 *   Las placas que usan TIMER2 para PWM tienen limitaciones que resultan en solo algunas frecuencias posibles en TIMER2:
 *   MCU de 16MHz: [62.5kHz, 31.4kHz (predeterminada), 7.8kHz, 3.92kHz, 1.95kHz, 977Hz, 488Hz, 244Hz, 60Hz, 122Hz, 30Hz]
 *   MCU de 20MHz: [78.1kHz, 39.2kHz (predeterminada), 9.77kHz, 4.9kHz, 2.44kHz, 1.22kHz, 610Hz, 305Hz, 153Hz, 76Hz, 38Hz]
 *   Se puede lograr un rango mayor habilitando USE_OCR2A_AS_TOP. Pero ten en cuenta que esta opción bloquea el uso de
 *   PWM en el pin OC2A. Solo usa esta opción si no necesitas PWM en 0C2A. (Verifica tu esquemático).
 *   USE_OCR2A_AS_TOP sacrifica la resolución de control del ciclo de trabajo para lograr este rango más amplio de frecuencias.
 */
//#define FAST_PWM_FAN    // Aumenta la frecuencia PWM del ventilador. Elimina el ruido PWM pero aumenta el calentamiento en el FET/Arduino
#if ENABLED(FAST_PWM_FAN)
  //#define FAST_PWM_FAN_FREQUENCY 31400  // Define aquí para anular los valores predeterminados a continuación
  //#define USE_OCR2A_AS_TOP
  #ifndef FAST_PWM_FAN_FREQUENCY
    #ifdef __AVR__
      #define FAST_PWM_FAN_FREQUENCY ((F_CPU) / (2 * 255 * 1))
    #else
      #define FAST_PWM_FAN_FREQUENCY 1000U
    #endif
  #endif
#endif

/**
 * Asignar más ventiladores PWM para enfriamiento de la pieza, sincronizados con el Ventilador 0
 */
//#define REDUNDANT_PART_COOLING_FAN 1  // Índice del primer ventilador para sincronizar con el Ventilador 0
#ifdef REDUNDANT_PART_COOLING_FAN
  //#define NUM_REDUNDANT_FANS 1        // Número de ventiladores secuenciales para sincronizar con el Ventilador 0
#endif

// @section extruder

/**
 * Ventiladores de enfriamiento del extrusor
 *
 * Los ventiladores de enfriamiento del extrusor se encienden automáticamente cuando las temperaturas de sus extrusores
 * superan la temperatura EXTRUDER_AUTO_FAN_TEMPERATURE.
 *
 * El archivo de pines de tu placa especifica los pines recomendados. Puedes anularlos aquí
 * o establecerlos en -1 para deshabilitarlos por completo.
 *
 * Se pueden asignar varios extrusores al mismo pin, en cuyo caso
 * el ventilador se encenderá cuando cualquiera de los extrusores seleccionados supere el umbral.
 */
#define E0_AUTO_FAN_PIN -1
#define E1_AUTO_FAN_PIN -1
#define E2_AUTO_FAN_PIN -1
#define E3_AUTO_FAN_PIN -1
#define E4_AUTO_FAN_PIN -1
#define E5_AUTO_FAN_PIN -1
#define E6_AUTO_FAN_PIN -1
#define E7_AUTO_FAN_PIN -1
#define CHAMBER_AUTO_FAN_PIN -1
#define COOLER_AUTO_FAN_PIN -1

#define EXTRUDER_AUTO_FAN_TEMPERATURE 50
#define EXTRUDER_AUTO_FAN_SPEED 255   // 255 == máxima velocidad
#define CHAMBER_AUTO_FAN_TEMPERATURE 30
#define CHAMBER_AUTO_FAN_SPEED 255
#define COOLER_AUTO_FAN_TEMPERATURE 18
#define COOLER_AUTO_FAN_SPEED 255

/**
 * Ventiladores del enfriamiento del hotend con tacómetros
 *
 * Define uno o más pines de tacómetro para habilitar la monitorización de la velocidad del ventilador
 * y el informe de las velocidades del ventilador con M123.
 *
 * NOTA: Solo funciona con ventiladores de hasta 7000 RPM.
 */
//#define FOURWIRES_FANS      // Necesario con AUTO_FAN cuando se instalan ventiladores PWM de 4 cables
//#define E0_FAN_TACHO_PIN -1
//#define E0_FAN_TACHO_PULLUP
//#define E0_FAN_TACHO_PULLDOWN
//#define E1_FAN_TACHO_PIN -1
//#define E1_FAN_TACHO_PULLUP
//#define E1_FAN_TACHO_PULLDOWN
//#define E2_FAN_TACHO_PIN -1
//#define E2_FAN_TACHO_PULLUP
//#define E2_FAN_TACHO_PULLDOWN
//#define E3_FAN_TACHO_PIN -1
//#define E3_FAN_TACHO_PULLUP
//#define E3_FAN_TACHO_PULLDOWN
//#define E4_FAN_TACHO_PIN -1
//#define E4_FAN_TACHO_PULLUP
//#define E4_FAN_TACHO_PULLDOWN
//#define E5_FAN_TACHO_PIN -1
//#define E5_FAN_TACHO_PULLUP
//#define E5_FAN_TACHO_PULLDOWN
//#define E6_FAN_TACHO_PIN -1
//#define E6_FAN_TACHO_PULLUP
//#define E6_FAN_TACHO_PULLDOWN
//#define E7_FAN_TACHO_PIN -1
//#define E7_FAN_TACHO_PULLUP
//#define E7_FAN_TACHO_PULLDOWN

/**
 * Multiplexor de ventiladores de enfriamiento de la pieza
 *
 * Esta función te permite multiplicar digitalmente la salida del ventilador.
 * El multiplexor se cambia automáticamente al cambiar de herramienta.
 * Establece los pines FANMUX[012] a continuación para hasta 2, 4 o 8 ventiladores multiplexados.
 */
#define FANMUX0_PIN -1
#define FANMUX1_PIN -1
#define FANMUX2_PIN -1

/**
 * M355 Luz de la carcasa on-off / brillo
 */
//#define CASE_LIGHT_ENABLE
#if ENABLED(CASE_LIGHT_ENABLE)
  //#define CASE_LIGHT_PIN 4                  // Anula el pin predeterminado si es necesario
  #define INVERT_CASE_LIGHT false             // Establece en true si la luz de la carcasa está ENCENDIDA cuando el pin está en bajo
  #define CASE_LIGHT_DEFAULT_ON true          // Establece el estado de encendido por defecto
  #define CASE_LIGHT_DEFAULT_BRIGHTNESS 105   // Establece el brillo predeterminado al encender (0-255, requiere pin PWM)
  //#define CASE_LIGHT_NO_BRIGHTNESS          // Desactiva el control de brillo. Actívalo para iluminación sin PWM.
  //#define CASE_LIGHT_MAX_PWM 128            // Limita el ciclo de trabajo PWM (0-255)
  //#define CASE_LIGHT_MENU                   // Agrega opciones de luz de la carcasa al menú LCD
  #if ENABLED(NEOPIXEL_LED)
    //#define CASE_LIGHT_USE_NEOPIXEL         // Utiliza el LED NeoPixel como luz de la carcasa
  #endif
  #if ANY(RGB_LED, RGBW_LED)
    //#define CASE_LIGHT_USE_RGB_LED          // Utiliza LED RGB / RGBW como luz de la carcasa
  #endif
  #if ANY(CASE_LIGHT_USE_NEOPIXEL, CASE_LIGHT_USE_RGB_LED)
    #define CASE_LIGHT_DEFAULT_COLOR { 255, 255, 255, 255 } // { Rojo, Verde, Azul, Blanco }
  #endif
#endif

// @section homing

// Si deseas que los finales de carrera permanezcan activados (de forma predeterminada) incluso cuando no se realiza el homing,
// habilita esta opción. Se puede anular en cualquier momento con M120, M121.
//#define ENDSTOPS_ALWAYS_ON_DEFAULT

// @section extras

//#define Z_LATE_ENABLE // Habilita Z en el último momento. Necesario si el controlador Z se sobrecalienta.

// Utiliza un controlador de lazo cerrado externo. Anula los pines aquí si es necesario.
//#define EXTERNAL_CLOSED_LOOP_CONTROLLER
#if ENABLED(EXTERNAL_CLOSED_LOOP_CONTROLLER)
  //#define CLOSED_LOOP_ENABLE_PIN        -1
  //#define CLOSED_LOOP_MOVE_COMPLETE_PIN -1
#endif

/**
 * Doble carro X
 *
 * Esta configuración tiene dos carros X que pueden moverse de forma independiente, cada uno con su propio hotend.
 * Los carros se pueden utilizar para imprimir un objeto con dos colores o materiales, o en
 * el "modo de duplicación" se pueden imprimir simultáneamente dos objetos idénticos o con espejo en el eje X.
 * El carro inactivo se estaciona automáticamente para evitar la salida de material.
 * X1 es el carro izquierdo, X2 el derecho. Se estacionan y hacen homing en los extremos opuestos del eje X.
 * De forma predeterminada, el motor paso a paso X2 se asigna al primer enchufe E sin usar en la placa.
 *
 * Los siguientes modos de Doble Carro X se pueden seleccionar con M605 S<modo>:
 *
 *   0 : (FULL_CONTROL) El software de laminación tiene control total sobre ambos carros X y puede lograr resultados de desplazamiento óptimos
 *       siempre y cuando admita carros X duales. (M605 S0)
 *
 *   1 : (AUTO_PARK) El firmware estaciona y desestaciona automáticamente los carros X al cambiar de herramienta para que
 *       no se requiera soporte adicional del software de laminación. (M605 S1)
 *
 *   2 : (DUPLICATION) El firmware mueve el segundo carro X y el hotend en sincronización con el primer carro X y el hotend
 *       para imprimir 2 copias del mismo objeto al mismo tiempo.
 *       Establece el desplazamiento X constante y la diferencia de temperatura con M605 S2 X[offs] R[deg] y
 *       sigue con M605 S2 para iniciar el movimiento duplicado.
 *
 *   3 : (MIRRORED) Modo inspirado en Formbot/Vivedino en el que el segundo hotend duplica el movimiento del primero, excepto que
 *       el segundo hotend está invertido en el eje X.
 *       Establece el desplazamiento X inicial y la diferencia de temperatura con M605 S2 X[offs] R[deg] y
 *       sigue con M605 S3 para iniciar el movimiento con espejo.
 */
//#define DUAL_X_CARRIAGE
#if ENABLED(DUAL_X_CARRIAGE)
  #define X1_MIN_POS X_MIN_POS    // Establecer como X_MIN_POS
  #define X1_MAX_POS X_BED_SIZE   // Una coordenada máxima para que el carro X1 no pueda golpear el carro X2 estacionado
  #define X2_MIN_POS    80        // Una coordenada mínima para que el carro X2 no pueda golpear el carro X1 estacionado
  #define X2_MAX_POS   353        // La posición máxima del carro X2, típicamente también la posición de homing
  #define X2_HOME_POS X2_MAX_POS  // Posición de homing predeterminada de X2. Establecer en X2_MAX_POS.
                                  // NOTA: Para Doble Carro X, utiliza M218 T1 Xn para anular X2_HOME_POS.
                                  // Esto permite recalibrar la distancia de los finales de carrera sin necesidad de reconstruirlo.
                                  // Recuerda establecer el desplazamiento X de la segunda extrusora en 0 en tu software de laminación.

  // Este es el modo predeterminado al encender la impresora que se puede cambiar más tarde utilizando M605 S<modo>.
  #define DEFAULT_DUAL_X_CARRIAGE_MODE DXC_AUTO_PARK_MODE

  // Desplazamiento X predeterminado en el modo de duplicación (normalmente se establece en la mitad del ancho de la cama de impresión)
  #define DEFAULT_DUPLICATION_X_OFFSET 100

  // Acción predeterminada a ejecutar después de los comandos de cambio de modo de M605. Normalmente G28X para aplicar el nuevo modo.
  //#define EVENT_GCODE_IDEX_AFTER_MODECHANGE "G28X"
#endif

/**
 * Multi-Stepper / Multi-Endstop
 *
 * Cuando se define X2_DRIVER_TYPE, esto indica que los motores X y X2 funcionan en conjunto.
 * Las siguientes explicaciones para X también se aplican a configuraciones de múltiples motores paso a paso para Y y Z.
 * Los desplazamientos de los endstops se pueden cambiar con 'M666 X<offset> Y<offset> Z<offset>' y almacenarlos en la EEPROM.
 *
 * - Habilita INVERT_X2_VS_X_DIR si el motor X2 requiere una señal DIR opuesta a X.
 *
 * - Habilita X_DUAL_ENDSTOPS si el segundo motor tiene su propio endstop, con un ajuste ajustable.
 *
 *   - Se incluyen endstops adicionales en la salida de 'M119'.
 *
 *   - Establece X_DUAL_ENDSTOP_ADJUSTMENT como el error conocido en el endstop de X2.
 *     Se aplica al motor X2 en 'G28' / 'G28 X'.
 *     Obtén el desplazamiento haciendo home a X y midiendo el error.
 *     También se puede establecer con 'M666 X<offset>' y almacenar en la EEPROM con 'M500'.
 *
 *   - Define aquí los pines de endstop adicionales para anular los valores predeterminados. No se realiza una asignación automática.
 */
#if HAS_X2_STEPPER && DISABLED(DUAL_X_CARRIAGE)
  //#define INVERT_X2_VS_X_DIR        // La señal de dirección X2 es opuesta a X
  //#define X_DUAL_ENDSTOPS           // X2 tiene su propio endstop
  #if ENABLED(X_DUAL_ENDSTOPS)
    //#define X2_STOP_PIN X_MAX_PIN   // Sobreescritura del pin de endstop X2
    #define X2_ENDSTOP_ADJUSTMENT  0  // Desplazamiento de X2 en relación con el endstop de X
  #endif
#endif

#if HAS_Y2_STEPPER
  //#define INVERT_Y2_VS_Y_DIR        // La señal de dirección Y2 es opuesta a Y
  //#define Y_DUAL_ENDSTOPS           // Y2 tiene su propio endstop
  #if ENABLED(Y_DUAL_ENDSTOPS)
    //#define Y2_STOP_PIN Y_MAX_PIN   // Sobreescritura del pin de endstop Y2
    #define Y2_ENDSTOP_ADJUSTMENT  0  // Desplazamiento de Y2 en relación con el endstop de Y
  #endif
#endif

//
// Múltiples ejes Z
//
#ifdef Z2_DRIVER_TYPE
  //#define INVERT_Z2_VS_Z_DIR        // La señal de dirección Z2 es opuesta a Z

  //#define Z_MULTI_ENDSTOPS          // Otros ejes Z tienen sus propios endstops
  #if ENABLED(Z_MULTI_ENDSTOPS)
    //#define Z2_STOP_PIN X_MAX_PIN   // Sobreescritura del pin de endstop Z2
    #define Z2_ENDSTOP_ADJUSTMENT 0   // Desplazamiento de Z2 en relación con el endstop de Z
  #endif
  #ifdef Z3_DRIVER_TYPE
    //#define INVERT_Z3_VS_Z_DIR      // La señal de dirección Z3 es opuesta a Z
    #if ENABLED(Z_MULTI_ENDSTOPS)
      //#define Z3_STOP_PIN Y_MAX_PIN // Sobreescritura del pin de endstop Z3
      #define Z3_ENDSTOP_ADJUSTMENT 0 // Desplazamiento de Z3 en relación con el endstop de Z
    #endif
  #endif
  #ifdef Z4_DRIVER_TYPE
    //#define INVERT_Z4_VS_Z_DIR      // La señal de dirección Z4 es opuesta a Z
    #if ENABLED(Z_MULTI_ENDSTOPS)
      //#define Z4_STOP_PIN Z_MAX_PIN // Sobreescritura del pin de endstop Z4
      #define Z4_ENDSTOP_ADJUSTMENT 0 // Desplazamiento de Z4 en relación con el endstop de Z
    #endif
  #endif
#endif

// Controla el eje E con dos motores paso a paso sincronizados
//#define E_DUAL_STEPPER_DRIVERS
#if ENABLED(E_DUAL_STEPPER_DRIVERS)
  //#define INVERT_E1_VS_E0_DIR       // Las señales de dirección de E son opuestas
#endif

// Activa un solenoide en el extrusor activo con M380. Desactiva todos con M381.
// Define SOL0_PIN, SOL1_PIN, etc., para cada extrusor que tenga un solenoide.
//#define EXT_SOLENOID

// @section homing

/**
 * Procedimiento de Homing
 * El Homing (G28) realiza un movimiento indefinido hacia los endstops para establecer
 * la posición de la herramienta en relación con el área de trabajo.
 */

//#define SENSORLESS_BACKOFF_MM  { 2, 2, 0 }  // (lineal=mm, rotacional=°) Retroceso desde los endstops antes de la búsqueda de endstops sin sensor

#define HOMING_BUMP_MM      { 5, 5, 2 }       // (lineal=mm, rotacional=°) Retroceso desde los endstops después del primer toque
#define HOMING_BUMP_DIVISOR { 2, 2, 4 }       // Divisor de velocidad de retoque (divide la velocidad de búsqueda de endstops)

//#define HOMING_BACKOFF_POST_MM { 2, 2, 2 }  // (lineal=mm, rotacional=°) Retroceso desde los endstops después del homing
//#define XY_COUNTERPART_BACKOFF_MM 0         // (mm) Retroceso de X después de homing de Y, y viceversa

//#define QUICK_HOME                          // Si G28 contiene XY, realiza un movimiento diagonal primero
//#define HOME_Y_BEFORE_X                     // Si G28 contiene XY, realiza el homing de Y antes de X
//#define HOME_Z_FIRST                        // Realiza el homing de Z primero. Requiere un endstop real (no una sonda).
//#define CODEPENDENT_XY_HOMING               // Si X/Y no pueden hacer homing sin hacer homing de Y/X primero

// @section bltouch

#if ENABLED(BLTOUCH)
  /**
   * Either: Use the defaults (recommended) or: For special purposes, use the following DEFINES
   * Do not activate settings that the probe might not understand. Clones might misunderstand
   * advanced commands.
   *
   * Note: If the probe is not deploying, do a "Reset" and "Self-Test" and then check the
   *       wiring of the BROWN, RED and ORANGE wires.
   *
   * Note: If the trigger signal of your probe is not being recognized, it has been very often
   *       because the BLACK and WHITE wires needed to be swapped. They are not "interchangeable"
   *       like they would be with a real switch. So please check the wiring first.
   *
   * Settings for all BLTouch and clone probes:
   */

  // Safety: The probe needs time to recognize the command.
  //         Minimum command delay (ms). Enable and increase if needed.
  //#define BLTOUCH_DELAY 500

  /**
   * Configuración para BLTouch Classic 1.2, 1.3 o BLTouch Smart 1.0, 2.0, 2.2, 3.0, 3.1 y la mayoría de los clones:
   */

  // Función: Cambia al modo SW después de desplegarse. Hace que el pulso de salida sea más largo. Puede ser útil
  // en casos especiales, como configuraciones de entrada ruidosas o filtradas.
  //#define BLTOUCH_FORCE_SW_MODE

  /**
   * Configuración para BLTouch Smart 3.0 y 3.1
   * Resumen:
   *   - Modos de voltaje: 5V y OD (drenaje abierto - "lógica libre de voltaje") modos de salida
   *   - Modo de alta velocidad
   *   - Opciones para desactivar el voltaje en el LCD
   */

  /**
   * Peligro: ¡No actives el modo de 5V a menos que esté conectado a un controlador compatible con 5V!
   * V3.0 o 3.1: Establece el modo predeterminado en 5V al iniciar Marlin.
   * Si está desactivado, el modo OD es el predeterminado codificado en 3.0
   * Al iniciar, Marlin comparará su EEPROM con este valor. Si el modo seleccionado
   * es diferente, se realizará una escritura de EEPROM del modo en la inicialización.
   * Utiliza la opción a continuación para forzar una escritura de EEPROM en una sonda V3.1, independientemente.
   */
  //#define BLTOUCH_SET_5V_MODE

  // Seguridad: Habilitar la configuración de modo de voltaje en el menú LCD.
  //#define BLTOUCH_LCD_VOLTAGE_MENU

  /**
   * Seguridad: Activa esto si se conecta una sonda con un modo de voltaje desconocido.
   * V3.0: Establece una sonda en el modo seleccionado anteriormente al iniciar Marlin. Requerido para el modo 5V en 3.0
   * V3.1: Forzar que una sonda con modo desconocido se ajuste al modo seleccionado al iniciar Marlin ( = escritura de EEPROM de la sonda)
   * Para preservar la vida útil de la sonda, utiliza esto una vez, luego desactívalo y vuelve a cargar el firmware.
   */
  //#define BLTOUCH_FORCE_MODE_SET

  /**
   * Habilitar la opción "HIGH SPEED" para la sonda.
   * Peligro: Desactivar si la sonda falla a veces. Solo apto para sistemas estables y bien ajustados.
   * Esta función fue diseñada para Deltabots con movimientos Z muy rápidos; sin embargo, cartesianas de alta velocidad
   * también podrían utilizarlo. Si la máquina no puede elevar Z lo suficientemente rápido, el BLTouch puede entrar en estado de ALARMA.
   *
   * Establece el estado predeterminado aquí, cámbialo con 'M401 S' o a través de la interfaz, usa M500 para guardar y M502 para restablecer.
   */
  //#define BLTOUCH_HS_MODE true

  #ifdef BLTOUCH_HS_MODE
    // El desplazamiento Z del probe (M851 Z) es la altura en la que se activa la sonda.
    // Esto debe ser lo suficientemente grande como para mantener el pin del probe fuera de la cama y evitar
    // que se enganche en las abrazaderas de la cama.
    #define BLTOUCH_HS_EXTRA_CLEARANCE    7 // Espacio extra de Z
  #endif

#endif // BLTOUCH

// @section calibration

/**
 * Autoalineación de los motores paso a paso Z
 * Agrega el comando G34 para alinear automáticamente los motores paso a paso Z utilizando una sonda de cama.
 */
//#define Z_STEPPER_AUTO_ALIGN
#if ENABLED(Z_STEPPER_AUTO_ALIGN)
  /**
   * Define las posiciones X e Y de la sonda para Z1, Z2 [, Z3 [, Z4]]
   * Estas posiciones son relativas a la máquina y no se desplazan con el desplazamiento de inicio M206.
   * Si no se define, se utilizarán los límites de la sonda.
   * Se puede anular con 'M422 S<índice> X<pos> Y<pos>'.
   */
  //#define Z_STEPPER_ALIGN_XY { {  10, 190 }, { 100,  10 }, { 190, 190 } }

  /**
   * Orientación para las posiciones de sonda calculadas automáticamente.
   * Se pueden anular los puntos de alineación del motor Z con 'M422 S<índice> X<pos> Y<pos>'
   *
   * 2 Motores paso a paso:  (0)     (1)
   *                           |       |   2   |
   *                           | 1   2 |       |
   *                           |       |   1   |
   *
   * 3 Motores paso a paso:  (0)     (1)     (2)     (3)
   *                           |   3   | 1     | 2   1 |     2 |
   *                           |       |     3 |       | 3     |
   *                           | 1   2 | 2     |   3   |     1 |
   *
   * 4 Motores paso a paso:  (0)     (1)     (2)     (3)
   *                           | 4   3 | 1   4 | 2   1 | 3   2 |
   *                           |       |       |       |       |
   *                           | 1   2 | 2   3 | 3   4 | 4   1 |
   */
  #ifndef Z_STEPPER_ALIGN_XY
    //#define Z_STEPPERS_ORIENTATION 0
  #endif

  /**
   * Posiciones de los motores paso a paso Z para una convergencia más rápida en la alineación de la cama.
   * Requiere 3 o 4 motores paso a paso Z.
   *
   * Define las posiciones XY de los motores paso a paso Z1, Z2, Z3... correspondientes a las posiciones de los tornillos
   * en el carro de la cama, con una posición por motor paso a paso Z en orden del controlador del motor 
   * paso a paso.
   */
  //#define Z_STEPPER_ALIGN_STEPPER_XY { { 210.7, 102.5 }, { 152.6, 220.0 }, { 94.5, 102.5 } }

  #ifndef Z_STEPPER_ALIGN_STEPPER_XY
    // Factor de amplificación. Se utiliza para amplificar o reducir el paso de corrección en caso
    // de que la posición del motor paso a paso (husillo) esté más lejos que el punto de prueba.
    #define Z_STEPPER_ALIGN_AMP 1.0       // Utilizar un valor > 1.0 NOTA: Esto puede causar inestabilidad.
  #endif

  // En una cama de 300 mm, una inclinación del 5% daría una desalineación de ~1.5 cm
  #define G34_MAX_GRADE              5    // (%) Inclinación máxima que manejará G34
  #define Z_STEPPER_ALIGN_ITERATIONS 5    // Número de iteraciones a aplicar durante la alineación
  #define Z_STEPPER_ALIGN_ACC        0.02 // Detener la iteración temprano si la precisión es mejor que esto
  #define RESTORE_LEVELING_AFTER_G34      // ¿Restaurar la configuración de nivelación después de que se complete G34?
  // Después de G34, ¿restablecer Z (G28 Z) o simplemente calcularlo a partir de las alturas de la última sonda?
  // Volver a establecer el origen puede ser más preciso para reproducir la altura real de inicio 'G28 Z', especialmente en una cama irregular.
  #define HOME_AFTER_G34
#endif

//
// Agrega el comando G35 para leer las esquinas de la cama y ayudar a ajustar los tornillos. Requiere una sonda de cama.
//
//#define ASSISTED_TRAMMING
#if ENABLED(ASSISTED_TRAMMING)

  // Define de 3 a 9 puntos para sondar.
  #define TRAMMING_POINT_XY { {  20, 20 }, { 180,  20 }, { 180, 180 }, { 20, 180 } }

  // Define nombres de posición para los puntos de sonda.
  #define TRAMMING_POINT_NAME_1 "Front-Left"   // Izquierda-Frontal
  #define TRAMMING_POINT_NAME_2 "Front-Right"  // Derecha-Frontal
  #define TRAMMING_POINT_NAME_3 "Back-Right"   // Derecha-Trasera
  #define TRAMMING_POINT_NAME_4 "Back-Left"    // Izquierda-Trasera

  #define RESTORE_LEVELING_AFTER_G35    // Habilitar para restaurar la configuración de nivelación después de la operación
  //#define REPORT_TRAMMING_MM          // Informar la desviación de Z (mm) para cada punto en relación al primero

  //#define ASSISTED_TRAMMING_WIZARD    // Agregar un asistente de alineación a los menús LCD

  //#define ASSISTED_TRAMMING_WAIT_POSITION { X_CENTER, Y_CENTER, 30 } // Mueve la boquilla fuera del camino para el ajuste

  /**
   * Rosca del tornillo:
   *   M3: 30 = En el sentido de las agujas del reloj, 31 = En sentido contrario a las agujas del reloj
   *   M4: 40 = En el sentido de las agujas del reloj, 41 = En sentido contrario a las agujas del reloj
   *   M5: 50 = En el sentido de las agujas del reloj, 51 = En sentido contrario a las agujas del reloj
   */
  #define TRAMMING_SCREW_THREAD 30

#endif

// @section motion control

/**
 * Control de movimiento basado en tiempo fijo -- EXPERIMENTAL
 * Habilitar/deshabilitar y establecer parámetros con el código G M493.
 */
//#define FT_MOTION
#if ENABLED(FT_MOTION)
  #define FTM_DEFAULT_MODE        ftMotionMode_DISABLED // Modo predeterminado de control de tiempo fijo. (Enums en ft_types.h)
  #define FTM_DEFAULT_DYNFREQ_MODE dynFreqMode_DISABLED // Modo predeterminado de cálculo de frecuencia dinámica. (Enums en ft_types.h)
  #define FTM_SHAPING_DEFAULT_X_FREQ 37.0f              // (Hz) Frecuencia pico predeterminada utilizada por los modeladores de entrada.
  #define FTM_SHAPING_DEFAULT_Y_FREQ 37.0f              // (Hz) Frecuencia pico predeterminada utilizada por los modeladores de entrada.
  #define FTM_LINEAR_ADV_DEFAULT_ENA false              // Habilitar (true) o deshabilitar (false) avance lineal predeterminado.
  #define FTM_LINEAR_ADV_DEFAULT_K    0.0f              // Ganancia de avance lineal predeterminada.
  #define FTM_SHAPING_ZETA            0.1f              // Zeta utilizado por los modeladores de entrada.
  #define FTM_SHAPING_V_TOL           0.05f             // Tolerancia de vibración utilizada por los modeladores de entrada EI.

  /**
   * Configuración avanzada
   */
  #define FTM_BATCH_SIZE            100                 // Tamaño del lote para la generación de trayectorias;
                                                        // la mitad del tamaño de ventana para Ulendo FBS.
  #define FTM_FS                   1000                 // (Hz) Frecuencia para la generación de trayectorias. (1 / FTM_TS)
  #define FTM_TS                      0.001f            // (s) Paso de tiempo para la generación de trayectorias. (1 / FTM_FS)
  #define FTM_STEPPER_FS          20000                 // (Hz) Frecuencia para la actualización de E/S del motor paso a paso.
  #define FTM_MIN_TICKS ((STEPPER_TIMER_RATE) / (FTM_STEPPER_FS)) // Ticks mínimos del motor paso a paso entre pasos.
  #define FTM_MIN_SHAPE_FREQ         10                 // Frecuencia mínima de modelado.
  #define FTM_ZMAX                  100                 // Retardos máximos para funciones de modelado (¡solo números pares!).
                                                        // Calcular como:
                                                        //    1/2 * (FTM_FS / FTM_MIN_SHAPE_FREQ) para ZV.
                                                        //    (FTM_FS / FTM_MIN_SHAPE_FREQ) para ZVD, MZV.
                                                        //    3/2 * (FTM_FS / FTM_MIN_SHAPE_FREQ) para 2HEI.
                                                        //    2 * (FTM_FS / FTM_MIN_SHAPE_FREQ) para 3HEI.
  #define FTM_STEPS_PER_UNIT_TIME    20                 // Comandos interpolados del motor paso a paso por unidad de tiempo.
                                                        // Calcular como (FTM_STEPPER_FS / FTM_FS).
  #define FTM_CTS_COMPARE_VAL        10                 // Valor de comparación utilizado en el algoritmo de interpolación.
                                                        // Calcular como (FTM_STEPS_PER_UNIT_TIME / 2).
  // Estos valores se pueden configurar para ajustar la duración de loop().
  #define FTM_STEPS_PER_LOOP         60                 // Número de comandos del motor paso a paso que se generan en cada loop().
  #define FTM_POINTS_PER_LOOP       100                 // Número de puntos de trayectoria que se generan en cada loop().

  // Este valor se puede configurar para ajustar la duración de consumo del búfer de comandos.
  // Si el movimiento del motor paso a paso no es fluido, intente aumentar este valor.
  #define FTM_STEPPERCMD_BUFF_SIZE 1000                 // Tamaño de los búferes de comandos del motor paso a paso.

  //#define FT_MOTION_MENU                              // Proporcionar un menú MarlinUI para establecer los parámetros de M493.
#endif

/**
 * Modelado de entrada -- EXPERIMENTAL
 *
 * Modelado de entrada de vibración cero (ZV) para movimientos en X y/o Y.
 *
 * Esta opción utiliza mucha SRAM para el búfer de pasos. El tamaño del búfer se calcula
 * automáticamente a partir de SHAPING_FREQ_[XY], DEFAULT_AXIS_STEPS_PER_UNIT,
 * DEFAULT_MAX_FEEDRATE y ADAPTIVE_STEP_SMOOTHING. El cálculo predeterminado se puede
 * anular configurando SHAPING_MIN_FREQ y/o SHAPING_MAX_FEEDRATE.
 * Cuanto mayor sea la frecuencia y menor la velocidad de avance, más pequeño será el búfer.
 * Si el búfer es demasiado pequeño en tiempo de ejecución, el modelado de entrada tendrá
 * una efectividad reducida durante los movimientos a alta velocidad.
 *
 * Ajuste con M593 D<factor> F<frecuencia>:
 *
 *  D<factor>    Establece el factor de amortiguamiento zeta. Si no se especifican los ejes (X, Y, etc.), se establece para todos los ejes.
 *  F<frecuencia> Establece la frecuencia. Si no se especifican los ejes (X, Y, etc.), se establece para todos los ejes.
 *  T[map]       Tipo de modelado de entrada, 0:ZV, 1:EI, 2:2H EI (aún no implementado)
 *  X<1>         Establece los parámetros dados solo para el eje X.
 *  Y<1>         Establece los parámetros dados solo para el eje Y.
 */
//#define INPUT_SHAPING_X
//#define INPUT_SHAPING_Y
#if ANY(INPUT_SHAPING_X, INPUT_SHAPING_Y)
  #if ENABLED(INPUT_SHAPING_X)
    #define SHAPING_FREQ_X  40          // (Hz) Frecuencia de resonancia dominante predeterminada en el eje X.
    #define SHAPING_ZETA_X  0.15f       // Factor de amortiguamiento del eje X (rango: 0.0 = sin amortiguamiento a 1.0 = amortiguamiento crítico).
  #endif
  #if ENABLED(INPUT_SHAPING_Y)
    #define SHAPING_FREQ_Y  40          // (Hz) Frecuencia de resonancia dominante predeterminada en el eje Y.
    #define SHAPING_ZETA_Y  0.15f       // Factor de amortiguamiento del eje Y (rango: 0.0 = sin amortiguamiento a 1.0 = amortiguamiento crítico).
  #endif
  //#define SHAPING_MIN_FREQ  20        // Frecuencia mínima de modelado por defecto. Anular para afectar el uso de SRAM.
  //#define SHAPING_MAX_STEPRATE 10000  // Tasa máxima total de pasos de los ejes modelados por defecto. Anular para afectar el uso de SRAM.
  //#define SHAPING_MENU                // Agregar un menú a la LCD para establecer los parámetros de modelado.
#endif

// @section motion

#define AXIS_RELATIVE_MODES { false, false, false, false }

// Agregar una opción Duplicar para boquillas juntas pero bien separadas
//#define MULTI_NOZZLE_DUPLICATION

// Por defecto, los controladores de motores paso a paso requieren una señal activa-ALTA, pero algunos controladores de alta potencia requieren una señal activa-BAJA para dar un paso.
#define STEP_STATE_X HIGH
#define STEP_STATE_Y HIGH
#define STEP_STATE_Z HIGH
#define STEP_STATE_I HIGH
#define STEP_STATE_J HIGH
#define STEP_STATE_K HIGH
#define STEP_STATE_U HIGH
#define STEP_STATE_V HIGH
#define STEP_STATE_W HIGH
#define STEP_STATE_E HIGH

/**
 * Apagado del motor paso a paso en reposo
 * Habilitar DISABLE_IDLE_* para apagar los motores de los ejes después de un período de inactividad.
 * La duración de tiempo predeterminada se puede anular con M18 y M84. Establecer en 0 para no tener tiempo de espera.
 */
#define DEFAULT_STEPPER_TIMEOUT_SEC 120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z    // ¡Desactivar si la boquilla podría caer sobre la pieza impresa!
//#define DISABLE_IDLE_I
//#define DISABLE_IDLE_J
//#define DISABLE_IDLE_K
//#define DISABLE_IDLE_U
//#define DISABLE_IDLE_V
//#define DISABLE_IDLE_W
#define DISABLE_IDLE_E    // Apagar todos los extrusores inactivos

// Velocidades de alimentación mínimas predeterminadas para movimientos de impresión y de desplazamiento
#define DEFAULT_MINIMUMFEEDRATE       0.0     // (mm/s. °/s para movimientos solo de rotación) Velocidad de alimentación mínima. Establecer con M205 S.
#define DEFAULT_MINTRAVELFEEDRATE     0.0     // (mm/s. °/s para movimientos solo de rotación) Velocidad de alimentación mínima de desplazamiento. Establecer con M205 T.

// Tiempo mínimo que un segmento necesita tomar a medida que el búfer se vacía
#define DEFAULT_MINSEGMENTTIME        20000   // (µs) Establecer con M205 B.

// Reducir la velocidad de la máquina si el búfer de anticipación está medio lleno (por defecto).
// Aumentar el divisor de reducción de velocidad para tamaños de búfer más grandes.
#define SLOWDOWN
#if ENABLED(SLOWDOWN)
  #define SLOWDOWN_DIVISOR 2
#endif

/**
 * Límite de frecuencia XY
 * Reducir la resonancia limitando la frecuencia de movimientos de relleno zigzag pequeños.
 * Ver https://hydraraptor.blogspot.com/2010/12/frequency-limit.html
 * Usar M201 F<frecuencia> G<min%> para cambiar los límites en tiempo de ejecución.
 */
//#define XY_FREQUENCY_LIMIT      10 // (Hz) Frecuencia máxima de movimientos de relleno zigzag pequeños. Establecer con M201 F<hertz>.
#ifdef XY_FREQUENCY_LIMIT
  #define XY_FREQUENCY_MIN_PERCENT 5 // (porcentaje) Porcentaje mínimo de FR para aplicar. Establecer con M201 G<min%>.
#endif

//
// Compensación de juego mecánico (backlash)
// Agrega movimiento adicional a los ejes en cambios de dirección para compensar el juego mecánico.
//
//#define BACKLASH_COMPENSATION
#if ENABLED(BACKLASH_COMPENSATION)
  // Definir valores para la distancia de juego mecánico y la corrección.
  // Si BACKLASH_GCODE está habilitado, estos valores son los predeterminados.
  #define BACKLASH_DISTANCE_MM { 0, 0, 0 } // (lineal=mm, rotacional=°) Un valor para cada eje lineal
  #define BACKLASH_CORRECTION    0.0       // 0.0 = sin corrección; 1.0 = corrección completa

  // Agregar pasos para cambios de dirección del motor en la cinemática CORE
  //#define CORE_BACKLASH

  // Establecer BACKLASH_SMOOTHING_MM para distribuir la corrección del juego mecánico en varios segmentos
  // para reducir los artefactos de impresión. (¡Habilitar esto tiene un costo en memoria y cálculo!)
  //#define BACKLASH_SMOOTHING_MM 3 // (mm)

  // Agregar configuración y ajuste en tiempo de ejecución de los valores de juego mecánico (M425)
  //#define BACKLASH_GCODE

  #if ENABLED(BACKLASH_GCODE)
    // Medir el juego mecánico en Z al sondear (G29) y establecerlo con "M425 Z"
    #define MEASURE_BACKLASH_WHEN_PROBING

    #if ENABLED(MEASURE_BACKLASH_WHEN_PROBING)
      // Al medir, la sonda se moverá hasta BACKLASH_MEASUREMENT_LIMIT
      // mm lejos del punto de contacto en BACKLASH_MEASUREMENT_RESOLUTION
      // incrementos mientras se verifica que se rompa el contacto.
      #define BACKLASH_MEASUREMENT_LIMIT       0.5   // (mm)
      #define BACKLASH_MEASUREMENT_RESOLUTION  0.005 // (mm)
      #define BACKLASH_MEASUREMENT_FEEDRATE    Z_PROBE_FEEDRATE_SLOW // (mm/min)
    #endif
  #endif
#endif

/**
 * Calibración automática de backlash, posición y compensación del hotend
 *
 * Habilita G425 para ejecutar la calibración automática utilizando un cubo, 
 * perno o arandela eléctricamente conductivos montados en la cama.
 *
 * G425 utiliza la sonda para tocar la parte superior y los lados del objeto de 
 * calibración en la cama y mide y/o corrige los desplazamientos de posición, 
 * backlash de los ejes y compensación del hotend.
 *
 * Nota: HOTEND_OFFSET y CALIBRATION_OBJECT_CENTER deben establecerse dentro 
 * de ±5 mm de los valores reales para que G425 tenga éxito.
 */
//#define CALIBRATION_GCODE
#if ENABLED(CALIBRATION_GCODE)

  //#define CALIBRATION_SCRIPT_PRE  "M117 Iniciando Autocalibración\nT0\nG28\nG12\nM117 Calibrando..."
  //#define CALIBRATION_SCRIPT_POST "M500\nM117 Datos de calibración guardados"

  #define CALIBRATION_MEASUREMENT_RESOLUTION     0.01 // mm

  #define CALIBRATION_FEEDRATE_SLOW             60    // mm/min
  #define CALIBRATION_FEEDRATE_FAST           1200    // mm/min
  #define CALIBRATION_FEEDRATE_TRAVEL         3000    // mm/min

  // Los siguientes parámetros se refieren a la sección cónica de la punta de la boquilla.
  #define CALIBRATION_NOZZLE_TIP_HEIGHT          1.0  // mm
  #define CALIBRATION_NOZZLE_OUTER_DIAMETER      2.0  // mm

  // Descomenta para habilitar la generación de informes (requerido para "G425 V", pero consume memoria PROGMEM).
  //#define CALIBRATION_REPORTING

  // La ubicación y dimensiones reales del cubo/perno/arandela en la cama.
  #define CALIBRATION_OBJECT_CENTER     { 264.0, -22.0,  -2.0 } // mm
  #define CALIBRATION_OBJECT_DIMENSIONS {  10.0,  10.0,  10.0 } // mm

  // Comenta cualquier lado al que la sonda no pueda llegar. 
  // Para obtener los mejores resultados de autocalibración, todos los lados deben ser accesibles.
  #define CALIBRATION_MEASURE_RIGHT
  #define CALIBRATION_MEASURE_FRONT
  #define CALIBRATION_MEASURE_LEFT
  #define CALIBRATION_MEASURE_BACK

  //#define CALIBRATION_MEASURE_IMIN
  //#define CALIBRATION_MEASURE_IMAX
  //#define CALIBRATION_MEASURE_JMIN
  //#define CALIBRATION_MEASURE_JMAX
  //#define CALIBRATION_MEASURE_KMIN
  //#define CALIBRATION_MEASURE_KMAX
  //#define CALIBRATION_MEASURE_UMIN
  //#define CALIBRATION_MEASURE_UMAX
  //#define CALIBRATION_MEASURE_VMIN
  //#define CALIBRATION_MEASURE_VMAX
  //#define CALIBRATION_MEASURE_WMIN
  //#define CALIBRATION_MEASURE_WMAX

  // La sonda solo puede sondear en el centro exacto de la parte superior si el centro es plano. 
  // Si se está sondeando en la cabeza de un tornillo o en una arandela hueca, sondea cerca de los bordes.
  //#define CALIBRATION_MEASURE_AT_TOP_EDGES

 // Define el pin a leer durante la calibración
  #ifndef CALIBRATION_PIN
    //#define CALIBRATION_PIN -1            // Define aquí para anular el pin predeterminado
    #define CALIBRATION_PIN_INVERTING false // Establece en true para invertir el pin personalizado
    //#define CALIBRATION_PIN_PULLDOWN
    #define CALIBRATION_PIN_PULLUP
  #endif
#endif

/**
 * Multi-stepping envía los pasos en ráfagas para reducir el uso de la MCU en altas velocidades de paso.
 * Esto permite velocidades de avance más altas de las que la MCU podría admitir de otra manera.
 */
#define MULTISTEPPING_LIMIT   16  //: [1, 2, 4, 8, 16, 32, 64, 128]

/**
 * Adaptive Step Smoothing aumenta la resolución de los movimientos en múltiples ejes, especialmente a frecuencias de paso
 * por debajo de 1 kHz (para AVR) o 10 kHz (para ARM), donde el aliasing entre ejes en movimientos en múltiples ejes causa vibración audible
 * y artefactos en la superficie. El algoritmo se adapta para proporcionar el mejor suavizado de pasos posible en las
 * frecuencias de paso más bajas.
 */
//#define ADAPTIVE_STEP_SMOOTHING

/**
 * Microstepping personalizado
 * Sobreescríbelo según sea necesario para tu configuración. Se admiten hasta 3 pines MS.
 */
//#define MICROSTEP1 LOW,LOW,LOW
//#define MICROSTEP2 HIGH,LOW,LOW
//#define MICROSTEP4 LOW,HIGH,LOW
//#define MICROSTEP8 HIGH,HIGH,LOW
//#define MICROSTEP16 LOW,LOW,HIGH
//#define MICROSTEP32 HIGH,LOW,HIGH

// Configuración de microstepping (requiere una placa con pines denominados X_MS1, X_MS2, etc.)
#define MICROSTEP_MODES { 16, 16, 16, 16, 16, 16 } // [1,2,4,8,16]

/**
 * @section corriente del motor paso a paso
 *
 * Algunas placas tienen la capacidad de ajustar la corriente del motor paso a paso mediante el firmware.
 *
 * Las corrientes del motor encendido se establecen mediante:
 *   PWM_MOTOR_CURRENT: utilizado por MINIRAMBO y ULTIMAIN_2
 *                      chips compatibles conocidos: A4982
 *   DIGIPOT_MOTOR_CURRENT: utilizado por BQ_ZUM_MEGA_3D, RAMBO y SCOOVO_X9H
 *                          chips compatibles conocidos: AD5206
 *   DAC_MOTOR_CURRENT_DEFAULT: utilizado por PRINTRBOARD_REVF y RIGIDBOARD_V2
 *                              chips compatibles conocidos: MCP4728
 *   DIGIPOT_I2C_MOTOR_CURRENTS: utilizado por 5DPRINT, AZTEEG_X3_PRO, AZTEEG_X5_MINI_WIFI, MIGHTYBOARD_REVE
 *                              chips compatibles conocidos: MCP4451, MCP4018
 *
 * Las corrientes del motor también se pueden ajustar mediante los comandos M907 - M910 y mediante el LCD.
 *   M907: se aplica a todos.
 *   M908: BQ_ZUM_MEGA_3D, RAMBO, PRINTRBOARD_REVF, RIGIDBOARD_V2 y SCOOVO_X9H
 *   M909, M910 y LCD: solo PRINTRBOARD_REVF y RIGIDBOARD_V2
 */
//#define PWM_MOTOR_CURRENT { 1300, 1300, 1250 }          // Valores en miliamperios
//#define DIGIPOT_MOTOR_CURRENT { 135,135,135,135,135 }   // Valores 0-255 (RAMBO 135 = ~0.75A, 185 = ~1A)
//#define DAC_MOTOR_CURRENT_DEFAULT { 70, 80, 90, 80 }    // Porcentaje de accionamiento predeterminado: ejes X, Y, Z, E

/**
 * DIGIPOTs basados en I2C (por ejemplo, Azteeg X3 Pro)
 */
//#define DIGIPOT_MCP4018             // Requiere https://github.com/felias-fogg/SlowSoftI2CMaster
//#define DIGIPOT_MCP4451
#if ANY(DIGIPOT_MCP4018, DIGIPOT_MCP4451)
  #define DIGIPOT_I2C_NUM_CHANNELS 8  // 5DPRINT:4   AZTEEG_X3_PRO:8   MKS_SBASE:5   MIGHTYBOARD_REVE:5

  // Corrientes del motor reales en amperios. El número de entradas debe coincidir con DIGIPOT_I2C_NUM_CHANNELS.
  // Estas corresponden a los controladores físicos, así que asegúrate de que el orden sea correcto si se cambia.
  #define DIGIPOT_I2C_MOTOR_CURRENTS { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 } // AZTEEG_X3_PRO

  //#define DIGIPOT_USE_RAW_VALUES    // Usar valores sin procesar de la resistencia variable de DIGIPOT_MOTOR_CURRENT (en lugar de las corrientes del motor A4988)

  /**
   * Direcciones de esclavo comunes:
   *
   *                        A   (A desplazada)   B   (B desplazada)  IC
   * Smoothie              0x2C (0x58)         0x2D (0x5A)         MCP4451
   * AZTEEG_X3_PRO         0x2C (0x58)         0x2E (0x5C)         MCP4451
   * AZTEEG_X5_MINI        0x2C (0x58)         0x2E (0x5C)         MCP4451
   * AZTEEG_X5_MINI_WIFI         0x58                0x5C          MCP4451
   * MIGHTYBOARD_REVE      0x2F (0x5E)                            MCP4018
   */
  //#define DIGIPOT_I2C_ADDRESS_A 0x2C  // Dirección de esclavo sin desplazar para el primer DIGIPOT
  //#define DIGIPOT_I2C_ADDRESS_B 0x2D  // Dirección de esclavo sin desplazar para el segundo DIGIPOT
#endif

//===========================================================================
//==========================Características adicionales======================
//===========================================================================

// @section lcd

#if HAS_MANUAL_MOVE_MENU
  #define MANUAL_FEEDRATE { 50*60, 50*60, 4*60, 2*60 } // (mm/min) Velocidades de avance para movimientos manuales a lo largo de X, Y, Z, E desde el panel
  #define FINE_MANUAL_MOVE 0.025    // (mm) Movimiento manual más pequeño (< 0.1mm) que se aplica a Z en la mayoría de las máquinas
  #if IS_ULTIPANEL
    #define MANUAL_E_MOVES_RELATIVE // Mostrar distancia de movimiento del extrusor en lugar de "posición"
    #define ULTIPANEL_FEEDMULTIPLY  // El codificador ajusta el multiplicador de velocidades en la pantalla de estado
  #endif
#endif

// Cambia los valores más rápidamente cuando se gira el codificador más rápido
#define ENCODER_RATE_MULTIPLIER
#if ENABLED(ENCODER_RATE_MULTIPLIER)
  #define ENCODER_10X_STEPS_PER_SEC   30  // (pasos/s) Tasa de codificador para velocidad 10x
  #define ENCODER_100X_STEPS_PER_SEC  80  // (pasos/s) Tasa de codificador para velocidad 100x
#endif

// Reproducir un pitido cuando se cambia la velocidad de avance desde la pantalla de estado
//#define BEEP_ON_FEEDRATE_CHANGE
#if ENABLED(BEEP_ON_FEEDRATE_CHANGE)
  #define FEEDRATE_CHANGE_BEEP_DURATION   10
  #define FEEDRATE_CHANGE_BEEP_FREQUENCY 440
#endif

//
// Tiempo de espera de retroiluminación LCD
//
//#define LCD_BACKLIGHT_TIMEOUT_MINS 1  // (minutos) Tiempo de espera antes de apagar la retroiluminación

#if HAS_BED_PROBE && ANY(HAS_MARLINUI_MENU, HAS_TFT_LVGL_UI)
  //#define PROBE_OFFSET_WIZARD       // Agrega una opción de calibración de compensación Z de la sonda al menú LCD
  #if ENABLED(PROBE_OFFSET_WIZARD)
    /**
     * Habilitar para inicializar la compensación Z de la sonda al iniciar el asistente.
     * Utiliza una altura ligeramente superior a la estimación de compensación de la boquilla a la sonda Z.
     * Por ejemplo, con una compensación de -5, considera una altura inicial de -4.
     */
    //#define PROBE_OFFSET_WIZARD_START_Z -4.0

    // Establece una posición conveniente para realizar la calibración (punto de sondeo y distancia boquilla/cama)
    //#define PROBE_OFFSET_WIZARD_XY_POS { X_CENTER, Y_CENTER }
  #endif
#endif

#if HAS_MARLINUI_MENU

  #if HAS_BED_PROBE
    // Agrega calibración en el menú de compensaciones de la sonda para compensar la torsión del eje X.
    //#define X_AXIS_TWIST_COMPENSATION
    #if ENABLED(X_AXIS_TWIST_COMPENSATION)
      /**
       * Habilitar para inicializar la compensación Z de la sonda al iniciar el asistente.
       * Utiliza una altura ligeramente superior a la estimación de compensación de la boquilla a la sonda Z.
       * Por ejemplo, con una compensación de -5, considera una altura inicial de -4.
       */
      #define XATC_START_Z 0.0
      #define XATC_MAX_POINTS 3             // Número de puntos para sondear en el asistente
      #define XATC_Y_POSITION Y_CENTER      // (mm) Posición Y para sondear
      #define XATC_Z_OFFSETS { 0, 0, 0 }    // Compensaciones Z para los puntos de muestra del eje X
    #endif

    // Muestra las opciones de despliegue/almacenamiento de la sonda en el menú de movimiento.
    #define PROBE_DEPLOY_STOW_MENU
  #endif

  // Incluye una página de información de la impresora en el menú principal del LCD
  //#define LCD_INFO_MENU
  #if ENABLED(LCD_INFO_MENU)
    //#define LCD_PRINTER_INFO_IS_BOOTSCREEN // Muestra pantallas de inicio en lugar de páginas de información de la impresora
  #endif

/**
 * Distancias del menú "Mover Eje" de MarlinUI. Lista separada por comas.
 * Los valores se muestran tal como están definidos, así que siempre usa números simples aquí.
 * Los movimientos de los ejes <= 1/2 de la longitud del eje y los movimientos del extrusor <= EXTRUDE_MAXLENGTH
 * se mostrarán en los submenús de movimiento.
 */
#define MANUAL_MOVE_DISTANCE_MM                    10, 1.0, 0.1  // (mm)
//#define MANUAL_MOVE_DISTANCE_MM         100, 50, 10, 1.0, 0.1  // (mm)
//#define MANUAL_MOVE_DISTANCE_MM    500, 100, 50, 10, 1.0, 0.1  // (mm)

// Distancias de movimiento manual para INCH_MODE_SUPPORT
#define MANUAL_MOVE_DISTANCE_IN                          0.100, 0.010, 0.001  // (in)
//#define MANUAL_MOVE_DISTANCE_IN          1.000, 0.500, 0.100, 0.010, 0.001  // (in)
//#define MANUAL_MOVE_DISTANCE_IN   5.000, 1.000, 0.500, 0.100, 0.010, 0.001  // (in)

// Distancias de movimiento manual para ejes de rotación
#define MANUAL_MOVE_DISTANCE_DEG             90, 45, 22.5, 5, 1  // (°)

// Los elementos del menú BACK mantienen el resaltado en la parte superior
  //#define TURBO_BACK_MENU_ITEM

  // Inserta un menú para precalentar en el nivel superior para permitir un acceso rápido
  //#define PREHEAT_SHORTCUT_MENU_ITEM

  // Agrega Configuración > Menú de depuración > Prueba de extremo de carrera para probar el extremo de carrera/sonda/sensor de filamento
  //#define LCD_ENDSTOP_TEST

#endif // HAS_MARLINUI_MENU

#if HAS_DISPLAY
  /**
   * *** VENDEDORES, POR FAVOR LEER ***
   *
   * Marlin te permite agregar una imagen de inicio personalizada para las pantallas gráficas LCD.
   * Con esta opción, Marlin mostrará primero tu pantalla personalizada, seguida
   * del logotipo estándar de Marlin con el número de versión y la dirección web.
   *
   * Te animamos a que aproveches esta nueva característica y también te pedimos
   * respetuosamente que conserves la pantalla de inicio de Marlin sin modificaciones.
   */
  #define SHOW_BOOTSCREEN                 // Mostrar la pantalla de inicio de Marlin al iniciar. ** ACTIVAR PARA PRODUCCIÓN **
  #if ENABLED(SHOW_BOOTSCREEN)
    #define BOOTSCREEN_TIMEOUT 3000       // (ms) Duración total para mostrar la(s) pantalla(s) de inicio
    #if ANY(HAS_MARLINUI_U8GLIB, TFT_COLOR_UI)
      #define BOOT_MARLIN_LOGO_SMALL      // Mostrar un logotipo más pequeño de Marlin en la pantalla de inicio (ahorrando mucho espacio en flash)
    #endif
    #if HAS_MARLINUI_U8GLIB
      //#define BOOT_MARLIN_LOGO_ANIMATED  // Logotipo de Marlin animado. Requiere ~3260 (o ~940) bytes de flash.
    #endif
    #if ANY(HAS_MARLINUI_U8GLIB, TOUCH_UI_FTDI_EVE)
      //#define SHOW_CUSTOM_BOOTSCREEN    // Mostrar la imagen bitmap en Marlin/_Bootscreen.h al iniciar.
    #endif
  #endif

  #if HAS_MARLINUI_U8GLIB
    //#define CUSTOM_STATUS_SCREEN_IMAGE  // Mostrar la imagen bitmap en Marlin/_Statusscreen.h en la pantalla de estado.
  #endif

  //#define SOUND_MENU_ITEM   // Agregar una opción de silencio al menú LCD
  #define SOUND_ON_DEFAULT    // Estado predeterminado activado para el zumbador/altavoz

#if HAS_WIRED_LCD
  //#define DOUBLE_LCD_FRAMERATE        // No recomendado para placas lentas.
#endif

  // El tiempo de espera para volver a la pantalla de estado desde los submenús
  //#define LCD_TIMEOUT_TO_STATUS 15000   // (ms)

  // Desplaza un mensaje de estado más largo a la vista
  //#define STATUS_MESSAGE_SCROLLING

  // Aplica un tiempo de espera a los mensajes de estado de baja prioridad
  //#define STATUS_MESSAGE_TIMEOUT_SEC 30 // (segundos)

  // En la pantalla de información, muestra XY con un decimal cuando sea posible
  //#define LCD_DECIMAL_SMALL_XY

  // Muestra la posición E (filamento utilizado) durante la impresión
  //#define LCD_SHOW_E_TOTAL

  // Muestra una temperatura negativa en lugar de "err"
  //#define SHOW_TEMPERATURE_BELOW_ZERO

  /**
   * Menú de control de LED
   * Agregar control de LED al menú LCD
   */
  //#define LED_CONTROL_MENU
  #if ENABLED(LED_CONTROL_MENU)
    #define LED_COLOR_PRESETS                 // Habilitar la opción de menú de colores predefinidos
    //#define NEO2_COLOR_PRESETS              // Habilitar una segunda opción de menú de colores predefinidos para NeoPixel
    #if ENABLED(LED_COLOR_PRESETS)
      #define LED_USER_PRESET_RED        255  // Valor ROJO definido por el usuario
      #define LED_USER_PRESET_GREEN      128  // Valor VERDE definido por el usuario
      #define LED_USER_PRESET_BLUE         0  // Valor AZUL definido por el usuario
      #define LED_USER_PRESET_WHITE      255  // Valor BLANCO definido por el usuario
      #define LED_USER_PRESET_BRIGHTNESS 255  // Intensidad definida por el usuario
      //#define LED_USER_PRESET_STARTUP       // Hacer que la impresora muestre el color predefinido por el usuario al iniciar
    #endif
    #if ENABLED(NEO2_COLOR_PRESETS)
      #define NEO2_USER_PRESET_RED        255  // Valor ROJO definido por el usuario
      #define NEO2_USER_PRESET_GREEN      128  // Valor VERDE definido por el usuario
      #define NEO2_USER_PRESET_BLUE         0  // Valor AZUL definido por el usuario
      #define NEO2_USER_PRESET_WHITE      255  // Valor BLANCO definido por el usuario
      #define NEO2_USER_PRESET_BRIGHTNESS 255  // Intensidad definida por el usuario
      //#define NEO2_USER_PRESET_STARTUP      // Hacer que la impresora muestre el color predefinido por el usuario al iniciar para la segunda tira
    #endif
  #endif

#endif // HAS_DISPLAY

#if HAS_FEEDRATE_EDIT
  #define SPEED_EDIT_MIN    10  // (%) Rango mínimo de edición de porcentaje de velocidad de avance
  #define SPEED_EDIT_MAX   999  // (%) Rango máximo de edición de porcentaje de velocidad de avance
#endif
#if HAS_FLOW_EDIT
  #define FLOW_EDIT_MIN     10  // (%) Rango mínimo de edición de porcentaje de flujo
  #define FLOW_EDIT_MAX    999  // (%) Rango máximo de edición de porcentaje de flujo
#endif

// Añadir 'M73' para establecer el progreso del trabajo de impresión, anula la estimación incorporada de Marlin
//#define SET_PROGRESS_MANUALLY
#if ENABLED(SET_PROGRESS_MANUALLY)
  #define SET_PROGRESS_PERCENT            // Agregar el parámetro 'P' para establecer el porcentaje completado
  #define SET_REMAINING_TIME              // Agregar el parámetro 'R' para establecer el tiempo restante
  //#define SET_INTERACTION_TIME          // Agregar el parámetro 'C' para establecer el tiempo hasta el próximo cambio de filamento u otra interacción del usuario
  //#define M73_REPORT                    // Informar los valores de M73 al host
  #if ALL(M73_REPORT, HAS_MEDIA)
    #define M73_REPORT_SD_ONLY            // Informar solo al imprimir desde la tarjeta SD
  #endif
#endif

// Opciones de progreso de impresión en la pantalla LCD. Se pueden mostrar varios valores en orden.
#if HAS_DISPLAY && ANY(HAS_MEDIA, SET_PROGRESS_MANUALLY)
  #define SHOW_PROGRESS_PERCENT           // Mostrar el porcentaje de progreso de impresión (no afecta la barra de progreso)
  #define SHOW_ELAPSED_TIME               // Mostrar el tiempo transcurrido de impresión (prefijo 'E')
  //#define SHOW_REMAINING_TIME           // Mostrar el tiempo estimado para completar (prefijo 'R')
  #if ENABLED(SET_INTERACTION_TIME)
    #define SHOW_INTERACTION_TIME         // Mostrar el tiempo hasta la próxima interacción del usuario ('C' = cambio de filamento)
  #endif
  //#define PRINT_PROGRESS_SHOW_DECIMALS  // Mostrar el progreso con dígitos decimales, no todas las interfaces de usuario admiten esto

  #if ANY(HAS_MARLINUI_HD44780, IS_TFTGLCD_PANEL)
    //#define LCD_PROGRESS_BAR            // Mostrar una barra de progreso en las pantallas HD44780 para impresión desde la tarjeta SD
    #if ENABLED(LCD_PROGRESS_BAR)
      #define PROGRESS_BAR_BAR_TIME 2000  // (ms) Duración de tiempo para mostrar la barra
      #define PROGRESS_BAR_MSG_TIME 3000  // (ms) Duración de tiempo para mostrar el mensaje de estado
      #define PROGRESS_MSG_EXPIRE      0  // (ms) Duración de tiempo para retener el mensaje de estado (0 = siempre)
      //#define PROGRESS_MSG_ONCE         // Mostrar el mensaje durante MSG_TIME y luego borrarlo
      //#define LCD_PROGRESS_BAR_TEST     // Agregar una opción de menú para probar la barra de progreso
    #endif
  #endif
#endif

#if HAS_MEDIA
  /**
   * Velocidad SPI de la tarjeta SD
   * Puede ser necesario para solucionar errores de "volume init".
   *
   * Habilita y establece en SPI_HALF_SPEED, SPI_QUARTER_SPEED o SPI_EIGHTH_SPEED
   *  de lo contrario, se aplicará la velocidad completa.
   *
   * :['SPI_HALF_SPEED', 'SPI_QUARTER_SPEED', 'SPI_EIGHTH_SPEED']
   */
  //#define SD_SPI_SPEED SPI_HALF_SPEED

  // El circuito de detección de la tarjeta SD estándar lee BAJO cuando hay un medio insertado y ALTO cuando está vacío.
  // Habilita esta opción y establece en ALTO si tus tarjetas SD se detectan incorrectamente.
  //#define SD_DETECT_STATE HIGH

  //#define SD_IGNORE_AT_STARTUP            // No montar la tarjeta SD al iniciar
  //#define SDCARD_READONLY                 // Tarjeta SD de solo lectura (para ahorrar más de 2K de memoria flash)

  //#define GCODE_REPEAT_MARKERS            // Habilitar el G-code M808 para establecer marcadores de repetición y hacer bucles

  #define SD_PROCEDURE_DEPTH 1              // Aumenta si necesitas más llamadas anidadas de M32

  #define SD_FINISHED_STEPPERRELEASE true   // Desactivar los motores paso a paso cuando finalice la impresión desde la tarjeta SD
  #define SD_FINISHED_RELEASECOMMAND "M84"  // Usar "M84XYE" para mantener el eje Z activado y que la cama se mantenga en su lugar

  // Ordenar inversamente los archivos de la tarjeta SD para mostrar primero los "más recientes", según el FAT de la tarjeta.
  // Dado que el FAT se desordena con el uso, se recomienda SDCARD_SORT_ALPHA.
  #define SDCARD_RATHERRECENTFIRST

  #define SD_MENU_CONFIRM_START             // Confirmar el archivo SD seleccionado antes de imprimir

  //#define NO_SD_AUTOSTART                 // Eliminar el soporte completo de archivos auto#.g para ahorrar espacio de memoria flash y RAM
  //#define MENU_ADDAUTOSTART               // Agregar una opción de menú para ejecutar archivos auto#.g

  //#define ONE_CLICK_PRINT                 // Solicitar imprimir el archivo más reciente al insertar un medio
  //#define BROWSE_MEDIA_ON_INSERT          // Abrir el explorador de archivos cuando se inserta un medio

  //#define MEDIA_MENU_AT_TOP               // Forzar que el menú de medios aparezca en la parte superior del menú principal

  #define EVENT_GCODE_SD_ABORT "G28XY"      // G-code que se ejecutará al abortar la impresión desde la tarjeta SD (por ejemplo, "G28XY" o "G27")

  #if ENABLED(PRINTER_EVENT_LEDS)
    #define PE_LEDS_COMPLETED_TIME  (30*60) // (segundos) Tiempo para mantener el color LED "completado" antes de restaurar la iluminación normal
  #endif

  /**
   * Continuar después de una pérdida de energía (Creality3D)
   *
   * Almacena el estado actual en la tarjeta SD 
   * al comienzo de cada capa durante la impresión desde la tarjeta SD.
   * Si se encuentra el archivo de recuperación al iniciar, se muestra una opción en la pantalla LCD para continuar
   * la impresión desde el último punto conocido en el archivo.
   */
  //#define POWER_LOSS_RECOVERY
  #if ENABLED(POWER_LOSS_RECOVERY)
    #define PLR_ENABLED_DEFAULT   false // Recuperación después de pérdida de energía habilitada de manera predeterminada (establecer con 'M413 Sn' y M500)
    //#define BACKUP_POWER_SUPPLY       // Energía de respaldo / UPS para mover los motores paso a paso en caso de pérdida de energía
    //#define POWER_LOSS_ZRAISE       2 // (mm) Levantamiento del eje Z al reanudar (en caso de pérdida de energía con UPS)
    //#define POWER_LOSS_PIN         44 // Pin para detectar pérdida de energía. Establecer en -1 para desactivar el pin predeterminado en placas sin módulo.
    //#define POWER_LOSS_STATE     HIGH // Estado del pin que indica pérdida de energía
    //#define POWER_LOSS_PULLUP         // Establecer pull-up / pull-down según corresponda para tu sensor
    //#define POWER_LOSS_PULLDOWN
    //#define POWER_LOSS_PURGE_LEN   20 // (mm) Longitud del filamento a purgar al reanudar
    //#define POWER_LOSS_RETRACT_LEN 10 // (mm) Longitud del filamento a retraer en caso de falla. Requiere energía de respaldo.

    // Sin un POWER_LOSS_PIN, la siguiente opción ayuda a reducir el desgaste en la tarjeta SD,
    // especialmente al imprimir en "modo jarrón". Si se establece demasiado alto, no se pueden continuar los jarrones.
    #define POWER_LOSS_MIN_Z_CHANGE 0.05 // (mm) Cambio mínimo en Z antes de guardar los datos de pérdida de energía

    // Habilitar si es necesario el homing en Z para una recuperación adecuada. ¡El 99.9% del tiempo esto debería estar desactivado!
    //#define POWER_LOSS_RECOVER_ZHOME
    #if ENABLED(POWER_LOSS_RECOVER_ZHOME)
      //#define POWER_LOSS_ZHOME_POS { 0, 0 } // Posición XY segura para realizar homing en Z evitando objetos en la cama
    #endif
  #endif

  /**
   * Ordena las listas de archivos de la tarjeta SD en orden alfabético.
   *
   * Con esta opción habilitada, los elementos en las tarjetas SD se ordenarán
   * por nombre para facilitar la navegación.
   *
   * De forma predeterminada...
   *
   *  - Se utiliza el método más lento, pero seguro, para la ordenación.
   *  - Las carpetas se ordenan en la parte superior.
   *  - La clave de ordenación se asigna estáticamente.
   *  - No se admite el código G adicional (M34).
   *  - Límite de ordenación de 40 elementos. (Los elementos después de los primeros 40 no se ordenan).
   *
   * La ordenación de la tarjeta SD utiliza asignación estática (según lo establecido por SDSORT_LIMIT), 
   * lo que permite que
   * el compilador calcule el uso máximo y lance un error si se supera el límite de SRAM.
   *
   *  - SDSORT_USES_RAM proporciona una ordenación más rápida mediante un búfer de directorio estático.
   *  - SDSORT_USES_STACK hace lo mismo, pero utiliza un búfer local en la pila para devolver algo de SRAM. (Negado por las dos opciones siguientes).
   *  - SDSORT_CACHE_NAMES conservará la lista de archivos ordenados en la RAM. (¡Costoso!)
   *  - SDSORT_DYNAMIC_RAM solo utiliza RAM cuando el menú SD está visible. (¡Úselo con precaución!)
   */
  //#define SDCARD_SORT_ALPHA

  // Opciones de ordenación de la tarjeta SD
  #if ENABLED(SDCARD_SORT_ALPHA)
    #define SDSORT_LIMIT       40     // Número máximo de elementos ordenados (10-256). Cada uno cuesta 27 bytes.
    #define FOLDER_SORTING     -1     // -1=arriba  0=ninguno  1=abajo
    #define SDSORT_GCODE       false  // Permitir activar/desactivar la ordenación con LCD y código G M34.
    #define SDSORT_USES_RAM    false  // Preasignar una matriz estática para una ordenación previa más rápida.
    #define SDSORT_USES_STACK  false  // Preferir la pila para la ordenación previa y devolver algo de SRAM. (Negado por las dos opciones siguientes).
    #define SDSORT_CACHE_NAMES false  // Mantener los elementos ordenados en la RAM durante más tiempo para un rendimiento rápido. Opción más costosa.
    #define SDSORT_DYNAMIC_RAM false  // Utilizar asignación dinámica (dentro de los menús de SD). Opción menos costosa. ¡Establecer SDSORT_LIMIT antes de usar!
    #define SDSORT_CACHE_VFATS 2      // Número máximo de entradas VFAT de 13 bytes para usar en la ordenación.
                                      // Nota: Solo afecta a SCROLL_LONG_FILENAMES con SDSORT_CACHE_NAMES pero no a SDSORT_DYNAMIC_RAM.
  #endif

  // Permitir símbolos internacionales en nombres de archivo largos. Para que se muestren correctamente,
  // la fuente LCD debe contener los caracteres. Verifique el idioma LCD seleccionado.
  //#define UTF_FILENAME_SUPPORT

  //#define LONG_FILENAME_HOST_SUPPORT    // Obtener el nombre de archivo largo de un archivo/carpeta con 'M33 <dosname>' y listar los nombres de archivo largos con 'M20 L'
  //#define LONG_FILENAME_WRITE_SUPPORT   // Crear/eliminar archivos con nombres de archivo largos a través de M28, M30 y Protocolo de Transferencia Binaria
  //#define M20_TIMESTAMP_SUPPORT         // Incluir marcas de tiempo añadiendo la bandera 'T' a los comandos M20

  //#define SCROLL_LONG_FILENAMES         // Desplazar nombres de archivo largos en el menú de la tarjeta SD

  //#define SD_ABORT_NO_COOLDOWN          // Dejar los calentadores encendidos después de Detener Impresión (no recomendado)

  /**
   * Abortar la impresión de la tarjeta SD cuando se activa cualquier endstop.
   * Esta función se habilita con 'M540 S1' o desde el menú LCD.
   * Los endstops deben estar activados para que esta opción funcione.
   */
  //#define SD_ABORT_ON_ENDSTOP_HIT
  #if ENABLED(SD_ABORT_ON_ENDSTOP_HIT)
    //#define SD_ABORT_ON_ENDSTOP_HIT_GCODE "G28XY" // Código G que se ejecutará al activar el endstop (por ejemplo, "G28XY" o "G27")
  #endif

  //#define SD_REPRINT_LAST_SELECTED_FILE // Al completar la impresión, abrir el menú LCD y seleccionar el mismo archivo

  //#define AUTO_REPORT_SD_STATUS         // Informar automáticamente el estado del medio con 'M27 S<segundos>'

  /**
   * Soporte para unidades flash USB mediante un Arduino USB Host Shield o
   * una placa de ruptura MAX3421E equivalente. La unidad flash USB aparecerá
   * para Marlin como una tarjeta SD.
   *
   * El MAX3421E se puede asignar a los mismos pines que el lector de tarjetas SD, con
   * la siguiente asignación de pines:
   *
   *    SCLK, MOSI, MISO --> SCLK, MOSI, MISO
   *    INT              --> SD_DETECT_PIN [1]
   *    SS               --> SDSS
   *
   * [1] En AVR, un pin compatible con interrupciones es lo mejor para la compatibilidad UHS3.
   */
  //#define USB_FLASH_DRIVE_SUPPORT
  #if ENABLED(USB_FLASH_DRIVE_SUPPORT)
    /**
     * Biblioteca del Arduino USB Host Shield
     *
     * - UHS2 no utiliza interrupciones y ha sido probada en producción
     *   en una impresora LulzBot TAZ Pro con una placa Archim de 32 bits.
     *
     * - UHS3 es un código más nuevo con una mejor compatibilidad USB. Sin embargo,
     *   se ha probado menos y se sabe que interfiere con los servos.
     *   [1] Esto requiere que USB_INTR_PIN admita interrupciones.
     */
    //#define USE_UHS2_USB
    //#define USE_UHS3_USB

    #define DISABLE_DUE_SD_MMC // Desactiva el acceso del USB Host a la unidad USB para evitar bloqueos en el acceso a bloques para la plataforma DUE

    /**
     * USB Host nativo soportado por algunas placas (USB OTG)
     */
    //#define USE_OTG_USB_HOST

    #if DISABLED(USE_OTG_USB_HOST)
      #define USB_CS_PIN    SDSS
      #define USB_INTR_PIN  SD_DETECT_PIN
    #endif
  #endif

  /**
   * Al usar un bootloader que admite SD-Firmware-Flashing,
   * agrega un elemento de menú para activar SD-FW-Update en el próximo reinicio.
   *
   * Requiere ATMEGA2560 (Arduino Mega)
   *
   * Probado con este bootloader:
   *   https://github.com/FleetProbe/MicroBridge-Arduino-ATMega2560
   */
  //#define SD_FIRMWARE_UPDATE
  #if ENABLED(SD_FIRMWARE_UPDATE)
    #define SD_FIRMWARE_UPDATE_EEPROM_ADDR    0x1FF
    #define SD_FIRMWARE_UPDATE_ACTIVE_VALUE   0xF0
    #define SD_FIRMWARE_UPDATE_INACTIVE_VALUE 0xFF
  #endif

  /**
   * Habilita esta opción si tienes más de ~3K de espacio de flash sin usar.
   * Marlin incrustará todas las configuraciones en el firmware binario como datos comprimidos.
   * Usa 'M503 C' para escribir las configuraciones en la tarjeta SD como 'mc.zip'.
   * Consulta docs/ConfigEmbedding.md para obtener detalles sobre cómo usar 'mc-apply.py'.
   */
  //#define CONFIGURATION_EMBEDDING

  // Agrega un modo de transferencia de archivos binarios optimizado, iniciado con 'M28 B1'
  //#define BINARY_FILE_TRANSFER

  #if ENABLED(BINARY_FILE_TRANSFER)
    // Incluye facilidades adicionales (por ejemplo, 'M20 F') que admiten la carga de firmware mediante BINARY_FILE_TRANSFER
    //#define CUSTOM_FIRMWARE_UPLOAD
  #endif

  /**
   * Establece esta opción en uno de los siguientes valores (o se aplicarán los valores predeterminados de la placa):
   *
   *           LCD - Usa la unidad SD en el controlador LCD externo.
   *       ONBOARD - Usa la unidad SD en la placa de control.
   *  CUSTOM_CABLE - Usa un cable personalizado para acceder a la SD (definido en un archivo de pines).
   *
   * :[ 'LCD', 'ONBOARD', 'CUSTOM_CABLE' ]
   */
  //#define SDCARD_CONNECTION LCD

  // Habilita si la detección de SD no es funcional (por ejemplo, mediante el uso de un extensor de SD)
  //#define NO_SD_DETECT

  /**
   * Soporte para múltiples volúmenes - EXPERIMENTAL.
   * Agrega 'M21 Pm' / 'M21 S' / 'M21 U' para montar la tarjeta SD / unidad USB.
   */
  //#define MULTI_VOLUME
  #if ENABLED(MULTI_VOLUME)
    #define VOLUME_SD_ONBOARD
    #define VOLUME_USB_FLASH_DRIVE
    #define DEFAULT_VOLUME SV_SD_ONBOARD
    #define DEFAULT_SHARED_VOLUME SV_USB_FLASH_DRIVE
  #endif

#endif // HAS_MEDIA

/**
 * De forma predeterminada, un lector de tarjetas SD incorporado puede compartirse como un dispositivo de almacenamiento masivo USB.
 * Esta opción oculta la tarjeta SD del PC host.
 */
//#define NO_SD_HOST_DRIVE   // Desactiva el acceso a la tarjeta SD a través de USB (por seguridad).

/**
 * Opciones adicionales para pantallas gráficas
 *
 * Utiliza las optimizaciones aquí para mejorar el rendimiento de impresión,
 * lo cual puede verse afectado negativamente por el dibujo en la pantalla gráfica,
 * especialmente al realizar varios movimientos cortos y al imprimir 
 * en máquinas DELTA y SCARA.
 *
 * Algunas de estas opciones pueden hacer que la pantalla se quede rezagada con respecto a los eventos del controlador,
 * ya que hay un equilibrio entre el rendimiento de impresión confiable 
 * y las actualizaciones rápidas de la pantalla.
 */
#if HAS_MARLINUI_U8GLIB
  // Ahorra muchos ciclos dibujando un marco hueco o sin marco en la pantalla de información
  //#define XYZ_NO_FRAME
  #define XYZ_HOLLOW_FRAME

  // Hay disponible una fuente más grande para los elementos de edición. Requiere 3120 bytes de flash.
  // Solo para idiomas occidentales. No disponible para cirílico, kana, turco, griego o chino.
  //#define USE_BIG_EDIT_FONT

  // Se puede usar una fuente más pequeña en la pantalla de información. Requiere 2434 bytes de flash.
  // Solo para idiomas occidentales. No disponible para cirílico, kana, turco, griego o chino.
  //#define USE_SMALL_INFOFONT

  /**
   * Suspensión de la pantalla gráfica
   *
   * La biblioteca U8G proporciona funciones de suspensión/activación para las pantallas SH1106, SSD1306,
   * SSD1309 y algunas otras pantallas DOGM.
   * Habilita esta opción para ahorrar energía y evitar el desgaste de los píxeles OLED.
   * Agrega el elemento de menú Configuration > LCD Timeout (m) para establecer un período de espera
   * de 0 (desactivado) a 99 minutos.
   */
  //#define DISPLAY_SLEEP_MINUTES 2  // (minutos) Tiempo de espera antes de apagar la pantalla. Establecido con M255 S.

  /**
   * Las pantallas ST7920 pueden emular una pantalla de caracteres 16 x 4 utilizando
   * el generador de caracteres ST7920 para actualizaciones de pantalla muy rápidas.
   * Habilita LIGHTWEIGHT_UI para usar este modo especial de pantalla.
   *
   * Dado que LIGHTWEIGHT_UI tiene un espacio limitado, la posición y el mensaje de estado
   * ocupan la misma línea. Establece STATUS_EXPIRE_SECONDS en la
   * duración en segundos del mensaje de estado antes de borrarlo.
   *
   * Establece STATUS_EXPIRE_SECONDS en cero para no borrar nunca el estado.
   * Esto evitará que se muestren las actualizaciones de posición.
   */
  #if IS_U8GLIB_ST7920
    // Habilita esta opción y reduce el valor para optimizar las actualizaciones de pantalla.
    // La demora normal es de 10µs. Usa el valor más bajo que aún brinde una pantalla confiable.
    //#define DOGM_SPI_DELAY_US 5

    //#define LIGHTWEIGHT_UI
    #if ENABLED(LIGHTWEIGHT_UI)
      #define STATUS_EXPIRE_SECONDS 20
    #endif
  #endif

  /**
   * Personalización de la pantalla de estado (Info Screen)
   * Estas opciones pueden afectar el tamaño del código y el tiempo de renderizado de la pantalla.
   * Las pantallas de estado personalizadas pueden anular forzosamente estas configuraciones.
   */
  //#define STATUS_COMBINE_HEATERS    // Usar imágenes combinadas de los elementos calefactores en lugar de imágenes separadas
  //#define STATUS_HOTEND_NUMBERLESS  // Usar iconos de elementos calefactores simples en lugar de numerados (con 2 o más elementos calefactores)
  #define STATUS_HOTEND_INVERTED      // Mostrar imágenes sólidas de la boquilla cuando se está calentando (requiere STATUS_HOTEND_ANIM para elementos calefactores numerados)
  #define STATUS_HOTEND_ANIM          // Usar una segunda imagen para indicar el calentamiento del elemento calefactor
  #define STATUS_BED_ANIM             // Usar una segunda imagen para indicar el calentamiento de la cama
  #define STATUS_CHAMBER_ANIM         // Usar una segunda imagen para indicar el calentamiento de la cámara
  //#define STATUS_CUTTER_ANIM        // Usar una segunda imagen para indicar el husillo/láser activo
  //#define STATUS_COOLER_ANIM        // Usar una segunda imagen para indicar la refrigeración del láser
  //#define STATUS_FLOWMETER_ANIM     // Usar varias imágenes para indicar el flujo del refrigerante
  //#define STATUS_ALT_BED_BITMAP     // Usar una imagen alternativa de la cama
  //#define STATUS_ALT_FAN_BITMAP     // Usar una imagen alternativa del ventilador
  //#define STATUS_FAN_FRAMES 3       // :[0,1,2,3,4] Número de cuadros de animación del ventilador

  // Solo se puede habilitar una opción STATUS_HEAT_*
//#define STATUS_HEAT_PERCENT       // Mostrar calentamiento en una barra de progreso
//#define STATUS_HEAT_POWER         // Mostrar la potencia de salida del calentador como una barra vertical

  // Opciones de juegos frívolos
  //#define MARLIN_BRICKOUT
  //#define MARLIN_INVADERS
  //#define MARLIN_SNAKE
  //#define GAMES_EASTER_EGG          // Agrega líneas en blanco adicionales encima del submenú "Games"

#endif // HAS_MARLINUI_U8GLIB

#if HAS_MARLINUI_U8GLIB || IS_DWIN_MARLINUI
  #define MENU_HOLLOW_FRAME           // Habilitar para ahorrar muchos ciclos dibujando un marco hueco en las pantallas de menú
  //#define OVERLAY_GFX_REVERSE       // Intercambia los indicadores de CW/CCW en la superposición gráfica
#endif

//
// Opciones adicionales para pantallas DGUS / DWIN
//
#if HAS_DGUS_LCD
  #define LCD_BAUDRATE 115200

  #define DGUS_RX_BUFFER_SIZE 128
  #define DGUS_TX_BUFFER_SIZE 48
  //#define SERIAL_STATS_RX_BUFFER_OVERRUNS  // Solucionar la situación de desbordamiento de búfer Rx (actualmente solo para AVR)

  #define DGUS_UPDATE_INTERVAL_MS  500    // (ms) Intervalo entre actualizaciones automáticas de pantalla

  #if DGUS_UI_IS(FYSETC, MKS, HIPRECY)
    #define DGUS_PRINT_FILENAME           // Mostrar el nombre del archivo durante la impresión
    #define DGUS_PREHEAT_UI               // Mostrar una pantalla de precalentamiento durante el calentamiento

    #if DGUS_UI_IS(FYSETC, MKS)
      //#define DGUS_UI_MOVE_DIS_OPTION   // Desactivado de forma predeterminada para FYSETC y MKS
    #else
      #define DGUS_UI_MOVE_DIS_OPTION     // Activado de forma predeterminada para UI_HIPRECY
    #endif

  #define DGUS_FILAMENT_LOADUNLOAD
  #if ENABLED(DGUS_FILAMENT_LOADUNLOAD)
    #define DGUS_FILAMENT_PURGE_LENGTH 10
    #define DGUS_FILAMENT_LOAD_LENGTH_PER_TIME 0.5 // (mm) Ajustar proporcionalmente a DGUS_UPDATE_INTERVAL_MS
  #endif

  #define DGUS_UI_WAITING               // Mostrar una pantalla de "espera" entre algunas pantallas
  #if ENABLED(DGUS_UI_WAITING)
    #define DGUS_UI_WAITING_STATUS 10
    #define DGUS_UI_WAITING_STATUS_PERIOD 8 // Aumentar para ralentizar el bucle de estado de espera
  #endif

  #elif DGUS_UI_IS(E3S1PRO)
  /**
   * El firmware de la pantalla estándar de Ender-3 S1 Pro/Plus tiene un manejo de archivos SD bastante deficiente.
   *
   * El desplazamiento automático es principalmente útil para mensajes de estado, nombres de archivos y la página "Acerca de".
   *
   * NOTA: La opción de tarjeta SD avanzada se ve afectada por el firmware táctil estándar, por lo que
   *       las páginas 5 en adelante mostrarán "4/4". Esto puede solucionarse en una actualización de firmware de pantalla.
   */
  #define DGUS_SOFTWARE_AUTOSCROLL        // Habilitar el desplazamiento automático de texto largo
  #define DGUS_AUTOSCROLL_START_CYCLES 1  // Ciclos de actualización sin desplazamiento al principio de las cadenas de texto
  #define DGUS_AUTOSCROLL_END_CYCLES 1    // ... al final de las cadenas de texto

  #define DGUS_ADVANCED_SDCARD            // Permitir más de 20 archivos y navegar por directorios
  #define DGUS_USERCONFIRM                // Reutilizar la página de la tarjeta SD para mostrar varios mensajes
  #endif
#endif // HAS_DGUS_LCD

//
// Opciones adicionales para pantallas TFT AnyCubic Chiron
//
#if ENABLED(ANYCUBIC_LCD_CHIRON)
  // De forma predeterminada, el tipo de panel se detecta automáticamente.
  // Habilita una de estas opciones si conoces el tipo de panel.
  //#define CHIRON_TFT_STANDARD
  //#define CHIRON_TFT_NEW

  // Habilita la melodía de inicio más larga de Anycubic
  //#define AC_DEFAULT_STARTUP_TUNE

  /**
   * Carpetas de visualización
   * De forma predeterminada, el navegador de archivos muestra todos los archivos G-code (incluidos los de las subcarpetas) en una lista plana.
   * Habilita esta opción para mostrar un navegador de archivos jerárquico.
   *
   * NOTAS:
   * - Sin esta opción, es útil habilitar SDCARD_SORT_ALPHA para que los archivos se ordenen antes/después de las carpetas.
   * - Cuando se usa con el panel "new", los nombres de las carpetas también tendrán '.gcode' al final de sus nombres.
   *   Esta modificación es necesaria actualmente para que el panel muestre las carpetas.
   */
  #define AC_SD_FOLDER_VIEW
#endif

//
// Especificar idiomas adicionales para la interfaz de usuario. El valor predeterminado se especifica en LCD_LANGUAGE.
//
#if ANY(DOGLCD, TFT_COLOR_UI, TOUCH_UI_FTDI_EVE, IS_DWIN_MARLINUI, ANYCUBIC_LCD_VYPER)
  //#define LCD_LANGUAGE_2 fr
  //#define LCD_LANGUAGE_3 de
  //#define LCD_LANGUAGE_4 es
  //#define LCD_LANGUAGE_5 it
  #ifdef LCD_LANGUAGE_2
    //#define LCD_LANGUAGE_AUTO_SAVE // Guardar automáticamente el idioma en la EEPROM al cambiarlo
  #endif
#endif

//
// Interfaz táctil para el motor de vídeo integrado de FTDI (EVE)
//
#if ENABLED(TOUCH_UI_FTDI_EVE)
  // Placa de pantalla utilizada
  //#define LCD_FTDI_VM800B35A        // FTDI 3.5" con FT800 (320x240)
  //#define LCD_4DSYSTEMS_4DLCD_FT843 // 4D Systems 4.3" (480x272)
  //#define LCD_HAOYU_FT800CB         // Haoyu con 4.3" o 5" (480x272)
  //#define LCD_HAOYU_FT810CB         // Haoyu con 5" (800x480)
  //#define LCD_LULZBOT_CLCD_UI       // LulzBot Color LCD UI
  //#define LCD_FYSETC_TFT81050       // FYSETC con 5" (800x480)
  //#define LCD_EVE3_50G              // Matrix Orbital 5.0", 800x480, BT815
  //#define LCD_EVE2_50G              // Matrix Orbital 5.0", 800x480, FT813

  // Corregir la resolución si no se utiliza el panel TFT de stock.
  //#define TOUCH_UI_320x240
  //#define TOUCH_UI_480x272
  //#define TOUCH_UI_800x480

  // Asignaciones para placas con un conector de pantalla RepRapDiscount estándar
  //#define AO_EXP1_PINMAP      // Asignación EXP1 LulzBot CLCD UI
  //#define AO_EXP2_PINMAP      // Asignación EXP2 LulzBot CLCD UI
  //#define CR10_TFT_PINMAP     // Asignación de pines CR10 de Rudolph Riedel
  //#define S6_TFT_PINMAP       // Asignación de pines S6 de FYSETC
  //#define F6_TFT_PINMAP       // Asignación de pines F6 de FYSETC

  //#define OTHER_PIN_LAYOUT  // Definir los pines manualmente a continuación
  #if ENABLED(OTHER_PIN_LAYOUT)
    // Deben elegirse pines para CS y MOD_RESET (PD)
    #define CLCD_MOD_RESET  9
    #define CLCD_SPI_CS    10

    // Si se utiliza SPI por software, especifica los pines para SCLK, MOSI, MISO
    //#define CLCD_USE_SOFT_SPI
    #if ENABLED(CLCD_USE_SOFT_SPI)
      #define CLCD_SOFT_SPI_MOSI 11
      #define CLCD_SOFT_SPI_MISO 12
      #define CLCD_SOFT_SPI_SCLK 13
    #endif
  #endif

  // Orientación de la pantalla. Se admite una pantalla invertida (es decir, boca abajo)
  // en el FT800. El FT810 y versiones posteriores también admiten 
  // orientaciones vertical y reflejada.
  //#define TOUCH_UI_INVERTED
  //#define TOUCH_UI_PORTRAIT
  //#define TOUCH_UI_MIRRORED

  // Procesamiento y representación de UTF8.
  // Los caracteres no admitidos se mostrarán como '?'.
  //#define TOUCH_UI_USE_UTF8
  #if ENABLED(TOUCH_UI_USE_UTF8)
    // Soporte para acentos occidentales. Estos caracteres acentuados utilizan
    // mapas de bits combinados y requieren relativamente poco almacenamiento.
    #define TOUCH_UI_UTF8_WESTERN_CHARSET
    #if ENABLED(TOUCH_UI_UTF8_WESTERN_CHARSET)
      // Grupos de caracteres adicionales. Estos caracteres requieren
      // mapas de bits completos y ocupan bastante almacenamiento:
      //#define TOUCH_UI_UTF8_SUPERSCRIPTS  // ¹ ² ³
      //#define TOUCH_UI_UTF8_COPYRIGHT     // © ®
      //#define TOUCH_UI_UTF8_GERMANIC      // ß
      //#define TOUCH_UI_UTF8_SCANDINAVIAN  // Æ Ð Ø Þ æ ð ø þ
      //#define TOUCH_UI_UTF8_PUNCTUATION   // « » ¿ ¡
      //#define TOUCH_UI_UTF8_CURRENCY      // ¢ £ ¤ ¥
      //#define TOUCH_UI_UTF8_ORDINALS      // º ª
      //#define TOUCH_UI_UTF8_MATHEMATICS   // ± × ÷
      //#define TOUCH_UI_UTF8_FRACTIONS     // ¼ ½ ¾
      //#define TOUCH_UI_UTF8_SYMBOLS       // µ ¶ ¦ § ¬
    #endif

    // Conjunto de caracteres cirílicos, ocupa aproximadamente 27 KiB de flash
    //#define TOUCH_UI_UTF8_CYRILLIC_CHARSET
  #endif

  // Usar una fuente más pequeña cuando las etiquetas no caben en los botones
  #define TOUCH_UI_FIT_TEXT

  // Usar un código de acceso numérico para el teclado de "Bloqueo de pantalla".
  // (recomendado para pantallas más pequeñas)
  //#define TOUCH_UI_PASSCODE

  // Mostrar información adicional de depuración para eventos de la interfaz táctil
  //#define TOUCH_UI_DEBUG

  // Menú de desarrollador (accesible tocando el texto de derechos de autor "Acerca de la impresora")
  //#define TOUCH_UI_DEVELOPER_MENU
#endif

//
// Opciones de interfaz clásica
//
#if TFT_SCALED_DOGLCD
  //#define TFT_MARLINUI_COLOR 0xFFFF // Blanco
  //#define TFT_MARLINBG_COLOR 0x0000 // Negro
  //#define TFT_DISABLED_COLOR 0x0003 // Casi negro
  //#define TFT_BTCANCEL_COLOR 0xF800 // Rojo
  //#define TFT_BTARROWS_COLOR 0xDEE6 // Amarillo
  //#define TFT_BTOKMENU_COLOR 0x145F // Cian
#endif

//
// Tiempo de espera de retroiluminación LCD
// Requiere una pantalla con retroiluminación controlable
//
//#define LCD_BACKLIGHT_TIMEOUT_MINS 1  // (minutos) Tiempo de espera antes de apagar la retroiluminación
#if defined(DISPLAY_SLEEP_MINUTES) || defined(LCD_BACKLIGHT_TIMEOUT_MINS)
  #define EDITABLE_DISPLAY_TIMEOUT      // Editar el tiempo de espera con M255 S<minutos> y un elemento de menú
#endif

//
// Debounce del botón ADC
//
#if HAS_ADC_BUTTONS
  #define ADC_BUTTON_DEBOUNCE_DELAY 16  // Aumentar si los botones rebotan o se repiten demasiado rápido
#endif

// @section safety

/**
 * El temporizador de hardware del watchdog reiniciará y desactivará todas las salidas
 * si el firmware se sobrecarga demasiado para leer los sensores de temperatura.
 *
 * Si descubres que el reinicio del watchdog hace que tu placa AVR se bloquee para siempre,
 * habilita WATCHDOG_RESET_MANUAL para utilizar un temporizador personalizado en lugar de WDTO.
 * NOTA: Este método es menos confiable, ya que solo puede detectar bloqueos mientras
 * las interrupciones están habilitadas.
 */
#define USE_WATCHDOG
#if ENABLED(USE_WATCHDOG)
  //#define WATCHDOG_RESET_MANUAL
#endif

// @section lcd

/**
 * El babystepping permite mover los ejes en incrementos pequeños sin cambiar
 * los valores de posición actuales. Esta función se utiliza principalmente para ajustar el eje Z
 * en la primera capa de una impresión en tiempo real.
 *
 * ¡Advertencia: no respeta los finales de carrera!
 */
//#define BABYSTEPPING
#if ENABLED(BABYSTEPPING)
  //#define INTEGRATED_BABYSTEPPING         // Integración del babystepping en el ISR del motor paso a paso
  //#define EP_BABYSTEPPING                 // Babystepping M293/M294 con soporte EMERGENCY_PARSER
  //#define BABYSTEP_WITHOUT_HOMING
  //#define BABYSTEP_ALWAYS_AVAILABLE       // Permitir babystepping en todo momento (no solo durante el movimiento)
  //#define BABYSTEP_XY                     // Habilitar también el babystepping X/Y. ¡No es compatible en DELTA!
  //#define BABYSTEP_INVERT_Z               // Habilitar si los pasos de Z deben ir en la dirección opuesta
  //#define BABYSTEP_MILLIMETER_UNITS       // Especificar BABYSTEP_MULTIPLICATOR_(XY|Z) en mm en lugar de micro-pasos
  #define BABYSTEP_MULTIPLICATOR_Z  1       // (pasos o mm) Pasos o distancia en milímetros para cada paso de Z
  #define BABYSTEP_MULTIPLICATOR_XY 1       // (pasos o mm) Pasos o distancia en milímetros para cada paso de XY

  //#define DOUBLECLICK_FOR_Z_BABYSTEPPING  // Doble clic en la pantalla de estado para el babystepping de Z.
  #if ENABLED(DOUBLECLICK_FOR_Z_BABYSTEPPING)
    #define DOUBLECLICK_MAX_INTERVAL 1250   // Intervalo máximo entre clics, en milisegundos.
                                            // Nota: Se puede agregar tiempo adicional para mitigar la latencia del controlador.
    //#define MOVE_Z_WHEN_IDLE              // Ir al menú de movimiento de Z al hacer doble clic cuando la impresora esté inactiva.
    #if ENABLED(MOVE_Z_WHEN_IDLE)
      #define MOVE_Z_IDLE_MULTIPLICATOR 1   // Multiplicar 1 mm por este factor para el tamaño del paso de movimiento.
    #endif
  #endif

  //#define BABYSTEP_DISPLAY_TOTAL          // Mostrar el total de babysteps desde el último G28

  //#define BABYSTEP_ZPROBE_OFFSET          // Combinar M851 Z y babystepping
  #if ENABLED(BABYSTEP_ZPROBE_OFFSET)
    //#define BABYSTEP_HOTEND_Z_OFFSET      // Para múltiples hotends, desplazamientos Z relativos del babystepping
    //#define BABYSTEP_GFX_OVERLAY          // Habilitar superposición gráfica en el editor de desplazamiento Z
  #endif
#endif

// @section extruder

/**
 * Control de presión lineal v1.5
 *
 * Suposición: avance [pasos] = k * (velocidad delta [pasos/s])
 * K=0 significa avance desactivado.
 *
 * NOTA: ¡Los valores de K para LIN_ADVANCE 1.5 difieren de las versiones anteriores!
 *
 * Establece K alrededor de 0.22 para un extrusor directo de PLA de 3 mm con aproximadamente 6.5 cm entre la rueda de extrusión y el heatbreak.
 * Se necesitarán valores de K más grandes para filamento flexible y distancias mayores.
 * Si este algoritmo produce un desplazamiento de velocidad más alto de lo que el extrusor puede manejar (en comparación con el E jerk),
 * la aceleración de impresión se reducirá durante los movimientos afectados para mantenerse dentro del límite.
 *
 * Consulta https://marlinfw.org/docs/features/lin_advance.html para obtener instrucciones completas.
 */
//#define LIN_ADVANCE
#if ENABLED(LIN_ADVANCE)
  #if ENABLED(DISTINCT_E_FACTORS)
    #define ADVANCE_K { 0.22 }    // (mm) Longitud de compresión por 1 mm/s de velocidad del extrusor, por extrusor
  #else
    #define ADVANCE_K 0.22        // (mm) Longitud de compresión aplicada a todos los extrusores
  #endif
  //#define ADVANCE_K_EXTRA       // Agregar una segunda constante de avance lineal, configurable con M900 L.
  //#define LA_DEBUG              // Imprimir información de depuración en serie durante el funcionamiento. Desactivar para uso en producción.
  //#define ALLOW_LOW_EJERK       // Permitir un valor DEFAULT_EJERK de <10. Recomendado para hotends de extrusión directa.
  //#define EXPERIMENTAL_I2S_LA   // Permitir el uso de I2S_STEPPER_STREAM con LA. El rendimiento se degrada a medida que la velocidad de paso de LA alcanza ~20 kHz.
#endif

/**
 * Control No Lineal de Extrusión
 *
 * Controla la tasa de extrusión basada en la velocidad instantánea del extrusor. Puede usarse para corregir
 * la subextrusión a altas velocidades de extrusor que, de lo contrario, son bien comportadas (es decir, que no se saltan).
 */
//#define NONLINEAR_EXTRUSION

// @section leveling

/**
 * Utilizar las coordenadas de nivelación segura de la cama para mover los ejes a una posición útil antes de la prueba de la cama.
 * Por ejemplo, después de homologar un eje de rotación, la sonda Z puede no ser perpendicular a la cama.
 * Elije valores que orienten la cama horizontalmente y la sonda Z verticalmente.
 */
//#define SAFE_BED_LEVELING_START_X 0.0
//#define SAFE_BED_LEVELING_START_Y 0.0
//#define SAFE_BED_LEVELING_START_Z 0.0
//#define SAFE_BED_LEVELING_START_I 0.0
//#define SAFE_BED_LEVELING_START_J 0.0
//#define SAFE_BED_LEVELING_START_K 0.0
//#define SAFE_BED_LEVELING_START_U 0.0
//#define SAFE_BED_LEVELING_START_V 0.0
//#define SAFE_BED_LEVELING_START_W 0.0

/**
 * Puntos para probar en todos los procedimientos de nivelación de 3 puntos.
 * Sobrescribe si los puntos seleccionados automáticamente son inadecuados.
 */
#if NEEDS_THREE_PROBE_POINTS
  //#define PROBE_PT_1 {  15, 180 }   // (mm) { x, y }
  //#define PROBE_PT_2 {  15,  20 }
  //#define PROBE_PT_3 { 170,  20 }
#endif

/**
 * Márgenes de prueba
 *
 * Sobrescribe PROBING_MARGIN para cada lado de la plataforma de impresión
 * Útil para que los puntos de prueba alcancen posiciones exactas en los objetivos o
 * para permitir que la nivelación evite las pinzas de la placa solo en
 * lados específicos de la cama. Con NOZZLE_AS_PROBE se permiten valores negativos,
 * para permitir la prueba fuera de la cama.
 *
 * Si estás reemplazando las opciones anteriores *_PROBE_BED_POSITION,
 * los valores de LEFT y FRONT en la mayoría de los casos se asignarán directamente,
 * RIGHT y REAR serían el inverso, como por ejemplo
 * (X/Y_BED_SIZE - RIGHT/BACK_PROBE_BED_POSITION)
 *
 * Esto permitirá que todas las posiciones coincidan en la compilación, sin embargo,
 * si se modifica la posición de la sonda con M851XY, los puntos de prueba la seguirán.
 * Esto evita que cualquier cambio impida que la 
 * sonda alcance algún punto.
 */
#if PROBE_SELECTED && !IS_KINEMATIC
  //#define PROBING_MARGIN_LEFT PROBING_MARGIN
  //#define PROBING_MARGIN_RIGHT PROBING_MARGIN
  //#define PROBING_MARGIN_FRONT PROBING_MARGIN
  //#define PROBING_MARGIN_BACK PROBING_MARGIN
#endif

#if ANY(MESH_BED_LEVELING, AUTO_BED_LEVELING_UBL)
  // Sobrescribe el área de malla si el área automática (máxima) es demasiado grande
  //#define MESH_MIN_X MESH_INSET
  //#define MESH_MIN_Y MESH_INSET
  //#define MESH_MAX_X X_BED_SIZE - (MESH_INSET)
  //#define MESH_MAX_Y Y_BED_SIZE - (MESH_INSET)
#endif

#if ALL(AUTO_BED_LEVELING_UBL, EEPROM_SETTINGS)
  //#define OPTIMIZED_MESH_STORAGE  // Almacena la malla con menos precisión para ahorrar espacio en la EEPROM
#endif

/**
 * Intentar repetidamente el nivelado G29 hasta que tenga éxito.
 * Detener después de G29_MAX_RETRIES intentos.
 */
//#define G29_RETRY_AND_RECOVER
#if ENABLED(G29_RETRY_AND_RECOVER)
  #define G29_MAX_RETRIES 3
  #define G29_HALT_ON_FAILURE
  /**
   * Especifica los comandos GCODE que se ejecutarán cuando el nivelado tenga éxito,
   * entre los intentos y después de que se haya intentado el número máximo de veces.
   */
  #define G29_SUCCESS_COMMANDS "M117 Nivelado de la cama completado."
  #define G29_RECOVER_COMMANDS "M117 Sonda fallida. Limpiando.\nG28\nG12 P0 S12 T0"
  #define G29_FAILURE_COMMANDS "M117 El nivelado de la cama ha fallado.\nG0 Z10\nM300 P25 S880\nM300 P50 S0\nM300 P25 S880\nM300 P50 S0\nM300 P25 S880\nM300 P50 S0\nG4 S1"

#endif

/**
 * Compensación de la sonda térmica
 *
 * Ajusta las mediciones de la sonda para compensar la distorsión asociada con la temperatura
 * de la sonda, la cama y/o el hotend.
 * Usa G76 para calibrar automáticamente esta función para las temperaturas de la sonda y la cama.
 * (Los valores de temperatura/desplazamiento del extrusor deben calibrarse manualmente).
 * Usa M871 para configurar los valores de temperatura/desplazamiento manualmente.
 * Para obtener más detalles, consulta https://marlinfw.org/docs/features/probe_temp_compensation.html
 */
//#define PTC_PROBE    // Compensar según la temperatura de la sonda
//#define PTC_BED      // Compensar según la temperatura de la cama
//#define PTC_HOTEND   // Compensar según la temperatura del hotend

#if ANY(PTC_PROBE, PTC_BED, PTC_HOTEND)
  /**
   * Si la sonda está fuera del rango definido, utiliza la extrapolación lineal con el punto más cercano
   * y el punto con índice PTC_LINEAR_EXTRAPOLATION. Por ejemplo, si se establece en 4, utilizará la
   * extrapolación lineal entre data[0] y data[4] para valores inferiores a PTC_PROBE_START.
   */
  //#define PTC_LINEAR_EXTRAPOLATION 4

  #if ENABLED(PTC_PROBE)
    // La calibración de temperatura de la sonda genera una tabla de valores que comienza en PTC_PROBE_START
    // (por ejemplo, 30), en pasos de PTC_PROBE_RES (por ejemplo, 5) con PTC_PROBE_COUNT (por ejemplo, 10) muestras.
    #define PTC_PROBE_START   30    // (°C)
    #define PTC_PROBE_RES      5    // (°C)
    #define PTC_PROBE_COUNT   10
    #define PTC_PROBE_ZOFFS   { 0 } // (µm) Ajustes de Z por muestra
  #endif

  #if ENABLED(PTC_BED)
    // La calibración de temperatura de la cama construye una tabla similar.
    #define PTC_BED_START     60    // (°C)
    #define PTC_BED_RES        5    // (°C)
    #define PTC_BED_COUNT     10
    #define PTC_BED_ZOFFS     { 0 } // (µm) Ajustes de Z por muestra
  #endif

  #if ENABLED(PTC_HOTEND)
    // Nota: No hay calibración automática para el hotend. Usa M871.
    #define PTC_HOTEND_START 180    // (°C)
    #define PTC_HOTEND_RES     5    // (°C)
    #define PTC_HOTEND_COUNT  20
    #define PTC_HOTEND_ZOFFS  { 0 } // (µm) Ajustes de Z por muestra
  #endif

  // Opciones de G76
  #if ALL(PTC_PROBE, PTC_BED)
    // Posición de estacionamiento para esperar el enfriamiento de la sonda
    #define PTC_PARK_POS   { 0, 0, 100 }

    // Posición de la sonda para sondar y esperar a que la sonda alcance la temperatura objetivo
    //#define PTC_PROBE_POS  { 12.0f, 7.3f } // Ejemplo: cama magnética MK52
    #define PTC_PROBE_POS  { 90, 100 }

    // La temperatura a la que la sonda debe estar durante las mediciones durante
    // la calibración de la temperatura de la cama.
    #define PTC_PROBE_TEMP    30  // (°C)

    // Altura por encima de Z=0.0 para levantar la boquilla. Reducir esto puede ayudar a que la sonda se caliente más rápido.
    // Nota: El desplazamiento Z=0.0 está determinado por el desplazamiento Z de la sonda (por ejemplo, como se establece con M851 Z).
    #define PTC_PROBE_HEATING_OFFSET 0.5
  #endif
#endif // PTC_PROBE || PTC_BED || PTC_HOTEND

// @section extras

//
// Guardar y regresar a la posición G60/G61
//
//#define SAVED_POSITIONS 1         // Cada posición guardada ocupa 12 bytes

//
// Soporte de arco G2/G3
//
#define ARC_SUPPORT                   // Requiere ~3226 bytes
#if ENABLED(ARC_SUPPORT)
  #define MIN_ARC_SEGMENT_MM      0.1 // (mm) Longitud mínima de cada segmento de arco
  #define MAX_ARC_SEGMENT_MM      1.0 // (mm) Longitud máxima de cada segmento de arco
  #define MIN_CIRCLE_SEGMENTS    72   // Número mínimo de segmentos en un círculo completo
  //#define ARC_SEGMENTS_PER_SEC 50   // Utiliza la velocidad de avance para elegir la longitud del segmento
  #define N_ARC_CORRECTION       25   // Número de segmentos interpolados entre correcciones
  //#define ARC_P_CIRCLES             // Habilitar el parámetro 'P' para especificar círculos completos
  //#define SF_ARC_FIX                // Habilitar solo si se utiliza SkeinForge con el procedimiento de redondeo "Arc Point"
#endif

// Soporte de curva Bézier G5 con destinos XYZE e offsets IJPQ
//#define BEZIER_CURVE_SUPPORT        // Requiere ~2666 bytes

#if ANY(ARC_SUPPORT, BEZIER_CURVE_SUPPORT)
  //#define CNC_WORKSPACE_PLANES      // Permitir que G2/G3/G5 operen en los planos XY, ZX o YZ
#endif

/**
 * Direct Stepping
 *
 * Similar al método utilizado por Klipper, el paso directo (direct stepping) reduce significativamente
 * los cálculos de movimiento, aumenta las velocidades máximas de impresión y produce
 * menos aliasing de paso al calcular todos los movimientos por adelantado.
 * Preparación de tu código G: https://github.com/colinrgodsey/step-daemon
 */
//#define DIRECT_STEPPING

/**
 * G38 Probe Target
 *
 * Esta opción agrega G38.2 y G38.3 (sondeo hacia el objetivo)
 * y opcionalmente G38.4 y G38.5 (sondeo lejos del objetivo).
 * Habilita MULTIPLE_PROBING para que G38 sondee más de una vez.
 */
//#define G38_PROBE_TARGET
#if ENABLED(G38_PROBE_TARGET)
  //#define G38_PROBE_AWAY        // Incluir G38.4 y G38.5 para sondeo lejos del objetivo
  #define G38_MINIMUM_MOVE 0.0275 // (mm) Distancia mínima que producirá un movimiento.
#endif

// @section movimientos

// Los movimientos (o segmentos) con menos pasos que esto se unirán al siguiente movimiento
#define MIN_STEPS_PER_SEGMENT 6

/**
 * Retardo mínimo antes y después de establecer la dirección del motor paso a paso (en ns)
 *     0 : Sin retardo (se requieren al menos 10 µs ya que debe transcurrir una ISR de motor paso a paso)
 *    20 : Mínimo para controladores TMC2xxx
 *   200 : Mínimo para controladores A4988
 *   400 : Mínimo para controladores A5984
 *   500 : Mínimo para controladores LV8729 (estimado, no hay información en la hoja de datos)
 *   650 : Mínimo para controladores DRV8825
 *  1500 : Mínimo para controladores TB6600 (estimado, no hay información en la hoja de datos)
 * 15000 : Mínimo para controladores TB6560 (estimado, no hay información en la hoja de datos)
 *
 * Sobrescribe el valor predeterminado en función del tipo de controlador establecido en Configuration.h.
 */
//#define MINIMUM_STEPPER_POST_DIR_DELAY 650
//#define MINIMUM_STEPPER_PRE_DIR_DELAY 650

/**
 * Ancho mínimo del pulso del controlador del motor paso a paso (en µs)
 *   0 : El ancho más pequeño posible que el MCU puede producir, compatible con controladores TMC2xxx
 *   0 : Mínimo de 500 ns para LV8729, ajustado en stepper.h
 *   1 : Mínimo para controladores A4988 y A5984
 *   2 : Mínimo para controladores DRV8825
 *   3 : Mínimo para controladores TB6600
 *  30 : Mínimo para controladores TB6560
 *
 * Sobrescribe el valor predeterminado en función del tipo de controlador establecido en Configuration.h.
 */
//#define MINIMUM_STEPPER_PULSE 2

/**
 * Tasa máxima de paso (en Hz) permitida por el controlador del motor paso a paso
 *  Si no se define, se establece en 1 MHz / (2 * MINIMUM_STEPPER_PULSE) por defecto
 *  5000000 : Máximo para controladores TMC2xxx
 *  1000000 : Máximo para controlador LV8729
 *  500000  : Máximo para controlador A4988
 *  250000  : Máximo para controlador DRV8825
 *  150000  : Máximo para controlador TB6600
 *   15000  : Máximo para controlador TB6560
 *
 * Sobrescribe el valor predeterminado en función del tipo de controlador establecido en Configuration.h.
 */
//#define MAXIMUM_STEPPER_RATE 250000

// @section temperature

// Controlar el calentador 0 y el calentador 1 en paralelo.
//#define HEATERS_PARALLEL

//===========================================================================
//================================= Buffers =================================
//===========================================================================

// @section motion

// El número de movimientos lineales que pueden estar en el planificador a la vez.
// El valor de BLOCK_BUFFER_SIZE debe ser una potencia de 2 (por ejemplo, 8, 16, 32)
#if ALL(HAS_MEDIA, DIRECT_STEPPING)
  #define BLOCK_BUFFER_SIZE  8
#elif HAS_MEDIA
  #define BLOCK_BUFFER_SIZE 16
#else
  #define BLOCK_BUFFER_SIZE 16
#endif

// @section serial

// El búfer ASCII para la entrada serial
#define MAX_CMD_SIZE 96
#define BUFSIZE 4

// Tamaño del búfer de transmisión al host
// Para ahorrar 386 bytes de flash (y TX_BUFFER_SIZE+3 bytes de RAM), establecer en 0.
// Para almacenar en búfer un simple "ok", se necesitan 4 bytes.
// Para ADVANCED_OK (M105) se necesitan 32 bytes.
// Para debug-echo: 128 bytes para la máxima velocidad.
// Otros resultados no necesitan ser tan rápidos.
// :[0, 2, 4, 8, 16, 32, 64, 128, 256]
#define TX_BUFFER_SIZE 0

// Tamaño del búfer de recepción del host
// Sin control de flujo XON/XOFF (ver SERIAL_XON_XOFF a continuación), 32 bytes deberían ser suficientes.
// Para usar el control de flujo, establece el tamaño de este búfer en al menos 1024 bytes.
// :[0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048]
//#define RX_BUFFER_SIZE 1024

#if RX_BUFFER_SIZE >= 1024
  // Habilitar para que el controlador envíe caracteres de control XON/XOFF al
  // host para indicar que el búfer RX se está llenando.
  //#define SERIAL_XON_XOFF
#endif

#if HAS_MEDIA
  // Habilita esta opción para recopilar y mostrar el uso máximo
  // de la cola RX después de transferir un archivo a la SD.
  //#define SERIAL_STATS_MAX_RX_QUEUED

  // Habilita esta opción para recopilar y mostrar el número
  // de bytes descartados después de una transferencia de archivo a la SD.
  //#define SERIAL_STATS_DROPPED_RX
#endif

// Monitoreo del uso del búfer RX
// Muestra un error en el puerto serie si el búfer de recepción serie se desborda.
// Si ves estos errores, aumenta el valor de RX_BUFFER_SIZE.
// No compatible en todas las plataformas.
//#define RX_BUFFER_MONITOR

/**
 * Analizador de comandos de emergencia
 *
 * Añade un analizador de bajo nivel para interceptar ciertos comandos a medida que
 * entran en el búfer de recepción serial, de modo que no puedan ser bloqueados.
 * Actualmente maneja los comandos M108, M112, M410, M876
 * NOTA: Aún no implementado en todas las plataformas.
 */
//#define EMERGENCY_PARSER

/**
 * Informes en tiempo real (requiere EMERGENCY_PARSER)
 *
 * - Informar posición y estado de la máquina (como Grbl).
 * - Informar automáticamente la posición durante movimientos largos.
 * - Útil para CNC/LASER.
 *
 * Agrega soporte para los comandos:
 *  S000 : Informar estado y posición mientras se mueve.
 *  P000 : Pausa instantánea / Retención mientras se mueve.
 *  R000 : Reanudar desde la pausa / retención.
 *
 * - Durante la retención, todos los comandos del Analizador de Emergencia están disponibles, como de costumbre.
 * - Habilitar NANODLP_Z_SYNC y NANODLP_ALL_AXIS para informes de estado final de los comandos de movimiento.
 */
//#define REALTIME_REPORTING_COMMANDS
#if ENABLED(REALTIME_REPORTING_COMMANDS)
  //#define FULL_REPORT_TO_HOST_FEATURE   // Informar automáticamente el estado de la máquina como Grbl CNC
#endif

// Las conexiones serial incorrectas pueden omitir un comando recibido al enviar un 'ok'
// Por lo tanto, algunos clientes abortan después de 30 segundos en un tiempo de espera.
// Otros clientes comienzan a enviar comandos mientras reciben un 'wait'.
// Este "wait" solo se envía cuando el búfer está vacío. 1 segundo es un buen valor aquí.
//#define NO_TIMEOUTS 1000 // Milisegundos

// Algunos clientes tendrán esta función pronto. Esto podría hacer que NO_TIMEOUTS sea innecesario.
//#define ADVANCED_OK

// Printrun puede tener problemas al recibir cadenas largas de una sola vez.
// Esta opción inserta pequeñas demoras entre las líneas de salida en serie.
#define SERIAL_OVERRUN_PROTECTION

// Para el eco en serie, el número de dígitos después del punto decimal
//#define SERIAL_FLOAT_PRECISION 4

/**
 * Esta característica es EXPERIMENTAL, así que úsala con precaución y pruébala a fondo.
 * Habilita esta opción para recibir datos en los puertos serie a través del controlador DMA incorporado
 * para una comunicación serie de alta velocidad más estable y confiable.
 * Actualmente, solo algunos MCUs STM32 son compatibles.
 * Nota: Esto no tiene efecto en los puertos serie USB emulados.
 */
//#define SERIAL_DMA

/**
 * Establece el número de espacios de fuente proporcional necesarios para llenar un espacio de caracter típico.
 * Esto puede ayudar a alinear mejor la salida de comandos como `G29 O` Mesh Output.
 *
 * Para clientes que usan una fuente de ancho fijo (como OctoPrint), deja esto en 1.0.
 * De lo contrario, ajústalo según tu cliente y fuente.
 */
#define PROPORTIONAL_FONT_RATIO 1.0

// @section extras

/**
 * Velocidad de ventilador adicional
 * Añade una velocidad secundaria de ventilador para cada ventilador de enfriamiento de impresión.
 *   'M106 P<fan> T3-255' : Establece una velocidad secundaria para <fan>
 *   'M106 P<fan> T2'     : Utiliza la velocidad secundaria establecida
 *   'M106 P<fan> T1'     : Restaura la velocidad anterior del ventilador
 */
//#define EXTRA_FAN_SPEED

/**
 * Retracción basada en firmware y controlada por LCD
 *
 * Agrega los comandos G10 / G11 para la retracción/reinserción automática basada en firmware.
 * Utiliza los comandos M207 y M208 para definir los parámetros de retracción/reinserción.
 *
 * Utiliza el comando M209 para habilitar o deshabilitar la retracción automática.
 * Con la retracción automática habilitada, todos los movimientos G1 E dentro del rango establecido
 * se convertirán en movimientos de retracción/reinserción basados en firmware.
 *
 * Asegúrate de desactivar la retracción automática durante el cambio de filamento.
 *
 * Ten en cuenta que la configuración de M207 / M208 / M209 se guarda en la EEPROM.
 */
//#define FWRETRACT
#if ENABLED(FWRETRACT)
  #define FWRETRACT_AUTORETRACT             // Anula las retracciones del slicer
  #if ENABLED(FWRETRACT_AUTORETRACT)
    #define MIN_AUTORETRACT             0.1 // (mm) No convertir movimientos E menores que esta longitud
    #define MAX_AUTORETRACT            10.0 // (mm) No convertir movimientos E mayores que esta longitud
  #endif
  #define RETRACT_LENGTH                3   // (mm) Longitud de retracción por defecto (valor positivo)
  #define RETRACT_LENGTH_SWAP          13   // (mm) Longitud de retracción de cambio por defecto (valor positivo)
  #define RETRACT_FEEDRATE             45   // (mm/s) Velocidad de avance por defecto para la retracción
  #define RETRACT_ZRAISE                0   // (mm) Altura de elevación de Z para la retracción por defecto
  #define RETRACT_RECOVER_LENGTH        0   // (mm) Longitud de recuperación adicional por defecto (se suma a la longitud de retracción en la recuperación)
  #define RETRACT_RECOVER_LENGTH_SWAP   0   // (mm) Longitud de recuperación adicional para cambio por defecto (se suma a la longitud de retracción en la recuperación después de un cambio de herramienta)
  #define RETRACT_RECOVER_FEEDRATE      8   // (mm/s) Velocidad de avance por defecto para la recuperación de la retracción
  #define RETRACT_RECOVER_FEEDRATE_SWAP 8   // (mm/s) Velocidad de avance por defecto para la recuperación de la retracción después de un cambio de herramienta
  #if ENABLED(MIXING_EXTRUDER)
    //#define RETRACT_SYNC_MIXING           // Retraer y restaurar todos los motores de mezcla simultáneamente
  #endif
#endif

/**
 * Configuraciones universales de cambio de herramienta.
 * Se aplica a todos los tipos de extrusores, excepto donde se indique explícitamente.
 */
#if HAS_MULTI_EXTRUDER
  // Distancia de elevación de Z para el cambio de herramienta, según sea necesario para algunos extrusores
  #define TOOLCHANGE_ZRAISE                 2 // (mm)
  //#define TOOLCHANGE_ZRAISE_BEFORE_RETRACT  // Aplicar la elevación antes de la retracción del cambio de herramienta (si está habilitada)
  //#define TOOLCHANGE_NO_RETURN              // Nunca volver a la posición anterior en el cambio de herramienta
  #if ENABLED(TOOLCHANGE_NO_RETURN)
    //#define EVENT_GCODE_AFTER_TOOLCHANGE "G12X"   // G-code adicional para ejecutar después del cambio de herramienta
  #endif

  /**
   * G-code adicional para ejecutar durante la ejecución de comandos de cambio de herramienta. Puede usarse para usar un motor paso a paso adicional
   * (por ejemplo, el eje I en Configuration.h) para accionar el cambiador de herramientas.
   */
  //#define EVENT_GCODE_TOOLCHANGE_T0 "G28 A\nG1 A0"  // G-code adicional para ejecutar durante el comando de cambio de herramienta T0
  //#define EVENT_GCODE_TOOLCHANGE_T1 "G1 A10"        // G-code adicional para ejecutar durante el comando de cambio de herramienta T1
  //#define EVENT_GCODE_TOOLCHANGE_ALWAYS_RUN         // Ejecutar siempre las secuencias de G-code anteriores. ¡Usar con precaución!

  /**
   * Considerar las coordenadas para EVENT_GCODE_TOOLCHANGE_Tx como relativas a T0
   * de manera que los movimientos en los ejes especificados sean los mismos para todas las herramientas.
   */
  //#define TC_GCODE_USE_GLOBAL_X   // Usar posición X relativa a la herramienta 0
  //#define TC_GCODE_USE_GLOBAL_Y   // Usar posición Y relativa a la herramienta 0
  //#define TC_GCODE_USE_GLOBAL_Z   // Usar posición Z relativa a la herramienta 0

  /**
   * Las herramientas de los sensores detectan cuándo se recogen o sueltan las herramientas.
   * Requiere los pines TOOL_SENSOR1_PIN, TOOL_SENSOR2_PIN, etc.
   */
  //#define TOOL_SENSOR

  /**
   * Retrae y carga filamento al cambiar de herramienta para reducir
   * la salida y el enredado y obtener transiciones más limpias.
   */
  //#define TOOLCHANGE_FILAMENT_SWAP
  #if ENABLED(TOOLCHANGE_FILAMENT_SWAP)
    // Cargar / Descargar
    #define TOOLCHANGE_FS_LENGTH              12  // (mm) Longitud de carga / descarga
    #define TOOLCHANGE_FS_EXTRA_RESUME_LENGTH  0  // (mm) Longitud adicional para una mejor reanudación. Ajustar con LCD o M217 B.
    #define TOOLCHANGE_FS_RETRACT_SPEED   (50*60) // (mm/min) (Descarga)
    #define TOOLCHANGE_FS_UNRETRACT_SPEED (25*60) // (mm/min) (En extrusor de un solo cabezal o Bowden, la carga debe ser más lenta)

    // Mayor priming para limpiar un extrusor de un solo cabezal
    #define TOOLCHANGE_FS_EXTRA_PRIME          0  // (mm) Longitud de priming adicional
    #define TOOLCHANGE_FS_PRIME_SPEED    (4.6*60) // (mm/min) Velocidad de priming adicional
    #define TOOLCHANGE_FS_WIPE_RETRACT         0  // (mm) Retraer antes de aparcar, para reducir enredos, mejorar limpieza, etc. Ajustar con LCD o M217 G.

    // Enfriar después del priming para reducir el enredado
    #define TOOLCHANGE_FS_FAN                 -1  // Índice del ventilador o -1 para omitir
    #define TOOLCHANGE_FS_FAN_SPEED          255  // 0-255
    #define TOOLCHANGE_FS_FAN_TIME            10  // (segundos)

    // Utilizar la velocidad TOOLCHANGE_FS_PRIME_SPEED la primera vez que se prime cada extrusor
    //#define TOOLCHANGE_FS_SLOW_FIRST_PRIME

    /**
     * Primer priming de T0 la primera vez que se envía T0 a la impresora:
     *  [ Encendido -> T0 { Activar y primear T0 } -> T1 { Retraer T0, Activar y primear T1 } ]
     * Si se desactiva, no habrá priming en T0 hasta que se vuelva a cambiar a T0 desde otro extrusor:
     *  [ Encendido -> T0 { T0 Activado } -> T1 { Activar y primear T1 } -> T0 { Retraer T1, Activar y primear T0 } ]
     * Habilitar con M217 V1 antes de imprimir para evitar priming no deseado al conectarse al host.
     */
    //#define TOOLCHANGE_FS_PRIME_FIRST_USED

    /**
     * Migración de cambio de herramienta
     * Esta característica proporciona opciones de código G y LCD para cambiar de herramienta en medio de la impresión.
     * Se migran todas las propiedades de herramienta aplicables para que la impresión pueda continuar.
     * Las herramientas deben ser similares y pueden aplicarse otras restricciones.
     * Útil para:
     *   - Cambiar el color del filamento sin interrupción
     *   - Cambiar automáticamente los carretes en caso de agotamiento del filamento
     *   - Cambiar a una boquilla diferente en caso de obstrucción del extrusor
     */
    #define TOOLCHANGE_MIGRATION_FEATURE
    #if ENABLED(TOOLCHANGE_MIGRATION_FEATURE)
  // Anular configuraciones de cambio de herramienta
  // Por defecto, la migración de herramientas utiliza configuraciones regulares de cambio de herramienta.
  // Con una torre de purga, el intercambio/primer y purgado de herramientas ocurren dentro de la cama.
  // Al migrar a una nueva herramienta no purgada, puedes establecer valores de anulación a continuación.
  //#define MIGRATION_ZRAISE            0 // (mm)

  // Mayor longitud de purga para limpiar
  //#define MIGRATION_FS_EXTRA_PRIME    0 // (mm) Longitud de purga adicional
  //#define MIGRATION_FS_WIPE_RETRACT   0 // (mm) Retraer antes del enfriamiento para menos hilos, mejor limpieza, etc.

  // Enfriar después de la purga para reducir hilos
  //#define MIGRATION_FS_FAN_SPEED    255 // 0-255
  //#define MIGRATION_FS_FAN_TIME       0 // (segundos)
  #endif
#endif

  /**
   * Posición para aparcar el cabezal durante el cambio de herramienta.
   * No se aplica a SWITCHING_TOOLHEAD, DUAL_X_CARRIAGE o PARKING_EXTRUDER
   */
  //#define TOOLCHANGE_PARK
  #if ENABLED(TOOLCHANGE_PARK)
    #define TOOLCHANGE_PARK_XY    { X_MIN_POS + 10, Y_MIN_POS + 10 }
    #define TOOLCHANGE_PARK_XY_FEEDRATE 6000  // (mm/min)
    //#define TOOLCHANGE_PARK_X_ONLY          // Movimiento solo en el eje X
    //#define TOOLCHANGE_PARK_Y_ONLY          // Movimiento solo en el eje Y
    #if ENABLED(TOOLCHANGE_MIGRATION_FEATURE)
      //#define TOOLCHANGE_MIGRATION_DO_PARK  // Forzar estacionamiento (o no estacionamiento) en la migración
    #endif
  #endif
#endif // HAS_MULTI_EXTRUDER

// @section advanced pause

/**
 * Pausa avanzada para el cambio de filamento
 *  - Agrega el código G M600 Filament Change para iniciar un cambio de filamento.
 *  - Esta característica es necesaria para el SCRIPT DE FILAMENT_RUNOUT predeterminado.
 *
 * Requisitos:
 *  - Para el aparcamiento del cambio de filamento, habilitar y configurar NOZZLE_PARK_FEATURE.
 *  - Para la interacción del usuario, habilitar una pantalla LCD, HOST_PROMPT_SUPPORT o EMERGENCY_PARSER.
 *
 * Habilita PARK_HEAD_ON_PAUSE para agregar el código G M125 Pause and Park.
 */
//#define ADVANCED_PAUSE_FEATURE
#if ENABLED(ADVANCED_PAUSE_FEATURE)
  #define PAUSE_PARK_RETRACT_FEEDRATE         60  // (mm/s) Velocidad de retracción inicial.
  #define PAUSE_PARK_RETRACT_LENGTH            2  // (mm) Retracción inicial.
                                                  // Esta retracción corta se realiza inmediatamente antes de estacionar la boquilla.
  #define FILAMENT_CHANGE_UNLOAD_FEEDRATE     10  // (mm/s) Velocidad de extracción de filamento. Puede ser bastante rápida.
  #define FILAMENT_CHANGE_UNLOAD_ACCEL        25  // (mm/s^2) Una aceleración más baja puede permitir una velocidad de extracción más rápida.
  #define FILAMENT_CHANGE_UNLOAD_LENGTH      100  // (mm) Longitud de extracción de filamento para una descarga completa.
                                                  //   Para Bowden, la longitud total del tubo y la boquilla.
                                                  //   Para direct drive, la longitud total de la boquilla.
                                                  //   Establecer en 0 para descarga manual.
  #define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE   6  // (mm/s) Movimiento lento al iniciar la carga.
  #define FILAMENT_CHANGE_SLOW_LOAD_LENGTH     0  // (mm) Longitud lenta, para permitir tiempo para insertar el material.
                                                  // 0 para desactivar el inicio de la carga lenta y pasar directamente a la carga rápida
  #define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE   6  // (mm/s) Velocidad de carga de filamento. Puede ser bastante rápida.
  #define FILAMENT_CHANGE_FAST_LOAD_ACCEL     25  // (mm/s^2) Una aceleración más baja puede permitir una velocidad de carga más rápida.
  #define FILAMENT_CHANGE_FAST_LOAD_LENGTH     0  // (mm) Longitud de carga de filamento, desde el engranaje del extrusor hasta la boquilla.
                                                  //   Para Bowden, la longitud total del tubo y la boquilla.
                                                  //   Para direct drive, la longitud total de la boquilla.
  //#define ADVANCED_PAUSE_CONTINUOUS_PURGE       // Purge continuo hasta la longitud de purga hasta que se interrumpa.
  #define ADVANCED_PAUSE_PURGE_FEEDRATE        3  // (mm/s) Velocidad de extrusión (después de la carga). Debe ser más lenta que la velocidad de carga.
  #define ADVANCED_PAUSE_PURGE_LENGTH         50  // (mm) Longitud a extruir después de la carga.
                                                  //   Establecer en 0 para extrusión manual.
                                                  //   El filamento se puede extruir repetidamente desde el menú Cambiar Filamento
                                                  //   hasta que la extrusión sea consistente y para purgar el filamento antiguo.
  #define ADVANCED_PAUSE_RESUME_PRIME          0  // (mm) Distancia adicional para purgar la boquilla después de regresar del estacionamiento.
  //#define ADVANCED_PAUSE_FANS_PAUSE             // Apagar los ventiladores de enfriamiento de la impresión mientras está en pausa.

                                                  // La descarga de filamento realiza una retracción, una espera y una purga primero:
  #define FILAMENT_UNLOAD_PURGE_RETRACT       13  // (mm) Longitud inicial de retracción para descarga.
  #define FILAMENT_UNLOAD_PURGE_DELAY       5000  // (ms) Retraso para que el filamento se enfríe después de la retracción.
  #define FILAMENT_UNLOAD_PURGE_LENGTH         8  // (mm) Se realiza una desretracción y luego se purga esta longitud.
  #define FILAMENT_UNLOAD_PURGE_FEEDRATE      25  // (mm/s) Velocidad de extrusión para purgar antes de la descarga.

  #define PAUSE_PARK_NOZZLE_TIMEOUT           45  // (segundos) Límite de tiempo antes de que la boquilla se apague por seguridad.
  #define FILAMENT_CHANGE_ALERT_BEEPS         10  // Número de pitidos de alerta cuando se requiere una respuesta.
  #define PAUSE_PARK_NO_STEPPER_TIMEOUT           // Habilitar para que los motores XYZ se mantengan encendidos durante el cambio de filamento.
  //#define FILAMENT_CHANGE_RESUME_ON_INSERT      // Continuar automáticamente/cargar filamento cuando se active nuevamente el sensor de agotamiento.
  //#define PAUSE_REHEAT_FAST_RESUME              // Reducir el número de esperas al no solicitar nuevamente después del tiempo de espera antes de continuar.

  //#define PARK_HEAD_ON_PAUSE                    // Estacionar la boquilla durante la pausa y el cambio de filamento.
  //#define HOME_BEFORE_FILAMENT_CHANGE           // Si es necesario, realizar el homing antes de estacionar para el cambio de filamento.

  //#define FILAMENT_LOAD_UNLOAD_GCODES           // Agregar códigos G M701/M702 para cargar/descargar, además de cargar/descargar en el menú LCD Prepare.
  //#define FILAMENT_UNLOAD_ALL_EXTRUDERS         // Permitir que M702 descargue todos los extrusores por encima de una temperatura objetivo mínima (establecida por M302)
#endif

// @section tmc_smart

/**
 * Controladores Trinamic Smart
 *
 * Para usar controladores de motor paso a paso TMC2130, TMC2160, TMC2660, TMC5130, TMC5160 en modo SPI:
 *  - Conecta tus pines SPI a la interfaz SPI de hardware en la placa.
 *    Algunas placas tienen conexiones simples mediante jumpers. Consulta la documentación de tu placa.
 *  - Define los pines CS del motor requeridos en tu archivo "pins_MYBOARD.h".
 *    (Consulta los pines de RAMPS, por ejemplo).
 *  - También puedes usar SPI de software con pines GPIO en lugar de SPI de hardware.
 *
 * Para usar controladores de motor TMC220x con UART en serie:
 *  - Conecta PDN_UART a la señal #_SERIAL_TX_PIN a través de una resistencia de 1K.
 *    Para capacidades de lectura, también conecta PDN_UART a la señal #_SERIAL_RX_PIN sin resistencia.
 *    Algunas placas tienen conexiones simples mediante jumpers. Consulta la documentación de tu placa.
 *  - Estos controladores también se pueden usar con Serial UART de hardware.
 *
 * La biblioteca TMC26XStepper es necesaria para los controladores de motor TMC26X.
 *   https://github.com/MarlinFirmware/TMC26XStepper
 *
 * La biblioteca TMCStepper es necesaria para otros controladores de motor TMC.
 *   https://github.com/teemuatlut/TMCStepper
 *
 * @section tmc/config
 */
#if HAS_TRINAMIC_CONFIG || HAS_TMC26X

  #define HOLD_MULTIPLIER    0.5  // Escala la corriente de retención a partir de la corriente de funcionamiento

  /**
   * Interpola los micro-pasos a 256
   * Anula para cada controlador con la configuración <driver>_INTERPOLATE a continuación
   */
  #define INTERPOLATE      true

  #if AXIS_IS_TMC_CONFIG(X)
    #define X_CURRENT       800        // (mA) Corriente RMS. Multiplica por 1.414 para obtener la corriente máxima.
    #define X_CURRENT_HOME  X_CURRENT  // (mA) Corriente RMS para el homing sin sensor
    #define X_MICROSTEPS     16        // 0..256
    #define X_RSENSE          0.11     // Multiplicado por 1000 para TMC26X
    #define X_CHAIN_POS      -1        // -1..0: Sin encadenamiento. 1: Conexión MOSI de MCU. 2: Siguiente en la cadena, ...
    //#define X_INTERPOLATE  true      // Habilitar para anular 'INTERPOLATE' para el eje X
    //#define X_HOLD_MULTIPLIER 0.5    // Habilitar para anular 'HOLD_MULTIPLIER' para el eje X
  #endif

  #if AXIS_IS_TMC_CONFIG(X2)
    #define X2_CURRENT      X_CURRENT
    #define X2_CURRENT_HOME X_CURRENT_HOME
    #define X2_MICROSTEPS   X_MICROSTEPS
    #define X2_RSENSE       X_RSENSE
    #define X2_CHAIN_POS     -1
    //#define X2_INTERPOLATE true
    //#define X2_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(Y)
    #define Y_CURRENT       800
    #define Y_CURRENT_HOME  Y_CURRENT
    #define Y_MICROSTEPS     16
    #define Y_RSENSE          0.11
    #define Y_CHAIN_POS      -1
    //#define Y_INTERPOLATE  true
    //#define Y_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(Y2)
    #define Y2_CURRENT      Y_CURRENT
    #define Y2_CURRENT_HOME Y_CURRENT_HOME
    #define Y2_MICROSTEPS   Y_MICROSTEPS
    #define Y2_RSENSE       Y_RSENSE
    #define Y2_CHAIN_POS     -1
    //#define Y2_INTERPOLATE true
    //#define Y2_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(Z)
    #define Z_CURRENT       800
    #define Z_CURRENT_HOME  Z_CURRENT
    #define Z_MICROSTEPS     16
    #define Z_RSENSE          0.11
    #define Z_CHAIN_POS      -1
    //#define Z_INTERPOLATE  true
    //#define Z_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(Z2)
    #define Z2_CURRENT      Z_CURRENT
    #define Z2_CURRENT_HOME Z_CURRENT_HOME
    #define Z2_MICROSTEPS   Z_MICROSTEPS
    #define Z2_RSENSE       Z_RSENSE
    #define Z2_CHAIN_POS     -1
    //#define Z2_INTERPOLATE true
    //#define Z2_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(Z3)
    #define Z3_CURRENT      Z_CURRENT
    #define Z3_CURRENT_HOME Z_CURRENT_HOME
    #define Z3_MICROSTEPS   Z_MICROSTEPS
    #define Z3_RSENSE       Z_RSENSE
    #define Z3_CHAIN_POS     -1
    //#define Z3_INTERPOLATE true
    //#define Z3_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(Z4)
    #define Z4_CURRENT      Z_CURRENT
    #define Z4_CURRENT_HOME Z_CURRENT_HOME
    #define Z4_MICROSTEPS   Z_MICROSTEPS
    #define Z4_RSENSE       Z_RSENSE
    #define Z4_CHAIN_POS     -1
    //#define Z4_INTERPOLATE true
    //#define Z4_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(I)
    #define I_CURRENT      800
    #define I_CURRENT_HOME I_CURRENT
    #define I_MICROSTEPS    16
    #define I_RSENSE         0.11
    #define I_CHAIN_POS     -1
    //#define I_INTERPOLATE  true
    //#define I_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(J)
    #define J_CURRENT      800
    #define J_CURRENT_HOME J_CURRENT
    #define J_MICROSTEPS    16
    #define J_RSENSE         0.11
    #define J_CHAIN_POS     -1
    //#define J_INTERPOLATE  true
    //#define J_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(K)
    #define K_CURRENT      800
    #define K_CURRENT_HOME K_CURRENT
    #define K_MICROSTEPS    16
    #define K_RSENSE         0.11
    #define K_CHAIN_POS     -1
    //#define K_INTERPOLATE  true
    //#define K_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(U)
    #define U_CURRENT      800
    #define U_CURRENT_HOME U_CURRENT
    #define U_MICROSTEPS     8
    #define U_RSENSE         0.11
    #define U_CHAIN_POS     -1
    //#define U_INTERPOLATE  true
    //#define U_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(V)
    #define V_CURRENT      800
    #define V_CURRENT_HOME V_CURRENT
    #define V_MICROSTEPS     8
    #define V_RSENSE         0.11
    #define V_CHAIN_POS     -1
    //#define V_INTERPOLATE  true
    //#define V_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(W)
    #define W_CURRENT      800
    #define W_CURRENT_HOME W_CURRENT
    #define W_MICROSTEPS     8
    #define W_RSENSE         0.11
    #define W_CHAIN_POS     -1
    //#define W_INTERPOLATE  true
    //#define W_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(E0)
    #define E0_CURRENT      800
    #define E0_MICROSTEPS    16
    #define E0_RSENSE         0.11
    #define E0_CHAIN_POS     -1
    //#define E0_INTERPOLATE true
    //#define E0_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(E1)
    #define E1_CURRENT      E0_CURRENT
    #define E1_MICROSTEPS   E0_MICROSTEPS
    #define E1_RSENSE       E0_RSENSE
    #define E1_CHAIN_POS     -1
    //#define E1_INTERPOLATE true
    //#define E1_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(E2)
    #define E2_CURRENT      E0_CURRENT
    #define E2_MICROSTEPS   E0_MICROSTEPS
    #define E2_RSENSE       E0_RSENSE
    #define E2_CHAIN_POS     -1
    //#define E2_INTERPOLATE true
    //#define E2_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(E3)
    #define E3_CURRENT      E0_CURRENT
    #define E3_MICROSTEPS   E0_MICROSTEPS
    #define E3_RSENSE       E0_RSENSE
    #define E3_CHAIN_POS     -1
    //#define E3_INTERPOLATE true
    //#define E3_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(E4)
    #define E4_CURRENT      E0_CURRENT
    #define E4_MICROSTEPS   E0_MICROSTEPS
    #define E4_RSENSE       E0_RSENSE
    #define E4_CHAIN_POS     -1
    //#define E4_INTERPOLATE true
    //#define E4_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(E5)
    #define E5_CURRENT      E0_CURRENT
    #define E5_MICROSTEPS   E0_MICROSTEPS
    #define E5_RSENSE       E0_RSENSE
    #define E5_CHAIN_POS     -1
    //#define E5_INTERPOLATE true
    //#define E5_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(E6)
    #define E6_CURRENT      E0_CURRENT
    #define E6_MICROSTEPS   E0_MICROSTEPS
    #define E6_RSENSE       E0_RSENSE
    #define E6_CHAIN_POS     -1
    //#define E6_INTERPOLATE true
    //#define E6_HOLD_MULTIPLIER 0.5
  #endif

  #if AXIS_IS_TMC_CONFIG(E7)
    #define E7_CURRENT      E0_CURRENT
    #define E7_MICROSTEPS   E0_MICROSTEPS
    #define E7_RSENSE       E0_RSENSE
    #define E7_CHAIN_POS     -1
    //#define E7_INTERPOLATE true
    //#define E7_HOLD_MULTIPLIER 0.5
  #endif

  // @section tmc/spi

  /**
   * Sobrescribe los pines SPI predeterminados para los controladores TMC2130, TMC2160, TMC2660, TMC5130 y TMC5160 aquí.
   * Los pines predeterminados se pueden encontrar en el archivo de pines de tu placa.
   */
  //#define X_CS_PIN      -1
  //#define Y_CS_PIN      -1
  //#define Z_CS_PIN      -1
  //#define X2_CS_PIN     -1
  //#define Y2_CS_PIN     -1
  //#define Z2_CS_PIN     -1
  //#define Z3_CS_PIN     -1
  //#define Z4_CS_PIN     -1
  //#define I_CS_PIN      -1
  //#define J_CS_PIN      -1
  //#define K_CS_PIN      -1
  //#define U_CS_PIN      -1
  //#define V_CS_PIN      -1
  //#define W_CS_PIN      -1
  //#define E0_CS_PIN     -1
  //#define E1_CS_PIN     -1
  //#define E2_CS_PIN     -1
  //#define E3_CS_PIN     -1
  //#define E4_CS_PIN     -1
  //#define E5_CS_PIN     -1
  //#define E6_CS_PIN     -1
  //#define E7_CS_PIN     -1

  /**
   * Opción de software para controladores basados en SPI (TMC2130, TMC2160, TMC2660, TMC5130 y TMC5160).
   * Los pines SPI de software predeterminados se definen en los archivos de pines correspondientes,
   * pero puedes sobrescribirlos o definirlos aquí.
   */
  //#define TMC_USE_SW_SPI
  //#define TMC_SPI_MOSI  -1
  //#define TMC_SPI_MISO  -1
  //#define TMC_SPI_SCK   -1

  // @section tmc/serial

  /**
   * Cuatro controladores TMC2209 pueden usar el mismo puerto serie HW/SW con direcciones configuradas por hardware.
   * Configura la dirección utilizando jumpers en los pines MS1 y MS2.
   * Dirección | MS1  | MS2
   *       0 | LOW  | LOW
   *       1 | HIGH | LOW
   *       2 | LOW  | HIGH
   *       3 | HIGH | HIGH
   *
   * Establece *_SERIAL_TX_PIN y *_SERIAL_RX_PIN para que coincidan en todos los controladores
   * en el mismo puerto serie, ya sea aquí o en el archivo de pines de tu placa.
   */
  //#define  X_SLAVE_ADDRESS 0
  //#define  Y_SLAVE_ADDRESS 0
  //#define  Z_SLAVE_ADDRESS 0
  //#define X2_SLAVE_ADDRESS 0
  //#define Y2_SLAVE_ADDRESS 0
  //#define Z2_SLAVE_ADDRESS 0
  //#define Z3_SLAVE_ADDRESS 0
  //#define Z4_SLAVE_ADDRESS 0
  //#define  I_SLAVE_ADDRESS 0
  //#define  J_SLAVE_ADDRESS 0
  //#define  K_SLAVE_ADDRESS 0
  //#define  U_SLAVE_ADDRESS 0
  //#define  V_SLAVE_ADDRESS 0
  //#define  W_SLAVE_ADDRESS 0
  //#define E0_SLAVE_ADDRESS 0
  //#define E1_SLAVE_ADDRESS 0
  //#define E2_SLAVE_ADDRESS 0
  //#define E3_SLAVE_ADDRESS 0
  //#define E4_SLAVE_ADDRESS 0
  //#define E5_SLAVE_ADDRESS 0
  //#define E6_SLAVE_ADDRESS 0
  //#define E7_SLAVE_ADDRESS 0

  // @section tmc/smart

  /**
   * Habilitar mediante software
   *
   * Utiliza esta opción para controladores que no utilizan un pin de habilitación dedicado,
   * sino que manejan la misma función a través de una línea de comunicación como SPI o UART.
   */
  //#define SOFTWARE_DRIVER_ENABLE

  // @section tmc/stealthchop

  /**
   * Solo para TMC2130, TMC2160, TMC2208, TMC2209, TMC5130 y TMC5160
   * Utiliza el modo de paso ultra silencioso de Trinamic.
   * Cuando está desactivado, Marlin utilizará el modo de paso spreadCycle.
   */
  #if HAS_STEALTHCHOP
    #define STEALTHCHOP_XY
    #define STEALTHCHOP_Z
    #define STEALTHCHOP_I
    #define STEALTHCHOP_J
    #define STEALTHCHOP_K
    #define STEALTHCHOP_U
    #define STEALTHCHOP_V
    #define STEALTHCHOP_W
    #define STEALTHCHOP_E
  #endif

  /**
   * Optimiza los parámetros de chopper de spreadCycle utilizando conjuntos de parámetros predefinidos
   * o con la ayuda de un ejemplo incluido en la biblioteca.
   * Los conjuntos de parámetros proporcionados son:
   * CHOPPER_DEFAULT_12V
   * CHOPPER_DEFAULT_19V
   * CHOPPER_DEFAULT_24V
   * CHOPPER_DEFAULT_36V
   * CHOPPER_09STEP_24V   // Motores paso a paso de 0.9 grados (24V)
   * CHOPPER_PRUSAMK3_24V // Parámetros importados del firmware oficial de Průša para MK3 (24V)
   * CHOPPER_MARLIN_119   // Valores predeterminados antiguos de Marlin v1.1.9
   *
   * Define los tuyos propios con:
   * { <off_time[1..15]>, <hysteresis_end[-3..12]>, hysteresis_start[1..8] }
   */
  #define CHOPPER_TIMING CHOPPER_DEFAULT_12V        // Todos los ejes (anulación a continuación)
  //#define CHOPPER_TIMING_X  CHOPPER_TIMING        // Para ejes X (anulación a continuación)
  //#define CHOPPER_TIMING_X2 CHOPPER_TIMING_X
  //#define CHOPPER_TIMING_Y  CHOPPER_TIMING        // Para ejes Y (anulación a continuación)
  //#define CHOPPER_TIMING_Y2 CHOPPER_TIMING_Y
  //#define CHOPPER_TIMING_Z  CHOPPER_TIMING        // Para ejes Z (anulación a continuación)
  //#define CHOPPER_TIMING_Z2 CHOPPER_TIMING_Z
  //#define CHOPPER_TIMING_Z3 CHOPPER_TIMING_Z
  //#define CHOPPER_TIMING_Z4 CHOPPER_TIMING_Z
  //#define CHOPPER_TIMING_I  CHOPPER_TIMING        // Para eje I
  //#define CHOPPER_TIMING_J  CHOPPER_TIMING        // Para eje J
  //#define CHOPPER_TIMING_K  CHOPPER_TIMING        // Para eje K
  //#define CHOPPER_TIMING_U  CHOPPER_TIMING        // Para eje U
  //#define CHOPPER_TIMING_V  CHOPPER_TIMING        // Para eje V
  //#define CHOPPER_TIMING_W  CHOPPER_TIMING        // Para eje W
  //#define CHOPPER_TIMING_E  CHOPPER_TIMING        // Para extrusoras (anulación a continuación)
  //#define CHOPPER_TIMING_E1 CHOPPER_TIMING_E
  //#define CHOPPER_TIMING_E2 CHOPPER_TIMING_E
  //#define CHOPPER_TIMING_E3 CHOPPER_TIMING_E
  //#define CHOPPER_TIMING_E4 CHOPPER_TIMING_E
  //#define CHOPPER_TIMING_E5 CHOPPER_TIMING_E
  //#define CHOPPER_TIMING_E6 CHOPPER_TIMING_E
  //#define CHOPPER_TIMING_E7 CHOPPER_TIMING_E

  // @section tmc/status

  /**
   * Monitorear los controladores Trinamic
   * para detectar condiciones de error como sobrecalentamiento y cortocircuito a tierra.
   * Para gestionar el sobrecalentamiento, Marlin puede disminuir la corriente del controlador hasta que se resuelva la condición de error.
   * Otras condiciones detectadas pueden usarse para detener la impresión actual.
   * G-codes relevantes:
   * M906: Establecer o obtener la corriente del motor en miliamperios utilizando los códigos de eje X, Y, Z, E. Informar los valores si no se proporcionan códigos de eje.
   * M911: Informar la condición de advertencia previa de sobrecalentamiento del controlador de paso a paso.
   * M912: Borrar la bandera de condición de advertencia previa de sobrecalentamiento del controlador de paso a paso.
   * M122: Informar los parámetros del controlador (requiere TMC_DEBUG)
   */
  //#define MONITOR_DRIVER_STATUS

  #if ENABLED(MONITOR_DRIVER_STATUS)
    #define CURRENT_STEP_DOWN     50  // [mA]
    #define REPORT_CURRENT_CHANGE
    #define STOP_ON_ERROR
  #endif

  // @section tmc/hybrid

  /**
   * TMC2130, TMC2160, TMC2208, TMC2209, TMC5130 y TMC5160 solamente
   * El controlador cambiará a spreadCycle cuando la velocidad del motor paso a paso supere HYBRID_THRESHOLD.
   * Este modo permite movimientos más rápidos a expensas de niveles de ruido más altos.
   * STEALTHCHOP_(XY|Z|E) debe estar habilitado para usar HYBRID_THRESHOLD.
   * M913 X/Y/Z/E para ajustar la configuración en vivo.
   */
  //#define HYBRID_THRESHOLD

  #define X_HYBRID_THRESHOLD     100  // [mm/s]
  #define X2_HYBRID_THRESHOLD    100
  #define Y_HYBRID_THRESHOLD     100
  #define Y2_HYBRID_THRESHOLD    100
  #define Z_HYBRID_THRESHOLD     3
  #define Z2_HYBRID_THRESHOLD    3
  #define Z3_HYBRID_THRESHOLD    3
  #define Z4_HYBRID_THRESHOLD    3
  #define I_HYBRID_THRESHOLD     3  // [lineal=mm/s, rotacional=°/s]
  #define J_HYBRID_THRESHOLD     3  // [lineal=mm/s, rotacional=°/s]
  #define K_HYBRID_THRESHOLD     3  // [lineal=mm/s, rotacional=°/s]
  #define U_HYBRID_THRESHOLD     3  // [mm/s]
  #define V_HYBRID_THRESHOLD     3
  #define W_HYBRID_THRESHOLD     3
  #define E0_HYBRID_THRESHOLD    30
  #define E1_HYBRID_THRESHOLD    30
  #define E2_HYBRID_THRESHOLD    30
  #define E3_HYBRID_THRESHOLD    30
  #define E4_HYBRID_THRESHOLD    30
  #define E5_HYBRID_THRESHOLD    30
  #define E6_HYBRID_THRESHOLD    30
  #define E7_HYBRID_THRESHOLD    30

  /**
   * Utilizar StallGuard para homing / sonda en X, Y, Z.
   *
   * TMC2130, TMC2160, TMC2209, TMC2660, TMC5130 y TMC5160 solamente
   * Conectar el pin DIAG1 del controlador del motor paso a paso al pin de final de carrera X/Y.
   * El homing de X, Y y Z siempre se realizará en modo spreadCycle.
   *
   * X/Y/Z_STALL_SENSITIVITY es el umbral de detección de stall por defecto.
   * Utilizar M914 X Y Z para ajustar el umbral de stall en tiempo de ejecución:
   *
   *  Sensibilidad   TMC2209   Otros
   *    MÁS ALTA      255      -64    (Demasiado sensible => Falsos positivos)
   *    MÁS BAJA        0        63    (Demasiado insensible => Sin activación)
   *
   * Se recomienda establecer HOMING_BUMP_MM en {0, 0, 0 }.
   *
   * SPI_ENDSTOPS  *** Solo TMC2130/TMC5160 ***
   * Consultar al controlador a través de SPI para determinar la carga durante el homing.
   * Elimina la necesidad de un cable desde DIAG1 hasta un pin de final de carrera.
   *
   * IMPROVE_HOMING_RELIABILITY ajusta la aceleración y el jerk al realizar el homing 
   * y agrega un período de guardia para la activación del final de carrera.
   *
   * Comentar *_STALL_SENSITIVITY para deshabilitar el homing sin sensor para ese eje.
   * @section tmc/stallguard
   */
  //#define SENSORLESS_HOMING // Solo controladores compatibles con StallGuard

  #if ANY(SENSORLESS_HOMING, SENSORLESS_PROBING)
    // TMC2209: 0...255. TMC2130: -64...63
    #define X_STALL_SENSITIVITY   8
    #define X2_STALL_SENSITIVITY  X_STALL_SENSITIVITY
    #define Y_STALL_SENSITIVITY   8
    #define Y2_STALL_SENSITIVITY  Y_STALL_SENSITIVITY
    //#define Z_STALL_SENSITIVITY   8
    //#define Z2_STALL_SENSITIVITY  Z_STALL_SENSITIVITY
    //#define Z3_STALL_SENSITIVITY  Z_STALL_SENSITIVITY
    //#define Z4_STALL_SENSITIVITY  Z_STALL_SENSITIVITY
    //#define I_STALL_SENSITIVITY   8
    //#define J_STALL_SENSITIVITY   8
    //#define K_STALL_SENSITIVITY   8
    //#define U_STALL_SENSITIVITY   8
    //#define V_STALL_SENSITIVITY   8
    //#define W_STALL_SENSITIVITY   8
    //#define SPI_ENDSTOPS              // Solo TMC2130/TMC5160
    //#define IMPROVE_HOMING_RELIABILITY
  #endif

  // @section tmc/config

  /**
   * Fase de homing del motor paso a paso TMC.
   *
   * Mejora la repetibilidad del homing al homing a la posición absoluta de fase más cercana de la bobina del motor.
   * Los controladores Trinamic utilizan una tabla de fase del motor paso a paso con 
   * 1024 valores que abarcan 4 pasos completos con 256 posiciones cada uno (es decir, 1024 posiciones).
   * Las posiciones de paso completo (128, 384, 640, 896) tienen el mayor par de retención.
   *
   * Valores de 0 a 1023, -1 para deshabilitar la fase de homing para ese eje.
   */
   //#define TMC_HOME_PHASE { 896, 896, 896 }

  /**
   * Dar paso tanto en el flanco ascendente como en el descendente de las señales (como una onda cuadrada).
   */
  //#define EDGE_STEPPING

  /**
   * Habilitar el comando de depuración M122 para los controladores de motor paso a paso TMC.
   * M122 S0/1 habilitará el informe continuo.
   */
  //#define TMC_DEBUG

  /**
   * Puedes establecer tu propia configuración avanzada llenando las funciones predefinidas.
   * Una lista de funciones disponibles se puede encontrar en la página de GitHub de la biblioteca
   * https://github.com/teemuatlut/TMCStepper
   *
   * Ejemplo:
   * #define TMC_ADV() { \
   *   stepperX.diag0_otpw(1); \
   *   stepperY.intpol(0); \
   * }
   */
  #define TMC_ADV() {  }

#endif // HAS_TRINAMIC_CONFIG || HAS_TMC26X

// @section i2cbus

//
// ID maestro de I2C para LCD LPC176x y control de corriente digital
// No se aplica a otros periféricos basados en la biblioteca Wire.
//
//#define I2C_MASTER_ID  1  // Establecer un valor de 0 a 2

/**
 * BUS TWI/I2C
 *
 * Esta característica es experimental, por lo que no debe utilizarse en máquinas de producción.
 * Al habilitar esto, podrás enviar y recibir datos I2C desde 
 * dispositivos esclavos en el bus.
 *
 * ; Ejemplo #1
 * ; Esta macro envía la cadena "Marlin" al dispositivo esclavo con dirección 0x63 (99)
 * ; Utiliza múltiples comandos M260 con un argumento B<base 10>
 * M260 A99  ; Dirección del esclavo objetivo
 * M260 B77  ; M
 * M260 B97  ; a
 * M260 B114 ; r
 * M260 B108 ; l
 * M260 B105 ; i
 * M260 B110 ; n
 * M260 S1   ; Enviar el búfer actual
 *
 * ; Ejemplo #2
 * ; Solicitar 6 bytes al dispositivo esclavo con dirección 0x63 (99)
 * M261 A99 B5
 *
 * ; Ejemplo #3
 * ; Ejemplo de salida serie de una solicitud M261
 * echo:i2c-reply: from:99 bytes:5 data:hello
 */

//#define EXPERIMENTAL_I2CBUS
#if ENABLED(EXPERIMENTAL_I2CBUS)
  #define I2C_SLAVE_ADDRESS  0  // Establecer un valor de 8 a 127 para actuar como esclavo
#endif

// @section photo

/**
 * Código G para fotografía
 * Agrega el código G M240 para tomar una fotografía.
 * La fotografía puede ser activada por un pin digital o un movimiento físico.
 */
//#define PHOTO_GCODE
#if ENABLED(PHOTO_GCODE)
  // Una posición a la que moverse (y elevar Z) antes de tomar la fotografía
  //#define PHOTO_POSITION { X_MAX_POS - 5, Y_MAX_POS, 0 }  // { xpos, ypos, zraise } (M240 X Y Z)
  //#define PHOTO_DELAY_MS   100                            // (ms) Duración de la pausa antes de moverse de nuevo (M240 P)
  //#define PHOTO_RETRACT_MM   6.5                          // (mm) Retraer/recuperar E para el movimiento de la fotografía (M240 R S)

  // Disparador de cámara digital Canon RC-1 o casero
  // Datos obtenidos de: https://www.doc-diy.net/photo/rc-1_hacked/
  //#define PHOTOGRAPH_PIN 23

  // Kit de desarrollo de modificación de Canon Hack
  // https://captain-slow.dk/2014/03/09/3d-printing-timelapses/
  //#define CHDK_PIN        4

  // Segundo movimiento opcional con retraso para activar el disparador de la cámara
  //#define PHOTO_SWITCH_POSITION { X_MAX_POS, Y_MAX_POS }  // { xpos, ypos } (M240 I J)

  // Duración para mantener el interruptor o mantener CHDK_PIN en alto
  //#define PHOTO_SWITCH_MS   50 // (ms) (M240 D)

  /**
   * PHOTO_PULSES_US puede requerir ajustes dependiendo de la placa y el modelo de la cámara.
   * El pin debe funcionar a 48,4 kHz.
   * Asegúrate de usar un PHOTOGRAPH_PIN que pueda subir y bajar lo suficientemente rápido.
   * (por ejemplo, el pin del sensor de temperatura MKS SBase era demasiado lento, así que se usó P1.23 en J8).
   *
   * Ejemplo de datos de pulsos para Nikon: https://bit.ly/2FKD0Aq
   * Cableado IR: https://git.io/JvJf7
   */
  //#define PHOTO_PULSES_US { 2000, 27850, 400, 1580, 400, 3580, 400 }  // (µs) Duraciones para cada oscilación de 48,4 kHz
  #ifdef PHOTO_PULSES_US
    #define PHOTO_PULSE_DELAY_US 13 // (µs) Duración aproximada de cada pulso ALTO y BAJO en la oscilación
    #endif
#endif

// @section cnc

/**
 * Control del husillo y láser
 *
 * Agrega los comandos M3, M4 y M5 para encender y apagar el husillo/láser, y para establecer
 * la velocidad del husillo, la dirección del husillo y la potencia del láser.
 *
 * SuperPid es un controlador de velocidad de router/husillo utilizado en la comunidad de fresado CNC.
 * Marlin se puede utilizar para encender y apagar el husillo. También se puede utilizar para establecer
 * la velocidad del husillo de 5,000 a 30,000 RPM.
 *
 * Deberás seleccionar un pin para la función de encendido/apagado y opcionalmente elegir un pin PWM de
 * hardware de 0-5V para el control de velocidad y un pin para la dirección de rotación.
 *
 * Consulta https://marlinfw.org/docs/configuration/2.0.9/laser_spindle.html para obtener más detalles de configuración.
 */
//#define SPINDLE_FEATURE
//#define LASER_FEATURE
#if ANY(SPINDLE_FEATURE, LASER_FEATURE)
  #define SPINDLE_LASER_ACTIVE_STATE    LOW    // Establecer en "HIGH" si SPINDLE_LASER_ENA_PIN está activo en HIGH

  #define SPINDLE_LASER_USE_PWM                // Habilitar si tu controlador admite configurar la velocidad/potencia
  #if ENABLED(SPINDLE_LASER_USE_PWM)
    #define SPINDLE_LASER_PWM_INVERT    false  // Establecer en "true" si la velocidad/potencia aumenta cuando se desea que sea más lenta
    #define SPINDLE_LASER_FREQUENCY     2500   // (Hz) Frecuencia del husillo/láser (solo en HALs compatibles: AVR, ESP32 y LPC)
                                               // ESP32: Si SPINDLE_LASER_PWM_PIN está integrado, entonces <=78125Hz. Para el expansor I2S
                                               // la frecuencia determina la resolución PWM. 2500Hz = 0-100, 977Hz = 0-255, ...
                                               // (250000 / SPINDLE_LASER_FREQUENCY) = valor máximo.
  #endif

  //#define AIR_EVACUATION                     // Control de motor de vacío / soplador láser con los códigos G M10-M11
  #if ENABLED(AIR_EVACUATION)
    #define AIR_EVACUATION_ACTIVE       LOW    // Establecer en "HIGH" si la función de encendido/apagado está activa en HIGH
    //#define AIR_EVACUATION_PIN        42     // Anular el pin predeterminado de vacío de fresa o soplador láser
  #endif

  //#define AIR_ASSIST                         // Control de asistencia de aire con los códigos G M8-M9
  #if ENABLED(AIR_ASSIST)
    #define AIR_ASSIST_ACTIVE           LOW    // Estado activo en el pin de asistencia de aire
    //#define AIR_ASSIST_PIN            44     // Anular el pin predeterminado de asistencia de aire
  #endif

  //#define SPINDLE_SERVO                      // Un servomotor que convierte un ángulo en potencia del husillo
  #ifdef SPINDLE_SERVO
    #define SPINDLE_SERVO_NR   0               // Índice del servomotor utilizado para el control del husillo
    #define SPINDLE_SERVO_MIN 10               // Ángulo mínimo para el husillo del servomotor
  #endif

  /**
   * La velocidad/potencia se puede establecer ('M3 S') y mostrar en términos de:
   *  - PWM255  (S0 - S255)
   *  - PERCENT (S0 - S100)
   *  - RPM     (S0 - S50000)  Mejor para usar con un husillo
   *  - SERVO   (S0 - S180)
   */
  #define CUTTER_POWER_UNIT PWM255

  /**
   * Potencia relativa de la fresa
   * Normalmente, 'M3 O<power>' establece
   * OCR la potencia es relativa al rango SPEED_POWER_MIN...SPEED_POWER_MAX.
   * por lo tanto, las potencias de entrada de 0...255 corresponden a SPEED_POWER_MIN...SPEED_POWER_MAX
   * en lugar del rango normal (0 a SPEED_POWER_MAX).
   * Mejor usar con (por ejemplo) el controlador de router SuperPID: S0 = 5,000 RPM y S255 = 30,000 RPM
   */
  //#define CUTTER_POWER_RELATIVE              // Establecer velocidad proporcional a [SPEED_POWER_MIN...SPEED_POWER_MAX]

  #if ENABLED(SPINDLE_FEATURE)
    //#define SPINDLE_CHANGE_DIR               // Habilitar si tu controlador de husillo puede cambiar la dirección del husillo
    #define SPINDLE_CHANGE_DIR_STOP            // Habilitar si el husillo debe detenerse antes de cambiar la dirección de giro
    #define SPINDLE_INVERT_DIR          false  // Establecer en "true" si la dirección de giro está invertida

    #define SPINDLE_LASER_POWERUP_DELAY   5000 // (ms) Retardo para permitir que el husillo/láser alcance la velocidad/potencia
    #define SPINDLE_LASER_POWERDOWN_DELAY 5000 // (ms) Retardo para permitir que el husillo se detenga

    /**
     * Ecuación de potencia M3/M4
     *
     * Cada herramienta utiliza diferentes rangos de valores para el control de velocidad / potencia.
     * Estos parámetros se utilizan para convertir entre las unidades de potencia de la herramienta y PWM.
     *
     * Velocidad/Potencia = (PWMDC / 255 * 100 - SPEED_POWER_INTERCEPT) / SPEED_POWER_SLOPE
     * PWMDC = (spdpwr - SPEED_POWER_MIN) / (SPEED_POWER_MAX - SPEED_POWER_MIN) / SPEED_POWER_SLOPE
     */
    #if ENABLED(SPINDLE_LASER_USE_PWM)
      #define SPEED_POWER_INTERCEPT       0    // (%) 0-100 es decir, Porcentaje mínimo de potencia
      #define SPEED_POWER_MIN          5000    // (RPM)
      #define SPEED_POWER_MAX         30000    // (RPM) Controlador de router SuperPID 0 - 30,000 RPM
      #define SPEED_POWER_STARTUP     25000    // (RPM) Velocidad/potencia predeterminada de M3/M4 (sin argumentos)
    #endif

  #else

    #if ENABLED(SPINDLE_LASER_USE_PWM)
      #define SPEED_POWER_INTERCEPT       0    // (%) 0-100 es decir, Porcentaje mínimo de potencia
      #define SPEED_POWER_MIN             0    // (%) 0-100
      #define SPEED_POWER_MAX           100    // (%) 0-100
      #define SPEED_POWER_STARTUP        80    // (%) Velocidad/potencia predeterminada de M3/M4 (sin argumentos)
    #endif

    // Define los valores mínimos y máximos de tiempo de pulso de prueba para una función de disparo de láser de prueba
    #define LASER_TEST_PULSE_MIN           1   // (ms) Utilizado con el menú de control del láser
    #define LASER_TEST_PULSE_MAX         999   // (ms) Precaución: el menú puede no mostrar más de 3 caracteres

    #define SPINDLE_LASER_POWERUP_DELAY   50   // (ms) Retardo para permitir que el husillo/láser alcance la velocidad/potencia
    #define SPINDLE_LASER_POWERDOWN_DELAY 50   // (ms) Retardo para permitir que el husillo se detenga

   /**
    * Tiempo de espera de seguridad del láser
    *
    * El láser debe apagarse cuando no haya movimiento durante un período de tiempo.
    * Ten en cuenta la inflamabilidad del material, la velocidad de corte y el orden del G-code al establecer este
    * valor. Si es demasiado bajo, podría apagarse durante un movimiento muy lento; si es demasiado alto,
    * el material podría encenderse.
    */
    #define LASER_SAFETY_TIMEOUT_MS     1000   // (ms)

    /**
     * Cualquier comando M3 o G1/2/3/5 con el parámetro 'I' habilita el modo de potencia continua en línea.
     *
     * p.ej., 'M3 I' habilita la potencia continua en línea que se procesa por el planificador.
     * La potencia se almacena en bloques de movimiento y se aplica cuando los bloques son procesados por el ISR del stepper.
     *
     * 'M4 I' establece el modo dinámico que utiliza la velocidad de avance actual para calcular un valor OCR de potencia láser.
     *
     * Cualquier movimiento en modo dinámico utilizará la velocidad de avance actual para calcular la potencia láser.
     * Las velocidades de avance se establecen mediante el parámetro F de un comando de movimiento, p.ej., G1 X0 Y10 F6000
     * La potencia láser se calcularía mediante desplazamiento de bits de los 8 LSB. En binario esto es div 256.
     * La fórmula nos da valores de OCR de 0 a 255, los valores superiores a F65535 se establecerán como 255.
     * El control de potencia más refinado, como la compensación de aceleración/desaceleración, se abordará en futuras versiones.
     *
     * M5 I borra el modo en línea y establece la potencia en 0, M5 establece la salida de potencia en 0 pero deja el modo en línea activado.
     */

    /**
     *Habilitar comandos M3 para sincronización del planificador de potencia en línea en modo láser.
     * Esta función permite que cualquier valor M3 S se inyecte en los buffers de bloque mientras se encuentra en
     * CUTTER_MODE_CONTINUOUS. La opción permite que la potencia láser M3 se confirme sin esperar
     * una sincronización del planificador
     */
    //#define LASER_POWER_SYNC

    /**
     * Escala la potencia del láser en proporción a la velocidad de movimiento.
     *
     * - Establece la potencia de entrada proporcional a la velocidad de entrada sobre la velocidad nominal.
     * - Aumenta la potencia gradualmente cada N pasos para aproximar el trapezoide de velocidad.
     * - Debido a la resolución limitada de potencia, esto es solo una aproximación.
     */
    //#define LASER_POWER_TRAP

    //
    // Amperímetro láser I2C (Módulo INA226 de bajo/alto lado de alta precisión)
    //
    //#define I2C_AMMETER
    #if ENABLED(I2C_AMMETER)
      #define I2C_AMMETER_IMAX            0.1    // (Amperios) Valor de calibración para el rango de corriente esperado
      #define I2C_AMMETER_SHUNT_RESISTOR  0.1    // (Ohmios) Valor de resistencia shunt de calibración
    #endif

    //
    // Medidor de flujo de refrigerante láser
    //
    //#define LASER_COOLANT_FLOW_METER
    #if ENABLED(LASER_COOLANT_FLOW_METER)
      #define FLOWMETER_PIN         20  // Requiere un pin habilitado para interrupción externa (p. ej., RAMPS 2,3,18,19,20,21)
      #define FLOWMETER_PPL       5880  // (pulsos/litro) Pulso del medidor de flujo por litro en el pin de entrada
      #define FLOWMETER_INTERVAL  1000  // (ms) Intervalo de cálculo de velocidad de flujo en milisegundos
      #define FLOWMETER_SAFETY          // Evitar que el láser se ejecute sin el flujo mínimo establecido a continuación
      #if ENABLED(FLOWMETER_SAFETY)
        #define FLOWMETER_MIN_LITERS_PER_MINUTE 1.5 // (litros/min) Flujo mínimo requerido cuando está habilitado
      #endif
    #endif

  #endif
#endif // SPINDLE_FEATURE || LASER_FEATURE

/**
 * Control láser sincrónico con M106/M107
 *
 * Marlin normalmente aplica las velocidades de ventilador M106/M107 "poco después" de procesar
 * un bloque del planificador. Esto es demasiado impreciso para un láser PWM/TTL conectado al encabezado del ventilador
 * (como en algunos kits de láser adicionales). Habilita esta opción para establecer las velocidades de ventilador/láser
 * con un tiempo mucho más preciso para mejorar la fidelidad de impresión.
 *
 * NOTA: Esta opción sacrifica algunas opciones de velocidad de ventilador de enfriamiento.
 */
//#define LASER_SYNCHRONOUS_M106_M107

/**
 * Control de Refrigerante
 *
 * Agrega los comandos M7, M8 y M9 para encender y apagar el refrigerante por niebla o inundación.
 *
 * Nota: También se deben definir COOLANT_MIST_PIN y/o COOLANT_FLOOD_PIN.
 */
//#define COOLANT_CONTROL
#if ENABLED(COOLANT_CONTROL)
  #define COOLANT_MIST                // Habilitar si se utiliza refrigerante por niebla
  #define COOLANT_FLOOD               // Habilitar si se utiliza refrigerante por inundación
  #define COOLANT_MIST_INVERT  false  // Establecer "true" si la función de encendido/apagado está invertida
  #define COOLANT_FLOOD_INVERT false  // Establecer "true" si la función de encendido/apagado está invertida
#endif

// @section Ancho de filamento

/**
 * Sensor de Ancho de Filamento
 *
 * Mide el ancho del filamento en tiempo real y ajusta
 * la velocidad de flujo para compensar cualquier irregularidad.
 *
 * También permite que el diámetro del filamento medido establezca
 * la velocidad de extrusión, de modo que el generador de instrucciones
 * de corte solo tenga que especificar el volumen.
 *
 * Solo se admite un extrusor en este momento.
 *
 *  34 RAMPS_14    : Entrada analógica 5 en el conector AUX2
 *  81 PRINTRBOARD : Entrada analógica 2 en el conector Exp1 (versión B, C, D, E)
 * 301 RAMBO       : Entrada analógica 3
 *
 * Nota: Puede requerir la definición de pines analógicos para otras placas.
 */
//#define FILAMENT_WIDTH_SENSOR

#if ENABLED(FILAMENT_WIDTH_SENSOR)
  #define FILAMENT_SENSOR_EXTRUDER_NUM 0    // Índice del extrusor que tiene el sensor de filamento. :[0,1,2,3,4]
  #define MEASUREMENT_DELAY_CM        14    // (cm) La distancia desde el sensor de filamento hasta la cámara de fusión

  #define FILWIDTH_ERROR_MARGIN        1.0  // (mm) Si una medida difiere demasiado del ancho nominal, se ignora
  #define MAX_MEASUREMENT_DELAY       20    // (bytes) Tamaño del búfer para las medidas almacenadas (1 byte por cm). Debe ser mayor que MEASUREMENT_DELAY_CM.

  #define DEFAULT_MEASURED_FILAMENT_DIA DEFAULT_NOMINAL_FILAMENT_DIA // Establecer el diámetro medido como nominal inicialmente

  // Mostrar el ancho del filamento en la línea de estado del LCD. Los mensajes de estado expirarán después de 5 segundos.
  //#define FILAMENT_LCD_DISPLAY
#endif

// @section Potencia

/**
 * Monitor de Potencia
 * Monitoriza el voltaje (V) y/o la corriente (A), y, cuando es posible, la potencia (W)
 *
 * Leer y configurar con M430
 *
 * El sensor de corriente alimenta voltaje continuo (relativo a la corriente medida) a un pin analógico
 * El sensor de voltaje alimenta voltaje continuo (relativo al voltaje medido) a un pin analógico
 */
//#define POWER_MONITOR_CURRENT   // Monitorizar la corriente del sistema
//#define POWER_MONITOR_VOLTAGE   // Monitorizar el voltaje del sistema

#if ENABLED(POWER_MONITOR_CURRENT)
  #define POWER_MONITOR_VOLTS_PER_AMP    0.05000  // Voltaje de entrada al pin analógico del MCU por amperio - ¡NO aplicar más que ADC_VREF!
  #define POWER_MONITOR_CURRENT_OFFSET   0        // Desplazamiento (en amperios) aplicado a la corriente calculada
  #define POWER_MONITOR_FIXED_VOLTAGE   13.6      // Voltaje para un sensor de corriente sin sensor de voltaje (para visualización de potencia)
#endif

#if ENABLED(POWER_MONITOR_VOLTAGE)
  #define POWER_MONITOR_VOLTS_PER_VOLT  0.077933  // Voltaje de entrada al pin analógico del MCU por voltio - ¡NO aplicar más que ADC_VREF!
  #define POWER_MONITOR_VOLTAGE_OFFSET  0         // Desplazamiento (en voltios) aplicado al voltaje calculado
#endif

// @section seguridad

/**
 * Protección Anti-SNAFU del Controlador de Pasos
 *
 * Si se define SAFE_POWER_PIN para tu placa, Marlin comprobará
 * que los controladores de pasos estén correctamente conectados antes de aplicar energía.
 * Deshabilita esta protección si tus controladores de pasos no admiten esta función.
 */
//#define DISABLE_DRIVER_SAFE_POWER_PROTECT

// @section cnc

/**
 * Sistemas de Coordenadas CNC
 *
 * Permite los comandos G53 y G54-G59.3 para seleccionar sistemas de coordenadas
 * y G92.1 para restablecer el espacio de trabajo al espacio nativo de la máquina.
 */
//#define CNC_COORDINATE_SYSTEMS

// @section reporte

/**
 * Reportar automáticamente la velocidad del ventilador con M123 S<segundos>
 * Requiere ventiladores con pines de tacómetro
 */
//#define AUTO_REPORT_FANS

/**
 * Reportar automáticamente las temperaturas con M155 S<segundos>
 */
#define AUTO_REPORT_TEMPERATURES
#if ENABLED(AUTO_REPORT_TEMPERATURES) && TEMP_SENSOR_REDUNDANT
  //#define AUTO_REPORT_REDUNDANT // Incluir el sensor "R" en el reporte automático
#endif

/**
 * Reportar automáticamente la posición con M154 S<segundos>
 */
//#define AUTO_REPORT_POSITION
#if ENABLED(AUTO_REPORT_POSITION)
  //#define AUTO_REPORT_REAL_POSITION // Reportar la posición real automáticamente
#endif

/**
 * Incluir capacidades en la salida de M115
 */
#define EXTENDED_CAPABILITIES_REPORT
#if ENABLED(EXTENDED_CAPABILITIES_REPORT)
  //#define M115_GEOMETRY_REPORT
#endif

// @section seguridad

/**
 * Verificación esperada de la impresora
 * Agrega el código G M16 para comparar una cadena con el MACHINE_NAME.
 * M16 con una cadena no coincidente hace que la impresora se detenga.
 */
//#define EXPECTED_PRINTER_CHECK

// @section volumétricos

/**
 * Desactivar todas las opciones de extrusión volumétrica
 */
//#define NO_VOLUMETRICS

#if DISABLED(NO_VOLUMETRICS)
  /**
   * Estado predeterminado de la extrusión volumétrica
   * Activa para hacer que la extrusión volumétrica sea el método predeterminado,
   * con DEFAULT_NOMINAL_FILAMENT_DIA como diámetro predeterminado.
   *
   * M200 D0 para desactivar, M200 Dn para establecer un nuevo diámetro (y habilitar la extrusión volumétrica).
   * M200 S0/S1 para desactivar/activar la extrusión volumétrica.
   */
  //#define VOLUMETRIC_DEFAULT_ON

  //#define VOLUMETRIC_EXTRUDER_LIMIT
  #if ENABLED(VOLUMETRIC_EXTRUDER_LIMIT)
    /**
     * Límite predeterminado de extrusión volumétrica en mm cúbicos por segundo (mm^3/seg).
     * Esta configuración de fábrica se aplica a todos los extrusores.
     * Usa 'M200 [T<extrusor>] L<limit>' para anularlo y 'M502' para restablecer.
     * Un valor distinto de cero activa la limitación de extrusión basada en el volumen.
     */
    #define DEFAULT_VOLUMETRIC_EXTRUDER_LIMIT 0.00      // (mm^3/seg)
    #define VOLUMETRIC_EXTRUDER_LIMIT_MAX     20        // (mm^3/sec)
  #endif
#endif

// @section reporte

// Opciones adicionales para el informe de "Posición actual" M114
//#define M114_DETAIL         // Usar 'M114' para detalles y verificar los cálculos del planificador
//#define M114_REALTIME       // Posición actual real basada en cinemática directa
//#define M114_LEGACY         // M114 se usa para sincronizar en cada llamada. Habilitar si es necesario.

//#define REPORT_FAN_CHANGE   // Informar la nueva velocidad del ventilador cuando se cambia con M106 (y otros)

// @section gcode

/**
 * Usar 28 bytes de SRAM para optimizar el parser de G-code
 */
#define FASTER_GCODE_PARSER

#if ENABLED(FASTER_GCODE_PARSER)
  //#define GCODE_QUOTED_STRINGS  // Soporte para parámetros de cadena entre comillas
#endif

// Soporte para la compresión de G-code MeatPack (https://github.com/scottmudge/OctoPrint-MeatPack)
//#define MEATPACK_ON_SERIAL_PORT_1
//#define MEATPACK_ON_SERIAL_PORT_2

//#define GCODE_CASE_INSENSITIVE  // Aceptar G-code enviado al firmware en minúsculas

//#define REPETIER_GCODE_M360     // Agregar comandos originalmente de Repetier FW

/**
 * Habilita esta opción para una compilación más liviana de Marlin que elimina todos
 * los desplazamientos del espacio de trabajo, simplificando las transformaciones de coordenadas, nivelación, etc.
 *  - G92 volverá a su comportamiento de Marlin 1.0.
 */
//#define NO_WORKSPACE_OFFSETS

/**
 * Desactivar M206 y M428 si no necesitas compensación en el origen.
 */
//#define NO_HOME_OFFSETS

/**
 * Opciones de G-code CNC
 * Admite dialectos de G-code de estilo CNC utilizados por cortadoras láser, máquinas de dibujo, etc.
 * Ten en cuenta que las velocidades de avance G0 deben usarse con cuidado para la impresión 3D (si se usan).
 * Las altas velocidades de avance pueden causar vibraciones y dañar la calidad de impresión.
 */
//#define PAREN_COMMENTS      // Soporte para comentarios delimitados por paréntesis
//#define GCODE_MOTION_MODES  // Recordar el modo de movimiento (G0 G1 G2 G3 G5 G38.X) y aplicar a X Y Z E F, etc.

// Habilitar y establecer una velocidad de avance (feedrate) (predeterminada) para todos los movimientos G0
//#define G0_FEEDRATE 3000 // (mm/min)
#ifdef G0_FEEDRATE
  //#define VARIABLE_G0_FEEDRATE // La velocidad de avance (feedrate) G0 se establece mediante F en el modo de movimiento G0
#endif

// @section gcode

/**
 * Comandos de inicio
 *
 * Ejecuta ciertos comandos de G-code inmediatamente después del encendido.
 */
//#define STARTUP_COMMANDS "M17 Z"

/**
 * Macros de G-code
 *
 * Agrega los códigos G M810-M819 para definir y ejecutar macros de G-code.
 * Las macros no se guardan en la EEPROM.
 */
//#define GCODE_MACROS
#if ENABLED(GCODE_MACROS)
  #define GCODE_MACROS_SLOTS       5  // Se pueden utilizar hasta 10
  #define GCODE_MACROS_SLOT_SIZE  50  // Longitud máxima de una sola macro
#endif

/**
 * Elementos de menú definidos por el usuario para ejecutar G-code personalizado.
 * Se pueden definir hasta 25, pero el número real depende de la pantalla LCD.
 */

// @section menú principal personalizado

// Menú personalizado: Menú principal
//#define CUSTOM_MENU_MAIN
#if ENABLED(CUSTOM_MENU_MAIN)
  //#define CUSTOM_MENU_MAIN_TITLE "Comandos Personalizados"
  #define CUSTOM_MENU_MAIN_SCRIPT_DONE "M117 Script de Usuario Finalizado"
  #define CUSTOM_MENU_MAIN_SCRIPT_AUDIBLE_FEEDBACK
  //#define CUSTOM_MENU_MAIN_SCRIPT_RETURN   // Volver a la pantalla de estado después de un script
  #define CUSTOM_MENU_MAIN_ONLY_IDLE         // Mostrar el menú personalizado solo cuando la máquina esté inactiva

  #define MAIN_MENU_ITEM_1_DESC "Home e Información UBL"
  #define MAIN_MENU_ITEM_1_GCODE "G28\nG29 W"
  //#define MAIN_MENU_ITEM_1_CONFIRM          // Mostrar un diálogo de confirmación antes de esta acción

  #define MAIN_MENU_ITEM_2_DESC "Precalentar para " PREHEAT_1_LABEL
  #define MAIN_MENU_ITEM_2_GCODE "M140 S" STRINGIFY(PREHEAT_1_TEMP_BED) "\nM104 S" STRINGIFY(PREHEAT_1_TEMP_HOTEND)
  //#define MAIN_MENU_ITEM_2_CONFIRM

  //#define MAIN_MENU_ITEM_3_DESC "Precalentar para " PREHEAT_2_LABEL
  //#define MAIN_MENU_ITEM_3_GCODE "M140 S" STRINGIFY(PREHEAT_2_TEMP_BED) "\nM104 S" STRINGIFY(PREHEAT_2_TEMP_HOTEND)
  //#define MAIN_MENU_ITEM_3_CONFIRM

  //#define MAIN_MENU_ITEM_4_DESC "Calentar Cama/Home/Nivelar"
  //#define MAIN_MENU_ITEM_4_GCODE "M140 S" STRINGIFY(PREHEAT_2_TEMP_BED) "\nG28\nG29"
  //#define MAIN_MENU_ITEM_4_CONFIRM

  //#define MAIN_MENU_ITEM_5_DESC "Home e Información"
  //#define MAIN_MENU_ITEM_5_GCODE "G28\nM503"
  //#define MAIN_MENU_ITEM_5_CONFIRM
#endif

// @section menú de configuración personalizado

// Menú personalizado: Menú de configuración
//#define CUSTOM_MENU_CONFIG
#if ENABLED(CUSTOM_MENU_CONFIG)
  //#define CUSTOM_MENU_CONFIG_TITLE "Comandos Personalizados"
  #define CUSTOM_MENU_CONFIG_SCRIPT_DONE "M117 Script Inalámbrico Finalizado"
  #define CUSTOM_MENU_CONFIG_SCRIPT_AUDIBLE_FEEDBACK
  //#define CUSTOM_MENU_CONFIG_SCRIPT_RETURN  // Volver a la pantalla de estado después de un script
  #define CUSTOM_MENU_CONFIG_ONLY_IDLE        // Mostrar el menú personalizado solo cuando la máquina esté inactiva

  #define CONFIG_MENU_ITEM_1_DESC "Wifi ON"
  #define CONFIG_MENU_ITEM_1_GCODE "M118 [ESP110] WIFI-STA pwd=12345678"
  //#define CONFIG_MENU_ITEM_1_CONFIRM        // Mostrar un diálogo de confirmación antes de esta acción

  #define CONFIG_MENU_ITEM_2_DESC "Bluetooth ON"
  #define CONFIG_MENU_ITEM_2_GCODE "M118 [ESP110] BT pwd=12345678"
  //#define CONFIG_MENU_ITEM_2_CONFIRM

  //#define CONFIG_MENU_ITEM_3_DESC "Radio OFF"
  //#define CONFIG_MENU_ITEM_3_GCODE "M118 [ESP110] OFF pwd=12345678"
  //#define CONFIG_MENU_ITEM_3_CONFIRM

  //#define CONFIG_MENU_ITEM_4_DESC "Wifi ????"
  //#define CONFIG_MENU_ITEM_4_GCODE "M118 ????"
  //#define CONFIG_MENU_ITEM_4_CONFIRM

  //#define CONFIG_MENU_ITEM_5_DESC "Wifi ????"
  //#define CONFIG_MENU_ITEM_5_GCODE "M118 ????"
  //#define CONFIG_MENU_ITEM_5_CONFIRM
#endif

// @section botones personalizados

/**
 * Botones definidos por el usuario para ejecutar G-code personalizado.
 * Se pueden definir hasta 25.
 */
//#define CUSTOM_USER_BUTTONS
#if ENABLED(CUSTOM_USER_BUTTONS)
  //#define BUTTON1_PIN -1
  #if PIN_EXISTS(BUTTON1)
    #define BUTTON1_HIT_STATE     LOW       // Estado del botón activado. NC=LOW. NO=HIGH.
    #define BUTTON1_WHEN_PRINTING false     // ¿Se permite que el botón se active durante la impresión?
    #define BUTTON1_GCODE         "G28"
    #define BUTTON1_DESC          "Homing"  // Cadena opcional para establecer el estado LCD
  #endif

  //#define BUTTON2_PIN -1
  #if PIN_EXISTS(BUTTON2)
    #define BUTTON2_HIT_STATE     LOW
    #define BUTTON2_WHEN_PRINTING false
    #define BUTTON2_GCODE         "M140 S" STRINGIFY(PREHEAT_1_TEMP_BED) "\nM104 S" STRINGIFY(PREHEAT_1_TEMP_HOTEND)
    #define BUTTON2_DESC          "Precalentar para " PREHEAT_1_LABEL
  #endif

  //#define BUTTON3_PIN -1
  #if PIN_EXISTS(BUTTON3)
    #define BUTTON3_HIT_STATE     LOW
    #define BUTTON3_WHEN_PRINTING false
    #define BUTTON3_GCODE         "M140 S" STRINGIFY(PREHEAT_2_TEMP_BED) "\nM104 S" STRINGIFY(PREHEAT_2_TEMP_HOTEND)
    #define BUTTON3_DESC          "Precalentar para " PREHEAT_2_LABEL
  #endif
#endif

// @section host

/**
 * Comandos de acción del host
 *
 * Define comandos de acción del host para el flujo de datos en cumplimiento del estándar.
 *
 * Consulta https://reprap.org/wiki/G-code#Action_commands
 * Comandos comunes ........ poweroff, pause, paused, resume, resumed, cancel
 * G29_RETRY_AND_RECOVER .. probe_rewipe, probe_failed
 *
 * Algunas funciones agregan códigos de razón para ampliar estos comandos.
 *
 * El soporte de solicitud del host permite que Marlin use el host para solicitudes al usuario para que
 * la detección de agotamiento de filamento y otros procesos puedan ser administrados desde el lado del host.
 */
//#define HOST_ACTION_COMMANDS
#if ENABLED(HOST_ACTION_COMMANDS)
  //#define HOST_PAUSE_M76                // Indicar al host que haga una pausa en respuesta a M76
  //#define HOST_PROMPT_SUPPORT           // Iniciar solicitudes al host para obtener comentarios del usuario
  #if ENABLED(HOST_PROMPT_SUPPORT)
    //#define HOST_STATUS_NOTIFICATIONS   // Enviar algunos mensajes de estado al host como notificaciones
  #endif
  //#define HOST_START_MENU_ITEM          // Agregar un elemento de menú que indica al host que comience
  //#define HOST_SHUTDOWN_MENU_ITEM       // Agregar un elemento de menú que indica al host que se apague
#endif

// @section extras

/**
 * Cancelar objetos
 *
 * Implementa M486 para permitir que Marlin omita objetos
 */
//#define CANCEL_OBJECTS
#if ENABLED(CANCEL_OBJECTS)
  #define CANCEL_OBJECTS_REPORTING // Emitir el objeto actual como un mensaje de estado
#endif

/**
 * Codificadores de posición I2C para control en bucle cerrado.
 * Desarrollado por Chris Barr en Aus3D.
 *
 * Wiki: https://wiki.aus3d.com.au/Magnetic_Encoder
 * Github: https://github.com/Aus3D/MagneticEncoder
 *
 * Proveedor: https://aus3d.com.au/magnetic-encoder-module
 * Proveedor alternativo: https://reliabuild3d.com/
 *
 * Los codificadores de Reliabuild se han modificado para mejorar la confiabilidad.
 * @section i2c encoders
 */

//#define I2C_POSITION_ENCODERS
#if ENABLED(I2C_POSITION_ENCODERS)

  #define I2CPE_ENCODER_CNT         1                       // Número de codificadores instalados; máximo de 5
                                                            // codificadores admitidos actualmente.

  #define I2CPE_ENC_1_ADDR          I2CPE_PRESET_ADDR_X     // Dirección I2C del codificador. 30-200.
  #define I2CPE_ENC_1_AXIS          X_AXIS                  // Eje en el que se instala el módulo del codificador.  <X|Y|Z|E>_AXIS.
  #define I2CPE_ENC_1_TYPE          I2CPE_ENC_TYPE_LINEAR   // Tipo de codificador: I2CPE_ENC_TYPE_LINEAR -o-
                                                            // I2CPE_ENC_TYPE_ROTARY.
  #define I2CPE_ENC_1_TICKS_UNIT    2048                    // 1024 para tiras magnéticas con polos de 2 mm; 2048 para
                                                            // polos de 1 mm. Para codificadores lineales, estos son pulsos / mm,
                                                            // para codificadores rotativos, estos son pulsos / revolución.
  //#define I2CPE_ENC_1_TICKS_REV     (16 * 200)            // Solo necesario para codificadores rotativos; número de pasos de motor
                                                            // por revolución completa (pasos de motor / rev * microstepping)
  //#define I2CPE_ENC_1_INVERT                              // Invertir la dirección del recorrido del eje.
  #define I2CPE_ENC_1_EC_METHOD     I2CPE_ECM_MICROSTEP     // Tipo de corrección de error de compensación.
  #define I2CPE_ENC_1_EC_THRESH     0.10                    // Tamaño umbral para error (en mm) por encima del cual la
                                                            // impresora intentará corregir el error; se ignoran los errores
                                                            // más pequeños que esto para minimizar los efectos del
                                                            // ruido / latencia de medición (filtro).

  #define I2CPE_ENC_2_ADDR          I2CPE_PRESET_ADDR_Y     // Lo mismo que arriba, pero para el codificador 2.
  #define I2CPE_ENC_2_AXIS          Y_AXIS
  #define I2CPE_ENC_2_TYPE          I2CPE_ENC_TYPE_LINEAR
  #define I2CPE_ENC_2_TICKS_UNIT    2048
  //#define I2CPE_ENC_2_TICKS_REV   (16 * 200)
  //#define I2CPE_ENC_2_INVERT
  #define I2CPE_ENC_2_EC_METHOD     I2CPE_ECM_MICROSTEP
  #define I2CPE_ENC_2_EC_THRESH     0.10

  #define I2CPE_ENC_3_ADDR          I2CPE_PRESET_ADDR_Z     // Codificador 3. Agrega opciones de configuración adicionales
  #define I2CPE_ENC_3_AXIS          Z_AXIS                  // como arriba, o usa los valores predeterminados a continuación.

  #define I2CPE_ENC_4_ADDR          I2CPE_PRESET_ADDR_E     // Codificador 4.
  #define I2CPE_ENC_4_AXIS          E_AXIS

  #define I2CPE_ENC_5_ADDR          34                      // Codificador 5.
  #define I2CPE_ENC_5_AXIS          E_AXIS

  // Configuraciones predeterminadas para los codificadores que están habilitados, pero sin configuraciones especificadas arriba.
  #define I2CPE_DEF_TYPE            I2CPE_ENC_TYPE_LINEAR
  #define I2CPE_DEF_ENC_TICKS_UNIT  2048
  #define I2CPE_DEF_TICKS_REV       (16 * 200)
  #define I2CPE_DEF_EC_METHOD       I2CPE_ECM_NONE
  #define I2CPE_DEF_EC_THRESH       0.1

  //#define I2CPE_ERR_THRESH_ABORT  100.0                   // Tamaño umbral para error (en mm) error en cualquier eje dado
                                                            // después del cual la impresora se detendrá. Comenta para
                                                            // desactivar el comportamiento de detención.

  #define I2CPE_TIME_TRUSTED        10000                   // Después de un fallo del codificador, no debe haber más fallas
                                                            // durante este tiempo (en ms) antes de que se confíe en el codificador
                                                            // nuevamente.

  /**
   * La posición se verifica cada vez que se ejecuta un nuevo comando desde el búfer, pero durante movimientos largos,
   * esta configuración determina el tiempo mínimo de actualización entre verificaciones. Un valor de 100 funciona bien con
   * promedio móvil de error al intentar corregir solo los saltos y no la vibración.
   */
  #define I2CPE_MIN_UPD_TIME_MS     4                       // (ms) Tiempo mínimo entre verificaciones de codificador.

  // Utiliza un promedio móvil para identificar errores persistentes que indican saltos, en lugar de vibración y ruido.
  #define I2CPE_ERR_ROLLING_AVERAGE

#endif // I2C_POSITION_ENCODERS

/**
 * Joystick analógico(s)
 * @section joystick
 */
//#define JOYSTICK
#if ENABLED(JOYSTICK)
  #define JOY_X_PIN    5  // RAMPS: Pin sugerido A5 en AUX2
  #define JOY_Y_PIN   10  // RAMPS: Pin sugerido A10 en AUX2
  #define JOY_Z_PIN   12  // RAMPS: Pin sugerido A12 en AUX2
  #define JOY_EN_PIN  44  // RAMPS: Pin sugerido D44 en AUX2

  //#define INVERT_JOY_X  // Habilitar si la dirección X está invertida
  //#define INVERT_JOY_Y  // Habilitar si la dirección Y está invertida
  //#define INVERT_JOY_Z  // Habilitar si la dirección Z está invertida

  // Usa M119 con JOYSTICK_DEBUG para encontrar valores razonables después de conectar:
  #define JOY_X_LIMITS { 5600, 8190-100, 8190+100, 10800 } // min, inicio de la zona muerta, final de la zona muerta, máx
  #define JOY_Y_LIMITS { 5600, 8250-100, 8250+100, 11000 }
  #define JOY_Z_LIMITS { 4800, 8080-100, 8080+100, 11550 }
  //#define JOYSTICK_DEBUG
#endif

/**
 * Calibración mecánica del puente grúa
 * Reemplazo moderno para la calibración TMC_Z_CALIBRATION de Průša.
 * Agrega la capacidad de trabajar con controladores de corriente ajustables.
 * Implementado como G34 porque M915 está obsoleto.
 * @section calibrate
 */
//#define MECHANICAL_GANTRY_CALIBRATION
#if ENABLED(MECHANICAL_GANTRY_CALIBRATION)
  #define GANTRY_CALIBRATION_CURRENT          600     // Corriente de calibración predeterminada en mA
  #define GANTRY_CALIBRATION_EXTRA_HEIGHT      15     // Distancia extra en mm más allá de Z_###_POS para moverse
  #define GANTRY_CALIBRATION_FEEDRATE         500     // Velocidad de avance para el movimiento de corrección
  //#define GANTRY_CALIBRATION_TO_MIN                 // Habilitar para calibrar Z en la dirección MIN

  //#define GANTRY_CALIBRATION_SAFE_POSITION XY_CENTER // Posición segura para la boquilla
  //#define GANTRY_CALIBRATION_XY_PARK_FEEDRATE 3000  // Velocidad de avance XY - MMM
  //#define GANTRY_CALIBRATION_COMMANDS_PRE   ""
  #define GANTRY_CALIBRATION_COMMANDS_POST  "G28"     // Se recomienda encarecidamente G28 para asegurar una posición precisa
#endif

/**
 * Funcionalidad de congelación / descongelación instantánea
 * Potencialmente útil para una parada de emergencia que permite ser reanudada.
 * @section interface
 */
//#define FREEZE_FEATURE
#if ENABLED(FREEZE_FEATURE)
  //#define FREEZE_PIN 41   // Sobrescribir aquí el pin predeterminado (KILL)
  #define FREEZE_STATE LOW  // Estado del pin que indica la congelación
#endif

/**
 * Matriz de depuración MAX7219
 *
 * Agrega soporte para una matriz de LED de 8x8 de bajo costo basada en el chip Max7219 como una pantalla de estado en tiempo real.
 * Requiere 3 cables de señal. Se incluyen algunas opciones de depuración útiles para demostrar su uso.
 * @section debug matrix
 */
//#define MAX7219_DEBUG
#if ENABLED(MAX7219_DEBUG)
  #define MAX7219_CLK_PIN   64
  #define MAX7219_DIN_PIN   57
  #define MAX7219_LOAD_PIN  44

  //#define MAX7219_GCODE          // Agregar el código G M7219 para controlar la matriz LED
  #define MAX7219_INIT_TEST    2   // Patrón de prueba al iniciar: 0=ninguno, 1=barrido, 2=espiral
  #define MAX7219_NUMBER_UNITS 1   // Número de unidades Max7219 en cadena.
  #define MAX7219_ROTATE       0   // Rotar la pantalla en sentido horario (en múltiplos de +/- 90°)
                                   // conector en:  derecha=0   abajo=-90  arriba=90  izquierda=180
  //#define MAX7219_REVERSE_ORDER  // El orden de las unidades de la matriz LED puede estar invertido
  //#define MAX7219_REVERSE_EACH   // Los LED en cada fila de la unidad de la matriz pueden estar invertidos
  //#define MAX7219_SIDE_BY_SIDE   // Las placas grandes de chip+matriz se pueden encadenar una al lado de la otra

  /**
   * Ejemplos de características de depuración
   * ¡Si agregas más pantallas de depuración, ten cuidado de evitar conflictos!
   */
  #define MAX7219_DEBUG_PRINTER_ALIVE     // Parpadear el LED de la esquina de la matriz de LED de 8x8 para mostrar que el firmware está funcionando
  #define MAX7219_DEBUG_PLANNER_HEAD  2   // Mostrar la posición de la cabeza de la cola de planificación en esta fila de la matriz de LED y en la siguiente
  #define MAX7219_DEBUG_PLANNER_TAIL  4   // Mostrar la posición de la cola de planificación en esta fila de la matriz de LED y en la siguiente

  #define MAX7219_DEBUG_PLANNER_QUEUE 0   // Mostrar la profundidad actual de la cola de planificación en esta fila de la matriz de LED y en la siguiente
                                          // Si experimentas tartamudeos, reinicios, etc., esta opción puede revelar cómo
                                          // las modificaciones realizadas en la configuración están afectando a la impresora en tiempo real.
  #define MAX7219_DEBUG_PROFILE       6   // Mostrar la fracción de tiempo de CPU dedicada al código perfilado en esta fila de la matriz de LED
                                          // Por defecto, se realiza un perfilado de "idle()", por lo que muestra cuán "inactivo" está el procesador.
                                          // Ver clase CodeProfiler.
  //#define MAX7219_DEBUG_MULTISTEPPING 6 // Mostrar el multi-stepping del 1 al 128 en esta fila de la matriz de LED.
#endif

/**
 * Soporte de sincronización NanoDLP
 *
 * Soporte para movimientos sincronizados de Z cuando se usa con NanoDLP. Los movimientos de los ejes G0/G1
 * emitirán una cadena "Z_move_comp" para permitir la sincronización con la exposición del proyector DLP.
 * Esta característica te permite usar [[WaitForDoneMessage]] en lugar de comandos M400.
 * @section nanodlp
 */
//#define NANODLP_Z_SYNC
#if ENABLED(NANODLP_Z_SYNC)
  //#define NANODLP_ALL_AXIS  // Enviar un informe "Z_move_comp" para cualquier movimiento de eje (no solo Z).
#endif

/**
 * Ethernet. Usa M552 para habilitar y configurar la dirección IP.
 * @section network
 */
#if HAS_ETHERNET
  #define MAC_ADDRESS { 0xDE, 0xAD, 0xBE, 0xEF, 0xF0, 0x0D }  // Una dirección MAC única en tu red
#endif

/**
 * Soporte de WiFi (Espressif ESP32 WiFi)
 */
//#define WIFISUPPORT         // Gestión de WiFi integrada en Marlin
//#define ESP3D_WIFISUPPORT   // Gestión de WiFi con la biblioteca ESP3D (https://github.com/luc-github/ESP3DLib)

/**
 * Extras para una placa base basada en ESP32 con WIFISUPPORT
 * Estas opciones no se aplican a módulos WiFi adicionales basados en ESP32 WiFi101.
 */
#if ENABLED(WIFISUPPORT)
  //#define WEBSUPPORT          // Iniciar un servidor web (que puede incluir auto-detección) usando SPIFFS
  //#define OTASUPPORT          // Soporte para actualizaciones de firmware por aire
  //#define WIFI_CUSTOM_COMMAND // Aceptar comandos de configuración de funciones (por ejemplo, WiFi ESP3D) desde el host

  /**
   * Para establecer un SSID / contraseña de WiFi predeterminado, crea un archivo llamado Configuration_Secure.h con
   * las siguientes definiciones personalizadas para tu red. Este archivo específico está excluido a través de
   * .gitignore para evitar que se filtre accidentalmente al público.
   *
   *   #define WIFI_SSID "Nombre de la red WiFi"
   *   #define WIFI_PWD  "Contraseña de la red WiFi"
   */
  //#include "Configuration_Secure.h" // Archivo externo con SSID / contraseña de WiFi
#endif

// @section multi-material

/**
 * Unidad de Material Múltiple (MMU) de Průša
 * Habilitar en Configuration.h
 *
 * Estos dispositivos permiten que un solo controlador de motor paso a paso en la placa controle
 * alimentadores de material múltiple con cualquier número de motores paso a paso.
 */
#if HAS_PRUSA_MMU1
  /**
   * Esta opción solo permite que el multiplexor se cambie al cambiar de herramienta.
   * Las opciones adicionales para configurar movimientos E personalizados están pendientes.
   *
   * Anula los pines de selección DIO predeterminados aquí, si es necesario.
   * Algunos archivos de pines pueden proporcionar valores predeterminados para estos pines.
   */
  //#define E_MUX0_PIN 40  // Siempre requerido
  //#define E_MUX1_PIN 42  // Necesario para 3 a 8 entradas
  //#define E_MUX2_PIN 44  // Necesario para 5 a 8 entradas
#elif HAS_PRUSA_MMU2
  // Puerto serie utilizado para la comunicación con MMU2.
  #define MMU2_SERIAL_PORT 2

  // Utilizar reinicio de hardware para MMU si hay un pin definido para ello
  //#define MMU2_RST_PIN 23

  // Habilitar si el MMU2 tiene motores paso a paso de 12V (MMU2 Firmware 1.0.2 en adelante)
  //#define MMU2_MODE_12V

  // Código G para ejecutar cuando la sonda F.I.N.D.A. de MMU2 detecta falta de filamento
  #define MMU2_FILAMENT_RUNOUT_SCRIPT "M600"

  // Agregar un menú LCD para MMU2
  //#define MMU2_MENUS

  // Configuraciones de carga / descarga de filamento desde el menú LCD.
  // Esto es para extrusoras de estilo Průša MK3. Personalízalo para tu hardware.
  #define MMU2_FILAMENTCHANGE_EJECT_FEED 80.0
  #define MMU2_LOAD_TO_NOZZLE_SEQUENCE \
    {  7.2, 1145 }, \
    { 14.4,  871 }, \
    { 36.0, 1393 }, \
    { 14.4,  871 }, \
    { 50.0,  198 }

  #define MMU2_RAMMING_SEQUENCE \
    {   1.0, 1000 }, \
    {   1.0, 1500 }, \
    {   2.0, 2000 }, \
    {   1.5, 3000 }, \
    {   2.5, 4000 }, \
    { -15.0, 5000 }, \
    { -14.0, 1200 }, \
    {  -6.0,  600 }, \
    {  10.0,  700 }, \
    { -10.0,  400 }, \
    { -50.0, 2000 }

  /**
   * Usar un sensor como el MMU2S
   * Este modo requiere un extrusor MK3S con un sensor en el patinete del extrusor, como el MMU2S.
   * Consulta https://help.prusa3d.com/en/guide/3b-mk3s-mk2-5s-extruder-upgrade_41560, paso 11
   */
  #if HAS_PRUSA_MMU2S
    #define MMU2_C0_RETRY   5             // Número de intentos (tiempo total = tiempo de espera * intentos)

    #define MMU2_CAN_LOAD_FEEDRATE 800    // (mm/min)
    #define MMU2_CAN_LOAD_SEQUENCE \
      {  0.1, MMU2_CAN_LOAD_FEEDRATE }, \
      {  60.0, MMU2_CAN_LOAD_FEEDRATE }, \
      { -52.0, MMU2_CAN_LOAD_FEEDRATE }

    #define MMU2_CAN_LOAD_RETRACT   6.0   // (mm) Mantener por debajo de la distancia entre los valores de la secuencia de carga
    #define MMU2_CAN_LOAD_DEVIATION 0.8   // (mm) Desviación aceptable

    #define MMU2_CAN_LOAD_INCREMENT 0.2   // (mm) Para reutilizar dentro del módulo MMU2
    #define MMU2_CAN_LOAD_INCREMENT_SEQUENCE \
      { -MMU2_CAN_LOAD_INCREMENT, MMU2_CAN_LOAD_FEEDRATE }

    // Continuar descargando si el sensor detecta filamento después del movimiento de descarga inicial
    //#define MMU_IR_UNLOAD_MOVE
  #else

    /**
     * Sensor del extrusor MMU1
     *
     * Soporte para un sensor infrarrojo Průša (u otro) para detectar filamento cerca del extrusor
     * y mejorar la carga de filamento. Adecuado para un extrusor equipado con un sensor de filamento
     * a menos de 38 mm de las ruedas dentadas.
     *
     * Durante la carga, el extrusor se detendrá cuando se active el sensor, y luego realizará un último
     * movimiento hacia arriba hasta las ruedas dentadas. Si no se detecta filamento, el MMU2 puede realizar
     * algunos intentos más. Si todos los intentos fallan, se producirá una falta de filamento.
     */
    //#define MMU_EXTRUDER_SENSOR
    #if ENABLED(MMU_EXTRUDER_SENSOR)
      #define MMU_LOADING_ATTEMPTS_NR 5 // número máximo de intentos para cargar filamento si la carga inicial falla
    #endif

  #endif

  //#define MMU2_DEBUG  // Escribir información de depuración en la salida serial

#endif // HAS_PRUSA_MMU2

/**
 * Configuración del Contador Avanzado de Impresiones
 * @section stats
 */
#if ENABLED(PRINTCOUNTER)
  #define SERVICE_WARNING_BUZZES  3
  // Activar hasta 3 vigilantes de intervalos de servicio
  //#define SERVICE_NAME_1      "Service S"
  //#define SERVICE_INTERVAL_1  100 // horas de impresión
  //#define SERVICE_NAME_2      "Service L"
  //#define SERVICE_INTERVAL_2  200 // horas de impresión
  //#define SERVICE_NAME_3      "Service 3"
  //#define SERVICE_INTERVAL_3    1 // horas de impresión
#endif

// @section develop

//
// M100 Vigilante de Memoria Libre para depurar el uso de memoria
//
//#define M100_FREE_MEMORY_WATCHER

//
// M42 - Establecer estados de pines
//
//#define DIRECT_PIN_CONTROL

//
// M43 - mostrar estado de pines, alternar pines, vigilar pines, vigilar topes de final de carrera y alternar LED, probar sonda de servo
//
//#define PINS_DEBUGGING

// Activar pruebas que se ejecutarán al inicio y generarán un informe
//#define MARLIN_TEST_BUILD

// Activar el modo de desarrollo de Marlin que agrega algunos comandos especiales
//#define MARLIN_DEV_MODE

#if ENABLED(MARLIN_DEV_MODE)
  /**
   * D576 - Monitorización del búfer
   * Para ayudar a diagnosticar problemas de calidad de impresión derivados de búferes de comandos vacíos.
   */
  //#define BUFFER_MONITORING
#endif

/**
 * La Depuración Postmortem captura el mal funcionamiento y muestra el estado de la CPU y la traza de retroceso en la salida serial.
 * Cuando se ejecuta en el depurador, se detendrá para depurar. Esto es útil para comprender
 * un fallo desde una ubicación remota. Requiere ~400 bytes de SRAM y 5Kb de flash.
 */
//#define POSTMORTEM_DEBUGGING

/**
 * Opciones de Reinicio de Software
 */
//#define SOFT_RESET_VIA_SERIAL         // Los comandos 'KILL' y '^X' reiniciarán suavemente el controlador
//#define SOFT_RESET_ON_KILL            // Utilice un botón digital para reiniciar suavemente el controlador después de KILL

// Informar la razón de reinicio no limpio desde el registro r2 en lugar de MCUSR. Compatible con Optiboot en AVR.
//#define OPTIBOOT_RESET_REASON
