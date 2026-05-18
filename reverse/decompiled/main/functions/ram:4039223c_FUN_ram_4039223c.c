
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039223c(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int aiStack_24 [2];
  
  uVar3 = param_1 & 0xffff8000;
  iVar5 = 0;
  uVar2 = ((param_2 + 0x7fff + param_1) - uVar3 & 0xffff8000) + uVar3;
  while( true ) {
    if (uVar2 <= uVar3) {
      return iVar5;
    }
    if (*(uint *)(_DAT_ram_3fcdfff0 + 4) <= uVar3) break;
    iVar4 = FUN_ram_403921f6(uVar3,aiStack_24);
    iVar1 = aiStack_24[0];
    if ((iVar4 != 0) && (aiStack_24[0] != 0)) {
      thunk_FUN_ram_40396966();
      FUN_ram_40399126(iVar1,0x8000);
      thunk_FUN_ram_40396994();
      iVar5 = iVar4;
    }
    uVar3 = uVar3 + 0x8000;
  }
  return 0;
}

