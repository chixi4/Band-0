
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403902ea(void)

{
  int iVar1;
  undefined4 auStack_14 [4];
  
  auStack_14[0] = 1;
  iVar1 = FUN_ram_4039d97a();
  if (iVar1 != 0) {
    (*(code *)&SUB_ram_40010044)(100000);
    (*(code *)&SUB_ram_40010044)(100000);
  }
  gp = 0x3fcc0090;
  mtvec = 0x40380001;
  auStack_14[0] = (*(code *)&SUB_ram_40010018)(0);
  (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcb16b0,0,0x51f0);
  FUN_ram_40396ece();
  (*(code *)&SUB_ram_40010734)(0x38,200);
  thunk_FUN_ram_4201062c();
  FUN_ram_420104f8();
  FUN_ram_42010518(auStack_14);
                    /* WARNING: Could not recover jumptable at 0x403903ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_ram_3c074684)();
  return;
}

