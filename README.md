# Calcolo di Integrali con il Metodo dei Trapezi

Questo progetto contiene un semplice programma per il calcolo approssimato di integrali definiti utilizzando il **metodo dei trapezi**.

## 📌 Descrizione

Il programma approssima l’integrale di una funzione utilizzando un approccio in due fasi:

1. **Campionamento della funzione** con una precisione scelta dall’utente
2. **Calcolo dell’integrale** a partire dai valori campionati tramite il metodo dei trapezi

È progettato specificamente per funzionare con **funzioni quadratiche**.

## ⚙️ Funzionamento

Dato un intervallo ([a, b]) e un numero di campioni (n), il programma:

* Campiona la funzione nei punti dell’intervallo
* Usa i valori ottenuti per costruire trapezi
* Somma le aree dei trapezi per ottenere un’approssimazione dell’integrale

## ▶️ Utilizzo

Per eseguire il programma, è possibile usare una pipeline da terminale.

### 🐧 Linux (Fedora e simili)

```bash
echo c1 c2 c3 a b n | ./main | ./integrali
```

### 🍎 macOS / 🐧 altre distribuzioni Linux

```bash
echo c1 c2 c3 a b n | ./main | ./integrali
```

### 🪟 Windows (PowerShell)

```powershell
echo c1 c2 c3 a b n | .\main.exe | .\integrali.exe
```

## 🔢 Significato dei parametri

I parametri passati in input rappresentano:

* `c1`, `c2`, `c3` → coefficienti della funzione quadratica
  (forma: (f(x) = c1 \cdot x^2 + c2 \cdot x + c3))
* `a` → estremo sinistro dell’intervallo di integrazione
* `b` → estremo destro dell’intervallo di integrazione
* `n` → numero di campioni (maggiore è n, maggiore è la precisione)

## 📚 Contesto Accademico

Questo progetto è stato sviluppato per il corso di **Programmazione 1**, svolto presso **Università di Genova (UniGe)**, nell’ambito del **primo anno della laurea triennale in Matematica**.

## 👨‍💻 Autori

Progetto realizzato da studenti del corso (SMID).

---

## 📝 Note

Questo progetto ha scopo didattico e serve come introduzione ai metodi numerici per l’integrazione.
