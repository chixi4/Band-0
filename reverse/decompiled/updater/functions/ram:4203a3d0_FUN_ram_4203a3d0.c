
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203a3d0(uint param_1)

{
  byte bVar1;
  int iVar2;
  
  if ((DAT_ram_3fcb5175 >> (param_1 & 0x1f) & 1) != 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d3d0,0x3c072ba4,0x8f1);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((DAT_ram_3fcb5176 >> (param_1 & 0x1f) & 1) != 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d3d8,0x3c072ba4,0x8f2);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (DAT_ram_3fcb5175 == 0) {
    FUN_ram_42031c04(0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 200))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xf8))();
    if (DAT_ram_3fcb3f4c != '\0') {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x104))();
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xd4))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x188))();
    FUN_ram_4203a39e();
    FUN_ram_4039ccd4();
    FUN_ram_42033bea(&DAT_ram_3fcb4f74);
    FUN_ram_42049f5e();
    FUN_ram_4203a352();
    FUN_ram_42047b44();
  }
  else if (DAT_ram_3fcb5176 == 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 200))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xf8))();
    if (DAT_ram_3fcb3f4c != '\0') {
      (*(code *)&SUB_ram_40011b7c)();
    }
    iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 4))();
    if (iVar2 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xd4))();
    }
    FUN_ram_4039ccd4();
  }
  bVar1 = (byte)(1 << (param_1 & 0x1f));
  DAT_ram_3fcb5175 = DAT_ram_3fcb5175 | bVar1;
  DAT_ram_3fcb5176 = bVar1 | DAT_ram_3fcb5176;
  if (param_1 == 0) {
    FUN_ram_420491aa();
    return;
  }
  return;
}

