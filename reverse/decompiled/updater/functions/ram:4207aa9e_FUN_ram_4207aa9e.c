
undefined4 FUN_ram_4207aa9e(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = 0x102;
    if ((param_2 != (uint *)0x0) && ((uVar1 = *param_2, uVar1 == 0 || ((uVar1 - 1 & uVar1) == 0))))
    {
      piVar4 = (int *)*param_1;
      iVar3 = *piVar4;
      FUN_ram_4207b952(iVar3 + 8,piVar4[1],param_1[4],uVar1 != 0,1);
      if ((uVar1 == 0) || (FUN_ram_4207b956(iVar3 + 8,piVar4[1],param_1[4],uVar1), param_1[4] != 1))
      {
        uVar1 = 1;
        uVar2 = 1;
      }
      else {
        uVar2 = 4;
      }
      if ((char)param_2[1] == '\0') {
        uVar1 = 0x80000000;
      }
      param_1[6] = uVar2;
      param_1[7] = uVar1;
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

