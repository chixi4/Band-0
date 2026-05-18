
undefined4
FUN_ram_4204795e(int param_1,int param_2,undefined1 *param_3,undefined4 param_4,undefined4 param_5,
                int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  
  uVar3 = (*(code *)&SUB_ram_400104a8)();
  if (uVar3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined4 *)0x0;
LAB_ram_420479a0:
    uVar5 = FUN_ram_42046e40(puVar4,uVar5,param_4,param_5,param_6,param_7,param_8,param_2,param_3);
  }
  else {
    iVar1 = param_6 * 4 + 0x11;
    uVar2 = (iVar1 * iVar1 + 7 >> 3) + 1;
    iVar1 = FUN_ram_4204771c(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_420476e0(param_1);
      if (iVar1 == 0) {
        if (uVar3 <= uVar2) {
          uVar2 = 0;
          do {
            puVar6 = (undefined1 *)(param_1 + uVar2);
            puVar7 = (undefined1 *)(param_2 + uVar2);
            uVar2 = uVar2 + 1;
            *puVar7 = *puVar6;
          } while (uVar3 != uVar2);
          uStack_40 = 4;
          iStack_34 = FUN_ram_42046700(4,uVar3);
          uStack_3c = uVar3;
          iStack_38 = param_2;
          if (iStack_34 != -1) goto LAB_ram_420479ee;
        }
      }
      else {
        uVar3 = FUN_ram_42047744(2,uVar3);
        if (uVar3 <= uVar2) {
          FUN_ram_42047856(&uStack_40,param_1,param_2);
          goto LAB_ram_420479ee;
        }
      }
    }
    else {
      uVar3 = FUN_ram_42047744(1,uVar3);
      if (uVar3 <= uVar2) {
        FUN_ram_4204775c(&uStack_40,param_1,param_2);
LAB_ram_420479ee:
        uVar5 = 1;
        puVar4 = &uStack_40;
        goto LAB_ram_420479a0;
      }
    }
    *param_3 = 0;
    uVar5 = 0;
  }
  return uVar5;
}

