
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208785a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = _DAT_ram_3fcc4018;
  uVar4 = 1;
  while( true ) {
    if (*(byte *)(*(int *)(gp + -0xb4) + 0x3f6) < uVar4) {
      return;
    }
    iVar5 = uVar4 * 4 + _DAT_ram_3fcc4018;
    if (*(int *)(iVar5 + 0xec) == param_1) break;
    uVar4 = uVar4 + 1 & 0xff;
  }
  if (_DAT_ram_3fcc4178 != 0) {
    (**(code **)(_DAT_ram_3fcc4178 + 0x28))(param_1 + 4);
  }
  thunk_EXT_FUN_ram_40011e74(*(undefined1 *)(param_1 + 0x134));
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))
            (*(undefined4 *)(&DAT_ram_3fcc4008 + (*(byte *)(param_1 + 0x134) + 0x4c) * 4));
  *(undefined4 *)(&DAT_ram_3fcc4008 + (*(byte *)(param_1 + 0x134) + 0x4c) * 4) = 0;
  FUN_ram_42079dd8(param_1);
  if ((*(ushort *)(param_1 + 0x15c) & 0x4000) != 0) {
    *(char *)(iVar1 + 0x216) = *(char *)(iVar1 + 0x216) + -1;
  }
  if ((*(uint *)(param_1 + 0xc) & 0x40) == 0) {
    if (*(char *)(param_1 + 0x3b6) != '\0') {
      *(undefined1 *)(param_1 + 0x3b6) = 0;
      if (*(char *)(iVar1 + 0x214) != '\0') {
        *(char *)(iVar1 + 0x214) = *(char *)(iVar1 + 0x214) + -1;
      }
    }
  }
  else {
    FUN_ram_4207c6ec(param_1);
  }
  if ((*(uint *)(iVar1 + 0x214) & 0xff00ff) == 0) {
    if ((*(uint *)(iVar1 + 300) & 0x1000000) != 0) {
      uVar2 = FUN_ram_42079402();
      FUN_ram_42080070(1,2,uVar2);
      FUN_ram_4207c908(iVar1 + 0x12a);
    }
  }
  iVar3 = FUN_ram_4207d8c6(iVar1);
  if (0 < iVar3) {
    DAT_ram_3fcc41d4 = 1;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  *(undefined4 *)(iVar5 + 0xec) = 0;
  *(uint *)(iVar1 + 0x100) = ~(1 << (uVar4 & 0x1f)) & *(uint *)(iVar1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x420879a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  return;
}

