
undefined4 FUN_ram_420681dc(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (10000 < param_2) {
    return 0xfffffff0;
  }
  uVar1 = (uint)*(ushort *)((int)param_1 + 6);
  if (*(ushort *)((int)param_1 + 6) <= param_2) {
    uVar3 = FUN_ram_420680a2();
    return uVar3;
  }
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 - 1;
    if (uVar1 == 0) break;
  } while (*(int *)(*param_1 + uVar1 * 4) == 0);
  if (uVar2 < param_2) {
    uVar2 = param_2;
  }
  iVar4 = FUN_ram_4206d7ce(uVar2,4);
  if (iVar4 == 0) {
    uVar3 = 0xfffffff0;
  }
  else {
    if (*param_1 != 0) {
      FUN_ram_4039c11e(iVar4,*param_1,uVar2 << 2);
      FUN_ram_4206d7fc(*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
    }
    *(short *)((int)param_1 + 6) = (short)uVar2;
    *param_1 = iVar4;
    uVar3 = 0;
  }
  return uVar3;
}

