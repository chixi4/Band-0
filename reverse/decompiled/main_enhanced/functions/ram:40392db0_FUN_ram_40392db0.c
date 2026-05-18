
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40392db0(void)

{
  int iVar1;
  int aiStack_14 [4];
  
  aiStack_14[0] = 0;
  FUN_ram_40391938();
  iVar1 = FUN_ram_40392c70(1);
  aiStack_14[0] = _DAT_ram_3fcc525c;
  _DAT_ram_3fcc525c = 0;
  if (iVar1 == 0) {
    FUN_ram_40398d1e(_DAT_ram_3fcc5260,0,aiStack_14);
  }
  if (aiStack_14[0] == 1) {
    FUN_ram_403969ca();
  }
  return;
}

