
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42056786(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort auStack_22 [5];
  
  iVar6 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar6 + 0x2c) = 0;
  FUN_ram_420561aa(iVar6,6);
  iVar2 = FUN_ram_42056228(param_1,iVar6,1,auStack_22);
  if (iVar2 != 0) {
    iVar7 = *(int *)(iVar2 + 4);
    uVar3 = (uint)auStack_22[0];
    iVar1 = iVar7 + 0xf0;
    *(undefined1 *)(iVar1 + uVar3) = 0x39;
    *(undefined1 *)((uVar3 + 1 & 0xffff) + iVar1) = 2;
    uVar4 = FUN_ram_420561c0(uVar3 + 2 & 0xffff,iVar1,*(undefined2 *)(param_1 + 0x30));
    auStack_22[0] = (ushort)uVar4;
    iVar5 = FUN_ram_42056544(uVar4,iVar1,*(undefined4 *)(param_1 + 0x2c));
    *(undefined1 *)(iVar1 + iVar5) = 0x37;
    *(undefined1 *)((iVar5 + 1U & 0xffff) + iVar1) = 4;
    *(undefined1 *)((iVar5 + 2U & 0xffff) + iVar1) = 1;
    *(undefined1 *)((iVar5 + 3U & 0xffff) + iVar1) = 3;
    *(undefined1 *)((iVar5 + 4U & 0xffff) + iVar1) = 0x1c;
    auStack_22[0] = (short)iVar5 + 6;
    *(undefined1 *)((iVar5 + 5U & 0xffff) + iVar1) = 6;
    FUN_ram_4205966a(param_1,6,iVar7,auStack_22);
    FUN_ram_42056380(auStack_22[0],iVar1,iVar2);
    FUN_ram_42055e38(_DAT_ram_3fcb6810,iVar2,&DAT_ram_3c0793d0,0x43,param_1,&DAT_ram_3c0793d4);
    FUN_ram_42051d02(iVar2);
  }
  if (*(byte *)(iVar6 + 6) != 0xff) {
    uVar3 = *(byte *)(iVar6 + 6) + 1;
    *(char *)(iVar6 + 6) = (char)uVar3;
    if ((uVar3 & 0xff) < 5) {
      uVar3 = (uint)((1 << (uVar3 & 0x1f)) * 0xfa0000) >> 0x10;
      goto LAB_ram_420568c6;
    }
  }
  uVar3 = 4000;
LAB_ram_420568c6:
  *(uint *)(iVar6 + 0xc) = (uVar3 + 499 & 0xffff) / 500;
  if (*(char *)(iVar6 + 8) == '\0') {
    FUN_ram_4205598a(500,0x42047918,param_1);
    *(undefined1 *)(iVar6 + 8) = 1;
  }
  return;
}

