
undefined4 FUN_ram_42057258(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0xfffffff0;
  }
  if ((*(byte *)(param_1 + 0x39) & 1) == 0) {
    return 0xfffffff0;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (0x23f < *(ushort *)(param_1 + 0x30)) {
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4205142c(0x5c);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      *(int *)(param_1 + 0x20) = iVar1;
    }
    else if (*(char *)(iVar1 + 4) != '\0') {
      FUN_ram_42056510();
    }
    (*(code *)&SUB_ram_40010488)(iVar1,0,0x5c);
    FUN_ram_42059c2c(param_1,iVar1 + 0x44,0x42046918);
    iVar2 = FUN_ram_42056494();
    if (iVar2 == 0) {
      *(undefined1 *)(iVar1 + 4) = 1;
      if ((*(byte *)(param_1 + 0x39) & 4) != 0) {
        if (*(char *)(iVar1 + 8) != '\0') {
          FUN_ram_42055a5a(0x42047918,param_1);
          *(undefined1 *)(iVar1 + 8) = 0;
        }
        FUN_ram_42056786(param_1);
        return 0;
      }
      FUN_ram_420561aa(iVar1,2);
      return 0;
    }
  }
  return 0xffffffff;
}

