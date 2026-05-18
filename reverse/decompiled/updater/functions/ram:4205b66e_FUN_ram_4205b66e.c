
undefined4 FUN_ram_4205b66e(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_14 [3];
  
  if (*param_1 == '[') {
    if ((param_2 != 0x50) && (param_2 != 0x1bb)) {
LAB_ram_4205b6aa:
      iVar1 = -4;
      goto LAB_ram_4205b6bc;
    }
LAB_ram_4205b6dc:
    uVar2 = 0x3c071220;
  }
  else {
    iVar1 = (*(code *)&SUB_ram_40010514)(param_1,0x3a,param_1,param_2);
    if ((param_2 != 0x50) && (param_2 != 0x1bb)) {
      if (iVar1 == 0) goto LAB_ram_4205b6aa;
      iVar1 = -0xc;
LAB_ram_4205b6bc:
      iVar1 = (*(code *)&SUB_ram_400106a4)(auStack_14,iVar1 + 0x3c073000);
      goto LAB_ram_4205b6c6;
    }
    if (iVar1 == 0) goto LAB_ram_4205b6dc;
    uVar2 = 0x3c073004;
  }
  iVar1 = (*(code *)&SUB_ram_400106a4)(auStack_14,uVar2,param_1);
LAB_ram_4205b6c6:
  uVar2 = 0;
  if (iVar1 != -1) {
    uVar2 = auStack_14[0];
  }
  return uVar2;
}

