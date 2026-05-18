
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208690c(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fce94);
  for (uVar2 = 0; uVar2 < DAT_ram_3fcc3f76; uVar2 = uVar2 + 1 & 0xff) {
    if (*(int *)(*(int *)((uVar2 + 0x3b8) * 4 + 0x3fcc3080) + 0x338) != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    }
    iVar1 = (uVar2 + 0x3b8) * 4;
    (*(code *)&SUB_ram_40010488)(*(undefined4 *)(iVar1 + 0x3fcc3080),0,0x3b8);
    *(undefined4 *)(iVar1 + 0x3fcc3080) = 0;
  }
  DAT_ram_3fcc3f76 = 0;
  return;
}

