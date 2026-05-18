
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420454d6(uint param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  do {
    puVar5 = (undefined1 *)(*(int *)(_DAT_ram_3fcdfb20 + 0x4c) + iVar7);
    iVar7 = iVar7 + 1;
    *puVar5 = (char)iVar7;
    iVar2 = _DAT_ram_3fcdfb20;
  } while (iVar7 != 0xe);
  *(undefined1 *)(_DAT_ram_3fcdfb20 + 0x48) = 0xe;
  if ((param_1 & 0x20000) == 0) {
    uVar1 = **(undefined1 **)(iVar2 + 0x4c);
    uVar4 = 0x3c07c944;
  }
  else {
    if (param_2 < 0xf) {
      uVar6 = param_2 - 1 & 0xff;
      while( true ) {
        uVar3 = uVar6 - 1;
        puVar5 = *(undefined1 **)(_DAT_ram_3fcdfb20 + 0x4c);
        if (uVar3 == 0xffffffff) break;
        puVar5[uVar6] = puVar5[uVar3];
        uVar6 = uVar3;
      }
      *puVar5 = (char)param_2;
    }
    uVar4 = 0x3c07c934;
    uVar1 = **(undefined1 **)(_DAT_ram_3fcdfb20 + 0x4c);
  }
  FUN_ram_42033fd8(1,8,4,uVar4,uVar1);
  return 0;
}

