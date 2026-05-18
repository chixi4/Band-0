
void FUN_ram_42099d6e(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
  param_1[4] = 4;
  if (*(int *)(iVar2 + 0xcc) == 0) {
    uVar1 = *param_1;
    *(undefined4 *)(iVar2 + 0xcc) = 1;
    *(undefined4 *)(iVar2 + 0xd0) = 0;
    FUN_ram_42099782(uVar1);
    FUN_ram_42099a2a(uVar1,iVar2);
    FUN_ram_42099cec(uVar1,iVar2);
  }
  iVar2 = FUN_ram_42060348(param_1 + 0x14,0x20);
  if (iVar2 == 0) {
    param_1[9] = 0;
    param_1[0xc] = 0;
  }
  else {
    param_1[10] = 1;
  }
  return;
}

