
#ifndef RESERVATION_H
#define RESERVATION_H

#include <QDate>

class Chambre;
class Client;

class Reservation
{
private:
    Chambre* chambre;
    Client* client;

    QDate dateDebut;
    QDate dateFin;

    int nombrePersonnes;

public:
    Reservation();
    Reservation(Chambre* chambre, Client* client,
                QDate debut, QDate fin, int nombrePersonnes);

    Chambre* getChambre() const;
    Client* getClient() const;

    QDate getDateDebut() const;
    QDate getDateFin() const;

    int getNombrePersonnes() const;

    void setChambre(Chambre* chambre);
    void setClient(Client* client);

    void setDateDebut(QDate date);
    void setDateFin(QDate date);

    void setNombrePersonnes(int nombre);

    bool estValide() const;
    bool chevauche(const Reservation& autre) const;
};

#endif
