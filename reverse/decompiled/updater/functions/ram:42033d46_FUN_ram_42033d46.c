
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42033d46(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  iVar1 = _DAT_ram_3fcdfb1c;
  pcVar2 = *(code **)(_DAT_ram_3fcdfb1c + 0x14);
  uVar3 = *(undefined4 *)(_DAT_ram_3fcdfb1c + 0x10);
  FUN_ram_42033fd8(1,8,5,0x3c07ef40,*(undefined1 *)(_DAT_ram_3fcdfb1c + 4),
                   *(undefined1 *)(_DAT_ram_3fcdfb1c + 5),*(undefined4 *)(_DAT_ram_3fcdfb1c + 8),
                   *(undefined4 *)(_DAT_ram_3fcdfb1c + 0xc));
  if (*(char *)(iVar1 + 0x52) != *(char *)(iVar1 + 4)) {
    FUN_ram_42033b00(iVar1 + 4);
  }
  if (pcVar2 != (code *)0x0) {
    FUN_ram_42033fd8(1,8,5,0x3c07ef60,uVar3);
    (*pcVar2)(uVar3,0);
  }
  if (*(uint *)(iVar1 + 8) == 0) {
    if (*(uint *)(iVar1 + 0xc) == 0) {
      (*(code *)&SUB_ram_40010488)(iVar1 + 4,0,0x18);
      *(undefined1 *)(iVar1 + 4) = 0xff;
      return;
    }
  }
  else if (*(uint *)(iVar1 + 8) < *(uint *)(iVar1 + 0xc)) {
    FUN_ram_42033fd8(1,8,5,0x3c07ef78);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb1c + 0x24);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(_DAT_ram_3fcdfb1c + 0x24,*(undefined4 *)(iVar1 + 8),0);
  }
  FUN_ram_42033fd8(1,8,5,0x3c07ef88);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb1c + 0x38);
                    /* WARNING: Could not recover jumptable at 0x42033e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(_DAT_ram_3fcdfb1c + 0x38,*(undefined4 *)(iVar1 + 0xc),0);
  return;
}

