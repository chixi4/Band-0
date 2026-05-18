
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202f67c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  _DAT_ram_3fcb6778 = _DAT_ram_3fcb6778 + 1;
  iVar2 = param_4 + 8;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_ram_4202f224(param_1,iVar2,param_3 + 0x10);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_4202f518(param_1,param_4 + 0x10,param_3,iVar2);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_4202f1d4(param_1,param_4 + 0x18,param_3,iVar2);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_4202f224(param_1,iVar2,param_4 + 0x10,param_4 + 0x18);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_42025172(param_4,iVar2,3);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_4202f562(param_1,param_4);
  }
  else {
    iVar1 = FUN_ram_4202f224(param_1,iVar2,param_3,param_3);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_42025172(param_4,iVar2,3);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_4202f562(param_1,param_4);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_42024dea(param_1 + 0xc,0);
    if (iVar1 == 0) goto LAB_ram_4202f712;
    iVar1 = FUN_ram_4202f224(param_1,iVar2,param_3 + 0x10);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_4202f224(param_1,param_4 + 0x10,iVar2,iVar2);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_4202f224(param_1,iVar2,param_4 + 0x10,param_1 + 0xc);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_ram_4202f518(param_1,param_4,param_4,iVar2);
  }
  if (iVar1 != 0) {
    return;
  }
LAB_ram_4202f712:
  iVar5 = param_3 + 8;
  iVar4 = param_4 + 0x10;
  iVar1 = FUN_ram_4202f224(param_1,iVar4,iVar5,iVar5);
  if ((((iVar1 == 0) && (iVar1 = FUN_ram_4202f5b8(param_1,iVar4), iVar1 == 0)) &&
      (iVar1 = FUN_ram_4202f224(param_1,iVar2,param_3,iVar4), iVar1 == 0)) &&
     (iVar1 = FUN_ram_4202f5b8(param_1,iVar2), iVar1 == 0)) {
    iVar3 = param_4 + 0x18;
    iVar1 = FUN_ram_4202f224(param_1,iVar3,iVar4,iVar4);
    if ((((iVar1 == 0) && (iVar1 = FUN_ram_4202f5b8(param_1,iVar3), iVar1 == 0)) &&
        ((iVar1 = FUN_ram_4202f224(param_1,iVar4,param_4,param_4), iVar1 == 0 &&
         ((iVar1 = FUN_ram_4202f1d4(param_1,iVar4,iVar4,iVar2), iVar1 == 0 &&
          (iVar1 = FUN_ram_4202f1d4(param_1,iVar4,iVar4,iVar2), iVar1 == 0)))))) &&
       ((iVar1 = FUN_ram_4202f1d4(param_1,iVar2,iVar2,iVar4), iVar1 == 0 &&
        (((((iVar1 = FUN_ram_4202f224(param_1,iVar2,iVar2,param_4), iVar1 == 0 &&
            (iVar1 = FUN_ram_4202f1d4(param_1,iVar2,iVar2,iVar3), iVar1 == 0)) &&
           (iVar1 = FUN_ram_4202f224(param_1,iVar3,iVar5,param_3 + 0x10), iVar1 == 0)) &&
          ((iVar1 = FUN_ram_4202f5b8(param_1,iVar3), iVar1 == 0 &&
           (iVar1 = FUN_ram_420249f4(param_2,iVar4), iVar1 == 0)))) &&
         (iVar2 = FUN_ram_420249f4(param_2 + 8,iVar2), iVar2 == 0)))))) {
      FUN_ram_420249f4(param_2 + 0x10,iVar3);
      return;
    }
  }
  return;
}

