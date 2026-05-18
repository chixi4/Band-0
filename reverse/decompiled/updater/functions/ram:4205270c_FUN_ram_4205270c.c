
void FUN_ram_4205270c(int param_1,short param_2)

{
  uint uVar1;
  ushort uVar2;
  
  if (param_1 == 0) {
    return;
  }
  uVar2 = param_2 + *(ushort *)(param_1 + 0x2c);
  if ((0x1680 < uVar2) || (uVar2 < *(ushort *)(param_1 + 0x2c))) {
    uVar2 = 0x1680;
  }
  *(ushort *)(param_1 + 0x2c) = uVar2;
  uVar1 = FUN_ram_420526c4(param_1);
  if (0x59f < uVar1) {
    *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 2;
    FUN_ram_420552e2(param_1);
    return;
  }
  return;
}

