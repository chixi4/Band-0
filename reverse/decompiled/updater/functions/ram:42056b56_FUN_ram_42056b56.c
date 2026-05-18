
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42056b56(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ushort uStack_22;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    return;
  }
  FUN_ram_420561aa(iVar2,1);
  iVar3 = FUN_ram_42056228(param_1,iVar2,3,&uStack_22);
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 4);
    uVar4 = (uint)uStack_22;
    iVar1 = iVar7 + 0xf0;
    *(undefined1 *)(iVar1 + uVar4) = 0x39;
    *(undefined1 *)((uVar4 + 1 & 0xffff) + iVar1) = 2;
    iVar5 = FUN_ram_420561c0(uVar4 + 2 & 0xffff,iVar1,*(undefined2 *)(param_1 + 0x30));
    *(undefined1 *)(iVar1 + iVar5) = 0x32;
    *(undefined1 *)((iVar5 + 1U & 0xffff) + iVar1) = 4;
    uStack_22 = (ushort)((iVar5 + 2U) * 0x10000 >> 0x10);
    uVar6 = FUN_ram_4205074c(*(undefined4 *)(iVar2 + 0x2c));
    iVar5 = FUN_ram_420561e2(iVar5 + 2U & 0xffff,iVar1,uVar6);
    *(undefined1 *)(iVar1 + iVar5) = 0x36;
    *(undefined1 *)((iVar5 + 1U & 0xffff) + iVar1) = 4;
    uStack_22 = (ushort)((iVar5 + 2U) * 0x10000 >> 0x10);
    uVar6 = FUN_ram_4205074c(*(undefined4 *)(iVar2 + 0x28));
    iVar5 = FUN_ram_420561e2(iVar5 + 2U & 0xffff,iVar1,uVar6);
    *(undefined1 *)(iVar1 + iVar5) = 0x37;
    *(undefined1 *)((iVar5 + 1U & 0xffff) + iVar1) = 4;
    *(undefined1 *)((iVar5 + 2U & 0xffff) + iVar1) = 1;
    *(undefined1 *)((iVar5 + 3U & 0xffff) + iVar1) = 3;
    *(undefined1 *)((iVar5 + 4U & 0xffff) + iVar1) = 0x1c;
    *(undefined1 *)((iVar5 + 5U & 0xffff) + iVar1) = 6;
    uStack_22 = (ushort)(iVar5 + 6U);
    uStack_22 = FUN_ram_42056544(iVar5 + 6U & 0xffff,iVar1,*(undefined4 *)(param_1 + 0x2c));
    FUN_ram_4205966a(param_1,1,iVar7,&uStack_22);
    FUN_ram_42056380(uStack_22,iVar1,iVar3);
    FUN_ram_42055e38(_DAT_ram_3fcb6810,iVar3,&DAT_ram_3c0793d0,0x43,param_1,&DAT_ram_3c0793d4);
    FUN_ram_42051d02(iVar3);
  }
  if (*(byte *)(iVar2 + 6) != 0xff) {
    uVar4 = *(byte *)(iVar2 + 6) + 1;
    *(char *)(iVar2 + 6) = (char)uVar4;
    if ((uVar4 & 0xff) < 5) {
      uVar4 = (uint)((1 << (uVar4 & 0x1f)) * 0xfa0000) >> 0x10;
      goto LAB_ram_42056d12;
    }
  }
  uVar4 = 4000;
LAB_ram_42056d12:
  *(uint *)(iVar2 + 0xc) = (uVar4 + 499 & 0xffff) / 500;
  if (*(char *)(iVar2 + 8) == '\0') {
    FUN_ram_4205598a(500,0x42047918,param_1);
    *(undefined1 *)(iVar2 + 8) = 1;
  }
  return;
}

