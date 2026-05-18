
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403a52dc(int param_1,uint *param_2)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0xb) {
    if (*(char *)((int)param_2 + 0xb) == '\x02') {
      *param_2 = *param_2 & 0xfffbffff;
      pcVar2 = *(code **)(_DAT_ram_3fcdfed0 + 1000);
      *(byte *)((int)param_2 + 0x119) = *(byte *)((int)param_2 + 0x119) & 0xfc;
      (*pcVar2)();
    }
  }
  else if (bVar1 < 0xc) {
    if (bVar1 == 4) {
      *param_2 = *param_2 | 0x20000;
      return 0;
    }
    if (bVar1 == 6) {
      if ((*(char *)((int)param_2 + 0xb) == '\x02') &&
         (*(undefined1 *)(param_2 + 0x46) = 2, (int)(*param_2 << 0xb) < 0)) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x348))(param_2);
      }
    }
    else if (bVar1 == 2) {
      *param_2 = *param_2 | 2;
      return 0xffffffff;
    }
  }
  else if (bVar1 == 0x11) {
    if ((((char)param_2[0x14] == '\x06') && (*(char *)(param_1 + 3) == '\x0f')) &&
       (*(char *)(param_1 + 4) != '#')) {
      *(char *)((int)param_2 + 0x4a) = *(char *)(param_1 + 4);
      *param_2 = *param_2 | 0x100;
    }
    if (2 < (byte)param_2[0x46]) {
LAB_ram_403a5376:
      *(undefined1 *)(param_2 + 0x46) = 1;
      return 0;
    }
  }
  else if (bVar1 < 0x12) {
    if (bVar1 == 0xd) goto LAB_ram_403a5376;
  }
  else if (bVar1 == 0x28) {
    if (((char)param_2[0x14] == '\f') ||
       ((**(code **)(_DAT_ram_3fcdfecc + 0x110))
                  (0xd3c,&DAT_ram_3c0f6ecc,(char)param_2[0x14],0,0x28,
                   *(code **)(_DAT_ram_3fcdfecc + 0x110)), (char)param_2[0x14] == '\f')) {
      *(undefined1 *)(param_2 + 0x14) = 0xff;
      if ((int)((uint)(ushort)param_2[0x17] << 0x13) < 0) {
        *(ushort *)(param_2 + 0x17) = (ushort)param_2[0x17] & 0xefff;
      }
    }
  }
  else if ((bVar1 == 0x29) &&
          (((char)param_2[0x14] == '\r' ||
           ((**(code **)(_DAT_ram_3fcdfecc + 0x110))
                      (0xd33,&DAT_ram_3c0f6ecc,(char)param_2[0x14],0,0x29,
                       *(code **)(_DAT_ram_3fcdfecc + 0x110)), (char)param_2[0x14] == '\r')))) {
    *(undefined1 *)(param_2 + 0x14) = 0xff;
    if ((int)((uint)(ushort)param_2[0x17] << 0x12) < 0) {
      *(ushort *)(param_2 + 0x17) = (ushort)param_2[0x17] & 0xdfff;
    }
  }
  return 0;
}

