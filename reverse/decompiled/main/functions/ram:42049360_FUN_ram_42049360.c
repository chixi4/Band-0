
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42049360(int *param_1,uint param_2,uint param_3,undefined4 param_4,int *param_5,
                    undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  iVar2 = 0x102;
  if (((param_2 <= (uint)param_1[4]) && (iVar2 = 0x104, param_3 <= param_1[4] - param_2)) &&
     (iVar2 = 0x106, *param_1 == _DAT_ram_3fcc51f0)) {
    uVar1 = param_2 + param_1[3] & 0x7fff;
    iVar2 = FUN_ram_4204a320(param_2 + param_1[3] & 0xffff8000,param_3 + uVar1,param_4,param_5,
                             param_6);
    if (iVar2 == 0) {
      *param_5 = *param_5 + uVar1;
    }
  }
  return iVar2;
}

