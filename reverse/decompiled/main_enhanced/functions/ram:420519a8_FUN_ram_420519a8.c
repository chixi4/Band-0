
int FUN_ram_420519a8(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)FUN_ram_4205032e();
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
LAB_ram_42051a1a:
        iVar4 = FUN_ram_4205d35a(puVar2,uVar7,uVar6);
        iVar5 = FUN_ram_4205e6c6();
        if (iVar5 != 0) {
          puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
          uVar7 = FUN_ram_4205e6c6(iVar4);
          *puVar3 = uVar7;
        }
        FUN_ram_4205027e(piVar1);
        return -(uint)(iVar4 != 0);
      }
      if (param_2 == 2) {
        uVar6 = 1;
        goto LAB_ram_42051a1a;
      }
      if (param_2 == 0) {
        uVar6 = 0;
        goto LAB_ram_42051a1a;
      }
      puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      uVar7 = 0x16;
    }
    else {
      puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      uVar7 = 0x5f;
    }
    *puVar3 = uVar7;
    FUN_ram_4205027e(piVar1);
  }
  return -1;
}

