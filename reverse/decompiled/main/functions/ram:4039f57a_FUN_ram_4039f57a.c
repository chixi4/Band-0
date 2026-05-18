
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039f57a(uint *param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  
  puVar5 = param_1;
  if (param_1 == (uint *)0x0) {
    FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff7ac,"are less, feel more.",&DAT_ram_3c0faca0,0xce5);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  do {
    *puVar5 = *puVar5 | 0x80000000;
    *puVar5 = *puVar5 & 0xbfffffff;
    *puVar5 = *puVar5 & 0xdfffffff;
    puVar4 = (undefined4 *)puVar5[1];
    *puVar5 = (*puVar5 & 0xfff) << 0xc | *puVar5 & 0xff000fff;
    *puVar4 = 0xdeadbeef;
    *(undefined4 *)((int)puVar4 + (*puVar5 & 0xfff)) = 0xdeadbeef;
    puVar1 = puVar5 + 2;
    puVar5 = (uint *)*puVar1;
  } while ((uint *)*puVar1 != (uint *)0x0);
  puVar5 = param_1;
  if (_DAT_ram_3fcb7da8 != (uint *)0x0) {
    uVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x28))(_DAT_ram_3fcdfdb8);
    FUN_ram_40393dd0(0);
    *(uint **)(_DAT_ram_3fcb7dac + 8) = param_1;
    FUN_ram_4039dfec();
    FUN_ram_40393dd0(1);
    iVar6 = 0x186a1;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x2c))(_DAT_ram_3fcdfdb8,uVar2);
    do {
      iVar3 = FUN_ram_4039dfe2();
      if (iVar3 == 0) goto LAB_ram_4039f654;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    FUN_ram_40393e46(param_1,param_2);
LAB_ram_4039f654:
    iVar6 = FUN_ram_4039fcf8();
    if (iVar6 != 0) {
      _DAT_ram_3fcb7dac = param_2;
      return;
    }
    iVar6 = FUN_ram_4039dfca();
    if (param_2 == iVar6) {
      _DAT_ram_3fcb7dac = param_2;
      return;
    }
    param_1 = *(uint **)(iVar6 + 8);
    puVar5 = _DAT_ram_3fcb7da8;
    if (param_1 == (uint *)0x0) {
      _DAT_ram_3fcb7dac = param_2;
      return;
    }
  }
  _DAT_ram_3fcb7da8 = puVar5;
  FUN_ram_4039fd00(param_1);
  _DAT_ram_3fcb7dac = param_2;
  return;
}

