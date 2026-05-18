
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42037944(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  if (_DAT_ram_3fcb6a04 != 0) {
    (**(code **)(_DAT_ram_3fcdfec8 + 0x30))();
    _DAT_ram_3fcb6a04 = 0;
  }
  (**(code **)(_DAT_ram_3fcdfed0 + 0x3e0))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x8b0))(5);
  (**(code **)(_DAT_ram_3fcdfecc + 0xe0))();
  while( true ) {
    iVar3 = (**(code **)(_DAT_ram_3fcdfec4 + 0x20))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10);
    if (iVar3 != 0) break;
    iVar3 = *(int *)(_DAT_ram_3fcdff6c + 0x1c);
    pcVar4 = *(code **)(_DAT_ram_3fcdfec4 + 0x10);
    uVar1 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa8))();
    piVar2 = (int *)(*pcVar4)(iVar3 + 0x10,uVar1);
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x1f,*(undefined4 *)(*piVar2 + 4));
  }
  (**(code **)(_DAT_ram_3fcdfec4 + 8))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x42037a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfed0 + 0x5c0))();
  return;
}

