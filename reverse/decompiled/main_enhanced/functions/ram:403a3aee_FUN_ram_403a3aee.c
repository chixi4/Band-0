
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a3aee(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  
  iVar2 = *(int *)(_DAT_ram_3fcdff68 + 0xc);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x403a3c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x3016,0xffffffff);
    return;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x300d,*(undefined1 *)(iVar2 + 1));
  pcVar5 = *(code **)(_DAT_ram_3fcdfed0 + 0x484);
  iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  (*pcVar5)(*(undefined1 *)(iVar3 + 0x10));
  if ((int)((uint)*(ushort *)(iVar2 + 10) << 0x12) < 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x544))(iVar2,0x2000);
    iVar3 = (*(uint *)(iVar2 + 0x108) >> 3 & 1 ^ 1) * 0x28;
    iVar6 = iVar2 + iVar3;
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x3014,*(undefined1 *)(iVar6 + 0x125));
    if (*(char *)(iVar6 + 0x125) != '\0') {
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x300a,*(undefined1 *)(iVar2 + 1));
      (**(code **)(_DAT_ram_3fcdfed0 + 0x3a0))(iVar3 + 0x124 + iVar2);
    }
    (**(code **)(_DAT_ram_3fcdfec4 + 0x14))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,iVar2 + 0x174)
    ;
    (**(code **)(_DAT_ram_3fcdfecc + 0xf8))(0);
    *(undefined4 *)(_DAT_ram_3fcdff68 + 0xc) = 0;
    return;
  }
  if ((*(ushort *)(iVar2 + 0xc) & 0x10) == 0) {
    iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x4ec))(iVar2);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x4f0))(iVar2);
      if (iVar3 == 0) goto LAB_ram_403a3cb0;
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x3012,*(undefined1 *)(iVar2 + 6));
      iVar3 = (*(uint *)(iVar2 + 0x78) >> 1 & 1 ^ 1) * 0x28;
      if (*(char *)(iVar2 + iVar3 + 0x85) != '\0') {
        (**(code **)(_DAT_ram_3fcdfed0 + 0x3a0))(iVar2 + iVar3 + 0x84);
      }
      iVar3 = _DAT_ram_3fcdfecc;
      uVar1 = *(undefined1 *)(iVar2 + 1);
      *(byte *)(iVar2 + 0x78) = *(byte *)(iVar2 + 0x78) | 0x10;
      pcVar5 = *(code **)(iVar3 + 0x9fc);
    }
    else {
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x3011,*(undefined1 *)(iVar2 + 6));
      if (*(char *)(iVar2 + 6) != '%') goto LAB_ram_403a3ca6;
      uVar4 = *(uint *)(iVar2 + 0x78) >> 1 & 1;
      iVar3 = uVar4 * 0x28;
      if (*(char *)(iVar2 + iVar3 + 0x85) != '\0') {
        (**(code **)(_DAT_ram_3fcdfed0 + 0x3a0))(iVar3 + 0x84 + iVar2);
      }
      iVar3 = (uVar4 ^ 1) * 0x28;
      if (*(char *)(iVar2 + iVar3 + 0x85) != '\0') {
        (**(code **)(_DAT_ram_3fcdfed0 + 0x3a0))(iVar3 + 0x84 + iVar2);
      }
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x3008,*(undefined1 *)(iVar2 + 1));
      iVar3 = _DAT_ram_3fcdfecc;
      uVar1 = *(undefined1 *)(iVar2 + 1);
      *(byte *)(iVar2 + 0x78) = *(byte *)(iVar2 + 0x78) | 0x10;
      pcVar5 = *(code **)(iVar3 + 0x9fc);
    }
    (*pcVar5)(0x3009,uVar1);
    (**(code **)(_DAT_ram_3fcdfec4 + 0x14))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,iVar2 + 0xd4);
  }
  else {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x3013,*(undefined1 *)(iVar2 + 1));
LAB_ram_403a3ca6:
    (**(code **)(_DAT_ram_3fcdfed0 + 4))(iVar2);
  }
LAB_ram_403a3cb0:
  (**(code **)(_DAT_ram_3fcdfecc + 0xf8))(0);
  (**(code **)(_DAT_ram_3fcdfecc + 0x4e8))(*(undefined4 *)(_DAT_ram_3fcdff68 + 0xc));
  *(undefined4 *)(_DAT_ram_3fcdff68 + 0xc) = 0;
  return;
}

