
undefined4 FUN_ram_4202479e(int *param_1,uint param_2)

{
  int iVar1;
  
  if (10000 < param_2) {
    return 0xfffffff0;
  }
  if (*(ushort *)((int)param_1 + 6) < param_2) {
    iVar1 = FUN_ram_4202939a(param_2,4);
    if (iVar1 == 0) {
      return 0xfffffff0;
    }
    if (*param_1 != 0) {
      FUN_ram_40399daa(iVar1,*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
      FUN_ram_420293c8(*param_1,(uint)*(ushort *)((int)param_1 + 6) << 2);
    }
    *(short *)((int)param_1 + 6) = (short)param_2;
    *param_1 = iVar1;
  }
  return 0;
}

