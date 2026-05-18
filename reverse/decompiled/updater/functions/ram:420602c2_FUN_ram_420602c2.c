
int FUN_ram_420602c2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 uStack_378;
  int iStack_374;
  undefined1 auStack_370 [64];
  undefined4 uStack_330;
  undefined4 uStack_32c;
  
  iVar3 = FUN_ram_42066328(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  iVar4 = FUN_ram_42066328(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  if (((iVar3 != 0) && (iVar4 != 0)) && (uVar10 = *(uint *)(param_1 + 0x10), uVar10 < 0x201)) {
    uVar11 = FUN_ram_420602a0(uVar10);
    iVar1 = (uVar10 + 1 >> 1) + uVar10;
    uVar6 = 1;
    uStack_378 = param_4;
    uStack_330 = param_5;
    if (param_6 != 0) {
      iStack_374 = param_6;
      uStack_32c = (*(code *)&SUB_ram_400104a8)(param_6,(int)((ulonglong)uVar11 >> 0x20),1);
      uVar6 = 2;
    }
    if ((((int)uVar11 == 0x20) &&
        (iVar5 = FUN_ram_42021b5c(param_2,param_3,uVar6,&uStack_378,&uStack_330,auStack_370),
        -1 < iVar5)) &&
       (iVar5 = FUN_ram_4205f370(0x20,auStack_370,0x20,0x3c073324,&uStack_330,iVar1), -1 < iVar5)) {
      iVar7 = FUN_ram_42066328(&uStack_330,iVar1);
      iVar9 = FUN_ram_42066388(1);
      iVar8 = FUN_ram_42066388(2);
      iVar2 = FUN_ram_42066304();
      iVar5 = 0;
      iVar1 = 0;
      if (((iVar7 != 0) && (iVar1 = iVar5, iVar9 != 0)) && ((iVar8 != 0 && (iVar2 != 0)))) {
        iVar1 = FUN_ram_420664b2(iVar3,iVar8,iVar2);
        if ((((-1 < iVar1) && (iVar1 = FUN_ram_42066454(iVar7,iVar2,iVar7), -1 < iVar1)) &&
            (iVar1 = FUN_ram_42066436(iVar7,iVar8,iVar7), -1 < iVar1)) &&
           (iVar1 = FUN_ram_420663cc(iVar7,&uStack_330,0x300,uVar10), -1 < iVar1)) {
          iVar1 = FUN_ram_42066304();
          if (((iVar1 != 0) && (iVar5 = FUN_ram_420664b2(iVar3,iVar9,iVar2), -1 < iVar5)) &&
             ((iVar5 = FUN_ram_420664d0(iVar2,iVar4,iVar2), -1 < iVar5 &&
              (iVar5 = FUN_ram_42066472(iVar7,iVar2,iVar3,iVar1), -1 < iVar5)))) {
            FUN_ram_4205f5d0(iVar1,uVar10);
            goto LAB_ram_42060320;
          }
          FUN_ram_4206636c(iVar1,1);
        }
        iVar1 = 0;
      }
      goto LAB_ram_42060320;
    }
  }
  iVar2 = 0;
  iVar7 = 0;
  iVar8 = 0;
  iVar9 = 0;
  iVar1 = 0;
LAB_ram_42060320:
  thunk_FUN_ram_420293a6(auStack_370,0x40);
  thunk_FUN_ram_420293a6(&uStack_330,0x300);
  FUN_ram_4206636c(iVar7,1);
  FUN_ram_4206636c(iVar2,1);
  FUN_ram_4206636c(iVar9,0);
  FUN_ram_4206636c(iVar8,0);
  FUN_ram_4206636c(iVar3,0);
  FUN_ram_4206636c(iVar4,0);
  return iVar1;
}

