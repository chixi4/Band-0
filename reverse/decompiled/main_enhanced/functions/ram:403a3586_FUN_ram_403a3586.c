
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_403a3586(char *param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
  uVar2 = *(uint *)(param_2 + 0x108) >> 3 & 1;
  iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x4f0))(param_2);
  if (iVar4 != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x5a9,&DAT_ram_3c0f5840,*(undefined2 *)(param_2 + 10),0);
  }
  if (-1 < (int)((uint)*(ushort *)(param_2 + 10) << 0x12)) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x5aa,&DAT_ram_3c0f5840,(uint)*(ushort *)(param_2 + 10),0);
  }
  iVar4 = uVar2 * 0x28 + param_2;
  *param_1 = (*(char *)(iVar4 + 0x149) + -1) - *(char *)(iVar4 + 0x148);
  pcVar10 = param_1 + 1;
  if (*(char *)(iVar4 + 0x147) != '\0') {
    param_1[1] = *(char *)(iVar4 + 0x147);
    bVar6 = *(byte *)(iVar4 + 0x147);
    iVar7 = 2;
    if ((bVar6 & 8) != 0) {
      iVar7 = 4;
      param_1[2] = (char)*(undefined2 *)(param_2 + 0x196);
      param_1[3] = (char)((ushort)*(undefined2 *)(param_2 + 0x196) >> 8);
      bVar6 = *(byte *)(iVar4 + 0x147);
    }
    param_1 = param_1 + iVar7;
    pcVar9 = param_1;
    if ((bVar6 & 0x10) != 0) {
      uVar5 = 0;
      uVar8 = *(uint *)(param_2 + 0x108) >> 3 & 1 ^ 1;
      iVar7 = uVar8 * 4;
      iVar4 = uVar8 * 0x28 + param_2;
      if (*(char *)(iVar4 + 0x125) != '\0') {
        uVar5 = (**(code **)(_DAT_ram_3fcdfed0 + 0x580))
                          (*(int *)(iVar4 + 0x140) - *(int *)(uVar2 * 0x28 + param_2 + 0x140));
        uVar8 = *(uint *)(param_2 + 0x108) >> 3 & 1 ^ 1;
        iVar7 = uVar8 << 2;
      }
      pcVar9 = param_1 + 3;
      (**(code **)(_DAT_ram_3fcdfecc + 0x57c))
                (*(undefined1 *)((uVar8 + iVar7) * 8 + param_2 + 0x146),
                 *(undefined1 *)(param_2 + 0xe5),uVar5,param_1,*(code **)(_DAT_ram_3fcdfecc + 0x57c)
                );
      bVar6 = *(byte *)(uVar2 * 0x28 + param_2 + 0x147);
    }
    pcVar10 = pcVar9;
    if ((bVar6 & 0x40) != 0) {
      cVar1 = *(char *)(param_2 + 8);
      pcVar10 = pcVar9 + 1;
      cVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x724))();
      *pcVar9 = cVar3 + cVar1;
    }
  }
  iVar4 = uVar2 * 0x28 + param_2;
  if ((*(byte *)(iVar4 + 0x14a) & 1) != 0) {
    pcVar9 = pcVar10;
    if (*(char *)(iVar4 + 0x147) == '\0') {
      *pcVar10 = '\0';
      pcVar9 = pcVar10 + 1;
    }
    pcVar10 = pcVar9 + 9;
    (**(code **)(_DAT_ram_3fcdfecc + 0xa64))(param_2,pcVar9);
  }
  iVar4 = uVar2 * 0x28 + param_2;
  cVar1 = *(char *)(iVar4 + 0x148);
  if (cVar1 != '\0') {
    (**(code **)(_DAT_ram_3fcdfecc + 0x8f0))
              (*(undefined4 *)(param_2 + 0xe8),*(undefined2 *)(iVar4 + 0x144),cVar1,pcVar10,
               _DAT_ram_3fcdfecc,*(code **)(_DAT_ram_3fcdfecc + 0x8f0));
  }
  *param_3 = 7;
  return *(undefined1 *)(param_2 + uVar2 * 0x28 + 0x149);
}

