# Exercice 3 : L'armure d'Iron Man

## 1. Diagramme de Séquence

### Contexte
Ce diagramme modélise les interactions dynamiques entre les différents composants de l’armure d'Iron Man durant une mission typique. La séquence choisie est : démarrage de l'armure, décollage, ciblage et tir d’un missile, puis retour à la base.

### Participants

- Tony Stark (via l'IA JARVIS/FRIDAY)
- IA (JARVIS/FRIDAY)
- Système de Vol
- Systèmes d'armement (Missiles)
- Gestion de l’énergie (Réacteur ARK)

### Description du scénario
- Démarrage de l'armure : Tony Stark donne l'ordre vocal de démarrer l'armure via l'IA.
- Activation des systèmes : L'IA active les systèmes de vol et les systèmes d'armement.
- Décollage : Tony commande le décollage.
- Ciblage et tir d’un missile : Tony cible un ennemi et commande un tir de missile via l’IA.
- Retour à la base : Tony commande à l'IA de retourner à la base après la mission.

![Diagramme Sequence](schema\diagrammeSequence.png)

## 2. Diagramme de Communication
### Contexte
Le diagramme de communication met en évidence la répartition des différents modules au sein des couches logiques de l'armure. On identifie ici les échanges entre ces modules.

### Couches
- Interface Utilisateur : IA (JARVIS/FRIDAY)
- Gestion de l’énergie : Réacteur ARK
- Systèmes d'armement : Missiles, Rayons répulseurs
- Système de Vol : Propulseurs

### Relations entre les composants
- L’IA communique avec l’interface utilisateur et reçoit des commandes.
- L'IA contrôle à la fois la gestion de l'énergie, les systèmes d'armement et le système de vol.
- Le réacteur ARK alimente tous les systèmes en énergie.

![Diagramme Communication](schema\diagrammeCommunication.png)

## 3. Diagramme d'Activité
### Contexte
Modélisation du processus de maintenance de l'armure. Les activités impliquent Tony Stark, JARVIS, et les robots de maintenance.

### Étapes
- Tony Stark initie la séquence de maintenance.
- JARVIS réalise un diagnostic complet de l’armure.
- Si un problème est détecté, JARVIS alerte Tony Stark.
- Les robots de maintenance effectuent les réparations nécessaires.
- JARVIS valide que l’armure est en état de marche.
- Tony Stark approuve la remise en service.

![Diagramme Activité](schema\diagrammeActivite.png)
## 4. Diagramme d'État

### Contexte
Ce diagramme modélise l’évolution d’un missile du système d'armement de l'armure.

### États
- Stocké : Le missile est prêt, mais non activé.
- Chargé : Le missile est armé et prêt à être tiré.
- Ciblage : Le missile est en phase de ciblage.
- Tiré : Le missile est lancé.
- Désactivé : Le missile a atteint sa cible ou a été neutralisé.

### Transitions
- Du stockage au chargement, par un ordre de JARVIS.
- Du chargement au ciblage, après une demande de Tony Stark.
- Du ciblage au tir, après confirmation.
- Du tir à la désactivation, après impact ou échec de la mission.

![Diagramme Etat](schema\diagrammeEtat.png)