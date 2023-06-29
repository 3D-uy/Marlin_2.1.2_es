/**
 * Firmware de la Impresora 3D Marlin
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Basado en Sprinter y grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * Este programa es software libre: puede redistribuirlo y/o modificarlo
 * bajo los términos de la Licencia Pública General GNU publicada por
 * la Free Software Foundation, ya sea la versión 3 de la Licencia, o
 * (a su elección) cualquier versión posterior.
 *
 * Este programa se distribuye con la esperanza de que sea útil,
 * pero SIN GARANTÍA; sin siquiera la garantía implícita de
 * COMERCIABILIDAD o APTITUD PARA UN PROPÓSITO PARTICULAR. Consulte la
 * Licencia Pública General GNU para obtener más detalles.
 *
 * Debería haber recibido una copia de la Licencia Pública General GNU
 * junto con este programa. Si no, consulte <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#include "inc/MarlinConfig.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void stop();

// Pasar true para evitar que los motores se apaguen automáticamente
void idle(const bool no_stepper_sleep=false);
inline void idle_no_sleep() { idle(true); }

#if ENABLED(G38_PROBE_TARGET)
  extern uint8_t G38_move;          // Bandera para indicar al ISR que G38 está en progreso y el tipo
  extern bool G38_did_trigger;      // Bandera desde el ISR para indicar que se activó el fin de carrera
#endif

void kill(FSTR_P const lcd_error=nullptr, FSTR_P const lcd_component=nullptr, const bool steppers_off=false);
void minkill(const bool steppers_off=false);

// Estado global del firmware
enum MarlinState : uint8_t {
  MF_INITIALIZING = 0,
  MF_STOPPED,
  MF_KILLED,
  MF_RUNNING,
  MF_SD_COMPLETE,
  MF_PAUSED,
  MF_WAITING,
};

extern MarlinState marlin_state;
inline bool IsRunning() { return marlin_state >= MF_RUNNING; }
inline bool IsStopped() { return marlin_state == MF_STOPPED; }

bool printingIsActive();
bool printJobOngoing();
bool printingIsPaused();
void startOrResumeJob();

bool printer_busy();

extern bool wait_for_heatup;

#if HAS_RESUME_CONTINUE
  extern bool wait_for_user;
  void wait_for_user_response(millis_t ms=0, const bool no_sleep=false);
#endif

bool pin_is_protected(const pin_t pin);

#if HAS_SUICIDE
  inline void suicide() { OUT_WRITE(SUICIDE_PIN, SUICIDE_PIN_STATE); }
#endif

#if HAS_KILL
  #ifndef KILL_PIN_STATE
    #define KILL_PIN_STATE LOW
  #endif
  inline bool kill_state() { return READ(KILL_PIN) == KILL_PIN_STATE; }
#endif

extern const char M112_KILL_STR[];
