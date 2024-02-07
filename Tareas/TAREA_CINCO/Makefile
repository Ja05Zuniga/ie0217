# Comando para ejecutar Python
PYTHON = python

# Directorio donde se encuentran los scripts Python
SRC_DIR = src

# Scripts Python a ejecutar (con la ruta completa)
SCRIPTS = $(wildcard $(SRC_DIR)/*.py)

# Detectar el sistema operativo
ifeq ($(OS),Windows_NT)
    # Comandos para Windows con MSYS
	RUN_SCRIPT = $(PYTHON) $(SCRIPTS)
else
    # Comandos para otros sistemas operativos
	RUN_SCRIPT = $(PYTHON) $(SCRIPTS)
endif

# Regla para ejecutar los scripts
run:
	$(RUN_SCRIPT)

# Regla para ejecutar un script específico
run_prueba:
	$(PYTHON) $(SRC_DIR)/prueba.py

# Regla para ejecutar el otro script específico
run_prueba2:
	$(PYTHON) $(SRC_DIR)/prueba2.py

# Regla para ejecutar primero prueba.py y luego prueba2.py
pruebas: run_prueba run_prueba2