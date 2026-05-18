
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039f4ba(void)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  
  if ((_DAT_ram_3fcc4424 == 0) || (DAT_ram_3fcc440e == '\0')) {
    DAT_ram_3fcc45d5 = '\0';
LAB_ram_4039f4d4:
    pcVar3 = *(code **)(_DAT_ram_3fcdfdd8 + 0x1d0);
    uVar1 = 1;
  }
  else {
    DAT_ram_3fcc45d5 = *(char *)(gp + 0x24a);
    if (DAT_ram_3fcc45d5 == '\0') goto LAB_ram_4039f4d4;
    if (_DAT_ram_3fcc4424 == 2) {
      pcVar3 = *(code **)(_DAT_ram_3fcdfdd8 + 0x1d0);
      uVar1 = DAT_ram_3fcc4422;
    }
    else {
      if (_DAT_ram_3fcc4424 != 1) goto LAB_ram_4039f50c;
      pcVar3 = *(code **)(_DAT_ram_3fcdfdd8 + 0x1d0);
      uVar1 = DAT_ram_3fcc440b;
    }
  }
  (*pcVar3)(uVar1);
LAB_ram_4039f50c:
  DAT_ram_3fcc440c = FUN_ram_4039f482();
  if ((DAT_ram_3fcc440e != '\0') && (iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))(), iVar2 != 0))
  {
    FUN_ram_42090c90();
    return;
  }
  return;
}

