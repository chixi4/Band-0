
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420394b8(byte *param_1,int param_2,int param_3)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  pbVar2 = param_1 + 2;
  uVar1 = *param_1 >> 6 & 1;
  iVar4 = *(int *)(param_2 + 0x14);
  iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0xb4))(pbVar2,uVar1);
  if ((iVar3 != 0) && (iVar4 != 0)) {
    pbVar2 = (byte *)(**(code **)(_DAT_ram_3fcdfecc + 0x1c4))(iVar4,0,0);
    uVar1 = (*(ushort *)(iVar4 + 2) & 1) + 2;
  }
  if ((*(ushort *)(param_3 + 10) & 4) != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x710))(*(undefined1 *)(param_3 + 1),pbVar2,uVar1);
  }
  if (*(code **)(_DAT_ram_3fcdff68 + 0x1c) != (code *)0x0) {
    (**(code **)(_DAT_ram_3fcdff68 + 0x1c))(0,*(undefined1 *)(param_3 + 1),pbVar2,uVar1);
  }
  return 0;
}

