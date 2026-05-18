
undefined4 * FUN_ram_4204775c(undefined4 *param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int aiStack_34 [2];
  
  if (param_2 != (byte *)0x0) {
    uVar1 = (*(code *)&SUB_ram_400104a8)(param_2);
    iVar2 = FUN_ram_42046700(1,uVar1);
    if (iVar2 != -1) {
      if (iVar2 != 0) {
        (*(code *)&SUB_ram_40010488)(param_3,0,iVar2 + 7U >> 3);
      }
      iVar5 = 0;
      iVar6 = 0;
      iVar3 = 0;
      for (; uVar4 = (uint)*param_2, uVar4 != 0; param_2 = param_2 + 1) {
        if (9 < (uVar4 - 0x30 & 0xff)) goto LAB_ram_42047776;
        iVar6 = iVar6 + 1;
        iVar3 = uVar4 + iVar3 * 10 + -0x30;
        if (iVar6 == 3) {
          aiStack_34[0] = iVar5;
          FUN_ram_420467f4(iVar3,10,param_3,aiStack_34);
          iVar6 = 0;
          iVar3 = 0;
          iVar5 = aiStack_34[0];
        }
      }
      if (iVar6 != 0) {
        aiStack_34[0] = iVar5;
        FUN_ram_420467f4(iVar3,iVar6 * 3 + 1,param_3,aiStack_34);
        iVar5 = aiStack_34[0];
      }
      if (iVar5 == iVar2) {
        param_1[1] = uVar1;
        param_1[2] = param_3;
        *param_1 = 1;
        param_1[3] = iVar5;
        return param_1;
      }
    }
  }
LAB_ram_42047776:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

