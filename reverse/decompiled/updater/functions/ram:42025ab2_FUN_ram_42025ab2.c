
int FUN_ram_42025ab2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  iVar1 = FUN_ram_420249f4(&local_40);
  uVar9 = uStack_3a;
  uVar10 = local_40;
  if (iVar1 == 0) {
    uStack_38 = 0;
    sStack_32 = 0;
    iVar2 = FUN_ram_420249f4(&uStack_38,param_3);
    sVar8 = sStack_32;
    uVar11 = uStack_38;
    iVar1 = -0x10;
    if (iVar2 != 0) goto LAB_ram_42025b5c;
    uStack_34 = 1;
    uStack_3c = 1;
    sVar6 = sStack_32;
    if (sStack_32 == 0) {
      sVar6 = 1;
    }
    iVar2 = FUN_ram_4202479e(&local_40,sVar6);
    uVar9 = uStack_3a;
    uVar10 = local_40;
    iVar1 = -0x10;
    if (iVar2 != 0) goto LAB_ram_42025b5c;
    iVar1 = FUN_ram_4202479e(&uStack_38,uStack_3a);
    sVar8 = sStack_32;
    uVar11 = uStack_38;
    if (iVar1 == 0) {
      iVar1 = FUN_ram_42026cfe(uVar10,uVar9);
      puVar7 = &uStack_38;
      if ((iVar1 == 0) || (iVar1 = FUN_ram_42026cfe(uVar11,sVar8), puVar7 = &local_40, iVar1 == 0))
      {
        iVar2 = FUN_ram_420249f4(param_1,puVar7);
      }
      else {
        uVar3 = FUN_ram_42024b72(&local_40);
        uVar4 = FUN_ram_42024b72(&uStack_38);
        FUN_ram_42024cba(&local_40,uVar3);
        FUN_ram_42024cba(&uStack_38,uVar4);
        uVar5 = FUN_ram_420261b6(uVar11,uVar10,uVar9);
        FUN_ram_42026258(uVar10,uVar11,uVar9,uVar5);
        iVar1 = FUN_ram_4202595e(param_1,0,&local_40,&uStack_38);
        if (iVar1 != 0) goto LAB_ram_42025b5c;
        if (uVar4 < uVar3) {
          uVar3 = uVar4;
        }
        iVar2 = FUN_ram_42024c6c(param_1,uVar3);
      }
      iVar1 = 0;
      if (iVar2 == 0) goto LAB_ram_42025b5c;
    }
  }
  else {
    sVar8 = 0;
    uVar11 = 0;
  }
  iVar1 = -0x10;
LAB_ram_42025b5c:
  _uStack_3c = CONCAT22(uVar9,uStack_3c);
  local_40 = uVar10;
  FUN_ram_42024774(&local_40);
  uStack_38 = uVar11;
  sStack_32 = sVar8;
  FUN_ram_42024774(&uStack_38);
  return iVar1;
}

