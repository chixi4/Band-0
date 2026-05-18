
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a554c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(_DAT_ram_3fcdfed0 + 0x240);
  uVar1 = *(undefined1 *)(_DAT_ram_3fcdfebc + 9);
  uVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3f0))();
  iVar3 = (*pcVar4)(uVar2,uVar1,*(undefined4 *)(_DAT_ram_3fcdfebc + 100));
  if (iVar3 == -1) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x3e0))();
                    /* WARNING: Could not recover jumptable at 0x403a55d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xf8))(0);
    return;
  }
  if (iVar3 != -2) {
    return;
  }
  _DAT_ram_60045024 = 1;
  return;
}

