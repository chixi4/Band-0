
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a452c(void)

{
  int iVar1;
  
  iVar1 = *(int *)(_DAT_ram_3fcdff64 + 0x14);
  if (iVar1 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x7008,2);
  }
  else {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))
              (0x7008,(uint)*(ushort *)(iVar1 + 8) << 0x10 | (uint)*(byte *)(iVar1 + 0xb) << 8 | 1);
    iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x5e4))(*(undefined4 *)(_DAT_ram_3fcdff64 + 0x14));
    if (iVar1 == 0) {
      (**(code **)(_DAT_ram_3fcdfed0 + 0x57c))(*(undefined4 *)(_DAT_ram_3fcdff64 + 0x30));
      (**(code **)(_DAT_ram_3fcdfed0 + 0x1e0))(*(undefined4 *)(_DAT_ram_3fcdff64 + 0x14));
      (**(code **)(_DAT_ram_3fcdfecc + 0x90))(*(int *)(_DAT_ram_3fcdff64 + 0x14) + 0xbc);
      *(undefined4 *)(_DAT_ram_3fcdff64 + 0x14) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x403a45d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfecc + 0xf8))(0);
  return;
}

