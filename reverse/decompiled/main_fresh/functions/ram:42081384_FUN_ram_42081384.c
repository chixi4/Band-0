
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42081384(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((DAT_ram_3fcc4205 >> (param_1 & 0x1f) & 1) == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0feb40,"fore tasks.",0x934);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((DAT_ram_3fcc4206 >> (param_1 & 0x1f) & 1) == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0feb48,"fore tasks.",0x939);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = ~(1 << (param_1 & 0x1f));
  uVar2 = DAT_ram_3fcc4205 & uVar3;
  uVar3 = uVar3 & DAT_ram_3fcc4206;
  DAT_ram_3fcc4205 = (byte)uVar2;
  DAT_ram_3fcc4206 = (byte)uVar3;
  if (uVar2 == 0) {
    FUN_ram_42073aba(1);
    FUN_ram_42090542();
    FUN_ram_42081350();
    thunk_FUN_ram_42094404();
    FUN_ram_42081150();
    FUN_ram_42079192();
    FUN_ram_4039f0b8();
    FUN_ram_420929cc();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x18c))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xd0))();
    if (DAT_ram_3fcc2fd4 != '\0') {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x100))();
    }
  }
  else {
    if (uVar3 != 0) goto LAB_ram_42081474;
    FUN_ram_4039f0b8();
    iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 4))();
    if (iVar1 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xd0))();
    }
    if (DAT_ram_3fcc2fd4 != '\0') {
      (*(code *)&SUB_ram_40011b80)();
    }
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xfc))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xcc))();
LAB_ram_42081474:
  if (param_1 == 0) {
    FUN_ram_42091c48();
    return;
  }
  return;
}

