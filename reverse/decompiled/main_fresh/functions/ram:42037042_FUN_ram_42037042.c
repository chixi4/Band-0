
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42037042(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_a3;
  undefined4 in_a4;
  code *pcVar5;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))
                    (&DAT_ram_3fcdfed8,0x50,1,in_a3,in_a4,*(code **)(_DAT_ram_3fcdfecc + 0x97c));
  if (iVar2 == 0) {
    iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfed8,0x1c,1);
    iVar2 = _DAT_ram_3fcdfed8;
    if (iVar3 == 0) {
      pcVar5 = *(code **)(_DAT_ram_3fcdfecc + 0x97c);
      iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      uVar1 = *(ushort *)(iVar3 + 0x40);
      iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      iVar3 = (*pcVar5)(iVar2 + 4,4,(uVar1 + 3 >> 2) * (uint)*(ushort *)(iVar3 + 6) & 0xffff);
      iVar2 = _DAT_ram_3fcdfed8;
      if (iVar3 == 0) {
        pcVar5 = *(code **)(_DAT_ram_3fcdfecc + 0x97c);
        iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
        uVar1 = *(ushort *)(iVar3 + 0x40);
        iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
        iVar2 = (*pcVar5)(iVar2 + 8,4,(uVar1 + 3 >> 2) * (uint)*(ushort *)(iVar3 + 8) & 0xffff);
        if (iVar2 == 0) {
          iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfed8 + 0xc,4,0x41);
          if (iVar2 == 0) {
            iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfed8 + 0x1c,0x1c,1);
            if (iVar2 == 0) {
              iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x97c))(_DAT_ram_3fcdfed8 + 0x18,0x1c,1);
              uVar4 = 0;
              if (iVar2 != 0) {
                uVar4 = 0xfffffff9;
              }
            }
            else {
              uVar4 = 0xfffffffa;
            }
          }
          else {
            uVar4 = 0xfffffffb;
          }
        }
        else {
          uVar4 = 0xfffffffc;
        }
      }
      else {
        uVar4 = 0xfffffffd;
      }
    }
    else {
      uVar4 = 0xfffffffe;
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

