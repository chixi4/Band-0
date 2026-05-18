
undefined4 FUN_ram_420690fa(int *param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  ushort uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uStack_2c;
  int local_28 [3];
  
  uStack_2c = 0;
  iVar3 = FUN_ram_420685b4(param_3,0);
  uVar9 = 0xfffffffc;
  if (-1 < iVar3) {
    iVar3 = FUN_ram_42068514(param_3,param_4);
    uVar9 = 0xfffffffc;
    if ((((iVar3 < 1) && (iVar3 = FUN_ram_4206835e(param_4,0), iVar3 == 1)) &&
        ((piVar2 = param_3, param_2 == (int *)0x0 ||
         (((iVar3 = FUN_ram_420685b4(param_4,1), iVar3 != 0 &&
           (uVar9 = 0xfffffffc, param_3 != param_4)) &&
          (uVar9 = 0xfffffffc, piVar2 = param_1, param_2 != param_4)))))) &&
       (uVar9 = 0xfffffffc, piVar2 != param_4)) {
      local_28[0] = 0;
      local_28[1] = 1;
      if (param_1 == (int *)0x0) {
        param_1 = local_28;
      }
      iVar3 = FUN_ram_420680a2(param_1,*(undefined2 *)((int)param_4 + 6));
      if (((iVar3 == 0) &&
          ((param_2 == (int *)0x0 ||
           (iVar3 = FUN_ram_420680a2(param_2,*(undefined2 *)((int)param_4 + 6)), iVar3 == 0)))) &&
         (iVar3 = FUN_ram_4206d7ce((uint)*(ushort *)((int)param_4 + 6) << 2,
                                   (param_2 != (int *)0x0) + '\x04'), iVar3 != 0)) {
        iVar5 = 0;
        if (param_2 != (int *)0x0) {
          iVar5 = *param_2;
        }
        puVar8 = (undefined4 *)*param_3;
        puVar6 = puVar8;
        if (puVar8 == (undefined4 *)0x0) {
          puVar6 = &uStack_2c;
        }
        uVar1 = *(ushort *)((int)param_4 + 6);
        uVar7 = uVar1;
        if ((*(ushort *)((int)param_3 + 6) < uVar1) && (uVar7 = 1, puVar8 != (undefined4 *)0x0)) {
          uVar7 = *(ushort *)((int)param_3 + 6);
        }
        FUN_ram_4206a3c2(*param_1,iVar5,puVar6,uVar7,*param_4,uVar1,iVar3);
        *(undefined2 *)(param_1 + 1) = 1;
        if (param_2 != (int *)0x0) {
          *(undefined2 *)(param_2 + 1) = 1;
        }
        uVar4 = (uint)*(ushort *)((int)param_4 + 6);
        if (uVar4 < *(ushort *)((int)param_1 + 6)) {
          (*(code *)&SUB_ram_40010488)
                    (uVar4 * 4 + *param_1,0,(*(ushort *)((int)param_1 + 6) - uVar4) * 4);
        }
        uVar9 = 0;
        if (param_2 != (int *)0x0) {
          uVar4 = (uint)*(ushort *)((int)param_4 + 6);
          if (uVar4 < *(ushort *)((int)param_2 + 6)) {
            (*(code *)&SUB_ram_40010488)
                      (uVar4 * 4 + *param_2,0,(*(ushort *)((int)param_2 + 6) - uVar4) * 4);
          }
        }
      }
      else {
        iVar3 = 0;
        uVar9 = 0xfffffff0;
      }
      FUN_ram_42068078(local_28);
      FUN_ram_4206d7d4(iVar3);
    }
  }
  return uVar9;
}

