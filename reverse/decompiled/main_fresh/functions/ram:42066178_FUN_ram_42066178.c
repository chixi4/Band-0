
undefined4 FUN_ram_42066178(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uStack_38;
  int iStack_34;
  
  if (param_1 == 0) {
    return 0x102;
  }
  puVar7 = *(undefined4 **)(param_1 + 0x310);
  if (param_3 == -1) {
    param_3 = (*(code *)&SUB_ram_400104a8)(param_2);
  }
  puVar7[10] = 0;
  iVar1 = (*(code *)&SUB_ram_400106ac)(0,0,"r before sleep.",puVar7[7],puVar7[8],param_3);
  uVar8 = iVar1 + 1;
  if (uVar8 <= (uint)puVar7[4]) {
    iVar1 = thunk_FUN_ram_403904a6(uVar8);
    if (iVar1 == 0) {
      return 0xb007;
    }
    uVar2 = (*(code *)&SUB_ram_400106ac)(iVar1,uVar8,"r before sleep.",puVar7[7],puVar7[8],param_3);
    if ((-1 < (int)uVar2) && (uVar2 < uVar8)) {
      uVar3 = (*(code *)&SUB_ram_400104a8)(iVar1);
      uVar8 = 0;
      iVar4 = FUN_ram_42065fee(*(undefined4 *)(param_1 + 0x310),iVar1,uVar3);
      thunk_FUN_ram_40390634(iVar1);
      if (iVar4 == 0) {
        for (; uVar3 = *(undefined4 *)(param_1 + 0x310), uVar8 < (uint)puVar7[0xb];
            uVar8 = uVar8 + 1) {
          uVar6 = *(undefined4 *)(puVar7[0xc] + uVar8 * 8);
          uVar5 = (*(code *)&SUB_ram_400104a8)(uVar6);
          iVar1 = FUN_ram_42065fee(uVar3,uVar6,uVar5);
          if (iVar1 != 0) {
            return 0xb006;
          }
          iVar1 = FUN_ram_42065fee(*(undefined4 *)(param_1 + 0x310),&DAT_ram_3c0c2f84,2);
          if (iVar1 != 0) {
            return 0xb006;
          }
          uVar5 = *(undefined4 *)(puVar7[0xc] + uVar8 * 8 + 4);
          uVar3 = (*(code *)&SUB_ram_400104a8)(uVar5);
          iVar1 = FUN_ram_42065fee(*(undefined4 *)(param_1 + 0x310),uVar5,uVar3);
          if (iVar1 != 0) {
            return 0xb006;
          }
          iVar1 = FUN_ram_42065fee(*(undefined4 *)(param_1 + 0x310),&DAT_ram_3c0c2b00,2);
          if (iVar1 != 0) {
            return 0xb006;
          }
        }
        iVar1 = FUN_ram_42065fee(uVar3,&DAT_ram_3c0c2b00,2);
        if ((iVar1 == 0) &&
           (((FUN_ram_42064d46(4,*puVar7), param_2 == 0 || (param_3 == 0)) ||
            (iVar1 = FUN_ram_42065fee(*(undefined4 *)(param_1 + 0x310),param_2,param_3), iVar1 == 0)
            ))) {
          uStack_38 = *(undefined4 *)*puVar7;
          iStack_34 = param_3;
          FUN_ram_42064d46(6,&uStack_38,8);
          return 0;
        }
      }
      return 0xb006;
    }
    thunk_FUN_ram_40390634(iVar1);
  }
  return 0xb005;
}

