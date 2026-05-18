
undefined4 FUN_ram_420634c8(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 auStack_14 [3];
  
  if (*param_1 == '[') {
    if ((param_2 != 0x50) && (param_2 != 0x1bb)) {
LAB_ram_42063504:
      iVar1 = -0x370;
      goto LAB_ram_42063516;
    }
LAB_ram_42063536:
    pcVar3 = "space in the plan for insight.";
  }
  else {
    iVar1 = (*(code *)&SUB_ram_40010514)(param_1,0x3a,param_1,param_2);
    if ((param_2 != 0x50) && (param_2 != 0x1bb)) {
      if (iVar1 == 0) goto LAB_ram_42063504;
      iVar1 = -0x378;
LAB_ram_42063516:
      iVar1 = (*(code *)&SUB_ram_400106a4)(auStack_14,&DAT_ram_3c0c3000 + iVar1);
      goto LAB_ram_42063520;
    }
    if (iVar1 == 0) goto LAB_ram_42063536;
    pcVar3 = "rgy proving others wrong about you.";
  }
  iVar1 = (*(code *)&SUB_ram_400106a4)(auStack_14,pcVar3,param_1);
LAB_ram_42063520:
  uVar2 = 0;
  if (iVar1 != -1) {
    uVar2 = auStack_14[0];
  }
  return uVar2;
}

