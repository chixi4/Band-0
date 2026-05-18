
int FUN_ram_420a6190(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1c [16];
  
  iVar1 = (**(code **)(param_1[0xe] + 0x18))
                    (param_1,auStack_1c,*(byte *)(*param_1 + 8) ^ 1,param_4,param_5,
                     *(code **)(param_1[0xe] + 0x18));
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_ram_420a4c64(param_1,1);
  if (iVar1 == 0) {
    if ((param_1[0x1d] == 0x16) && (*(char *)param_1[0x1b] == '\x14')) {
      if (param_1[0x20] == 0x10) {
        iVar1 = FUN_ram_4206b28c((char *)param_1[0x1b] + 4,auStack_1c,0xc);
        if (iVar1 == 0) {
          iVar1 = 0;
          if (*(char *)param_1[0xe] == '\0') {
            iVar2 = param_1[1] + 1;
          }
          else {
            if (*(char *)(*param_1 + 8) != '\0') goto LAB_ram_420a61d4;
            iVar2 = 10;
          }
          param_1[1] = iVar2;
        }
        else {
          FUN_ram_420a71ae(param_1,2,0x33);
          iVar1 = -0x6e00;
        }
      }
      else {
        FUN_ram_420a71ae(param_1,2,0x32);
        iVar1 = -0x7300;
      }
    }
    else {
      FUN_ram_420a71ae(param_1,2,10);
      iVar1 = -0x7700;
    }
  }
LAB_ram_420a61d4:
  FUN_ram_4206d7da(auStack_1c,0xc);
  return iVar1;
}

