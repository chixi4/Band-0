
undefined4 FUN_ram_4205eb7a(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_34;
  
  uStack_34 = 0;
  if (param_1 == 0) {
    return 0;
  }
  uVar10 = *(uint *)(param_1 + 0x48);
  iVar5 = param_1 + 0xc;
  uVar2 = FUN_ram_42066328(param_3,param_4);
  iVar3 = FUN_ram_4205e486(iVar5);
  if ((iVar3 == 0) || (iVar9 = FUN_ram_4205e79c(iVar5,iVar3,uVar2,param_2), iVar9 != 0)) {
    puVar6 = (undefined4 *)0x0;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_ram_40399d1a(1,param_4);
    iVar8 = FUN_ram_40399d1a(1,param_4);
    iVar7 = FUN_ram_40399d1a(1,param_4 << 1);
    if ((((iVar9 == 0) || (iVar8 == 0)) || (iVar7 == 0)) ||
       (iVar4 = FUN_ram_4205e538(iVar5,iVar3,iVar9,iVar8), iVar4 != 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      FUN_ram_40399daa(iVar7,iVar9,param_4);
      FUN_ram_40399daa(iVar7 + param_4,iVar8,param_4);
      puVar6 = (undefined4 *)FUN_ram_4205e90a(iVar5,iVar7,param_4);
      if (puVar6 != (undefined4 *)0x0) {
        iVar5 = FUN_ram_4205e3f6(*puVar6,puVar6[1]);
        FUN_ram_4202fa5c(param_1 + 0x8c,iVar5 + 0x68);
        *(undefined4 *)(param_1 + 8) = 1;
        if (param_2 != 0) {
          param_4 = param_4 << 1;
        }
        iVar5 = FUN_ram_40399d1a(1,param_4);
        if (iVar5 == 0) {
          uVar1 = 0;
        }
        else {
          iVar4 = FUN_ram_4202e9f0(param_1,&uStack_34,iVar5,uVar10 >> 3,0x42021a46,0);
          uVar1 = 0;
          if (iVar4 == 0) {
            uVar1 = FUN_ram_42065852(iVar5,param_4);
          }
        }
        goto LAB_ram_4205eca4;
      }
    }
  }
  uVar1 = 0;
  iVar5 = 0;
LAB_ram_4205eca4:
  thunk_FUN_ram_40390608(iVar9);
  thunk_FUN_ram_40390608(iVar8);
  thunk_FUN_ram_40390608(iVar7);
  thunk_FUN_ram_40390608(iVar5);
  FUN_ram_4205eb5e(puVar6);
  FUN_ram_4206636c(uVar2,1);
  FUN_ram_4205e51c(iVar3,1);
  return uVar1;
}

