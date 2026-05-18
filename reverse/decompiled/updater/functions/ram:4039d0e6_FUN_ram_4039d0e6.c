
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039d0e6(void)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  
  if ((_DAT_ram_3fcb5394 == 0) || (DAT_ram_3fcb537e == '\0')) {
    DAT_ram_3fcb5545 = '\0';
LAB_ram_4039d100:
    pcVar3 = *(code **)(_DAT_ram_3fcdfdd8 + 0x1d0);
    uVar1 = 1;
  }
  else {
    DAT_ram_3fcb5545 = *(char *)(gp + 0x116);
    if (DAT_ram_3fcb5545 == '\0') goto LAB_ram_4039d100;
    if (_DAT_ram_3fcb5394 == 2) {
      pcVar3 = *(code **)(_DAT_ram_3fcdfdd8 + 0x1d0);
      uVar1 = DAT_ram_3fcb5392;
    }
    else {
      if (_DAT_ram_3fcb5394 != 1) goto LAB_ram_4039d138;
      pcVar3 = *(code **)(_DAT_ram_3fcdfdd8 + 0x1d0);
      uVar1 = DAT_ram_3fcb537b;
    }
  }
  (*pcVar3)(uVar1);
LAB_ram_4039d138:
  DAT_ram_3fcb537c = FUN_ram_4039d0ae();
  if ((DAT_ram_3fcb537e != '\0') && (iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))(), iVar2 != 0))
  {
    FUN_ram_42048288();
    return;
  }
  return;
}

