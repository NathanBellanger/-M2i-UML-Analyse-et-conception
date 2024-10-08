# Exercice 2.2 : Système de gestion de la bibliothèque municipale

## 1. Identification des classes et relations
### Classes identifiées
- **Adhérent** : représente un utilisateur de la bibliothèque
- **Livre** : représente un livre disponible dans la bibliothèque
- **Bibliothécaire** : représente une personne qui gère les opérations de la bibliothèque
- **Emprunt** : représente une instance d'emprunt d'un livre par un adhérent
- **Catalogue** : représente l'ensemble des livres disponibles dans la bibliothèque

|Relation|Cardinalité|Description|
|-|-|-|
|Adhérent association vers Emprunt|Un adhérent peut avoir plusieurs emprunts (1..*), mais un emprunt est associé à un seul adhérent (1)|Un adhérent peut emprunter plusieurs livres et chaque emprunt est lié à un adhérent spécifique. L'adhérent peut également consulter l'historique de ses emprunts|
|Livre association vers Emprunt|Un livre peut être emprunté plusieurs fois au fil du temps (1..*), mais un emprunt concerne un seul livre à la fois (1)|Un livre est associé à plusieurs emprunts au fil du temps, mais chaque emprunt est lié à un seul livre spécifique. Le livre a un statut qui change en fonction de son emprunt (disponible, Emprunté, en réparation)|
|Bibliothécaire association vers Adhérent|Un bibliothécaire peut enregistrer, renouveler ou annuler plusieurs abonnements d'adhérents (1..*), mais chaque opération d'abonnement est effectuée par un seul bibliothécaire (1)|Le bibliothécaire gère les adhésions des utilisateurs, y compris l'enregistrement de nouveaux adhérents, la mise à jour ou la suppression de leur abonnement|
|Bibliothécaire association vers Livre|Un bibliothécaire peut ajouter ou supprimer plusieurs livres dans le catalogue (1..*), mais chaque opération sur un livre est réalisée par un seul bibliothécaire (1)|Le bibliothécaire est responsable de la gestion du catalogue des livres, en ajoutant de nouveaux ouvrages ou en retirant ceux qui ne sont plus disponibles|
|Bibliothécaire association vers Emprunt|Un bibliothécaire peut consulter l'historique de plusieurs emprunts (1..*), mais chaque consultation est effectuée par un seul bibliothécaire (1)|Le bibliothécaire est capable de consulter l'historique des emprunts de tous les adhérents pour gérer les Emprunts et appliquer des frais de retard si nécessaire
|Catalogue composition vers Livre|Le catalogue est constitué de plusieurs livres (1..*)|Le catalogue contient et gère tous les livres de la bibliothèque. Un livre fait toujours partie d'un catalogue. La recherche et la consultation de la disponibilité des livres sont effectuées à partir du catalogue|
|Emprunt dépendance vers Livre|Chaque emprunt est associé à un seul livre (1)|Un emprunt est lié à un livre spécifique. Si le livre est retourné, l'emprunt se termine et le statut du livre est mis à jour (disponible à nouveau)|
|Emprunt dépendance vers Adhérent|Chaque emprunt est effectué par un seul adhérent (1)|L'adhérent initie un emprunt, et cet emprunt est associé à lui tant que le livre n'est pas retourné|

![Diagramme de Classe](schema\diagrammeDeClasse.png)

## 2. Réalisation d'un diagramme d'objet pour les relations complexes

Présentation du cas d'usage d'emprunt d'un livre par un adhérent en diagramme d'objet

### Objets en jeu
- Adhérent : Jean Dupont
- Livre : "L'Étranger"
- Bibliothécaire : Marie Lemoine
- Emprunt : Jean Dupont L'Étranger

![Diagramme d'objet](schema\diagrammeObjet.png)

### Relations entre les objets
|Relation|Description|
|-|-|
|Adhérent association vers Emprunt|Jean Dupont est l'adhérent qui effectue l'emprunt de "L'Étranger". Il peut avoir d'autres emprunts dans l'historique, mais cet emprunt particulier est lié à lui|
|Livre association vers Emprunt|L'emprunt 001 concerne spécifiquement le livre "L'Étranger". Ce livre pourra être emprunté à nouveau une fois retourné, mais pour l'instant, il est associé à cet emprunt|
|Bibliothécaire association vers Emprunt|Le bibliothécaire Marie Lemoine est celui qui valide l'emprunt du livre par Jean Dupont. Elle supervise l'opération et enregistre les informations d'emprunt dans le système|
|Livre association vers Adhérent|Le livre "L'Étranger" est actuellement en Emprunt par Jean Dupont. Son statut passe de "disponible" à "Emprunté", et il est temporairement associé à cet adhérent|
|Bibliothécaire association vers Adhérent|Description : Marie Lemoine enregistre l'emprunt effectué par Jean Dupont. Elle peut gérer d'autres adhérents, mais dans ce cas, elle interagit directement avec Jean Dupont|
## 3. Diagramme de composants
Le diagramme de composants montre la structure physique du système, en illustrant les composants logiciels impliqués dans la gestion de la bibliothèque
### Composants
- Interface Utilisateur (UI) : Interface pour les adhérents et bibliothécaires.
- Système de gestion des adhérents : Gère les informations des adhérents (enregistrement, abonnement, historique).
- Système de gestion des livres : Gère le catalogue de livres et leur disponibilité.
- Système de gestion des emprunts : Suivi des emprunts, retours, calcul des frais de retard.
- Base de données : Stocke toutes les données liées aux adhérents, aux livres, aux emprunts, et aux historiques.

![Diagramme de composant](schema\diagrammeComposant.png)

### Relations entre les composants
|Relation|Description|
|-|-|
|Interface Utilisateur (UI) dépendance vers Système de gestion des adhérents|Les utilisateurs (adhérents et bibliothécaires) interagissent avec l'interface pour accéder aux fonctionnalités liées aux adhérents L'UI appelle le système de gestion des adhérents pour effectuer des opérations comme l'enregistrement, la modification ou la consultation d'informations|
|Interface Utilisateur (UI) dépendance vers Système de gestion des livres|Les adhérents et bibliothécaires utilisent l'interface pour rechercher des livres et consulter leur disponibilité. L'UI communique avec le système de gestion des livres pour obtenir ces informations|
|Interface Utilisateur (UI) dépendance vers Système de gestion des emprunts|Lorsque les adhérents empruntent ou retournent des livres, l'interface transmet les actions au système de gestion des emprunts, qui effectue les mises à jour nécessaires et calcule les frais en cas de retard|
|Système de gestion des adhérents association vers Base de données|Le système de gestion des adhérents lit et écrit dans la base de données pour stocker les informations des adhérents (données personnelles, historique des abonnements, etc.) et les consulter lors des interactions|
|Système de gestion des livres association vers Base de données|Le système de gestion des livres utilise la base de données pour enregistrer, mettre à jour et supprimer des informations sur les livres (titre, auteur, disponibilité, statut, etc.)|
|Système de gestion des emprunts association vers Base de données|Le système de gestion des emprunts utilise la base de données pour suivre les emprunts actifs, les retours, et calculer les frais de retard en fonction des dates d'emprunt et de retour|
|Système de gestion des emprunts dépendance vers Système de gestion des adhérents|Lorsqu'un adhérent effectue un emprunt, le système de gestion des emprunts récupère les informations de cet adhérent à partir du système de gestion des adhérents|
|Système de gestion des emprunts dépendance vers Système de gestion des livres|Lorsqu'un livre est emprunté ou retourné, le système de gestion des emprunts demande au système de gestion des livres de mettre à jour le statut du livre (disponible, prêté, en réparation)|

## Diagramme de déploiement
Serveur Web héberge l’interface utilisateur
Serveur Base de données stocke les informations sur les utilisateurs, prêts et livres

### Éléments clés du diagramme
- **Serveur Web** : Héberge l’application de gestion de la bibliothèque
Effectue les requêtes à la base de données pour vérifier, ajouter ou mettre à jour les informations sur les livres, les réservations et les adhérents
- **Base de Données** : Stocke toutes les données nécessaires au fonctionnement du système (livres, adhérents, prêts, etc.)
Répond aux requêtes du serveur web avec les informations demandées.
- **Canal de Communication** : Le serveur web et la base de données sont connectés via une interface JDBC (ou équivalent), qui permet d’exécuter des commandes SQL. Ce lien peut aussi être illustré avec un stéréotype indiquant le protocole utilisé (e.g. <<HTTP/SQL>>)

![Diagramme de deploiement](schema\diagrammeDeploiement.png)

### Relations
- **Communication entre le Serveur Web et la Base de Données** : Le serveur web communique avec le serveur de base de données via des requêtes SQL. Cette communication est généralement réalisée via le protocole JDBC (Java Database Connectivity) ou un autre middleware pour accéder aux données. Les opérations typiques incluent des INSERT, SELECT, UPDATE, et DELETE pour gérer les données des livres, des adhérents, des prêts, et des réservations.
- **Flux de Données** : Lorsque l’utilisateur interagit avec l'application web (par exemple, pour réserver un livre), le serveur web envoie une requête à la base de données pour vérifier la disponibilité du livre.
Si le livre est disponible, le serveur web met à jour la base de données avec une nouvelle réservation, qui est ensuite enregistrée dans la table des réservations. Les informations relatives à la réservation sont ensuite renvoyées au serveur web, qui les affiche à l’utilisateur.