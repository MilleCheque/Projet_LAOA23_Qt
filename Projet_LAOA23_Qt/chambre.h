
#ifndef CHAMBRE_H
#define CHAMBRE_H

#include <QString>
#include <QList>

class Reservation;

class Chambre
{
protected:
    int numero;
    int taille;
    int etage;

    // Sanitaires
    int nombreToilettes;
    int nombreSallesBain;

    // Utilitaires
    bool chauffage;
    bool laveVaisselle;
    bool laveLinge;
    bool microOnde;
    bool plaqueCuisson;
    bool climatisation;
    bool piscinePrivee;

    QList<Reservation*> reservations;

public:
    Chambre();
    Chambre(int numero, int taille, int etage);

    virtual ~Chambre();

    // Getters
    int getNumero() const;
    int getTaille() const;
    int getEtage() const;

    int getNombreToilettes() const;
    int getNombreSallesBain() const;

    bool getChauffage() const;
    bool getLaveVaisselle() const;
    bool getLaveLinge() const;
    bool getMicroOnde() const;
    bool getPlaqueCuisson() const;
    bool getClimatisation() const;
    bool getPiscinePrivee() const;

    QList<Reservation*> getReservations() const;
    int getNombreReservations() const;

    // Setters
    void setNumero(int numero);
    void setTaille(int taille);
    void setEtage(int etage);

    void setNombreToilettes(int nombre);
    void setNombreSallesBain(int nombre);

    void setChauffage(bool actif);
    void setLaveVaisselle(bool actif);
    void setLaveLinge(bool actif);
    void setMicroOnde(bool actif);
    void setPlaqueCuisson(bool actif);
    void setClimatisation(bool actif);
    void setPiscinePrivee(bool actif);

    // Gestion des réservations
    void ajouterReservation(Reservation* reservation);
    void supprimerReservation(Reservation* reservation);
};

#endif
