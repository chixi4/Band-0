
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a39e0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_a4;
  
  bVar1 = *(byte *)(param_1 + 1);
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  if (*(ushort *)(iVar2 + 0x40) < (ushort)(bVar1 + 2)) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x73,&DAT_ram_3c0f58bc,2,*(undefined1 *)(param_1 + 1),extraout_a4,
               *(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
                    /* WARNING: Could not recover jumptable at 0x403a3a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfecc + 0x4c))(param_1);
  return;
}

