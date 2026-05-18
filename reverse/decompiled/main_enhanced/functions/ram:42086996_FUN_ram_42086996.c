
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42086996(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcea4,*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)
                   ,*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 7),
                   *(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
  if (_DAT_ram_3fcc3fa8 == param_1) {
    _DAT_ram_3fcc3fa8 = 0;
  }
  piVar3 = (int *)&DAT_ram_3fcc3f60;
  uVar4 = 0;
  do {
    uVar1 = uVar4;
    uVar5 = uVar1 & 0xff;
    if (DAT_ram_3fcc3f76 <= uVar5) {
      return;
    }
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    uVar4 = uVar1 + 1;
  } while (iVar2 != param_1);
  if (*(int *)(param_1 + 0x338) != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
  }
  (*(code *)&SUB_ram_40010488)(param_1,0,0x3b8);
  *(undefined4 *)((uVar1 + 0x3b8) * 4 + 0x3fcc3080) = 0;
  iVar2 = 0;
  uVar4 = DAT_ram_3fcc3f76 - 1 & 0xff;
  DAT_ram_3fcc3f76 = (byte)(DAT_ram_3fcc3f76 - 1);
  if (uVar5 <= uVar4) {
    iVar2 = (uVar4 - uVar5 & 0xff) << 2;
  }
  FUN_ram_4039c1f2(&DAT_ram_3fcc3078 + (uVar1 + 0x3ba) * 4,&DAT_ram_3fcc3078 + (uVar1 + 0x3bb) * 4,
                   iVar2);
  return;
}

