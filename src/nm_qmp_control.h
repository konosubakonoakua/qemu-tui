#ifndef NM_QMP_CONTROL_H_
#define NM_QMP_CONTROL_H_

#include <nm_usb_devices.h>

void nm_qmp_vm_shut(const nm_str_t *name);
void nm_qmp_vm_stop(const nm_str_t *name);
void nm_qmp_vm_reset(const nm_str_t *name);
void nm_qmp_vm_pause(const nm_str_t *name);
void nm_qmp_vm_resume(const nm_str_t *name);
int nm_qmp_savevm(const nm_str_t *name, const nm_str_t *snap);
int nm_qmp_loadvm(const nm_str_t *name, const nm_str_t *snap);
int nm_qmp_delvm(const nm_str_t *name, const nm_str_t *snap);
int nm_qmp_drive_snapshot(const nm_str_t *name, const nm_str_t *drive,
                          const nm_str_t *path);
int nm_qmp_usb_attach(const nm_str_t *name, const nm_usb_data_t *usb);
int nm_qmp_usb_detach(const nm_str_t *name, const nm_usb_data_t *usb);

#endif /* NM_QMP_CONTROL_H_ */
/* vim:set ts=4 sw=4 fdm=marker: */
