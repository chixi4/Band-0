
int FUN_ram_4205458e(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 4) {
    iVar1 = FUN_ram_42057ad4();
    if (iVar1 != 0) goto LAB_ram_420545da;
  }
  else {
    if (iVar1 == 7) {
      iVar1 = FUN_ram_42057ad4();
      if (iVar1 != 0) goto LAB_ram_420545da;
      uVar2 = 9;
      goto LAB_ram_420545c2;
    }
    if (iVar1 != 3) {
      return 0;
    }
    iVar1 = FUN_ram_42057ad4();
    if (iVar1 != 0) {
LAB_ram_420545da:
      if (iVar1 == -1) {
        *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 8;
        return 0;
      }
      return iVar1;
    }
    FUN_ram_4205455a(param_1);
  }
  uVar2 = 5;
LAB_ram_420545c2:
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  FUN_ram_42057e96(param_1);
  return 0;
}

