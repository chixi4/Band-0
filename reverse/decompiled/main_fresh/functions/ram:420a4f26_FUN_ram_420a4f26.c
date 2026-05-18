
uint FUN_ram_420a4f26(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffff8f00;
  }
  uVar2 = 0xffff8f00;
  if (*param_1 != 0) {
    if (param_1[1] == 0x1b) goto LAB_ram_420a4f66;
    uVar2 = FUN_ram_420a5902();
    if (uVar2 == 0xffff9500) goto LAB_ram_420a4f66;
    while (uVar2 == 0) {
LAB_ram_420a4f66:
      while( true ) {
        if (param_1[0x1c] != 0) {
          uVar2 = param_1[0x1e];
          if (param_3 < (uint)param_1[0x1e]) {
            uVar2 = param_3;
          }
          if (param_3 != 0) {
            FUN_ram_4039c11e(param_2,param_1[0x1c],uVar2);
            param_1[0x1e] = param_1[0x1e] - uVar2;
          }
          FUN_ram_4206d7da(param_1[0x1c],uVar2);
          if (param_1[0x1e] != 0) {
            param_1[0x1c] = param_1[0x1c] + uVar2;
            return uVar2;
          }
          param_1[0x1c] = 0;
          param_1[0x22] = 0;
          return uVar2;
        }
        if (((code *)param_1[0x15] != (code *)0x0) &&
           (iVar1 = (*(code *)param_1[0x15])(param_1[0x13]), iVar1 == -1)) {
          FUN_ram_420a3fb4(param_1,*(undefined4 *)(*param_1 + 0x5c));
        }
        uVar2 = FUN_ram_420a4c64(param_1,1);
        if ((uVar2 != 0) ||
           (((param_1[0x1e] == 0 && (param_1[0x1d] == 0x17)) &&
            (uVar2 = FUN_ram_420a4c64(param_1,1), uVar2 != 0)))) {
          if (uVar2 == 0xffff8d80) {
            return 0;
          }
          return uVar2;
        }
        iVar1 = param_1[0x1d];
        if (iVar1 == 0x16) break;
        if (iVar1 == 0x15) {
          return 0xffff9700;
        }
        if (iVar1 != 0x17) {
          return 0xffff8900;
        }
        param_1[0x1c] = param_1[0x1b];
        if (0x1a < param_1[1]) {
          FUN_ram_420a3fb4(param_1,0);
        }
      }
      if (0x303 < (uint)param_1[2]) {
        return 0xffff9400;
      }
      if ((*(char *)(*param_1 + 8) == '\0') &&
         ((*(char *)param_1[0x1b] != '\0' || (param_1[0x20] != 4)))) {
        return 0xffff8900;
      }
      uVar2 = FUN_ram_420a4a96(param_1,1,100);
    }
  }
  return uVar2;
}

