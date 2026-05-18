
int FUN_ram_420604bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 auStack_134 [64];
  undefined1 auStack_f4 [64];
  undefined1 auStack_b4 [140];
  
  iVar2 = FUN_ram_4205e4ae(*(undefined4 *)(param_1 + 8));
  puVar7 = auStack_b4 + iVar2;
  iVar3 = FUN_ram_4205e538(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),auStack_b4,
                           puVar7);
  if (iVar3 < 0) {
    return 0;
  }
  uStack_13c = 6;
  uStack_138 = 6;
  iVar3 = FUN_ram_40399d6c(param_2,param_3);
  uStack_140 = param_3;
  uStack_144 = param_2;
  if (iVar3 < 1) {
    uStack_140 = param_2;
    uStack_144 = param_3;
  }
  iVar3 = FUN_ram_42060286(iVar2);
  (*(code *)&SUB_ram_40010488)(auStack_134,0,iVar3);
  if ((iVar3 == 0x20) &&
     (iVar3 = FUN_ram_42021b5c(auStack_134,0x20,2,&uStack_144,&uStack_13c,auStack_f4), -1 < iVar3))
  {
    uVar4 = FUN_ram_4205e4c6(*(undefined4 *)(param_1 + 8));
    iVar6 = FUN_ram_42066304();
    iVar1 = FUN_ram_42066328(auStack_f4,0x20);
    iVar5 = FUN_ram_42066388(1);
    iVar3 = 0;
    if (((iVar6 != 0) && (iVar3 = 0, iVar1 != 0)) && (iVar5 != 0)) {
      iVar3 = FUN_ram_420664b2(uVar4,iVar5,iVar6);
      if (((-1 < iVar3) && (iVar3 = FUN_ram_42066454(iVar1,iVar6,iVar1), -1 < iVar3)) &&
         (iVar3 = FUN_ram_42066436(iVar1,iVar5,iVar1), -1 < iVar3)) {
        FUN_ram_4205f5d0(iVar1,iVar2);
        iVar3 = FUN_ram_4205e486(*(undefined4 *)(param_1 + 8));
        if (((iVar3 != 0) &&
            (iVar2 = FUN_ram_4205e64c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                                      iVar1,iVar3), -1 < iVar2)) &&
           (iVar2 = FUN_ram_4205e538(*(undefined4 *)(param_1 + 8),iVar3,auStack_b4,puVar7),
           -1 < iVar2)) goto LAB_ram_42060556;
        FUN_ram_4205e51c(iVar3,1);
      }
      iVar3 = 0;
    }
  }
  else {
    iVar5 = 0;
    iVar1 = 0;
    iVar6 = 0;
    iVar3 = 0;
  }
LAB_ram_42060556:
  FUN_ram_4206636c(iVar6,1);
  FUN_ram_4206636c(iVar1,1);
  FUN_ram_4206636c(iVar5,0);
  return iVar3;
}

