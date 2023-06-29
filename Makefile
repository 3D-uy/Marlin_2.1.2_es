SCRIPTS_DIR := buildroot/share/scripts
CONTAINER_RT_BIN := docker
CONTAINER_RT_OPTS := --rm -v $(PWD):/code -v platformio-cache:/root/.platformio
CONTAINER_IMAGE := marlin-dev

help:
	@echo "Tareas para desarrollo local:"
	@echo "* tests-single-ci:             Ejecuta una prueba única desde el entorno de CI"
	@echo "* tests-single-local:          Ejecuta una prueba única localmente"
	@echo "* tests-single-local-docker:   Ejecuta una prueba única localmente usando Docker"
	@echo "* tests-all-local:             Ejecuta todas las pruebas localmente"
	@echo "* tests-all-local-docker:      Ejecuta todas las pruebas localmente usando Docker"
	@echo "* setup-local-docker:          Construye la imagen de Docker local"
	@echo ""
	@echo "Opciones para pruebas:"
	@echo "  TEST_TARGET          Establece al ejecutar tests-single-* para seleccionar la"
	@echo "                       prueba. Si lo estableces en ALL, se ejecutarán todas"
	@echo "                       las pruebas, pero algunas están rotas: utiliza"
	@echo "                       tests-all-* en su lugar para ejecutar solo las que"
	@echo "                       se ejecutan en CI de GitHub"
	@echo "  ONLY_TEST            Limita las pruebas solo a las que contienen esto o"
	@echo "                       el índice de la prueba (basado en 1)"
	@echo "  VERBOSE_PLATFORMIO   Si deseas obtener la salida completa de PIO, establece cualquier valor"
	@echo "  GIT_RESET_HARD       Utilizado por CI: restablece todos los cambios locales. ADVERTENCIA:"
	@echo "                       ¡ESTO DESHARÁ CUALQUIER CAMBIO QUE HAYAS REALIZADO!"
.PHONY: help

tests-single-ci:
	export GIT_RESET_HARD=true
	$(MAKE) tests-single-local TEST_TARGET=$(TEST_TARGET) PLATFORMIO_BUILD_FLAGS=-DGITHUB_ACTION
.PHONY: tests-single-ci

tests-single-local:
	@if ! test -n "$(TEST_TARGET)" ; then echo "***ERROR*** Establece TEST_TARGET=<tu-módulo> o utiliza make tests-all-local" ; return 1; fi
	export PATH="./buildroot/bin/:./buildroot/tests/:${PATH}" \
	  && export VERBOSE_PLATFORMIO=$(VERBOSE_PLATFORMIO) \
	  && run_tests . $(TEST_TARGET) "$(ONLY_TEST)"
.PHONY: tests-single-local

tests-single-local-docker:
	@if ! test -n "$(TEST_TARGET)" ; then echo "***ERROR*** Establece TEST_TARGET=<tu-módulo> o utiliza make tests-all-local-docker" ; return 1; fi
	@if ! $(CONTAINER_RT_BIN) images -q $(CONTAINER_IMAGE) > /dev/null ; then $(MAKE) setup-local-docker ; fi
	$(CONTAINER_RT_BIN) run $(CONTAINER_RT_OPTS) $(CONTAINER_IMAGE) $(MAKE) tests-single-local TEST_TARGET=$(TEST_TARGET) VERBOSE_PLATFORMIO=$(VERBOSE_PLATFORMIO) GIT_RESET_HARD=$(GIT_RESET_HARD) ONLY_TEST="$(ONLY_TEST)"
.PHONY: tests-single-local-docker

tests-all-local:
	export PATH="./buildroot/bin/:./buildroot/tests/:${PATH}" \
	  && export VERBOSE_PLATFORMIO=$(VERBOSE_PLATFORMIO) \
	  && for TEST_TARGET in $$($(SCRIPTS_DIR)/get_test_targets.py) ; do echo "Ejecutando pruebas para $$TEST_TARGET" ; run_tests . $$TEST_TARGET ; done
.PHONY: tests-all-local

tests-all-local-docker:
	@if ! $(CONTAINER_RT_BIN) images -q $(CONTAINER_IMAGE) > /dev/null ; then $(MAKE) setup-local-docker ; fi
	$(CONTAINER_RT_BIN) run $(CONTAINER_RT_OPTS) $(CONTAINER_IMAGE) $(MAKE) tests-all-local VERBOSE_PLATFORMIO=$(VERBOSE_PLATFORMIO) GIT_RESET_HARD=$(GIT_RESET_HARD)
.PHONY: tests-all-local-docker

setup-local-docker:
	$(CONTAINER_RT_BIN) build -t $(CONTAINER_IMAGE) -f docker/Dockerfile .
.PHONY: setup-local-docker
