
undefined4 FUN_ram_4205e726(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    FUN_ram_42053ac4();
  }
  iVar1 = FUN_ram_42053b52(0x36,param_2,0x280);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(ushort *)(iVar1 + 10) < param_2) {
      iVar1 = FUN_ram_4039bf1e();
    }
    param_1[1] = iVar1;
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}

