
int FUN_ram_4206924e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  short sVar6;
  undefined4 *puVar7;
  short sVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  undefined2 uStack_34;
  short sStack_32;
  
  uStack_34 = 1;
  local_40 = 0;
  uStack_3c = 1;
  uStack_3a = 0;
  iVar1 = FUN_ram_4206826c(&local_40);
  uVar9 = uStack_3a;
  uVar10 = local_40;
  if (iVar1 == 0) {
    uStack_38 = 0;
    sStack_32 = 0;
    iVar2 = FUN_ram_4206826c(&uStack_38,param_3);
    sVar8 = sStack_32;
    uVar11 = uStack_38;
    iVar1 = -0x10;
    if (iVar2 != 0) goto LAB_ram_420692f8;
    uStack_34 = 1;
    uStack_3c = 1;
    sVar6 = sStack_32;
    if (sStack_32 == 0) {
      sVar6 = 1;
    }
    iVar2 = FUN_ram_420680a2(&local_40,sVar6);
    uVar9 = uStack_3a;
    uVar10 = local_40;
    iVar1 = -0x10;
    if (iVar2 != 0) goto LAB_ram_420692f8;
    iVar1 = FUN_ram_420680a2(&uStack_38,uStack_3a);
    sVar8 = sStack_32;
    uVar11 = uStack_38;
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4206a378(uVar10,uVar9);
      puVar7 = &uStack_38;
      if ((iVar1 == 0) || (iVar1 = FUN_ram_4206a378(uVar11,sVar8), puVar7 = &local_40, iVar1 == 0))
      {
        iVar2 = FUN_ram_4206826c(param_1,puVar7);
      }
      else {
        uVar3 = FUN_ram_42068380(&local_40);
        uVar4 = FUN_ram_42068380(&uStack_38);
        FUN_ram_42068484(&local_40,uVar3);
        FUN_ram_42068484(&uStack_38,uVar4);
        uVar5 = FUN_ram_4206989c(uVar11,uVar10,uVar9);
        FUN_ram_4206993e(uVar10,uVar11,uVar9,uVar5);
        iVar1 = FUN_ram_420690fa(param_1,0,&local_40,&uStack_38);
        if (iVar1 != 0) goto LAB_ram_420692f8;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        iVar2 = FUN_ram_42068436(param_1,uVar3);
      }
      iVar1 = 0;
      if (iVar2 == 0) goto LAB_ram_420692f8;
    }
  }
  else {
    sVar8 = 0;
    uVar11 = 0;
  }
  iVar1 = -0x10;
LAB_ram_420692f8:
  _uStack_3c = CONCAT22(uVar9,uStack_3c);
  local_40 = uVar10;
  FUN_ram_42068078(&local_40);
  uStack_38 = uVar11;
  sStack_32 = sVar8;
  FUN_ram_42068078(&uStack_38);
  return iVar1;
}

