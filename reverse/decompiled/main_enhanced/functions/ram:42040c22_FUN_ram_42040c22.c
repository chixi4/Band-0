
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42040c22(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  
  iVar1 = _DAT_ram_3fcdff64;
  piVar4 = *(int **)(_DAT_ram_3fcdff64 + 0x1c);
  *(undefined4 *)(_DAT_ram_3fcdff64 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(int *)(iVar1 + 0x28) = iVar1 + 0x24;
  iVar1 = *piVar4;
  uVar2 = 0;
  while( true ) {
    iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    if (*(ushort *)(iVar3 + 0x38) <= uVar2) break;
    pcVar5 = *(code **)(_DAT_ram_3fcdfecc + 0x3d8);
    *(ushort *)(iVar1 + 8) = uVar2 + 1;
    (*pcVar5)(iVar1);
    iVar3 = _DAT_ram_3fcdff64;
    *(undefined4 *)(iVar1 + 0xec) = 0;
    **(int **)(iVar3 + 0x28) = iVar1;
    *(int *)(iVar3 + 0x28) = iVar1 + 0xec;
    iVar1 = iVar1 + 0x208;
    uVar2 = uVar2 + 1;
  }
  (**(code **)(_DAT_ram_3fcdfec4 + 0x24))
            (_DAT_ram_3fcdff64 + 0x44,*(undefined4 *)(_DAT_ram_3fcdfecc + 0x36c),0);
  (**(code **)(_DAT_ram_3fcdfed0 + 0x1b4))();
                    /* WARNING: Could not recover jumptable at 0x42040cd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfecc + 0x3ac))();
  return;
}

