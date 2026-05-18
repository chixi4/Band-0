
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203cfe8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(_DAT_ram_3fcdfee0 + 0xc);
  iVar2 = (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
                    (iVar1 + 0x48,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
                     *(undefined4 *)(_DAT_ram_3fcdfed0 + 0x170),iVar1,_DAT_ram_3fcdfed0,
                     *(code **)(_DAT_ram_3fcdfec4 + 0x60));
  if (iVar2 == 0) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
                      (iVar1 + 0x4c,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
                       *(undefined4 *)(_DAT_ram_3fcdfed0 + 0x174),iVar1,_DAT_ram_3fcdfed0,
                       *(code **)(_DAT_ram_3fcdfec4 + 0x60));
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = 0xfffffffe;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

