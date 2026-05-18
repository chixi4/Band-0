
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42086fc2(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fced8,*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)
                   ,*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 7),
                   *(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
  for (uVar2 = 0; uVar2 < DAT_ram_3fcc3f76; uVar2 = uVar2 + 1 & 0xff) {
    iVar1 = *(int *)((uVar2 + 0x3b8) * 4 + 0x3fcc3080);
    if (iVar1 != param_1) {
      if (*(int *)(iVar1 + 0x338) != 0) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      }
      iVar1 = (uVar2 + 0x3b8) * 4;
      (*(code *)&SUB_ram_40010488)(*(undefined4 *)(iVar1 + 0x3fcc3080),0,0x3b8);
      *(undefined4 *)(iVar1 + 0x3fcc3080) = 0;
    }
  }
  DAT_ram_3fcc3f76 = 1;
  _DAT_ram_3fcc3f60 = param_1;
  return;
}

