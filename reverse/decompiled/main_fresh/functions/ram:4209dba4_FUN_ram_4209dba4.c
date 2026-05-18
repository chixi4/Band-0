
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4209dba4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)FUN_ram_4207f040();
  if ((((param_1 != 0) && (_DAT_ram_3fcc4b14 != 0x400)) &&
      ((_DAT_ram_3fcc4b14 - 0x400000U & 0xffbfffff) != 0)) && (_DAT_ram_3fcc4b14 != 0x4000000)) {
    iVar2 = FUN_ram_4207f226();
    if (iVar2 != 0) {
      FUN_ram_4207f21c();
      iVar2 = (*(code *)&SUB_ram_400104a8)();
      if (iVar2 == 0x40) {
        uVar3 = FUN_ram_4207f21c();
        uVar4 = FUN_ram_4207f01e();
        iVar2 = FUN_ram_4206071e(uVar3,uVar4,0x20);
        if (iVar2 != 0) {
          return;
        }
      }
      else {
        uVar3 = FUN_ram_4207f21c();
        uVar5 = *puVar1;
        uVar4 = FUN_ram_4207f01e();
        FUN_ram_4205ff7e(uVar3,puVar1 + 1,uVar5,0x1000,uVar4,0x20);
      }
      FUN_ram_4207eff4();
      FUN_ram_4207f230(0);
    }
    if (_DAT_ram_3fcc4b14 != 1) {
      uVar3 = FUN_ram_4207f01e();
      FUN_ram_4039c11e(0x3fcc4924,uVar3,0x20);
      _DAT_ram_3fcc4964 = 0x20;
    }
  }
  return;
}

