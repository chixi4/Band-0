
void FUN_ram_42048b70(void)

{
  int iVar1;
  
  if (((1 < DAT_ram_3fcb5491) || (DAT_ram_3fcb537e != '\0')) && (DAT_ram_3fcb5380 != '\0')) {
    DAT_ram_3fcb5380 = 0;
    if (((DAT_ram_3fcb5490 != '\0') || (DAT_ram_3fcb5538 != '\0')) ||
       (iVar1 = FUN_ram_4204a2c4(1), iVar1 != 0)) {
      FUN_ram_42048ac2(0,0);
    }
    (*(code *)&SUB_ram_40011b84)();
    (*(code *)&SUB_ram_40011d48)();
    return;
  }
  return;
}

