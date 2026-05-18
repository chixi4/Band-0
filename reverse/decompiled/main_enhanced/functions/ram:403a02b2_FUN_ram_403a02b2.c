
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_403a02b2(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_34 [3];
  int iStack_28;
  undefined4 auStack_24 [4];
  
  auStack_34[0] = param_1;
  iVar1 = (**(code **)(_DAT_ram_3fcb82b0 + 8))(auStack_34);
  if (iVar1 == 0) {
    if (*(uint *)(_DAT_ram_3fcdfff0 + 4) < param_2 + param_4) {
      iVar1 = 0x104;
    }
    else if ((param_4 != 0) && (iVar1 = 0x102, param_3 != 0)) {
      iVar2 = param_2 - (param_2 & 0xffff8000);
      iVar1 = FUN_ram_4204a320(param_2 & 0xffff8000,iVar2 + param_4,0,&iStack_28,auStack_24);
      if (iVar1 == 0) {
        FUN_ram_4039c11e(param_3,iStack_28 + iVar2,param_4);
        FUN_ram_4204a3e0(auStack_24[0]);
      }
    }
  }
  return iVar1;
}

