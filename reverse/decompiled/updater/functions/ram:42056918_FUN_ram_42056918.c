
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42056918(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uStack_22;
  
  if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 0x20);
    FUN_ram_420561aa(iVar1,0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0x14;
    if (*(char *)(iVar1 + 8) == '\0') {
      FUN_ram_4205598a(500,0x42047918,param_1);
      *(undefined1 *)(iVar1 + 8) = 1;
    }
  }
  else if (param_2 == 2) {
    FUN_ram_42051808(param_1,&DAT_ram_3c0793d4,&DAT_ram_3c0793d4,&DAT_ram_3c0793d4);
    iVar5 = *(int *)(param_1 + 0x20);
    FUN_ram_420561aa(iVar5,0xc);
    iVar1 = FUN_ram_42056228(param_1,iVar5,4,&uStack_22);
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 4);
      uVar3 = (uint)uStack_22;
      iVar4 = iVar6 + 0xf0;
      *(undefined1 *)(iVar4 + uVar3) = 0x32;
      *(undefined1 *)((uVar3 + 1 & 0xffff) + iVar4) = 4;
      uStack_22 = (ushort)((uVar3 + 2) * 0x10000 >> 0x10);
      uVar2 = FUN_ram_4205074c(*(undefined4 *)(iVar5 + 0x2c));
      uStack_22 = FUN_ram_420561e2(uVar3 + 2 & 0xffff,iVar4,uVar2);
      FUN_ram_4205966a(param_1,0xc,iVar6,&uStack_22);
      FUN_ram_42056380(uStack_22,iVar4,iVar1);
      FUN_ram_42055e38(_DAT_ram_3fcb6810,iVar1,&DAT_ram_3c0793d0,0x43,param_1,&DAT_ram_3c0793d4);
      FUN_ram_42051d02(iVar1);
    }
  }
  else if (param_2 == 0) {
    FUN_ram_420563c8();
    return;
  }
  return;
}

