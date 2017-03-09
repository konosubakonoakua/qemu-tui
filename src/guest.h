#ifndef GUEST_H_
#define GUEST_H_

#include "window.h"

namespace QManager {

void start_guest(const std::string &vm_name,
                 const std::string &dbf,
                 const std::string &vmdir,
                 struct start_data *data);

void delete_guest(const std::string &vm_name,
                  const std::string &dbf,
                  const std::string &vmdir);

void connect_guest(const std::string &vm_name, const std::string &dbf);
void kill_guest(const std::string &vm_name);

} // namespace QManager

#endif
