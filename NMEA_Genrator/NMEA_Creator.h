#ifndef NMEA_CREATOR_H
#define NMEA_CREATOR_H

#include <QObject>
#include <QString>

class NMEA_Creator : public QObject
{
  Q_OBJECT
  public:
  explicit NMEA_Creator(QObject *parent = nullptr);

  static QString createGeoPosition();

  signals:

  public slots:
};

#endif // NMEA_CREATOR_H
