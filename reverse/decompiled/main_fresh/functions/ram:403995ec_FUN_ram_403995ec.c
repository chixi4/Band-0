
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403995ec(undefined4 param_1,int param_2,uint param_3,uint param_4,uint param_5,
                     undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_ram_403994b6(param_1,1);
  if (param_3 % uVar1 == 0) goto LAB_ram_4039961a;
  do {
    do {
      uVar1 = FUN_ram_4039bf1e();
LAB_ram_4039961a:
    } while (((param_4 % uVar1 != 0) || (iVar2 = FUN_ram_40399448(param_4,param_5), iVar2 == 0)) ||
            (iVar2 = FUN_ram_403995a4(param_1,param_3,param_5,3), iVar2 == 0));
    param_5 = ((param_5 - 1) + uVar1) / uVar1;
    uVar3 = FUN_ram_403994b6(param_1,param_5);
    *param_6 = uVar3;
    iVar2 = 0xe;
    uVar4 = _DAT_ram_600c40c8 >> 3 & 3;
    if (uVar4 != 0) {
      iVar2 = (uVar4 != 1) + 0xf;
    }
    uVar4 = param_4 >> iVar2;
    param_5 = param_5 + uVar4;
    while( true ) {
      if (uVar4 == param_5) {
        return;
      }
      iVar2 = 0xe;
      uVar5 = _DAT_ram_600c40c8 >> 3 & 3;
      if (uVar5 != 0) {
        iVar2 = (uVar5 != 1) + 0xf;
      }
      uVar5 = (param_3 & 0x1fffff) >> iVar2;
      if ((param_2 != 1) || (0x3f < uVar5)) break;
      *(uint *)((uVar5 + 0x18031400) * 4) = uVar4;
      param_3 = param_3 + uVar1;
      uVar4 = uVar4 + 1;
    }
  } while( true );
}

