
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205a190(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined2 uStack_26;
  undefined4 auStack_24 [2];
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 5) != '\0')) {
    auStack_24[0] = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    iVar2 = FUN_ram_4205a16c();
    if (iVar2 == 0) {
      FUN_ram_42058e08(iVar1,0);
    }
    else {
      FUN_ram_42058e08(iVar1,0);
      iVar2 = FUN_ram_420591cc(param_1,iVar1,7,&uStack_26);
      if (iVar2 != 0) {
        iVar6 = *(int *)(iVar2 + 4);
        iVar5 = iVar6 + 0xf0;
        uVar3 = FUN_ram_42058e58(uStack_26,iVar5,0x36,4);
        uStack_26 = (undefined2)uVar3;
        uVar4 = FUN_ram_420523b8(auStack_24[0]);
        uStack_26 = FUN_ram_42058e90(uVar3,iVar5,uVar4);
        FUN_ram_4205c572(param_1,*(undefined1 *)(iVar1 + 5),iVar6,&uStack_26);
        FUN_ram_42058eee(uStack_26,iVar5,iVar2);
        FUN_ram_42058bf0(_DAT_ram_3fcc5340,iVar2,auStack_24,0x43,param_1);
        FUN_ram_42053ac4(iVar2);
      }
      FUN_ram_42053552(param_1,&DAT_ram_3c0f7590,&DAT_ram_3c0f7590,&DAT_ram_3c0f7590);
    }
    FUN_ram_4205cb12(param_1,iVar1 + 0x44);
    if (*(char *)(iVar1 + 8) != '\0') {
      FUN_ram_42058690(0x4204a58e,param_1);
      *(undefined1 *)(iVar1 + 8) = 0;
    }
    if (*(char *)(iVar1 + 4) != '\0') {
      FUN_ram_4205908c();
      *(undefined1 *)(iVar1 + 4) = 0;
    }
  }
  return;
}

