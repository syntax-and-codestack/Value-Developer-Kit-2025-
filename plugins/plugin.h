//plugin.h

#ifndef PLUGIN_H
#define PLUGIN_H

class CPlugin{
public:
   CPlugin();
   ~CPlugin();

    const char* CPLUGIN_NAME = "CPlugin VDK: %t";

    virtual void CPluginSynapseClient(const char* CPluginName) = 0;

};

#endif
