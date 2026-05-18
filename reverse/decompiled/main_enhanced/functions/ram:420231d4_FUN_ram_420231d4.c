
void FUN_ram_420231d4(undefined8 param_1)

{
  int unaff_s0;
  int iVar1;
  
  FUN_ram_4206614c(param_1,*(undefined8 *)(unaff_s0 + 0x38));
  FUN_ram_42066162();
  iVar1 = FUN_ram_42066178();
  if (iVar1 == 0) {
    DAT_ram_3fcc517e = 1;
    FUN_ram_42023148();
    return;
  }
  return;
}

