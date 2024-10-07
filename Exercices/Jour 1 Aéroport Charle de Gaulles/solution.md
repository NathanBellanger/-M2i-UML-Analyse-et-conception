# Exercice 1: L'aéroport Charle de Gaulles

## 1. Identification des classes
Pour concevoir une architecture logicielle pour la gestion de l'aéroport Charles de Gaulle, nous pouvons identifier les classes principales suivantes:

![Aéroport Charles de Gaulle](schema\schemaCDG.png)

## 2. Justification des choix

- **Modularité** : Chaque classe représente une entité distincte du système, ce qui facilite la gestion et l'évolution du code.
- **Clarté** : Les propriétés et méthodes sont clairement définies, ce qui rend le code plus compréhensible pour les autres développeurs.
- **Réutilisabilité** : Les classes peuvent être réutilisées dans d'autres projets liés à la gestion aéroportuaire.
- **Extensibilité** : De nouvelles fonctionnalités peuvent être ajoutées facilement (par exemple, une classe pour le personnel de l'aéroport).
- **Cohérence** : Les relations entre les classes (par exemple, un terminal a plusieurs portes et plusieurs vols) reflètent la structure réelle d'un aéroport.