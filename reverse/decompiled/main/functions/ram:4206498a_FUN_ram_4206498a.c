
int FUN_ram_4206498a(int *param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar3 = (undefined4 *)*param_1;
  iVar2 = 0;
  iVar5 = 0;
  puVar7 = puVar3;
  do {
    if (puVar7 == (undefined4 *)0x0) {
      bVar1 = true;
      iVar6 = 0;
      if (iVar2 != 0) {
LAB_ram_420649b6:
        iVar2 = 0;
        iVar6 = 0;
        for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)puVar3[2]) {
          if (((puVar3[1] != 0) && (param_2 <= iVar6)) && (iVar6 < iVar5)) {
            iVar4 = (*(code *)&SUB_ram_400106ac)
                              (param_3 + iVar2,*param_4 - iVar2,&DAT_ram_3c0c2f18,*puVar3);
            iVar2 = iVar2 + iVar4;
          }
          iVar6 = iVar6 + 1;
        }
        if (bVar1) {
          iVar6 = (*(code *)&SUB_ram_400106ac)(param_3 + iVar2,*param_4 - iVar2,&DAT_ram_3c0c2b00);
          iVar2 = iVar2 + iVar6;
        }
        *param_4 = iVar2;
        iVar6 = iVar5;
      }
      return iVar6;
    }
    iVar6 = puVar7[1];
    if ((iVar6 != 0) && (param_2 <= iVar5)) {
      iVar4 = (*(code *)&SUB_ram_400104a8)(*puVar7);
      iVar6 = (*(code *)&SUB_ram_400104a8)(iVar6);
      iVar2 = iVar2 + iVar4 + iVar6 + 4;
    }
    if (*param_4 + -2 <= iVar2) {
      bVar1 = false;
      if (iVar2 == 0) {
        return 0;
      }
      goto LAB_ram_420649b6;
    }
    puVar7 = (undefined4 *)puVar7[2];
    iVar5 = iVar5 + 1;
  } while( true );
}

