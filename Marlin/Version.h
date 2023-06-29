/**
 * Firmware de Impresora 3D Marlin
 * Derechos de autor (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Basado en Sprinter y grbl.
 * Derechos de autor (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * Este programa es software libre: puede redistribuirlo y/o modificarlo
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
 * junto con este programa. Si no lo hizo, consulte <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/////////////////////////////////////
// EJEMPLO DE VERSIÓN DEL VENDEDOR //
/////////////////////////////////////

/**
 * Identificador de versión de lanzamiento de Marlin
 */
//#define SHORT_BUILD_VERSION "bugfix-2.1.x"

/**
 * Identificador de versión detallado que debe contener una referencia al lugar
 * desde donde se descargó el archivo binario o se compiló el código fuente.
 */
//#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION

/**
 * La cadena STRING_DISTRIBUTION_DATE representa la fecha en que se construyó el archivo binario,
 * aquí definimos esta cadena predeterminada como la fecha en la que se etiquetó la última versión de lanzamiento.
 */
//#define STRING_DISTRIBUTION_DATE "2023-06-06"

/**
 * Define un nombre genérico de impresora que se mostrará en la pantalla LCD después de arrancar Marlin.
 */
//#define MACHINE_NAME "Impresora 3D"

/**
 * La URL del CÓDIGO FUENTE es el lugar donde los usuarios encontrarán el Código Fuente de Marlin
 * que está instalado en el dispositivo. En la mayoría de los casos, a menos que el fabricante
 * tenga un repositorio de Github distinto, la URL del Código Fuente debe ser simplemente el repositorio principal de Marlin.
 */
//#define SOURCE_CODE_URL "github.com/MarlinFirmware/Marlin"

/**
 * UUID genérico de la impresora predeterminada.
 */
//#define DEFAULT_MACHINE_UUID "cede2a2f-41a2-4748-9b12-c55c62f367ff"

/**
 * La URL del SITIO WEB es el lugar donde los usuarios pueden obtener más información, como
 * documentación sobre una versión específica de Marlin.
 */
//#define WEBSITE_URL "marlinfw.org"

/**
 * Establece la información del vendedor en la interfaz USB serie, si es modificable.
 * Actualmente solo compatible con la plataforma DUE.
 */
//#define USB_DEVICE_VENDOR_ID           0x0000
//#define USB_DEVICE_PRODUCT_ID          0x0000
//#define USB_DEVICE_MANUFACTURE_NAME    WEBSITE_URL
