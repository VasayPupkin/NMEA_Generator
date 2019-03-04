#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>

namespace general_symbols {
    const QString startSymbol = "$";
    const QString delimiterSymbol = ",";
    const QString preCSSymbol = "*";
}

namespace message_id {
  const QString gpsPrefix = "GP";
  const QString latLonData = "GLL";
  const QString gpsLatLon = gpsPrefix + latLonData;
}

#endif // CONSTANTS_H
