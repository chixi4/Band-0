
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039738c(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = FUN_ram_403971b0(param_1,1);
  for (uVar3 = (param_3 + -1 + uVar1) / uVar1; uVar3 != 0; uVar3 = uVar3 - 1) {
    iVar4 = 0xe;
    uVar2 = _DAT_ram_600c40c8 >> 3 & 3;
    if (uVar2 != 0) {
      iVar4 = (uVar2 != 1) + 0xf;
    }
    *(undefined4 *)((((param_2 & 0x1fffff) >> iVar4) + 0x18031400) * 4) = 0x40;
    param_2 = param_2 + uVar1;
  }
  return;
}

