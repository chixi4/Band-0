
int FUN_ram_420311b2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined1 auStack_70 [76];
  
  iVar8 = 0x101;
  do {
    iVar1 = FUN_ram_42031120(param_1);
    if (iVar1 != 0) goto LAB_ram_42031278;
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
    if ((bVar3) && (0x3f < uVar4)) {
      (*(code *)&SUB_ram_40010488)(auStack_70,0,0x40);
      iVar1 = FUN_ram_420290a6(param_1,auStack_70);
      if (iVar1 == 0) {
        FUN_ram_42028e3e(param_1);
        FUN_ram_42028e32(param_1);
        uVar2 = FUN_ram_42028dc8(0xb);
        iVar1 = FUN_ram_42028f3c(param_1,uVar2,0);
        if (((iVar1 == 0) && (iVar1 = FUN_ram_42029004(param_1), iVar1 == 0)) &&
           (iVar1 = FUN_ram_4202905e(param_1,auStack_70,0x40), iVar1 == 0)) {
          uVar2 = FUN_ram_42028dc8(0xb);
          iVar1 = FUN_ram_420290ee(uVar2,auStack_70,0x40,auStack_70);
          if (iVar1 == 0) {
            iVar8 = *(int *)(param_1 + 0x10);
            for (iVar6 = 0; iVar6 < iVar8; iVar6 = iVar6 + 1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 5;
            }
            FUN_ram_40399daa(param_2,auStack_70,param_3);
          }
        }
      }
      goto LAB_ram_42031278;
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar1 = -0x3c;
LAB_ram_42031278:
  FUN_ram_420293a6(auStack_70,0x40);
  return iVar1;
}

