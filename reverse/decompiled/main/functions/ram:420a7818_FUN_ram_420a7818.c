
undefined4
FUN_ram_420a7818(int *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,
                undefined4 *param_5)

{
  int iVar1;
  undefined1 *puVar2;
  
  *param_5 = 0;
  puVar2 = param_2;
  if (param_4 != 0) {
    if (param_3 < param_2) {
      return 0xffff9600;
    }
    if ((int)param_3 - (int)param_2 < 6) {
      return 0xffff9600;
    }
    param_2[1] = 0xb;
    param_2[3] = 2;
    param_2[4] = 1;
    *param_2 = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    puVar2 = param_2 + 6;
  }
  if (*(char *)(*param_1 + 0xc) == '\0') {
    iVar1 = 0;
  }
  else {
    if (param_3 < puVar2) {
      return 0xffff9600;
    }
    if ((int)param_3 - (int)puVar2 < 5) {
      return 0xffff9600;
    }
    puVar2[2] = 0;
    puVar2[3] = 1;
    puVar2[1] = 1;
    iVar1 = *param_1;
    *puVar2 = 0;
    puVar2[4] = *(undefined1 *)(iVar1 + 0xc);
    iVar1 = 5;
  }
  puVar2 = puVar2 + iVar1;
  if (*(char *)(*param_1 + 0xd) == '\0') {
    iVar1 = 0;
  }
  else {
    if (param_3 < puVar2) {
      return 0xffff9600;
    }
    if ((int)param_3 - (int)puVar2 < 4) {
      return 0xffff9600;
    }
    puVar2[1] = 0x16;
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    iVar1 = 4;
  }
  puVar2 = puVar2 + iVar1;
  if (*(char *)(*param_1 + 0xe) == '\0') {
    iVar1 = 0;
  }
  else {
    if ((param_3 < puVar2) || ((int)param_3 - (int)puVar2 < 4)) {
      return 0xffff9600;
    }
    puVar2[1] = 0x17;
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    iVar1 = 4;
  }
  *param_5 = puVar2 + (iVar1 - (int)param_2);
  return 0;
}

