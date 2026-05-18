
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42041e80(uint *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *param_2;
  if (bVar1 == 0x10) {
LAB_ram_42041f72:
    if ((char)param_1[0x14] != '\x06') {
      return 0xff;
    }
    (**(code **)(_DAT_ram_3fcdfecc + 0x450))(param_1,6);
    (**(code **)(_DAT_ram_3fcdfecc + 0x6e0))(param_1,0x1a);
    return 0xff;
  }
  if (bVar1 < 0x11) {
    if (bVar1 == 0xe) {
      *(byte *)(param_1 + 0x15) = (byte)param_1[0x15] & 0xf7;
      if ((char)param_1[0x14] != '\x03') {
        return 0xff;
      }
      (**(code **)(_DAT_ram_3fcdfecc + 0x450))(param_1,3);
      if ((int)(*param_1 << 2) < 0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x700))(param_1,0x1a);
      }
      *param_1 = *param_1 & 0xdfffffff;
      return 0xff;
    }
    if (0xe < bVar1) {
      *(byte *)(param_1 + 0x15) = (byte)param_1[0x15] & 0xfd;
      if (*(char *)((int)param_1 + 0xb) == '\x01') {
        (**(code **)(_DAT_ram_3fcdfecc + 0x408))
                  (param_1,param_3,0,1,1,*(code **)(_DAT_ram_3fcdfecc + 0x408));
        *(undefined1 *)((int)param_1 + 0x4a) = 0;
        return 0;
      }
      goto LAB_ram_42041f72;
    }
    if (bVar1 == 0) {
      if ((char)param_1[0x14] != '\0') {
        return 0xff;
      }
      (**(code **)(_DAT_ram_3fcdfecc + 0x450))(param_1,0);
      return 0xff;
    }
LAB_ram_42041f42:
    if ((char)param_1[0x14] != '\x0e') {
      return 0xff;
    }
  }
  else {
    if (bVar1 == 0x14) {
      cVar2 = '\b';
      *(byte *)(param_1 + 0x15) = (byte)param_1[0x15] & 0xdf;
    }
    else {
      if (bVar1 < 0x15) {
        if (bVar1 == 0x12) {
          *(byte *)(param_1 + 0x15) = (byte)param_1[0x15] & 0xef;
          if ((char)param_1[0x14] != '\a') {
            return 0xff;
          }
          goto LAB_ram_42041f4c;
        }
        goto LAB_ram_42041f42;
      }
      if (bVar1 == 0x16) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x438))(param_1,0x1a);
        cVar2 = '\t';
      }
      else {
        if (bVar1 != 0x1d) goto LAB_ram_42041f42;
        (**(code **)(_DAT_ram_3fcdfecc + 0xa30))
                  (param_1,0x11,0,param_4,0x1000,*(code **)(_DAT_ram_3fcdfecc + 0xa30));
        if ((int)*param_1 < 0) {
          *param_1 = *param_1 & 0x7fffffff;
          cVar2 = '\n';
        }
        else if (*(char *)((int)param_1 + 0xb) == '\x02') {
          cVar2 = '\n';
          if (*(byte *)((int)param_1 + 0x4d) < *(byte *)((int)param_1 + 0x4e)) {
            *(byte *)((int)param_1 + 0x4d) = *(byte *)((int)param_1 + 0x4e);
            cVar2 = '\n';
          }
        }
        else {
          cVar2 = '\n';
          if ((*(char *)((int)param_1 + 0xb) == '\x01') &&
             ((byte)param_1[0x13] < *(byte *)((int)param_1 + 0x4e))) {
            *(byte *)(param_1 + 0x13) = *(byte *)((int)param_1 + 0x4e);
          }
        }
      }
    }
    if ((char)param_1[0x14] != cVar2) {
      return 0xff;
    }
  }
LAB_ram_42041f4c:
  (**(code **)(_DAT_ram_3fcdfecc + 0x450))(param_1);
  return 0xff;
}

