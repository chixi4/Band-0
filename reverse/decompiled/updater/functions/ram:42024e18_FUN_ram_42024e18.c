
undefined4 FUN_ram_42024e18(int *param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  
  piVar8 = param_2;
  if (((param_1 == param_3) || (piVar8 = param_3, param_1 == param_2)) ||
     (iVar4 = FUN_ram_420249f4(), iVar4 == 0)) {
    uVar1 = *(ushort *)((int)piVar8 + 6);
    *(undefined2 *)(param_1 + 1) = 1;
    for (uVar2 = (uint)uVar1; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (*(int *)(*piVar8 + uVar2 * 4 + -4) != 0) {
        iVar4 = FUN_ram_4202479e(param_1,uVar2);
        if (iVar4 != 0) goto LAB_ram_42024e4c;
        iVar4 = *param_1;
        uVar5 = FUN_ram_4202657a(iVar4,iVar4,*piVar8,uVar2);
        puVar7 = (uint *)(iVar4 + uVar2 * 4);
        goto LAB_ram_42024e94;
      }
    }
LAB_ram_42024e42:
    uVar3 = 0;
  }
  else {
LAB_ram_42024e4c:
    uVar3 = 0xfffffff0;
  }
  return uVar3;
LAB_ram_42024e94:
  if (uVar5 == 0) goto LAB_ram_42024e42;
  if (*(ushort *)((int)param_1 + 6) <= uVar2) {
    iVar4 = FUN_ram_4202479e(param_1,uVar2 + 1);
    if (iVar4 != 0) goto LAB_ram_42024e4c;
    puVar7 = (uint *)(*param_1 + uVar2 * 4);
  }
  uVar6 = *puVar7;
  uVar5 = uVar5 + uVar6;
  *puVar7 = uVar5;
  uVar5 = (uint)(uVar5 < uVar6);
  puVar7 = puVar7 + 1;
  uVar2 = uVar2 + 1;
  goto LAB_ram_42024e94;
}

