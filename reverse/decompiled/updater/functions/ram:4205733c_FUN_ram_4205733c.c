
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205733c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ushort auStack_22 [5];
  
  iVar1 = *(int *)(param_1 + 0x20);
  FUN_ram_420561aa(iVar1,5);
  iVar2 = FUN_ram_42056228(param_1,iVar1,3,auStack_22);
  uVar6 = 0xffffffff;
  if (iVar2 != 0) {
    iVar8 = *(int *)(iVar2 + 4);
    uVar3 = (uint)auStack_22[0];
    iVar7 = iVar8 + 0xf0;
    *(undefined1 *)(iVar7 + uVar3) = 0x39;
    *(undefined1 *)((uVar3 + 1 & 0xffff) + iVar7) = 2;
    iVar4 = FUN_ram_420561c0(uVar3 + 2 & 0xffff,iVar7,*(undefined2 *)(param_1 + 0x30));
    *(undefined1 *)(iVar7 + iVar4) = 0x37;
    *(undefined1 *)((iVar4 + 1U & 0xffff) + iVar7) = 4;
    *(undefined1 *)((iVar4 + 2U & 0xffff) + iVar7) = 1;
    *(undefined1 *)((iVar4 + 3U & 0xffff) + iVar7) = 3;
    *(undefined1 *)((iVar4 + 4U & 0xffff) + iVar7) = 0x1c;
    *(undefined1 *)((iVar4 + 5U & 0xffff) + iVar7) = 6;
    auStack_22[0] = (ushort)(iVar4 + 6U);
    auStack_22[0] = FUN_ram_42056544(iVar4 + 6U & 0xffff,iVar7,*(undefined4 *)(param_1 + 0x2c));
    FUN_ram_4205966a(param_1,5,iVar8,auStack_22);
    FUN_ram_42056380(auStack_22[0],iVar7,iVar2);
    uVar6 = FUN_ram_42055f92(_DAT_ram_3fcb6810,iVar2,iVar1 + 0x28,0x43,param_1);
    FUN_ram_42051d02(iVar2);
  }
  if (*(char *)(iVar1 + 6) != -1) {
    bVar5 = *(char *)(iVar1 + 6) + 1;
    *(byte *)(iVar1 + 6) = bVar5;
    if (bVar5 < 10) {
      uVar3 = (uint)bVar5 * 0x7d00000 >> 0x10;
      goto LAB_ram_42057476;
    }
  }
  uVar3 = 20000;
LAB_ram_42057476:
  *(uint *)(iVar1 + 0xc) = (uVar3 + 499 & 0xffff) / 500;
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_ram_4205598a(500,0x42047918,param_1);
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return uVar6;
}

