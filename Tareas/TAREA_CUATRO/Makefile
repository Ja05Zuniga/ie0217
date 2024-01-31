# Variables
PYTHON = python3
SRC_DIR = src
OUT_DIR = build
MAIN_FILE = main.py

# Lista de archivos
FILES = alergias evaluacionEspecifica evaluacionGeneral tipo_de_alergias

# Objetivo predeterminado
all: $(FILES)

# Reglas de compilación para cada archivo
$(FILES):
	@mkdir -p $(OUT_DIR)
	$(PYTHON) $(SRC_DIR)/$@.py > $(OUT_DIR)/$@.out

# Objetivo para ejecutar el archivo principal
run: all
	$(PYTHON) $(SRC_DIR)/$(MAIN_FILE)

# Limpiar archivos generados
clean:
	@rm -rf $(OUT_DIR)

# Ayuda
help:
	@echo "Uso: make [all|run|clean|help]"

# No tratar como archivos reales
.PHONY: all $(FILES) run clean help
