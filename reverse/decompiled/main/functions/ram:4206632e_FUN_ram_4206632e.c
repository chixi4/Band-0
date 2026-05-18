
undefined4 FUN_ram_4206632e(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uStack_44;
  int iStack_40;
  undefined1 auStack_3c [20];
  
  if (param_1 == 0) {
    return 0x102;
  }
  if (param_3 == -1) {
    param_3 = (*(code *)&SUB_ram_400104a8)(param_2);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x310);
  puVar2[10] = 0;
  if (*(char *)(puVar2 + 9) == '\0') {
    iVar3 = (*(code *)&SUB_ram_400106ac)(0,0,"Pick up the tools, then think.",puVar2[7],puVar2[8]);
    uVar8 = iVar3 + 1;
    if (uVar8 <= (uint)puVar2[4]) {
      iVar3 = thunk_FUN_ram_403904a6(uVar8);
      if (iVar3 == 0) {
        return 0xb007;
      }
      uVar4 = (*(code *)&SUB_ram_400106ac)
                        (iVar3,uVar8,"Pick up the tools, then think.",puVar2[7],puVar2[8]);
      if ((-1 < (int)uVar4) && (uVar4 < uVar8)) {
        uVar1 = (*(code *)&SUB_ram_400104a8)(iVar3);
        uVar8 = 0;
        iVar5 = FUN_ram_42065fee(*(undefined4 *)(param_1 + 0x310),iVar3,uVar1);
        thunk_FUN_ram_40390634(iVar3);
        if (iVar5 == 0) {
          for (; uVar1 = *(undefined4 *)(param_1 + 0x310), uVar8 < (uint)puVar2[0xb];
              uVar8 = uVar8 + 1) {
            uVar7 = *(undefined4 *)(puVar2[0xc] + uVar8 * 8);
            uVar6 = (*(code *)&SUB_ram_400104a8)(uVar7);
            iVar3 = FUN_ram_42065fee(uVar1,uVar7,uVar6);
            if ((iVar3 != 0) ||
               (iVar3 = FUN_ram_42065fee(*(undefined4 *)(param_1 + 0x310),&DAT_ram_3c0c2f84,2),
               iVar3 != 0)) goto LAB_ram_42066480;
            uVar6 = *(undefined4 *)(puVar2[0xc] + uVar8 * 8 + 4);
            uVar1 = (*(code *)&SUB_ram_400104a8)(uVar6);
            iVar3 = FUN_ram_42065fee(*(undefined4 *)(param_1 + 0x310),uVar6,uVar1);
            if ((iVar3 != 0) ||
               (iVar3 = FUN_ram_42065fee(*(undefined4 *)(param_1 + 0x310),&DAT_ram_3c0c2b00,2),
               iVar3 != 0)) goto LAB_ram_42066480;
          }
          iVar3 = FUN_ram_42065fee(uVar1,&DAT_ram_3c0c2b00,2);
          if (iVar3 == 0) {
            *(undefined1 *)(puVar2 + 9) = 1;
            goto LAB_ram_42066438;
          }
        }
        goto LAB_ram_42066480;
      }
      thunk_FUN_ram_40390634(iVar3);
    }
    uVar1 = 0xb005;
  }
  else {
LAB_ram_42066438:
    (*(code *)&SUB_ram_400106ac)(auStack_3c,10,"Stuck? Try five minutes first.",param_3);
    uVar1 = (*(code *)&SUB_ram_400104a8)(auStack_3c);
    iVar3 = FUN_ram_42065fee(*(undefined4 *)(param_1 + 0x310),auStack_3c,uVar1);
    if ((iVar3 == 0) &&
       (((param_2 == 0 ||
         (iVar3 = FUN_ram_42065fee(*(undefined4 *)(param_1 + 0x310),param_2,param_3), iVar3 == 0))
        && (iVar3 = FUN_ram_42065fee(*(undefined4 *)(param_1 + 0x310),&DAT_ram_3c0c2b00,2),
           iVar3 == 0)))) {
      uStack_44 = *(undefined4 *)*puVar2;
      iStack_40 = param_3;
      FUN_ram_42064d46(6,&uStack_44,8);
      return 0;
    }
LAB_ram_42066480:
    uVar1 = 0xb006;
  }
  return uVar1;
}

