
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420574e6(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort uStack_26;
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
    iVar2 = FUN_ram_420574c2();
    if (iVar2 == 0) {
      FUN_ram_420561aa(iVar1,0);
    }
    else {
      FUN_ram_420561aa(iVar1,0);
      iVar2 = FUN_ram_42056228(param_1,iVar1,7,&uStack_26);
      if (iVar2 != 0) {
        iVar6 = *(int *)(iVar2 + 4);
        uVar4 = (uint)uStack_26;
        iVar5 = iVar6 + 0xf0;
        *(undefined1 *)(iVar5 + uVar4) = 0x36;
        *(undefined1 *)((uVar4 + 1 & 0xffff) + iVar5) = 4;
        uStack_26 = (ushort)((uVar4 + 2) * 0x10000 >> 0x10);
        uVar3 = FUN_ram_4205074c(auStack_24[0]);
        uStack_26 = FUN_ram_420561e2(uVar4 + 2 & 0xffff,iVar5,uVar3);
        FUN_ram_4205966a(param_1,*(undefined1 *)(iVar1 + 5),iVar6,&uStack_26);
        FUN_ram_42056380(uStack_26,iVar5,iVar2);
        FUN_ram_42055f92(_DAT_ram_3fcb6810,iVar2,auStack_24,0x43,param_1);
        FUN_ram_42051d02(iVar2);
      }
      FUN_ram_42051808(param_1,&DAT_ram_3c0793d4,&DAT_ram_3c0793d4,&DAT_ram_3c0793d4);
    }
    FUN_ram_42059b5a(param_1,iVar1 + 0x44);
    if (*(char *)(iVar1 + 8) != '\0') {
      FUN_ram_42055a5a(0x42047918,param_1);
      *(undefined1 *)(iVar1 + 8) = 0;
    }
    if (*(char *)(iVar1 + 4) != '\0') {
      FUN_ram_42056510();
      *(undefined1 *)(iVar1 + 4) = 0;
    }
  }
  return;
}

