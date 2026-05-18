
undefined4 FUN_ram_40392916(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puStack_14;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar3 + 4);
  if (iVar1 != param_1) {
    return 0x103;
  }
  puStack_14 = (undefined4 *)0x0;
  FUN_ram_4039691e();
  FUN_ram_40396966();
  uVar2 = ~(*(uint *)(iVar1 + 8) & 0x3ff00000);
  uVar4 = FUN_ram_4039c398(iVar3,uVar2,5);
  uVar2 = uVar2 & uVar4;
  iVar1 = FUN_ram_403927c8(iVar3,uVar2,&puStack_14);
  FUN_ram_4039691e();
  FUN_ram_40396994();
  if (iVar1 != 0) {
    if (puStack_14 != (undefined4 *)0x0) {
      FUN_ram_40397156(*puStack_14,0,0,0);
      return 0;
    }
    if (-1 < (int)(uVar2 << 1)) {
      return 0;
    }
  }
  FUN_ram_403927b6(iVar3);
  return 0;
}

