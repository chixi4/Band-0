
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394554(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = (**(code **)(_DAT_ram_3fcc4c78 + 4))();
  thunk_FUN_ram_40394bd4();
  iVar2 = (**(code **)(_DAT_ram_3fcc4c78 + 0x24))(param_1);
  puVar3 = (uint *)((iVar2 + 0x18013a00) * 4);
  do {
  } while ((int)(*puVar3 << 6) < 0);
  *puVar3 = param_4 << 0x10 | param_1 | param_3 << 8 | 0x5000000;
  do {
  } while ((int)(*puVar3 << 6) < 0);
  thunk_FUN_ram_40394be4();
                    /* WARNING: Could not recover jumptable at 0x403945ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcc4c78 + 8))(uVar1);
  return;
}

