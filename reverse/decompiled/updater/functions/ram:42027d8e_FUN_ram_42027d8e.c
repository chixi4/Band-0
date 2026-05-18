
undefined4 FUN_ram_42027d8e(int param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar5 = 0xc;
  do {
    uVar1 = *(uint *)(param_2 + iVar5);
    iVar2 = (*(code *)&SUB_ram_400108cc)(uVar1);
    uVar3 = (*(code *)&SUB_ram_400108cc)(iVar2 << 1 | uVar6);
    puVar4 = (undefined1 *)(param_1 + iVar5);
    puVar4[1] = (char)((uint)uVar3 >> 8);
    puVar4[2] = (char)((uint)uVar3 >> 0x10);
    *puVar4 = (char)uVar3;
    puVar4[3] = (char)((uint)uVar3 >> 0x18);
    iVar5 = iVar5 + -4;
    uVar6 = (uVar1 & 0xff) >> 7;
  } while (iVar5 != -4);
  *(byte *)(param_1 + 0xf) =
       (byte)((int)-(uint)(*param_2 >> 7) >> 0x1f) & 0x87 ^ *(byte *)(param_1 + 0xf);
  return 0;
}

