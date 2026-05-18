
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039d1a6(uint *param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  
  puVar5 = param_1;
  if (param_1 == (uint *)0x0) {
    FUN_ram_42033fd8(6,0x800,1,0x3c07df94,0x3c072f60,0x3c079284,0xce5);
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
  if (_DAT_ram_3fcb0914 != (uint *)0x0) {
    uVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x28))(_DAT_ram_3fcdfdb8);
    FUN_ram_40392fce(0);
    *(uint **)(_DAT_ram_3fcb0918 + 8) = param_1;
    FUN_ram_4039bc18();
    FUN_ram_40392fce(1);
    iVar6 = 0x186a1;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x2c))(_DAT_ram_3fcdfdb8,uVar2);
    do {
      iVar3 = FUN_ram_4039bc0e();
      if (iVar3 == 0) goto LAB_ram_4039d280;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    FUN_ram_40393044(param_1,param_2);
LAB_ram_4039d280:
    iVar6 = FUN_ram_4039d924();
    if (iVar6 != 0) {
      _DAT_ram_3fcb0918 = param_2;
      return;
    }
    iVar6 = FUN_ram_4039bbf6();
    if (param_2 == iVar6) {
      _DAT_ram_3fcb0918 = param_2;
      return;
    }
    param_1 = *(uint **)(iVar6 + 8);
    puVar5 = _DAT_ram_3fcb0914;
    if (param_1 == (uint *)0x0) {
      _DAT_ram_3fcb0918 = param_2;
      return;
    }
  }
  _DAT_ram_3fcb0914 = puVar5;
  FUN_ram_4039d92c(param_1);
  _DAT_ram_3fcb0918 = param_2;
  return;
}

