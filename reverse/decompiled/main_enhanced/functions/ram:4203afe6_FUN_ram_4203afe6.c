
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203afe6(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_s2;
  int iVar6;
  
  uVar4 = 0xc;
  if (**(char **)(*(int *)(unaff_s2 + -0x120) + 0xc) == '\0') {
    bVar1 = *param_1;
    uVar4 = 0x12;
    if ((((bVar1 < 2) && (uVar2 = *(ushort *)(param_1 + 1), (ushort)(uVar2 - 4) < 0x3ffd)) &&
        (uVar3 = *(ushort *)(param_1 + 3), (ushort)(uVar3 - 4) < 0x3ffd)) &&
       (((uVar3 <= uVar2 && (param_1[5] < 4)) && (param_1[6] < 4)))) {
      iVar6 = **(int **)(*(int *)(unaff_s2 + -0x120) + 8);
      *(undefined1 *)(iVar6 + 3) = 1;
      iVar5 = _DAT_ram_3fcdfecc;
      *(byte *)(iVar6 + 4) = bVar1;
      uVar4 = (**(code **)(iVar5 + 0x9ec))(uVar2);
      iVar5 = _DAT_ram_3fcdfecc;
      *(undefined4 *)(iVar6 + 8) = uVar4;
      uVar4 = (**(code **)(iVar5 + 0x9ec))(uVar3);
      *(undefined4 *)(iVar6 + 0xc) = uVar4;
      *(byte *)(iVar6 + 2) = param_1[6];
      *(byte *)(iVar6 + 1) = param_1[5];
      iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      uVar4 = 0;
      if (*(char *)(iVar5 + 0x22) == '\x02') {
        *(undefined1 *)(*(int *)(*(int *)(*(int *)(unaff_s2 + -0x120) + 8) + 4) + 3) = 0;
      }
    }
  }
  return uVar4;
}

