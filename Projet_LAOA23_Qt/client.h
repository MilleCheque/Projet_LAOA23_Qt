
#ifndef CLIENT_H
#define CLIENT_H

#include <QString>
#include <QList>

class Reservation;

class Client
{
private:
    QString nomUtilisateur;
    QString nom;
    QString prenom;
    QString motDePasseHashe;
    QString adresseMail;

    QList<Reservation*> reservations;

public:
    Client();
    Client(QString nomUtilisateur, QString nom,
           QString prenom, QString motDePasse,
           QString adresseMail);

    QString getNomUtilisateur() const;
    QString getNom() const;
    QString getPrenom() const;
    QString getMotDePasseHashe() const;
    QString getAdresseMail() const;

    QList<Reservation*> getReservations() const;
    int getNombreReservations() const;

    void setNom(QString nom);
    void setPrenom(QString prenom);
    void setAdresseMail(QString mail);

    void ajouterReservation(Reservation* reservation);
    void supprimerReservation(Reservation* reservation);

    void definirMotDePasse(QString motDePasse);
    bool verifierMotDePasse(QString motDePasse) const;
};

#endif
