#include "globals.h"

StoredBuffer gStoredTVBuffer  = {};
StoredBuffer gStoredDRCBuffer = {};

std::vector<PluginContainer> gLoadedPlugins;
std::vector<relocation_trampoline_entry_t> gTrampData;

std::set<std::shared_ptr<PluginData>> gLoadedData;
std::set<std::shared_ptr<PluginData>> gLoadOnNextLaunch;
std::mutex gLoadedDataMutex;
std::map<std::string, OSDynLoad_Module> gUsedRPLs;
std::vector<void *> gAllocatedAddresses;

bool gNotificationModuleLoaded = false;

OSThread *gOnlyAcceptFromThread = nullptr;

bool gConfigMenuShouldClose = false;

bool gConfigMenuOpened = false;
