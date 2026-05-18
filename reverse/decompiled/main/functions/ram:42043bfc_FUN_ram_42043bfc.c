
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42043bfc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_a3;
  undefined4 in_a4;
  code *pcVar4;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                    (&DAT_ram_3fcdfef4,0xc,1,in_a3,in_a4,*(code **)(_DAT_ram_3fcdfecc + 0x97c));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfef4,0x10,1);
    if (iVar1 == 0) {
      iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfef4 + 4,0x1c,1);
      iVar1 = _DAT_ram_3fcdfef4;
      if (iVar2 == 0) {
        pcVar4 = *(code **)(_DAT_ram_3fcdfecc + 0x97c);
        iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
        iVar1 = (*pcVar4)(iVar1 + 8,4,(*(ushort *)(iVar2 + 4) & 0xfff) << 4);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xb1c))();
          uVar3 = 0;
          if (iVar1 != 0) {
            uVar3 = 0xfffffffb;
          }
        }
        else {
          uVar3 = 0xfffffffc;
        }
      }
      else {
        uVar3 = 0xfffffffd;
      }
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

