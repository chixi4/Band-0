
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42043f48(undefined1 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined1 *puVar2;
  
  if (*_DAT_ram_3fcdfedc == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x154,&DAT_ram_3c0f6f88,0,0,0,*(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x770))(0xe);
  if (iVar1 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x34))(*_DAT_ram_3fcdfedc);
  }
  else {
    puVar2 = (undefined1 *)*_DAT_ram_3fcdfedc;
    *puVar2 = 0x3e;
    puVar2[1] = 0x10;
    (*(code *)&SUB_ram_40010488)(puVar2 + 2,0,0x10);
    puVar2[2] = 0xe;
    puVar2[3] = param_1;
    (**(code **)(_DAT_ram_3fcdfecc + 0x758))(puVar2);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfecc + 0x9fc);
  *_DAT_ram_3fcdfedc = 0;
                    /* WARNING: Could not recover jumptable at 0x42043fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0x5013,0);
  return;
}

