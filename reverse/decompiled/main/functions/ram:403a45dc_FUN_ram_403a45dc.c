
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a45dc(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xf4))();
  if (iVar1 == 4) {
    piVar2 = *(int **)(_DAT_ram_3fcdff64 + 0x14);
    if (piVar2 == (int *)0x0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0xa30,&DAT_ram_3c0f6c94,0,0);
      piVar2 = *(int **)(_DAT_ram_3fcdff64 + 0x14);
    }
    if (*piVar2 << 0x13 < 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x7035,0);
                    /* WARNING: Could not recover jumptable at 0x403a4648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfed0 + 0x57c))(*(undefined4 *)(_DAT_ram_3fcdff64 + 0x30));
      return;
    }
  }
  return;
}

