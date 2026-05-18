
int FUN_ram_42060652(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [76];
  
  iVar2 = FUN_ram_42066328(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc),
                           *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10));
  iVar3 = FUN_ram_42066328(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14),
                           *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18));
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
    uStack_b8 = 6;
    uStack_b4 = 6;
    iVar4 = FUN_ram_40399d6c(param_2,param_3);
    uStack_bc = param_3;
    local_c0 = param_2;
    if (iVar4 < 1) {
      uStack_bc = param_2;
      local_c0 = param_3;
    }
    iVar4 = FUN_ram_420602a0(uVar8);
    (*(code *)&SUB_ram_40010488)(auStack_b0,0,iVar4);
    if ((iVar4 == 0x20) &&
       (iVar4 = FUN_ram_42021b5c(auStack_b0,0x20,2,&local_c0,&uStack_b8,auStack_70), -1 < iVar4)) {
      iVar7 = FUN_ram_42066304();
      iVar1 = FUN_ram_42066328(auStack_70,0x20);
      iVar6 = FUN_ram_42066388(1);
      iVar4 = 0;
      if ((iVar7 != 0) && ((iVar4 = 0, iVar1 != 0 && (iVar6 != 0)))) {
        iVar4 = FUN_ram_420664b2(iVar3,iVar6,iVar7);
        if ((-1 < iVar4) &&
           ((iVar4 = FUN_ram_42066454(iVar1,iVar7,iVar1), -1 < iVar4 &&
            (iVar4 = FUN_ram_42066436(iVar1,iVar6,iVar1), -1 < iVar4)))) {
          FUN_ram_4205f5d0(iVar1,uVar8);
          iVar4 = FUN_ram_42066304();
          if ((iVar4 != 0) &&
             (iVar5 = FUN_ram_42066472(*(undefined4 *)(param_1 + 0x14),iVar1,iVar2,iVar4),
             -1 < iVar5)) {
            FUN_ram_4205f5d0(iVar4,uVar8);
            goto LAB_ram_42060692;
          }
          FUN_ram_4206636c(iVar4,1);
        }
        iVar4 = 0;
      }
      goto LAB_ram_42060692;
    }
  }
  iVar6 = 0;
  iVar1 = 0;
  iVar7 = 0;
  iVar4 = 0;
LAB_ram_42060692:
  FUN_ram_4206636c(iVar7,1);
  FUN_ram_4206636c(iVar1,1);
  FUN_ram_4206636c(iVar6,0);
  FUN_ram_4206636c(iVar2,0);
  FUN_ram_4206636c(iVar3,0);
  return iVar4;
}

