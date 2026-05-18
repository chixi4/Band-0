
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420811a8(uint param_1)

{
  byte bVar1;
  int iVar2;
  
  if ((DAT_ram_3fcc4205 >> (param_1 & 0x1f) & 1) != 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0feb30,"fore tasks.",0x8f1);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((DAT_ram_3fcc4206 >> (param_1 & 0x1f) & 1) != 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0feb38,"fore tasks.",0x8f2);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (DAT_ram_3fcc4205 == 0) {
    FUN_ram_42073aba(0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 200))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xf8))();
    if (DAT_ram_3fcc2fd4 != '\0') {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x104))();
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xd4))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x188))();
    FUN_ram_42081176();
    FUN_ram_4039f0a8();
    FUN_ram_420795fc(&DAT_ram_3fcc4004);
    FUN_ram_42092972();
    FUN_ram_4208112a();
    FUN_ram_4209054c();
  }
  else if (DAT_ram_3fcc4206 == 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 200))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xf8))();
    if (DAT_ram_3fcc2fd4 != '\0') {
      (*(code *)&SUB_ram_40011b7c)();
    }
    iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 4))();
    if (iVar2 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xd4))();
    }
    FUN_ram_4039f0a8();
  }
  bVar1 = (byte)(1 << (param_1 & 0x1f));
  DAT_ram_3fcc4205 = DAT_ram_3fcc4205 | bVar1;
  DAT_ram_3fcc4206 = bVar1 | DAT_ram_3fcc4206;
  if (param_1 == 0) {
    FUN_ram_42091bb2();
    return;
  }
  return;
}

