
int FUN_ram_40393a6c(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_3 != -1) {
    return 0x102;
  }
  iVar1 = FUN_ram_40393456();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_ram_4039334c(param_1);
  if (iVar1 != 0) {
    return 0x103;
  }
  iVar2 = *(int *)(param_1 + 0x74);
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  puStack_34 = param_2;
  iVar1 = FUN_ram_403936a0(iVar2,&puStack_34);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*(int *)(iVar2 + 0xa8) == param_1) {
    iVar1 = FUN_ram_40392a12(*(undefined4 *)(param_1 + 0x78),0xffffffff);
  }
  else {
    iVar1 = 0x102;
    if ((*param_2 & 0x100) != 0) goto LAB_ram_40393ada;
    iVar1 = FUN_ram_40392886(*(undefined4 *)(param_1 + 0x78),0xffffffff);
  }
  if (iVar1 == 0) {
    *(undefined1 *)(iVar2 + 0xb4) = 1;
    FUN_ram_4039c11e(iVar2 + 0x58,&puStack_34,0x14);
    FUN_ram_40393746(param_1,iVar2 + 0x58);
    return 0;
  }
LAB_ram_40393ada:
  FUN_ram_403932c2(&puStack_34);
  return iVar1;
}

