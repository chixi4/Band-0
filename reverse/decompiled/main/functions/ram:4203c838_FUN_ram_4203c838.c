
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203c838(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  
  iVar1 = **(int **)(_DAT_ram_3fcdff64 + 0x1c);
  uVar2 = 0;
  while( true ) {
    iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
    if (*(ushort *)(iVar3 + 0x38) <= uVar2) break;
    *(undefined1 *)(iVar1 + 0xf8) = 3;
    *(int *)(iVar1 + 0x104) = iVar1;
    iVar1 = iVar1 + 0x208;
    uVar2 = uVar2 + 1;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x864))
            (*(undefined4 *)(_DAT_ram_3fcdff64 + 0x34),_DAT_ram_3fcdfe64,0x109,
             *(undefined4 *)(_DAT_ram_3fcdff64 + 0x38),"educes future rework.",_DAT_ram_3fcdff64,
             *(code **)(_DAT_ram_3fcdfecc + 0x864));
  (**(code **)(_DAT_ram_3fcdfed0 + 0x570))
            (*(undefined4 *)(_DAT_ram_3fcdff64 + 0x30),*(undefined4 *)(_DAT_ram_3fcdfed0 + 0x24c),0)
  ;
  (**(code **)(_DAT_ram_3fcdfec4 + 0x24))
            (_DAT_ram_3fcdff64 + 0x48,*(undefined4 *)(_DAT_ram_3fcdfed0 + 0x248),0);
  uVar2 = *(ushort *)(_DAT_ram_3fcb6a18 + 6);
  if ((uVar2 & 3) == 0) {
    iVar1 = uVar2 + 0x3c;
  }
  else {
    iVar1 = (uVar2 & 0xfffffffc) + 0x40;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x864))
            (*(undefined4 *)(_DAT_ram_3fcdff64 + 0x4c),*(undefined1 *)(_DAT_ram_3fcb6a18 + 4),iVar1,
             *(undefined4 *)(_DAT_ram_3fcdff64 + 0x54),"e rework.",
             *(code **)(_DAT_ram_3fcdfecc + 0x864));
  uVar2 = *(ushort *)(_DAT_ram_3fcb6a18 + 6);
  if ((uVar2 & 3) == 0) {
    sVar4 = uVar2 + 0x3c;
  }
  else {
    sVar4 = (uVar2 & 0xfffc) + 0x40;
  }
                    /* WARNING: Could not recover jumptable at 0x4203c95e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfecc + 0x91c))
            (*(undefined4 *)(_DAT_ram_3fcdff64 + 0x50),*(undefined4 *)(_DAT_ram_3fcdff64 + 0x4c),
             sVar4,*(undefined1 *)(_DAT_ram_3fcb6a18 + 4));
  return;
}

