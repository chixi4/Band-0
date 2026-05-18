
int FUN_ram_42052650(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 4) {
    iVar1 = FUN_ram_42054f64();
    if (iVar1 != 0) goto LAB_ram_42052692;
  }
  else {
    if (iVar1 == 7) {
      iVar1 = FUN_ram_42054f64();
      if (iVar1 != 0) goto LAB_ram_42052692;
      uVar2 = 9;
      goto LAB_ram_4205267a;
    }
    if (iVar1 != 3) {
      return 0;
    }
    iVar1 = FUN_ram_42054f64();
    if (iVar1 != 0) {
LAB_ram_42052692:
      if (iVar1 == -1) {
        *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 8;
        return 0;
      }
      return iVar1;
    }
    FUN_ram_4205262e(param_1);
  }
  uVar2 = 5;
LAB_ram_4205267a:
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  FUN_ram_420552e2(param_1);
  return 0;
}

