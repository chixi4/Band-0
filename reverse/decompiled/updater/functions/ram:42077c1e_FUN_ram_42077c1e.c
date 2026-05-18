
undefined4 FUN_ram_42077c1e(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_4;
  if (((uint)param_2[2] <= param_4) && (uVar1 = param_2[2], (*(ushort *)(param_2 + 3) & 0x480) != 0)
     ) {
    iVar4 = *param_2 - param_2[4];
    uVar1 = (param_2[5] * 3) / 2;
    uVar3 = param_4 + 1 + iVar4;
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    if ((*(ushort *)(param_2 + 3) & 0x400) == 0) {
      iVar2 = FUN_ram_40399d54(param_1);
      if (iVar2 == 0) {
        FUN_ram_40399d4e(param_1,param_2[4]);
        goto LAB_ram_42077d0a;
      }
    }
    else {
      iVar2 = FUN_ram_40399d5c(param_1,uVar1);
      if (iVar2 == 0) {
LAB_ram_42077d0a:
        *param_1 = 0xc;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
        return 0xffffffff;
      }
      FUN_ram_40399daa(iVar2,param_2[4],iVar4);
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
    }
    param_2[4] = iVar2;
    param_2[5] = uVar1;
    *param_2 = iVar2 + iVar4;
    param_2[2] = uVar1 - iVar4;
    uVar1 = param_4;
  }
  FUN_ram_40399e7e(*param_2,param_3,uVar1);
  param_2[2] = param_2[2] - uVar1;
  *param_2 = *param_2 + uVar1;
  return 0;
}

