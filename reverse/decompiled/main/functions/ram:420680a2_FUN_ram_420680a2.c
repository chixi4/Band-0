
undefined4 FUN_ram_420680a2(int *param_1,uint param_2)

{
  int iVar1;
  
  if (10000 < param_2) {
    return 0xfffffff0;
  }
  if (*(ushort *)((int)param_1 + 6) < param_2) {
    iVar1 = FUN_ram_4206d7ce(param_2,4);
    if (iVar1 == 0) {
      return 0xfffffff0;
    }
    if (*param_1 != 0) {
      FUN_ram_4039c11e(iVar1,*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
      FUN_ram_4206d7fc(*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
    }
    *(short *)((int)param_1 + 6) = (short)param_2;
    *param_1 = iVar1;
  }
  return 0;
}

