# Fonctionnalités du système à développer

## 1. Gestion du catalogue de livres
Les bibliothécaires doivent pouvoir :

Ajouter un nouveau livre au catalogue.
- Propriétés : Titre, Auteur, ISBN, Genre, Statut (disponible, emprunté, en réparation)
- Méthode : ajouterLivre()

Supprimer un livre qui n’est plus disponible (usé, obsolète, etc.).
- Méthode : supprimerLivre()

Consulter la disponibilité d'un livre (indication si le livre est en prêt, disponible, ou en réparation).
- Méthode : consulterDisponibiliteLivre()

Mettre à jour le statut des livres.
- Méthode : mettreAJourStatutLivre() (pour changer le statut d’un livre selon qu’il soit en prêt, disponible ou en réparation)

## 2. Gestion des adhérents
Les adhérents de la bibliothèque doivent pouvoir :

Rechercher des livres dans le catalogue par titre, auteur, genre, etc.
- Méthode : rechercherLivre()

Vérifier la disponibilité d’un livre dans le catalogue.
- Méthode : verifierDisponibilite()

Réserver un livre s'il est déjà emprunté par un autre adhérent.
- Méthode : reserverLivre()

Emprunter des livres disponibles à la bibliothèque.
- Méthode : emprunterLivre()

Rendre un livre après la période de prêt.
- Méthode : rendreLivre()

## 3. Gestion des frais de retard
Le système doit gérer les frais de retard appliqués en cas de retour tardif d’un livre. Les fonctionnalités sont :

Calculer les frais de retard en fonction du nombre de jours de dépassement de la date limite de retour.
- Propriété : Date d’emprunt, Date limite de retour
- Méthode : calculerFraisRetard()

Appliquer les pénalités aux adhérents.
- Méthode : appliquerPenalites()

## 4. Historique des prêts
Le système doit fournir un historique des prêts pour chaque adhérent. Cet historique sera accessible :

Par les adhérents eux-mêmes pour consulter leurs emprunts passés.
- Méthode : consulterHistoriqueAdherent()

Par les bibliothécaires pour vérifier les emprunts et retours d’un adhérent.
- Méthode : consulterHistoriqueBibliothecaire()

## 5. Gestion des abonnements des adhérents
Le système doit permettre aux bibliothécaires de :

Enregistrer de nouveaux adhérents dans le système avec leurs informations personnelles (Nom, Prénom, Adresse, Email, etc.).
- Méthode : enregistrerAdherent()

Renouveler un abonnement pour un adhérent existant.
- Méthode : renouvelerAbonnement()

Annuler un abonnement à la demande d’un adhérent ou en cas de non-renouvellement.
- Méthode : annulerAbonnement()