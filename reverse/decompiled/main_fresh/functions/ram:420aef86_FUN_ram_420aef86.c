
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420aef86(int param_1)

{
  undefined4 in_a4;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_ram_3fcc4c78 + 0x58))(0x66,0,9,3,2,3,*(code **)(_DAT_ram_3fcc4c78 + 0x58));
    (**(code **)(_DAT_ram_3fcc4c78 + 0x58))(0x66,0,9,5,4,2,*(code **)(_DAT_ram_3fcc4c78 + 0x58));
    (**(code **)(_DAT_ram_3fcc4c78 + 0x58))(0x66,0,10,1,0,1,*(code **)(_DAT_ram_3fcc4c78 + 0x58));
    DAT_ram_3fcb7f39 = (**(code **)(_DAT_ram_3fcc4c78 + 0x48))(0x66,0,9);
    DAT_ram_3fcb7f3a = (**(code **)(_DAT_ram_3fcc4c78 + 0x48))(0x66,0,10);
    DAT_ram_3fcb7f3b = (**(code **)(_DAT_ram_3fcc4c78 + 0x48))(0x66,0,4);
    return;
  }
  (**(code **)(_DAT_ram_3fcc4c78 + 0x50))
            (0x66,0,9,DAT_ram_3fcb7f39,in_a4,*(code **)(_DAT_ram_3fcc4c78 + 0x50));
  (**(code **)(_DAT_ram_3fcc4c78 + 0x50))(0x66,0,10,DAT_ram_3fcb7f3a);
                    /* WARNING: Could not recover jumptable at 0x420af06a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcc4c78 + 0x50))(0x66,0,4,DAT_ram_3fcb7f3b);
  return;
}

