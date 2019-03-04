#ifndef NMEA_CREATOR_H
#define NMEA_CREATOR_H

#include <QObject>
#include <QString>

//$GPGLL,4916.45,N,12311.12,W,225444,A,*1D
//Where:
//     GLL          Geographic position, Latitude and Longitude
//     4916.46,N    Latitude 49 deg. 16.45 min. North
//     12311.12,W   Longitude 123 deg. 11.12 min. West
//     225444       Fix taken at 22:54:44 UTC
//     A            Data Active or V (void)
//     *iD          checksum data , XOR all between $ and * .

class NMEA_Creator : public QObject
{
  Q_OBJECT
  public:
  explicit NMEA_Creator(QObject *parent = nullptr);

  static QString checksumCalculator(const QString &str);
  static QString convertDegreeFormat(const float &value);
  static QString createGeoPosition(const float& latitude, const QString& NSIndicator,
                                   const float& longitude, const QString& EWIndicator);

  signals:

  public slots:
};

#endif // NMEA_CREATOR_H
