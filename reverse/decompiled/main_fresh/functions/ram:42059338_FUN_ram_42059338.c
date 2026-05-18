
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42059338(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined2 uStack_22;
  
  uVar8 = CONCAT44(param_2,param_1);
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 5) == '\0')) {
    uVar8 = FUN_ram_4039bf1e();
  }
  iVar6 = (int)((ulonglong)uVar8 >> 0x20);
  iVar2 = (int)uVar8;
  if (iVar6 == 1) {
    FUN_ram_42058e08(iVar1,0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0x14;
    if (*(char *)(iVar1 + 8) == '\0') {
      FUN_ram_420585b0(500,0x4204a58e,iVar2);
      *(undefined1 *)(iVar1 + 8) = 1;
    }
  }
  else if (iVar6 == 2) {
    FUN_ram_42053552(iVar2,&DAT_ram_3c0f7590,&DAT_ram_3c0f7590,&DAT_ram_3c0f7590);
    iVar6 = *(int *)(iVar2 + 0x20);
    FUN_ram_42058e08(iVar6,0xc);
    iVar1 = FUN_ram_420591cc(iVar2,iVar6,4,&uStack_22);
    if (iVar1 != 0) {
      iVar7 = *(int *)(iVar1 + 4);
      iVar5 = iVar7 + 0xf0;
      uVar3 = FUN_ram_42058e58(uStack_22,iVar5,0x32,4);
      uStack_22 = (undefined2)uVar3;
      uVar4 = FUN_ram_420523b8(*(undefined4 *)(iVar6 + 0x2c));
      uStack_22 = FUN_ram_42058e90(uVar3,iVar5,uVar4);
      FUN_ram_4205c572(iVar2,0xc,iVar7,&uStack_22);
      FUN_ram_42058eee(uStack_22,iVar5,iVar1);
      FUN_ram_42058a7e(_DAT_ram_3fcc5340,iVar1,&DAT_ram_3c0f758c,0x43,iVar2,&DAT_ram_3c0f7590);
      FUN_ram_42053ac4(iVar1);
    }
  }
  else if (iVar6 == 0) {
    FUN_ram_42058f36();
    return;
  }
  return;
}

