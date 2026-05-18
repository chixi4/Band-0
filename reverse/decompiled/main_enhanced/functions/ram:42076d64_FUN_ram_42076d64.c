
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42076d64(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == 0) {
    FUN_ram_4207a038(1,2,1,&DAT_ram_3c0fe520);
    uVar4 = 0x102;
  }
  else {
    uVar4 = 0xffffffff;
    if (_DAT_ram_3fcc3040 != 0) {
      if (param_2 == 0) {
        piVar1 = (int *)&DAT_ram_3fcc2744;
      }
      else {
        if (param_2 != 1) {
          return 0x102;
        }
        piVar1 = (int *)&DAT_ram_3fcc2750;
      }
      uVar7 = 0;
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))();
      uVar8 = piVar1[2];
      piVar5 = (int *)*piVar1;
      piVar2 = piVar5;
      while( true ) {
        if (piVar2 == (int *)0x0) goto LAB_ram_42076e18;
        iVar3 = FUN_ram_4039c0e0(piVar2 + 1,param_1,6);
        if (iVar3 == 0) break;
        piVar2 = (int *)*piVar2;
        uVar7 = uVar7 + 1 & 0xff;
      }
      iVar3 = *piVar5;
      if (piVar2 == piVar5) {
        *piVar1 = iVar3;
        if (iVar3 == 0) {
          piVar1[1] = (int)piVar1;
        }
      }
      else {
        do {
          piVar6 = piVar5;
          piVar5 = (int *)*piVar6;
        } while ((int *)*piVar6 != piVar2);
        iVar3 = *piVar2;
        *piVar6 = iVar3;
        if (iVar3 == 0) {
          piVar1[1] = (int)piVar6;
        }
      }
      piVar1[2] = uVar8 - 1;
      FUN_ram_420762ca(piVar2);
LAB_ram_42076e18:
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcc3040);
      uVar4 = 0;
      if (uVar7 == (uVar8 & 0xff)) {
        FUN_ram_4207a038(1,2,1,&DAT_ram_3c0fe52c);
        uVar4 = 0x105;
      }
    }
  }
  return uVar4;
}

