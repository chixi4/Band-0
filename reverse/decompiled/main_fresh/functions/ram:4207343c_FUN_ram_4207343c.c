
int FUN_ram_4207343c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined1 auStack_50 [44];
  
  iVar8 = 0x101;
  do {
    iVar1 = FUN_ram_420733aa(param_1);
    if (iVar1 != 0) goto LAB_ram_42073500;
    puVar7 = (uint *)(param_1 + 0x1c);
    uVar4 = 0;
    bVar3 = true;
    puVar5 = puVar7;
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x10); iVar1 = iVar1 + 1) {
      bVar3 = (bool)(bVar3 & puVar5[1] <= *puVar5);
      if (puVar5[2] == 1) {
        uVar4 = uVar4 + *puVar5;
      }
      puVar5 = puVar5 + 5;
    }
    if ((bVar3) && (0x1f < uVar4)) {
      (*(code *)&SUB_ram_40010488)(auStack_50,0,0x20);
      iVar1 = FUN_ram_4206c6a0(param_1,auStack_50);
      if (iVar1 == 0) {
        FUN_ram_4206c49a(param_1);
        FUN_ram_4206c48e(param_1);
        uVar2 = FUN_ram_4206c444(9);
        iVar1 = FUN_ram_4206c572(param_1,uVar2,0);
        if (((iVar1 == 0) && (iVar1 = FUN_ram_4206c624(param_1), iVar1 == 0)) &&
           (iVar1 = FUN_ram_4206c666(param_1,auStack_50,0x20), iVar1 == 0)) {
          uVar2 = FUN_ram_4206c444(9);
          iVar1 = FUN_ram_4206c6da(uVar2,auStack_50,0x20,auStack_50);
          if (iVar1 == 0) {
            iVar8 = *(int *)(param_1 + 0x10);
            for (iVar6 = 0; iVar6 < iVar8; iVar6 = iVar6 + 1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 5;
            }
            FUN_ram_4039c11e(param_2,auStack_50,param_3);
          }
        }
      }
      goto LAB_ram_42073500;
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar1 = -0x3c;
LAB_ram_42073500:
  FUN_ram_4206d7da(auStack_50,0x20);
  return iVar1;
}

