# Desde la imagen de Python 3.9.0-buster
FROM python:3.9.0-buster

# Desactivar advertencias sobre la falta de un TTY
ARG DEBIAN_FRONTEND=noninteractive

# Desactivar advertencias de debconf
ARG DEBCONF_NOWARNINGS="yes"

# Actualizar pip
RUN pip install --upgrade pip

# Instalar la cadena de herramientas y el marco de trabajo de platformio y pyyaml
RUN pip install -U platformio PyYaml

# Actualizar platformio usando la versión / rama de desarrollo
RUN pio upgrade --dev

# Establecer el directorio de trabajo
WORKDIR /code

# Establecer volúmenes / puntos de montaje que estamos utilizando
VOLUME /code /root/.platformio

# Configurar la variable de entorno PATH
# ENV PATH /code/buildroot/bin/:/code/buildroot/tests/:${PATH}
