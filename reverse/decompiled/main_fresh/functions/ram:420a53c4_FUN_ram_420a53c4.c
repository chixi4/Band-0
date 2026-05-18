
int FUN_ram_420a53c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    int param_5,int param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_6c [12];
  undefined1 local_60 [44];
  
  iVar1 = (*(code *)&SUB_ram_400104a8)(param_3);
  FUN_ram_4206c48e(auStack_6c);
  iVar2 = FUN_ram_4206c444(9);
  if (iVar2 == 0) {
    iVar5 = -0x6c00;
  }
  else {
    uVar3 = FUN_ram_4206c71c();
    iVar10 = param_5 + iVar1 + uVar3;
    iVar4 = FUN_ram_4206d7ce(1,iVar10);
    iVar5 = -0x7f00;
    if (iVar4 != 0) {
      FUN_ram_4039c11e(iVar4 + uVar3,param_3,iVar1);
      FUN_ram_4039c11e(iVar4 + iVar1 + uVar3,param_4,param_5);
      iVar5 = FUN_ram_4206c572(auStack_6c,iVar2,1);
      if ((iVar5 == 0) && (iVar5 = FUN_ram_4206c738(auStack_6c,param_1,param_2), iVar5 == 0)) {
        iVar5 = FUN_ram_4206c842(auStack_6c,iVar4 + uVar3,iVar1 + param_5);
        if ((iVar5 == 0) && (iVar2 = FUN_ram_4206c858(auStack_6c,iVar4), iVar5 = iVar2, iVar2 == 0))
        {
          uVar9 = 0;
          while ((((iVar5 = iVar2, uVar9 < param_7 &&
                   (iVar5 = FUN_ram_4206c8e4(auStack_6c), iVar5 == 0)) &&
                  (iVar5 = FUN_ram_4206c842(auStack_6c,iVar4,iVar1 + param_5 + uVar3), iVar5 == 0))
                 && (((iVar5 = FUN_ram_4206c858(auStack_6c,local_60), iVar5 == 0 &&
                      (iVar5 = FUN_ram_4206c8e4(auStack_6c), iVar5 == 0)) &&
                     ((iVar5 = FUN_ram_4206c842(auStack_6c,iVar4,uVar3), iVar5 == 0 &&
                      (iVar5 = FUN_ram_4206c858(auStack_6c,iVar4), iVar5 == 0))))))) {
            uVar7 = uVar3 + uVar9;
            uVar6 = uVar3;
            if (param_7 < uVar7) {
              uVar6 = param_7 % uVar3;
            }
            iVar5 = uVar9 + param_6;
            for (uVar8 = 0; uVar9 = uVar7, uVar8 != uVar6; uVar8 = uVar8 + 1) {
              *(undefined1 *)(iVar5 + uVar8) = local_60[uVar8];
            }
          }
        }
      }
    }
    FUN_ram_4206c49a(auStack_6c);
    if (iVar4 != 0) {
      FUN_ram_4206d7da(iVar4,iVar10);
    }
    FUN_ram_4206d7da(local_60,0x20);
    FUN_ram_4206d7d4(iVar4);
  }
  return iVar5;
}

