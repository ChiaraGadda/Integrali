Ecco una versione aggiornata e professionale del tuo `README.md`. Ho riorganizzato le sezioni per dare risalto alla nuova **Versione 2.0** e ho aggiunto tutte le istruzioni tecniche per l'installazione delle dipendenze e l'uso multi-piattaforma.

---

# Calcolo di Integrali con il Metodo dei Trapezi (v2.0)

Questo progetto implementa un sistema per il calcolo approssimato di integrali definiti. Con la **Release 2.0**, il programma è passato da un supporto limitato alle sole funzioni quadratiche a un potente **Parser Dinamico** capace di interpretare espressioni matematiche arbitrarie fornite in tempo reale.

## 🚀 Novità Versione 2.0: Parser Dinamico
Grazie all'integrazione della libreria `muParser`, non è più necessario modificare il codice sorgente per cambiare funzione. Il programma ora accetta stringhe di testo rappresentanti funzioni complesse.

### 📈 Funzioni e Costanti Supportate
| Categoria | Funzioni / Costanti | Esempio |
| :--- | :--- | :--- |
| **Costanti** | `pi` (3.1415...), `e` (2.7182...) | `sin(pi/2)` |
| **Trigonometriche** | `sin()`, `cos()`, `tan()`, `asin()`, `acos()` | `cos(x+2)` |
| **Potenze/Radici** | `sqrt()`, `^`, `pow(base, esp)` | `x^2 + sqrt(x)` |
| **Log/Exp** | `exp()`, `log()` (naturale), `log10()` | `exp(-x^2)` |
| **Logica/Tratti** | `if(cond, vero, falso)`, `<`, `>`, `==` | `if(x<0, 0, x)` |

---

## 📦 Installazione Dipendenze (muParser)

Per compilare la versione 2.0, è necessario installare la libreria `muParser`.

### 🐧 Linux (Fedora)
```bash
sudo dnf install muparser-devel
```

### 🐧 Linux (Ubuntu/Debian)
```bash
sudo apt-get install libmuparser-dev
```

### 🍎 macOS
```bash
brew install muparser
```

### 📥 Da GitHub (Tutte le piattaforme)
Se non hai accesso a un package manager, puoi scaricare i sorgenti direttamente da [GitHub muParser](https://github.com/beltoforion/muparser) e compilare includendo i file `.h` e `.cpp` nella cartella del progetto.

---

## ▶️ Utilizzo da Terminale

Talvolta sistemi come Visual Studio Code producono un'errore nella compilazione poichè non sono in grado di compilare più file contemporaneamente e richiedere le dipendenze necessarie. In tal caso si può ovviare con le seguenti linee di codice:

### 🐧 Linux & 🍎 macOS (Bash/Zsh)
```bash
#lo faccio per tutti i file di cui necessito "l'eseguibile" -> dopo -o opsso decidere di chiamare il file in maniera differente
g++ integrali1.cpp personal.cpp -o generatore -lmuparser
```

La nuova sintassi richiede l'invio della **funzione come stringa** (tra virgolette) seguita dai parametri dell'intervallo.

### 🐧 Linux & 🍎 macOS (Bash/Zsh)
```bash
# Esempio: Integrale di cos(x) tra 0 e 3.14 con 100 intervalli
echo "cos(x)" 0 3.14 100 | ./generatore | ./calcolatore
```

### 🪟 Windows (PowerShell)
```powershell
echo "cos(x)" 0 3.14 100 | .\generatore.exe | .\calcolatore.exe
```

---

## 🔢 Esempi di Calcolo

Ecco alcuni esempi di comandi pronti all'uso per testare la precisione del programma:

1. **Funzione Semplice (Parabola)**:
   ```bash
   echo "x^2" 0 2 500 | ./generatore | ./calcolatore
   ```
2. **Funzione Trigonometrica**:
   ```bash
   echo "sin(x)+2" 0 3.14 200 | ./generatore | ./calcolatore
   ```

---

## 🛠️ Compilazione

Dato che il progetto ora utilizza una libreria esterna, il comando di compilazione deve includere il "link" a muParser:

**Sistemi Unix (Linux/macOS):**
```bash
g++ main.cpp personal.cpp -o generatore -lmuparser
g++ integrali.cpp personal.cpp -o calcolatore
```

---

## 📚 Contesto Accademico
Sviluppato per il corso di **Programmazione 1**, **Università di Genova (UniGe)**. Primo anno della laurea triennale in Matematica.

---

## 📝 Note
Assicurati di usare le **virgolette** per la funzione nel terminale, altrimenti i caratteri speciali come `(` o `*` verranno interpretati erroneamente dalla shell.

Il contenuto del file README.md è stato generato parzialmento con l'utilizzo di AI, l'autore non si prende la responsabilità di eventuali imperfezioni. 

Ogni consiglio e modifica è ben accetta.

#⚠️ Occhio:
Mentre dentro la stringa della funzione puoi usare lettere come pi ed e (perché le legge muParser), gli estremi a e b vengono ancora letti dal C++ standard (cin >> a >> b). Quindi per a e b dovrai sempre inserire i numeri esatti (es. 3.14159 al posto di pi).