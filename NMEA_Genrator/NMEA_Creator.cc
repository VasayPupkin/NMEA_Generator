#include <qmath.h>

#include "NMEA_Creator.h"
#include "constants.h"

NMEA_Creator::NMEA_Creator(QObject *parent) : QObject(parent)
{

}

QString NMEA_Creator::checksumCalculator(const QString& str)
{
  int checksum = 0x00;
  for(auto sym : str.toStdString()){
    if(sym != general_symbols::startSymbol &&
       sym != general_symbols::preCSSymbol)
      checksum = checksum^sym;
  }
  return QString::number(checksum, 16).toUpper();
}

QString NMEA_Creator::convertDegreeFormat(const float& value)
{
  QString result = QString::number(static_cast<int>(floorf(value)));
  modff();
}

QString NMEA_Creator::createGeoPosition(const float& latitude, const QString& NSIndicator,
                                        const float& longitude, const QString& EWIndicator)
{

}
