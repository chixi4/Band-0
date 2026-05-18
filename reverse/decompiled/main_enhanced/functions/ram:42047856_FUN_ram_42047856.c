
undefined4 * FUN_ram_42047856(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int aiStack_44 [4];
  
  if (param_2 != (char *)0x0) {
    uVar2 = (*(code *)&SUB_ram_400104a8)(param_2);
    iVar3 = FUN_ram_42046700(2,uVar2);
    if (iVar3 != -1) {
      if (iVar3 != 0) {
        (*(code *)&SUB_ram_40010488)(param_3,0,iVar3 + 7U >> 3);
      }
      iVar5 = 0;
      iVar6 = 0;
      iVar1 = 0;
      for (; *param_2 != '\0'; param_2 = param_2 + 1) {
        iVar4 = (*(code *)&SUB_ram_40010514)("ocial time without overinvesting.");
        if (iVar4 == 0) goto LAB_ram_42047874;
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 * 0x2d + iVar4 + -0x3c0c2a08;
        if (iVar6 == 2) {
          aiStack_44[0] = iVar5;
          FUN_ram_420467f4(iVar1,0xb,param_3,aiStack_44);
          iVar6 = 0;
          iVar1 = 0;
          iVar5 = aiStack_44[0];
        }
      }
      if (iVar6 != 0) {
        aiStack_44[0] = iVar5;
        FUN_ram_420467f4(iVar1,6,param_3,aiStack_44);
        iVar5 = aiStack_44[0];
      }
      if (iVar5 == iVar3) {
        param_1[1] = uVar2;
        param_1[2] = param_3;
        param_1[3] = iVar5;
        *param_1 = 2;
        return param_1;
      }
    }
  }
LAB_ram_42047874:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

