# Proyecto final de Matemáticas Discretas I

Programa en C++ que trabaja los temas del curso: **conjuntos, relaciones,
proposiciones, predicados y funciones**. Cada tema es un módulo independiente
y el programa principal muestra un menú para entrar a cada uno.

## Estructura del repositorio

```
.
├── src/
│   ├── main.cpp                  # Menú principal (llama a cada módulo)
│   ├── conjuntos/                # Módulo 1: conjuntos
│   │   ├── conjuntos.h
│   │   └── conjuntos.cpp
│   ├── relaciones/               # Módulo 2: relaciones
│   ├── proposiciones/            # Módulo 3: lógica proposicional
│   ├── predicados/               # Módulo 4: lógica de predicados
│   └── funciones/                # Módulo 5: funciones
├── docs/
│   └── reparto.md                # Propuesta de reparto de módulos
└── .vscode/tasks.json            # Tarea para compilar con Ctrl+Shift+B
```

Reglas sencillas para no pisarnos:

- Cada módulo vive en su carpeta y dentro de su propio `namespace`
  (por ejemplo `conjuntos::union_(...)`).
- Cada módulo expone una función `menu()` en su `.h`; `main.cpp` solo la llama.
- Si necesitas algo de otro módulo, inclúyelo con su ruta
  (`#include "conjuntos/conjuntos.h"`) y avísale al responsable.
- `main.cpp` lo toca una sola persona (el integrador) para evitar conflictos.

## Cómo compilar y ejecutar

Se necesita `g++` con soporte de C++17 (MinGW en Windows, o `g++` en Linux/Mac).

### Desde VS Code

1. Abre la carpeta del repositorio en VS Code.
2. Presiona **Ctrl+Shift+B** (tarea "Compilar proyecto").
3. Ejecuta en la terminal integrada:
   - Windows: `.\discretas.exe`
   - Linux/Mac: `./discretas`

### Desde la terminal

Desde la raíz del repositorio (funciona igual en PowerShell, CMD y bash):

```bash
g++ -std=c++17 -Wall -Wextra -Isrc src/main.cpp src/conjuntos/conjuntos.cpp src/relaciones/relaciones.cpp src/proposiciones/proposiciones.cpp src/predicados/predicados.cpp src/funciones/funciones.cpp -o discretas
```

Si agregas un archivo `.cpp` nuevo, súmalo a ese comando **y** a
`.vscode/tasks.json`.

## Cómo trabajamos con Git

### Ramas

- `main`: siempre compila. **Nadie sube directo a `main`.**
- Una rama por tarea, con este formato:

| Tipo | Formato | Ejemplo |
|---|---|---|
| Funcionalidad nueva | `feature/<modulo>-<descripcion>` | `feature/conjuntos-union` |
| Corrección | `fix/<modulo>-<descripcion>` | `fix/relaciones-transitiva` |
| Documentación | `docs/<descripcion>` | `docs/manual-usuario` |

Todo en minúsculas, sin tildes ni espacios (usa guiones).

### Flujo de trabajo

```bash
git checkout main
git pull                                  # trae lo último
git checkout -b feature/conjuntos-union   # crea tu rama
# ... programas, compilas y pruebas ...
git add src/conjuntos
git commit -m "conjuntos: agrega union e interseccion"
git push -u origin feature/conjuntos-union
```

Luego abre un **Pull Request** hacia `main` en GitHub. Antes de pedir que lo
unan, revisa que:

1. El proyecto compila sin errores con el comando de arriba.
2. Probaste tu opción desde el menú.
3. Otra persona del equipo lo revisó.

### Mensajes de commit

Empieza con el módulo y di qué hiciste: `relaciones: verifica si es reflexiva`.

## Reparto del trabajo

La propuesta está en [`docs/reparto.md`](docs/reparto.md).
