
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42040d62(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
  (**(code **)(_DAT_ram_3fcdfecc + 0xbfc))(1);
  FUN_ram_42040c22();
  if (_DAT_ram_3fcb6a2c != 0) {
    uVar1 = 0;
    iVar4 = _DAT_ram_3fcdff64;
    do {
      iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + uVar1 * 4);
      uVar2 = uVar1 + 1;
      pcVar5 = *(code **)(_DAT_ram_3fcdfecc + 0x3d8);
      uVar1 = uVar2 & 0xffff;
      *(short *)(iVar3 + 8) = (short)(uVar2 * 0x10000 >> 0x10);
      (*pcVar5)(iVar3);
      iVar4 = _DAT_ram_3fcdff64;
      *(undefined4 *)(iVar3 + 0xec) = 0;
      uVar2 = (uint)_DAT_ram_3fcb6a2c;
      **(int **)(iVar4 + 0x28) = iVar3;
      *(int *)(iVar4 + 0x28) = iVar3 + 0xec;
    } while (uVar1 < uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x42040df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfecc + 0xbfc))(0);
  return;
}

