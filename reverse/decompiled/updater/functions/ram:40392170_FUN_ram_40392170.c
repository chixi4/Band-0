
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40392170(void)

{
  int iVar1;
  int aiStack_14 [4];
  
  aiStack_14[0] = 0;
  FUN_ram_4039119c();
  iVar1 = FUN_ram_4039203a(1);
  aiStack_14[0] = _DAT_ram_3fcb671c;
  _DAT_ram_3fcb671c = 0;
  if (iVar1 == 0) {
    FUN_ram_40396bd4(_DAT_ram_3fcb6720,0,aiStack_14);
  }
  if (aiStack_14[0] == 1) {
    FUN_ram_40394dba();
  }
  return;
}

