
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403996d2(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_ram_403994b6(param_1,1);
  if ((param_2 % uVar1 == 0) && (iVar2 = FUN_ram_403995a4(param_1,param_2,param_3,3), iVar2 != 0)) {
    uVar4 = (param_3 + -1 + uVar1) / uVar1;
    while( true ) {
      if (uVar4 == 0) {
        return;
      }
      iVar2 = 0xe;
      uVar3 = _DAT_ram_600c40c8 >> 3 & 3;
      if (uVar3 != 0) {
        iVar2 = (uVar3 != 1) + 0xf;
      }
      uVar3 = (param_2 & 0x1fffff) >> iVar2;
      if (0x3f < uVar3) break;
      *(undefined4 *)((uVar3 + 0x18031400) * 4) = 0x40;
      param_2 = param_2 + uVar1;
      uVar4 = uVar4 - 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

