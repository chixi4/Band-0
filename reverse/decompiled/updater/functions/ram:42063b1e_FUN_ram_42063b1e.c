
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42063b1e(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)FUN_ram_42038f5c();
  if ((((param_1 != 0) && (_DAT_ram_3fcb61ec != 0x400)) &&
      ((_DAT_ram_3fcb61ec - 0x400000U & 0xffbfffff) != 0)) && (_DAT_ram_3fcb61ec != 0x4000000)) {
    iVar2 = FUN_ram_420390ba();
    if (iVar2 != 0) {
      FUN_ram_420390b0();
      iVar2 = (*(code *)&SUB_ram_400104a8)();
      if (iVar2 == 0x40) {
        uVar3 = FUN_ram_420390b0();
        uVar4 = FUN_ram_42038f44();
        iVar2 = FUN_ram_420225d4(uVar3,uVar4,0x20);
        if (iVar2 != 0) {
          return;
        }
      }
      else {
        uVar3 = FUN_ram_420390b0();
        uVar5 = *puVar1;
        uVar4 = FUN_ram_42038f44();
        FUN_ram_42021e34(uVar3,puVar1 + 1,uVar5,0x1000,uVar4,0x20);
      }
      FUN_ram_42038f1a();
      FUN_ram_420390c4(0);
    }
    if (_DAT_ram_3fcb61ec != 1) {
      uVar3 = FUN_ram_42038f44();
      FUN_ram_40399daa(0x3fcb5ffc,uVar3,0x20);
      _DAT_ram_3fcb603c = 0x20;
    }
  }
  return;
}

