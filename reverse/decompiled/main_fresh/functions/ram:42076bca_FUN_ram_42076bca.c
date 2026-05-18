
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42076bca(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    FUN_ram_4207a038(1,2,1,&DAT_ram_3c0fe4e8);
LAB_ram_42076bea:
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (_DAT_ram_3fcc3040 != 0) {
      if (param_2 == 0) {
        puVar1 = (undefined4 *)&DAT_ram_3fcc2744;
      }
      else {
        if (param_2 != 1) {
          return 0;
        }
        puVar1 = (undefined4 *)&DAT_ram_3fcc2750;
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))();
      do {
        puVar1 = (undefined4 *)*puVar1;
        if (puVar1 == (undefined4 *)0x0) {
          (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcc3040);
          goto LAB_ram_42076bea;
        }
        iVar2 = FUN_ram_4039c0e0(puVar1 + 1,param_1,6);
      } while (iVar2 != 0);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcc3040);
      uVar3 = 1;
    }
  }
  return uVar3;
}

