
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203650e(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_ram_3fcb6be0 == 0) {
    return 0;
  }
  iVar1 = (*(code *)&SUB_ram_40011a44)();
  if (iVar1 != 0) {
    (*(code *)&SUB_ram_40010488)(iVar1,0,0x88);
    *(short *)(iVar1 + 6) = (short)param_1;
    iVar2 = FUN_ram_4202c6d2(param_1);
    if (iVar2 != 0) {
      iVar3 = FUN_ram_420363fc(iVar1,iVar2);
      if (iVar3 == 0) {
        iVar2 = FUN_ram_4202ddac(param_1,iVar2);
        if (iVar2 == 0) goto LAB_ram_4203655c;
        iVar3 = FUN_ram_420363fc(iVar1,iVar2);
        if (iVar3 == 0) {
          iVar2 = FUN_ram_42029404(param_1,iVar2);
          if (iVar2 == 0) goto LAB_ram_4203655c;
          iVar3 = FUN_ram_420363fc(iVar1,iVar2);
          if (iVar3 == 0) {
            iVar2 = FUN_ram_42032280(iVar1 + 0x5c,iVar2);
            if (iVar2 == 0) {
              *(int *)(iVar1 + 0x50) = iVar1 + 0x4c;
              *(undefined4 *)(iVar1 + 0x4c) = 0;
              *(undefined4 *)(iVar1 + 0x7c) = 0;
              *(int *)(iVar1 + 0x80) = iVar1 + 0x7c;
              return iVar1;
            }
            goto LAB_ram_4203655c;
          }
        }
      }
      FUN_ram_420305e2(iVar1);
    }
  }
LAB_ram_4203655c:
  FUN_ram_4203647e(iVar1);
  return 0;
}

