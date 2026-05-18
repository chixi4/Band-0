
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42044f92(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_a3;
  undefined4 in_a4;
  undefined4 uVar4;
  code *pcVar5;
  
  iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                    (&DAT_ram_3fcdfec0,0x14,1,in_a3,in_a4,*(code **)(_DAT_ram_3fcdfecc + 0x97c));
  if (iVar3 == 0) {
    iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    bVar1 = *(byte *)(iVar3 + 0x3a);
    iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    piVar2 = _DAT_ram_3fcdfec0;
    if ((uint)*(byte *)(iVar3 + 10) + (uint)bVar1 != 0) {
      pcVar5 = *(code **)(_DAT_ram_3fcdfecc + 0x97c);
      iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      bVar1 = *(byte *)(iVar3 + 0x3a);
      iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      iVar3 = (*pcVar5)(piVar2,8,(uint)*(byte *)(iVar3 + 10) + (uint)bVar1);
      piVar2 = _DAT_ram_3fcdfec0;
      if (*_DAT_ram_3fcdfec0 != 0) {
        pcVar5 = *(code **)(_DAT_ram_3fcdfecc + 0x980);
        iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
        bVar1 = *(byte *)(iVar3 + 0x3a);
        iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
        iVar3 = (*pcVar5)(piVar2 + 1,piVar2,8,(uint)*(byte *)(iVar3 + 10) + (uint)bVar1);
      }
      if (iVar3 != 0) {
        return 0xfffffffe;
      }
    }
    *(undefined2 *)(_DAT_ram_3fcdfec0 + 4) = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

