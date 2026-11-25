# Propuesta de reparto de módulos

> Es una propuesta para discutir en el grupo. Cuando se acuerde, escriban el
> nombre de cada responsable en la tabla y en el comentario de su `.h`.

## Módulos y alcance sugerido

El alcance definitivo depende del enunciado del profesor; esto es lo que
normalmente se pide en cada tema.

| # | Módulo | Carpeta | Qué podría incluir | Carga |
|---|---|---|---|---|
| 1 | Conjuntos | `src/conjuntos` | Leer conjuntos, pertenencia, unión, intersección, diferencia, diferencia simétrica, complemento, subconjunto, conjunto potencia, producto cartesiano | Media |
| 2 | Relaciones | `src/relaciones` | Relación como conjunto de pares, matriz de relación, reflexiva, simétrica, antisimétrica, transitiva, equivalencia, orden parcial, clausuras | Alta |
| 3 | Proposiciones | `src/proposiciones` | Conectivos (¬, ∧, ∨, →, ↔), tabla de verdad, tautología / contradicción / contingencia, equivalencia lógica | Alta |
| 4 | Predicados | `src/predicados` | Predicados sobre un dominio finito, cuantificadores ∀ y ∃, negación de cuantificadores | Media |
| 5 | Funciones | `src/funciones` | Verificar si una relación es función, dominio y rango, inyectiva, sobreyectiva, biyectiva, inversa, composición | Media |
| – | Integración | `src/main.cpp`, README | Menú principal, revisar PRs, que todo compile junto, informe final | Baja–media |

**Dependencias:** Relaciones y Funciones se apoyan en el producto cartesiano y
en los pares ordenados de Conjuntos. Predicados puede reutilizar la evaluación
de expresiones de Proposiciones. Conviene que Conjuntos defina primero sus
tipos básicos (por ejemplo `using Conjunto = std::set<int>;`) para que los
demás los usen.

## Reparto según el tamaño del grupo

### 3 personas
| Persona | Módulos |
|---|---|
| A | Conjuntos + Funciones |
| B | Relaciones |
| C | Proposiciones + Predicados |

La integración la asume quien termine primero (o A, porque Conjuntos es la base).

### 4 personas
| Persona | Módulos |
|---|---|
| A | Conjuntos + integración |
| B | Relaciones |
| C | Proposiciones + Predicados |
| D | Funciones |

### 5 personas
| Persona | Módulo |
|---|---|
| A | Conjuntos + integración |
| B | Relaciones |
| C | Proposiciones |
| D | Predicados |
| E | Funciones |

## Orden sugerido

1. **Primero:** Conjuntos define sus tipos básicos y los sube a `main` (aunque
   las operaciones no estén terminadas) para que Relaciones y Funciones puedan
   arrancar.
2. **En paralelo:** cada uno avanza su módulo en su propia rama.
3. **Al final:** integración, pruebas del menú completo e informe.

## Responsables (llenar cuando se acuerde)

| Módulo | Responsable |
|---|---|
| Conjuntos | |
| Relaciones | |
| Proposiciones | |
| Predicados | |
| Funciones | |
| Integración | |
