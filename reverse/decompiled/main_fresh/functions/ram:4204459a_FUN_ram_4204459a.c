
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204459a(int param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  byte bStack_25;
  int aiStack_24 [2];
  
  aiStack_24[0] = *(int *)(param_2 + 0x90);
  bStack_25 = *(byte *)(param_2 + 0x98);
  iVar2 = *(int *)(param_1 + 0x44);
  sVar1 = *(short *)(param_2 + 0x5e);
  iVar3 = aiStack_24[0] - iVar2;
  while (0 < iVar3) {
    sVar1 = sVar1 + -1;
    (**(code **)(_DAT_ram_3fcdfecc + 0x38c))
              (param_2,sVar1,aiStack_24,&bStack_25,iVar3,*(code **)(_DAT_ram_3fcdfecc + 0x38c));
    iVar2 = *(int *)(param_1 + 0x44);
    iVar3 = aiStack_24[0] - iVar2;
  }
  iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x580))(iVar2 - aiStack_24[0]);
  uVar6 = ((uint)*(byte *)(param_1 + 0x48) - (uint)bStack_25) + iVar2;
  (**(code **)(_DAT_ram_3fcdfecc + 0x82c))(param_3,sVar1);
  if (uVar6 < 0x3bfc5) {
    uVar5 = (undefined2)(uVar6 / 0x1e);
    bVar4 = 0;
  }
  else {
    bVar4 = 0x20;
    if (0x257fff < uVar6) {
      uVar6 = uVar6 - 0x258000;
      bVar4 = 0x60;
    }
    uVar5 = (undefined2)(uVar6 / 300);
  }
  *param_4 = (char)uVar5;
  param_4[1] = bVar4 | (byte)((ushort)uVar5 >> 8) & 0x1f;
  (**(code **)(_DAT_ram_3fcdfecc + 0x82c))(param_4 + 2,*(undefined2 *)(param_1 + 0x26));
  iVar2 = _DAT_ram_3fcdfecc;
  param_4[4] = *(undefined1 *)(param_1 + 0xd);
  param_4[5] = *(undefined1 *)(param_1 + 0xe);
  param_4[6] = *(undefined1 *)(param_1 + 0xf);
  param_4[7] = *(undefined1 *)(param_1 + 0x10);
  bVar4 = *(byte *)(param_1 + 0x11) & 0x1f;
  param_4[8] = bVar4;
  param_4[8] = *(char *)(param_1 + 0xc) << 5 | bVar4;
  (**(code **)(iVar2 + 0x834))(param_4 + 9,*(undefined4 *)(param_1 + 0x34));
  iVar2 = _DAT_ram_3fcdfecc;
  param_4[0xd] = (char)*(undefined4 *)(param_1 + 0x30);
  param_4[0xe] = (char)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
  param_4[0xf] = (char)*(undefined2 *)(param_1 + 0x32);
  (**(code **)(iVar2 + 0x82c))(param_4 + 0x10,*(undefined2 *)(param_1 + 0x38));
  return;
}

