#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 1.3
 ********************************
 *
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

struct retro_core_option_definition option_defs_es[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      "Velocidad de la CPU (%)",
      "Permite overclockear la CPU emulada. Puede reducir las ralentizaciones, pero podría provocar defectos visuales.",
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      "Tablas de puntuaciones",
      "Permite guardar las tablas de las mejores puntuaciones en los juegos compatibles con esta función. Es necesario tener el archivo «hiscore.dat» en la carpeta system/fbalpha2012/.",
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      "Relación de aspecto asignada por el núcleo",
      "Selecciona la relación de aspecto preferida para el contenido. Este ajuste solo se aplicará cuando la relación de aspecto de RetroArch esté configurada como «Asignada por el núcleo».",
      {
         { "DAR", NULL },
         { "PAR", NULL },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      "Rotar los juegos con una alineación vertical (es necesario reiniciar)",
      "Rota automáticamente la imagen al ejecutar juegos con una alineación vertical. Al desactivar esta opción, la entrada de la cruceta se rotará para que coincida con las direcciones que aparezcan en pantalla.",
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      "Filtro de audio",
      "Utiliza un filtro de paso bajo de audio para suavizar las asperezas en el sonido de ciertos juegos arcade.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      "Nivel del filtro de audio (%)",
      "Especifica el corte de frecuencias en el filtro de paso bajo de audio. Un valor elevado aumentará la fuerza percibida del filtro porque se atenuará un rango mayor del espectro de frecuencias altas.",
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      "Omisión de fotogramas",
      "Omite fotogramas para no saturar el búfer de audio (chasquidos en el sonido). Mejora el rendimiento a costa de perder fluidez visual. El valor Automática omite fotogramas según lo aconseje el front-end. El valor Manual utiliza el ajuste Umbral de omisión de fotogramas (%).",
      {
         { "disabled", NULL },
         { "auto",     "Automática" },
         { "manual",   "Manual" },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      "Umbral de omisión de fotogramas (%)",
      "Cuando la omisión de fotogramas esté configurada como Manual, este ajuste especifica el umbral de ocupación del búfer de audio (en porcentaje) por el que se omitirán fotogramas si el valor es inferior. Un valor más elevado reduce el riesgo de chasquidos omitiendo fotogramas con una mayor frecuencia.",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      "Entrada de diagnóstico",
      "Activa esta opción y reanuda el contenido para abrir el menú de servicio.",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

/* RETRO_LANGUAGE_SLOVAK */

/* RETRO_LANGUAGE_PERSIAN */

/* RETRO_LANGUAGE_HEBREW */

/* RETRO_LANGUAGE_ASTURIAN */

#ifdef __cplusplus
}
#endif

#endif
