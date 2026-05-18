
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203c976(void)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  (**(code **)(_DAT_ram_3fcdfecc + 0xbfc))(1);
  FUN_ram_4203c838();
  if (_DAT_ram_3fcb6a2c != 0) {
    uVar1 = _DAT_ram_3fcb6a2c - 1;
    piVar3 = *(int **)(_DAT_ram_3fcdff64 + 0x1c) + 1;
    piVar2 = *(int **)(_DAT_ram_3fcdff64 + 0x1c);
    piVar4 = piVar3;
    while( true ) {
      iVar5 = *piVar2;
      *(undefined1 *)(iVar5 + 0xf8) = 3;
      *(int *)(iVar5 + 0x104) = iVar5;
      if (piVar4 == piVar3 + uVar1) break;
      piVar2 = piVar4;
      piVar4 = piVar4 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x4203c9e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfecc + 0xbfc))(0);
  return;
}

