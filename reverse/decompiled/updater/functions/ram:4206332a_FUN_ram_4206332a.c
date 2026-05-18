
void FUN_ram_4206332a(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  
  iVar3 = FUN_ram_42062312(*(undefined4 *)(param_1 + 0x1f0));
  uVar2 = 0;
  if ((iVar3 == 0) && (uVar2 = 3, (*(uint *)(param_1 + 0x1f0) & 0xc18de0) == 0)) {
    uVar2 = (*(int *)(param_1 + 0x1e8) != 2) + 1;
  }
  iVar3 = FUN_ram_42061e74(*(uint *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 0x40));
  uVar5 = 0x5f;
  if (iVar3 == 0x18) {
    uVar5 = 0x67;
  }
  iVar4 = thunk_FUN_ram_4206616e(param_1,3,0,uVar5,&uStack_28,&puStack_24);
  puVar1 = puStack_24;
  if (iVar4 != 0) {
    uVar6 = 0xfe;
    if (*(int *)(param_1 + 0x230) == 2) {
      uVar6 = 2;
    }
    *puStack_24 = uVar6;
    if (*(int *)(param_1 + 0x114) == 0) {
      uVar7 = 0x800;
    }
    else if (iVar3 == 0) {
      uVar7 = 0xa00;
    }
    else {
      uVar7 = 0xb00;
    }
    uVar7 = param_2 << 10 | uVar7 | uVar2;
    if (param_3 != 0) {
      uVar7 = uVar7 | 8;
    }
    puStack_24[1] = (char)(uVar7 >> 8);
    puStack_24[2] = (char)uVar7;
    puStack_24[3] = 0;
    puStack_24[4] = 0;
    FUN_ram_40399daa(puStack_24 + 5,param_1 + 0x16c,8);
    FUN_ram_42022612(param_1 + 0x16c,8);
    if (iVar3 == 0x18) {
      puVar1[0x65] = 0;
      puVar1[0x66] = 0;
    }
    else {
      puStack_24[0x5d] = 0;
      puStack_24[0x5e] = 0;
    }
    puVar8 = (undefined1 *)0x0;
    if ((uVar7 & 0x100) != 0) {
      puVar8 = puVar1 + 0x4d;
    }
    FUN_ram_4206326c(param_1,param_1 + 0x44,*(undefined4 *)(param_1 + 0x9c),uVar2,param_1 + 0x22a,
                     0x888e,iVar4,uStack_28,puVar8);
    thunk_FUN_ram_420661ec(iVar4);
  }
  return;
}

