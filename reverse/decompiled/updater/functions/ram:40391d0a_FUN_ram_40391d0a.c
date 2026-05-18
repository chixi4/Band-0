
undefined4 FUN_ram_40391d0a(int param_1)

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
  FUN_ram_40394d2c();
  FUN_ram_40394d60();
  uVar2 = ~(*(uint *)(iVar1 + 8) & 0x3ff00000);
  uVar4 = FUN_ram_40399fcc(iVar3,uVar2,5);
  uVar2 = uVar2 & uVar4;
  iVar1 = FUN_ram_40391bbe(iVar3,uVar2,&puStack_14);
  FUN_ram_40394d2c();
  FUN_ram_40394d8e();
  if (iVar1 != 0) {
    if (puStack_14 != (undefined4 *)0x0) {
      FUN_ram_40395514(*puStack_14,0,0,0);
      return 0;
    }
    if (-1 < (int)(uVar2 << 1)) {
      return 0;
    }
  }
  FUN_ram_40391bac(iVar3);
  return 0;
}

