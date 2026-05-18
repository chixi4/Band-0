
int FUN_ram_42050168(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)FUN_ram_4204ed60();
  if (piVar1 != (int *)0x0) {
    puVar2 = (uint *)*piVar1;
    if (puVar2 == (uint *)0x0) {
      puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      uVar7 = 0x80;
    }
    else if ((*puVar2 & 0xf0) == 0x10) {
      uVar7 = 1;
      if (param_2 == 1) {
        uVar7 = 0;
        uVar6 = 1;
LAB_ram_420501da:
        iVar4 = FUN_ram_4205a218(puVar2,uVar7,uVar6);
        iVar5 = FUN_ram_4205b1bc();
        if (iVar5 != 0) {
          puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
          uVar7 = FUN_ram_4205b1bc(iVar4);
          *puVar3 = uVar7;
        }
        FUN_ram_4204ecbc(piVar1);
        return -(uint)(iVar4 != 0);
      }
      if (param_2 == 2) {
        uVar6 = 1;
        goto LAB_ram_420501da;
      }
      if (param_2 == 0) {
        uVar6 = 0;
        goto LAB_ram_420501da;
      }
      puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      uVar7 = 0x16;
    }
    else {
      puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      uVar7 = 0x5f;
    }
    *puVar3 = uVar7;
    FUN_ram_4204ecbc(piVar1);
  }
  return -1;
}

