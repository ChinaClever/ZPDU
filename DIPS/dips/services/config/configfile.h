#ifndef CONFIGFILE_H
#define CONFIGFILE_H
#include "common.h"

struct sMapItem {
    QString ip;
    int devNum;
};
typedef QMap<int, sMapItem> devRtuMap;


class ConfigFile
{
public:
    ConfigFile();

    bool readJson(devRtuMap &map);

protected:
    bool writeJson(const QString &name);   
};

#endif // CONFIGFILE_H