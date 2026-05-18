
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403995ec(undefined4 param_1,int param_2,uint param_3,uint param_4,int param_5,
                     undefined4 *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar2 = FUN_ram_403994b6(param_1,1);
  if ((((param_3 % uVar2 == 0) && (param_4 % uVar2 == 0)) &&
      (iVar3 = FUN_ram_40399448(param_4,param_5), iVar3 != 0)) &&
     (iVar3 = FUN_ram_403995a4(param_1,param_3,param_5,3), iVar3 != 0)) {
    uVar1 = (param_5 + -1 + uVar2) / uVar2;
    uVar4 = FUN_ram_403994b6(param_1,uVar1);
    *param_6 = uVar4;
    iVar3 = 0xe;
    uVar5 = _DAT_ram_600c40c8 >> 3 & 3;
    if (uVar5 != 0) {
      iVar3 = (uVar5 != 1) + 0xf;
    }
    param_4 = param_4 >> iVar3;
    uVar1 = uVar1 + param_4;
    while( true ) {
      if (param_4 == uVar1) {
        return;
      }
      iVar3 = 0xe;
      uVar5 = _DAT_ram_600c40c8 >> 3 & 3;
      if (uVar5 != 0) {
        iVar3 = (uVar5 != 1) + 0xf;
      }
      uVar5 = (param_3 & 0x1fffff) >> iVar3;
      if ((param_2 != 1) || (0x3f < uVar5)) break;
      *(uint *)((uVar5 + 0x18031400) * 4) = param_4;
      param_3 = param_3 + uVar2;
      param_4 = param_4 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

