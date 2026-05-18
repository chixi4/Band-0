
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4207414a(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  byte bStack_22;
  
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  bStack_22 = 0;
  if (param_2 == (int *)0x0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe480,&DAT_ram_3c0c4114,0xc98);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar6 = *param_2;
  if ((_DAT_ram_3fcc4018 == iVar6) && (iVar1 = FUN_ram_42083386(), iVar1 != 0)) {
    bVar5 = 0x40;
  }
  else {
    bVar5 = 0;
    iVar1 = 0;
  }
  if ((_DAT_ram_3fcc4014 == iVar6) && (iVar2 = FUN_ram_42083426(), iVar2 != 0)) {
    bVar5 = bVar5 | 0x80;
    iVar1 = iVar2;
  }
  bVar3 = (_DAT_ram_3fcc41fc & 1) != 0;
  if (bVar3) {
    iVar1 = 1;
  }
  if ((_DAT_ram_3fcc4018 == iVar6) && (DAT_ram_3fcc425a == '\x02')) {
    bVar3 = true;
    iVar1 = 1;
  }
  if (*(char *)(*(int *)(gp + -0xb4) + 0x363) == '\0') {
    uVar4 = 0;
    if (iVar1 == 0) {
      return param_1;
    }
  }
  else {
    uVar4 = 8;
  }
  uStack_2c._0_3_ = CONCAT12(bVar3,0x97f);
  uStack_28 = CONCAT31(uStack_28._1_3_,uVar4);
  bStack_22 = bVar5;
  FUN_ram_4039c11e(param_1,&uStack_2c,0xb);
  return param_1 + 0xb;
}

