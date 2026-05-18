
int FUN_ram_42017792(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  undefined4 uStack_38;
  int aiStack_34 [3];
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  if ((char *)*param_1 == (char *)0x0) {
    return 0x102;
  }
  if (*(char *)*param_1 == '\0') {
    return 0x102;
  }
  uVar3 = (*(code *)&SUB_ram_400104a8)();
  if (0xff < uVar3) {
    return 0x104;
  }
  if ((param_1[1] != 0) && (uVar3 = (*(code *)&SUB_ram_400104a8)(), 0x1f < uVar3)) {
    return 0x104;
  }
  piVar7 = param_1 + 2;
  piVar1 = piVar7;
  do {
    if (((*piVar1 != 0) && (uVar3 = (*(code *)&SUB_ram_400104a8)(), 0x20 < uVar3)) ||
       ((piVar1[3] != 0 && (uVar3 = (*(code *)&SUB_ram_400104a8)(), 0x40 < uVar3)))) {
      return 0x104;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != param_1 + 5);
  iVar4 = FUN_ram_4204beee(0x3c0a8afc,1,&uStack_38);
  if (iVar4 != 0) {
    return iVar4;
  }
  aiStack_34[0] = 0;
  FUN_ram_4204c270(uStack_38,0x3c0a8b00,aiStack_34);
  aiStack_34[0] = aiStack_34[0] + 1;
  iVar4 = FUN_ram_4204c102(uStack_38,0x3c0a8b0c,*param_1);
  if (iVar4 == 0) {
    if (param_1[1] == 0) {
      FUN_ram_4204bf00();
    }
    else {
      iVar4 = FUN_ram_4204c102(uStack_38,"");
      if (iVar4 != 0) goto LAB_ram_420178c0;
    }
    cVar6 = '\0';
    do {
      if (cVar6 == '\x01') {
        puVar5 = (undefined *)0x3c0a8adc;
        uVar2 = 0x3c0a8ae4;
      }
      else if (cVar6 == '\x02') {
        puVar5 = (undefined *)0x3c0a8aec;
        uVar2 = 0x3c0a8af4;
      }
      else {
        puVar5 = &DAT_ram_3c0c42a0;
        uVar2 = 0x3c0a8ad0;
      }
      if (((char *)*piVar7 == (char *)0x0) || (*(char *)*piVar7 == '\0')) {
        FUN_ram_4204bf00(uStack_38,puVar5);
LAB_ram_4201790c:
        FUN_ram_4204bf00(uStack_38,uVar2);
      }
      else {
        iVar8 = piVar7[3];
        iVar4 = FUN_ram_4204c102();
        if (iVar4 != 0) goto LAB_ram_420178c0;
        if (iVar8 == 0) goto LAB_ram_4201790c;
        iVar4 = FUN_ram_4204c102(uStack_38,uVar2,iVar8);
        if (iVar4 != 0) goto LAB_ram_420178c0;
      }
      cVar6 = cVar6 + '\x01';
      piVar7 = piVar7 + 1;
    } while (cVar6 != '\x03');
    iVar4 = FUN_ram_4204c078(uStack_38,0x3c0a8b00,aiStack_34[0]);
    if ((iVar4 == 0) && (iVar4 = FUN_ram_4204bfd0(uStack_38,0x3c0a8b10,1), iVar4 == 0)) {
      FUN_ram_4204bf00(uStack_38,0x3c0a8b18);
      FUN_ram_4204bf00(uStack_38,0x3c0a8b24);
      iVar4 = FUN_ram_4204c0c8(uStack_38);
    }
  }
LAB_ram_420178c0:
  FUN_ram_4204c3d0(uStack_38);
  return iVar4;
}

