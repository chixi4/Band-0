
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42043d2e(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *_DAT_ram_3fcdfef4;
  uVar1 = (**(code **)(_DAT_ram_3fcdfec4 + 0x90))(900000);
  iVar2 = _DAT_ram_3fcdfecc;
  *(undefined4 *)(iVar3 + 8) = uVar1;
  iVar2 = (**(code **)(iVar2 + 0x114))();
  iVar3 = *_DAT_ram_3fcdfef4;
  *(char *)(iVar3 + 1) = (char)*(undefined2 *)(iVar2 + 4);
  _DAT_ram_3fcdfeec = 0;
  _DAT_ram_3fcdfef0 = &DAT_ram_3fcdfeec;
  (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
            (iVar3 + 0xc,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
             *(undefined4 *)(_DAT_ram_3fcdfecc + 0x210),0,0x3fce0000,&DAT_ram_3fcdfeec,
             *(code **)(_DAT_ram_3fcdfec4 + 0x60));
  iVar3 = _DAT_ram_3fcdfef4[1];
  UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfecc + 0x864);
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
                    /* WARNING: Could not recover jumptable at 0x42043dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (iVar3,*(undefined2 *)(iVar2 + 4),0x40,_DAT_ram_3fcdfef4[2],&UNK_ram_3c0c2968);
  return;
}

