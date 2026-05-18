
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420407e8(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  while( true ) {
    iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    if (*(ushort *)(iVar3 + 0x38) <= uVar1) {
      return 0;
    }
    iVar3 = *(int *)(*(int *)(_DAT_ram_3fcdff64 + 0x1c) + uVar1 * 4);
    iVar2 = (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
                      (iVar3 + 0xf0,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
                       *(undefined4 *)(_DAT_ram_3fcdfecc + 0x448),iVar3,_DAT_ram_3fcdfec4,
                       *(code **)(_DAT_ram_3fcdfec4 + 0x60));
    if (((iVar2 != 0) ||
        (iVar2 = (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
                           (iVar3 + 0xf4,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
                            *(undefined4 *)(_DAT_ram_3fcdfed0 + 0x224),iVar3,_DAT_ram_3fcdfed0,
                            *(code **)(_DAT_ram_3fcdfec4 + 0x60)), iVar2 != 0)) ||
       (iVar2 = (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
                          (iVar3 + 0x114,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
                           *(undefined4 *)(_DAT_ram_3fcdfecc + 0x344),iVar3,_DAT_ram_3fcdfecc,
                           *(code **)(_DAT_ram_3fcdfec4 + 0x60)), iVar2 != 0)) break;
    iVar3 = (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
                      (iVar3 + 0x1fc,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
                       *(undefined4 *)(_DAT_ram_3fcdfecc + 0xa98),iVar3,
                       *(code **)(_DAT_ram_3fcdfec4 + 0x60));
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    uVar1 = uVar1 + 1 & 0xffff;
  }
  return 0xffffffff;
}

