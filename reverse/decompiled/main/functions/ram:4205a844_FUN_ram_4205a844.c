
int FUN_ram_4205a844(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 extraout_a2;
  undefined1 uVar5;
  uint extraout_a3;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = CONCAT44(param_2,param_1);
  if (*(char *)(param_1 + 0x38) != '\x06') {
    uVar7 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
    param_4 = extraout_a3;
  }
  puVar3 = (uint *)((ulonglong)uVar7 >> 0x20);
  iVar1 = (int)uVar7;
  if ((((puVar3 == (uint *)0x0) || (*puVar3 == 0)) ||
      (iVar2 = FUN_ram_4205be44(*puVar3,iVar1), iVar2 != 0)) || ((*puVar3 & 0xf0) == 0xe0)) {
    iVar1 = -0x10;
  }
  else {
    iVar2 = FUN_ram_4205a716(puVar3,param_4,iVar1);
    if (iVar2 < 0) {
      iVar1 = (int)(char)iVar2;
    }
    else {
      if ((param_4 & 4) == 0) {
        if ((&DAT_ram_3fcc258c)[iVar2 * 0x18] == '\x05') {
          return -6;
        }
        uVar5 = 2;
      }
      else {
        uVar5 = 5;
      }
      iVar2 = iVar2 * 0x18;
      (&DAT_ram_3fcc258c)[iVar2] = uVar5;
      *(int *)(&DAT_ram_3fcc2580 + iVar2) = iVar1;
      FUN_ram_4039c11e(iVar2 + 0x3fcc2584,param_3,6);
      *(undefined2 *)(&DAT_ram_3fcc258a + iVar2) = 0;
      while (piVar4 = *(int **)(&DAT_ram_3fcc2578 + iVar2), piVar4 != (int *)0x0) {
        uVar6 = piVar4[1];
        *(int *)(&DAT_ram_3fcc2578 + iVar2) = *piVar4;
        FUN_ram_420531f8(9);
        FUN_ram_4205c318(iVar1,uVar6,iVar1 + 0x32,param_3,0x800);
        FUN_ram_42053ac4(uVar6);
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}

