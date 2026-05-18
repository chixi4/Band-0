
undefined4 FUN_ram_42051134(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uStack_28;
  undefined4 auStack_24 [3];
  
  piVar2 = (int *)FUN_ram_4205032e();
  if (piVar2 != (int *)0x0) {
    if ((uint *)*piVar2 == (uint *)0x0) {
      bVar7 = false;
      if (piVar2[1] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
    }
    else {
      bVar7 = (*(uint *)*piVar2 & 0xf0) == 0x10;
    }
    puVar3 = (undefined4 *)FUN_ram_4205032e(param_1);
    if (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)&DAT_ram_3fcc1fa4;
      do {
        if (puVar3 == (undefined4 *)*puVar1) {
          uStack_28 = puVar1[2];
          uVar4 = *puVar3;
          *puVar1 = 0;
          auStack_24[0] = puVar1[1];
          puVar1[2] = 0;
          puVar1[1] = 0;
          FUN_ram_4205d36a(uVar4,&uStack_28,auStack_24,1);
        }
        puVar1 = puVar1 + 3;
      } while (puVar1 != (undefined4 *)&DAT_ram_3fcc2034);
      FUN_ram_4205027e(puVar3);
    }
    iVar5 = FUN_ram_4205cdd4(*piVar2);
    if (iVar5 == 0) {
      FUN_ram_420501f2(piVar2,bVar7);
      return 0;
    }
    iVar6 = FUN_ram_4205e6c6();
    if (iVar6 != 0) {
      puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      uVar4 = FUN_ram_4205e6c6(iVar5);
      *puVar3 = uVar4;
    }
    FUN_ram_4205027e(piVar2);
  }
  return 0xffffffff;
}

