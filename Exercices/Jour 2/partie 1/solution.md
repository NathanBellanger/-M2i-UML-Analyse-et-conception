# Exercice 2.1 : Système de gestion de la bibliothèque municipale

## 1. Identification des acteurs :
Bibliothécaire : Cet acteur est responsable de la gestion des livres, des prêts, et des abonnements.
Adhérent : L'adhérent est l'utilisateur du système, capable de rechercher, réserver, emprunter et retourner des livres.
Système de gestion de la bibliothèque : Le système assure l'exécution des différentes fonctionnalités.

## 2. Identification des cas d’utilisation :
|Cas d'utilisation|Acteur|Description|
| -------------- | -------------- | -------------- |
|Ajouter un livre|Bibliothécaire|Le bibliothécaire ajoute un nouveau livre au catalogue|
|Supprimer un livre|Bibliothécaire|Le bibliothécaire retire un livre du catalogue|
|Rechercher un livre|Adhérent|L'adhérent recherche des livres dans le catalogue par titre, auteur, etc|
|Consulter la disponibilité d’un livre|Adhérent|L'adhérent vérifie si le livre est disponible, en prêt, ou en réparation|
|Réserver un livre|Adhérent|Si le livre est en prêt, l'adhérent peut le réserver|
|Emprunter un livre|Adhérent|L'adhérent emprunte un livre disponible|
|Retourner un livre|Adhérent|L'adhérent rend un livre emprunté|
|Calculer les frais de retard|Système|Le système calcule les frais de retard en fonction du délai|
|Consulter l’historique des prêts|Adhérent & Bibliothécaire|L'adhérent ou le bibliothécaire consulte l'historique des prêts|
|Enregistrer un nouvel adhérent|Bibliothécaire|Le bibliothécaire ajoute un nouvel utilisateur dans le système.
|Renouveler un abonnement|Bibliothécaire|Le bibliothécaire renouvelle l'abonnement d'un adhérent.
|Annuler un abonnement|Bibliothécaire|Le bibliothécaire annule l'abonnement d’un adhérent.

![Aéroport Charles de Gaulle](schema\schemaUseCase.png)

## 3. Justification des choix :
- Bibliothécaire et Adhérent sont les acteurs principaux car ils interagissent avec le système pour gérer les fonctionnalités principales (livres, abonnements, réservations, etc.).
- Les cas d'utilisation identifiés sont essentiels pour le bon fonctionnement du système de gestion de la bibliothèque : ils couvrent l'ajout, le retrait, la recherche, les réservations et les prêts des livres, ainsi que la gestion des abonnements et des retours.
- Les scénarios permettent de décrire le déroulement d'une interaction avec le système de manière claire, tout en prenant en compte les exceptions possibles (par exemple, lorsque les livres sont déjà réservés ou en retard).