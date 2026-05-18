
void FUN_ram_42054838(int param_1,short param_2)

{
  uint uVar1;
  ushort uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x14) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  uVar2 = param_2 + *(ushort *)(param_1 + 0x2c);
  if ((0x1680 < uVar2) || (uVar2 < *(ushort *)(param_1 + 0x2c))) {
    uVar2 = 0x1680;
  }
  *(ushort *)(param_1 + 0x2c) = uVar2;
  uVar1 = FUN_ram_420547dc(param_1);
  if (0x59f < uVar1) {
    *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 2;
    FUN_ram_42057e96(param_1);
    return;
  }
  return;
}

