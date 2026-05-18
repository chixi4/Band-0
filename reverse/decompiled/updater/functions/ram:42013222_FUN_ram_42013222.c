
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42013222(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  FUN_ram_4201461c();
  FUN_ram_40394d60();
  uVar2 = 0;
  if (param_1 != 0) {
    FUN_ram_40394d60();
    piVar1 = _DAT_ram_3fcb666c;
    piVar6 = _DAT_ram_3fcb666c;
    for (iVar4 = 0; iVar4 < _DAT_ram_3fcb6668; iVar4 = iVar4 + 1) {
      if (param_1 == *piVar6) {
        iVar4 = _DAT_ram_3fcb6668 + -1;
        *piVar6 = _DAT_ram_3fcb666c[iVar4];
        _DAT_ram_3fcb666c = (int *)FUN_ram_403904da(piVar1,iVar4 * 4,0x1000);
        uVar2 = 0;
        _DAT_ram_3fcb6668 = iVar4;
        goto LAB_ram_42013292;
      }
      piVar6 = piVar6 + 1;
    }
    uVar2 = 0x103;
LAB_ram_42013292:
    FUN_ram_40394d8e();
  }
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    if (((*(uint *)(param_1 + 0x1c) & 1) == 0) && ((*(uint *)(param_1 + 0x24) & 1) == 0)) {
      if (((*(uint *)(param_1 + 0x14) | *(uint *)(param_1 + 0x1c) | *(uint *)(param_1 + 0x24)) & 2)
          == 0) goto LAB_ram_420132e4;
      iVar4 = 1;
      uVar3 = 1;
    }
    else {
      iVar4 = 0;
      uVar3 = 0;
    }
  }
  else {
    iVar4 = 0;
    uVar3 = 0;
  }
  iVar5 = *(int *)(&DAT_ram_3fcb6660 + iVar4 * 4) + -1;
  *(int *)(&DAT_ram_3fcb6660 + iVar4 * 4) = iVar5;
  if (iVar5 == 0) {
    FUN_ram_42014602(uVar3,0);
  }
LAB_ram_420132e4:
  FUN_ram_4201461c();
  FUN_ram_40394d8e();
  thunk_FUN_ram_40390608(param_1);
  return uVar2;
}

