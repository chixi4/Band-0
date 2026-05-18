
undefined4 FUN_ram_42097fe6(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffff0;
  }
  if (param_2 != 0) {
    *param_1 = param_2;
    if (param_1[0x12] != 0) {
      FUN_ram_42058d78();
    }
    iVar1 = FUN_ram_42058da8();
    param_1[0x12] = iVar1;
    if ((iVar1 == 0) || (param_3 == 0)) {
      pcVar2 = &DAT_ram_3c0c4a90;
    }
    else {
      uVar7 = param_1[7];
      param_1[1] = -1;
      param_1[2] = param_3;
      uVar3 = (*(code *)&SUB_ram_400108cc)(uVar7);
      if ((uVar3 - 1 | uVar3) == 0xffffffff) {
        uVar4 = (*(code *)&SUB_ram_400108cc)(param_3);
        uVar10 = uVar3 & uVar4;
        uVar3 = ~uVar3 | uVar4;
        if ((uVar4 != uVar3) && (uVar4 != uVar10)) {
          if ((char)param_1[10] != '\0') {
            uVar9 = param_1[0xb];
            uVar5 = (*(code *)&SUB_ram_400108cc)(uVar9);
            uVar11 = param_1[0xc];
            uVar6 = (*(code *)&SUB_ram_400108cc)(uVar11);
            if ((((uVar4 < uVar5) || (uVar6 < uVar4)) &&
                (((param_3 ^ uVar9 | param_3 ^ uVar11) & uVar7) == 0)) &&
               ((uVar6 + 1) - uVar5 < 0x65)) goto LAB_ram_420980f6;
          }
          uVar7 = uVar4;
          if (uVar4 - uVar10 <= uVar3 - uVar4) {
            uVar7 = uVar3;
            uVar10 = uVar4;
          }
          iVar8 = uVar7 - 1;
          if (100 < uVar7 - (uVar10 + 1)) {
            iVar8 = uVar10 + 100;
          }
          (*(code *)&SUB_ram_40010488)(param_1 + 10,0,0xc);
          uVar9 = (*(code *)&SUB_ram_400108cc)(uVar10 + 1);
          param_1[0xb] = uVar9;
          iVar8 = (*(code *)&SUB_ram_400108cc)(iVar8);
          param_1[0xc] = iVar8;
          *(undefined1 *)(param_1 + 10) = 1;
LAB_ram_420980f6:
          param_1[6] = uVar9;
          FUN_ram_42058cd2(iVar1,*param_1);
          FUN_ram_420589c8(param_1[0x12],param_2 + 4,0x43);
          FUN_ram_42058d70(param_1[0x12],0x42087a52,param_1);
          param_1[0x13] = 1;
          FUN_ram_420585b0(1000,0x42087940,param_1);
          return 0;
        }
        pcVar2 = &DAT_ram_3c0c4ad0;
      }
      else {
        pcVar2 = "n you feel tense.";
      }
    }
    (*(code *)&SUB_ram_4001065c)(pcVar2);
  }
  return 0xfffffff0;
}

