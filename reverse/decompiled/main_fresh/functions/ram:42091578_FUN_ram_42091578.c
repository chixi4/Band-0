
void FUN_ram_42091578(void)

{
  int iVar1;
  
  if (((1 < DAT_ram_3fcc4521) || (DAT_ram_3fcc440e != '\0')) && (DAT_ram_3fcc4410 != '\0')) {
    DAT_ram_3fcc4410 = 0;
    if (((DAT_ram_3fcc4520 != '\0') || (DAT_ram_3fcc45c8 != '\0')) ||
       (iVar1 = FUN_ram_42092cdc(1), iVar1 != 0)) {
      FUN_ram_420914ca(0,0);
    }
    (*(code *)&SUB_ram_40011b84)();
    (*(code *)&SUB_ram_40011d48)();
    return;
  }
  return;
}

