
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203a5ac(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((DAT_ram_3fcb5175 >> (param_1 & 0x1f) & 1) == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d3e0,0x3c072ba4,0x934);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((DAT_ram_3fcb5176 >> (param_1 & 0x1f) & 1) == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d3e8,0x3c072ba4,0x939);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = ~(1 << (param_1 & 0x1f));
  uVar2 = DAT_ram_3fcb5175 & uVar3;
  uVar3 = uVar3 & DAT_ram_3fcb5176;
  DAT_ram_3fcb5175 = (byte)uVar2;
  DAT_ram_3fcb5176 = (byte)uVar3;
  if (uVar2 == 0) {
    FUN_ram_42031c04(1);
    FUN_ram_42047b3a();
    FUN_ram_4203a578();
    thunk_FUN_ram_4204b9ec();
    FUN_ram_4203a378();
    FUN_ram_42033784();
    FUN_ram_4039cce4();
    FUN_ram_42049fb8();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x18c))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xd0))();
    if (DAT_ram_3fcb3f4c != '\0') {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x100))();
    }
  }
  else {
    if (uVar3 != 0) goto LAB_ram_4203a69c;
    FUN_ram_4039cce4();
    iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 4))();
    if (iVar1 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xd0))();
    }
    if (DAT_ram_3fcb3f4c != '\0') {
      (*(code *)&SUB_ram_40011b80)();
    }
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xfc))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xcc))();
LAB_ram_4203a69c:
  if (param_1 == 0) {
    FUN_ram_42049240();
    return;
  }
  return;
}

